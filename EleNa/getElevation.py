import googlemaps
from googlemaps.elevation import elevation, elevation_along_path

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
    geocode_result = client.geocode(address)
    location = geocode_result[0]['geometry']['location']
    latitude = location['lat']
    longitude = location['lng']
    elev = elevation(client, [(latitude, longitude)])[0]['elevation']
    return elev

