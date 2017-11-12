import googlemaps
from googlemaps.elevation import elevation, elevation_along_path

def getLocation(client, address):
    """
    Get latitude and longitude for given address
    :param client: a google map client
    :type googlemap.client.Client
    :param address:
    :type string
    :return (lat, lng)
    :rtype (int, int)
    """
    geocode_result = client.geocode(address)
    location = geocode_result[0]['geometry']['location']
    return location['lat'], location['lng']


def getElevation(client, address):
    """
    Get elevation of given address
    :param client: a google map client
    :type client: googlemap.client.Client
    :param addresses: str represent address
    :type addresses: str
    :return: elev, representing elevation of the address given
    :rtype: float
    """
    latitude, longitude = getLocation(client, address)
    elev = elevation(client, [(latitude, longitude)])[0]['elevation']
    return elev

