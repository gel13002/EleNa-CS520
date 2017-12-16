import Tkinter as tk
import ttk
import AppKit

from findRoute import findRoute

class EntryApp(tk.Frame):
    def __init__(self, master):
        tk.Frame.__init__(self, master)
        self.pack()

        tk.Label(self, text="Start Location").pack()

        self.startLoc = tk.Entry(self, bg='white')
        self.startLoc.pack()



        tk.Label(self, text="Destination").pack()

        self.endLoc = tk.Entry(self, bg='white')
        self.endLoc.pack()

        tk.Label(self, text="% Distance Increase").pack()

        self.percentInc = tk.Entry(self, bg='white')
        self.percentInc.pack()

        tk.Button(self, text='OK', command=self.ok).pack()

    def ok(self):
        print('StartLoc box: {}\nDest box: {}\nPercentInc box: {}'.format(self.startLoc.get(), self.endLoc.get(),
                                                                          self.percentInc.get()))
        findRoute(self.startLoc.get(), self.endLoc.get(), self.percentInc.get(), True)


class ComboboxApp(ttk.Frame):
    def __init__(self, master):
        ttk.Frame.__init__(self, master)
        self.pack()

        options = ['High', 'Normal', 'Low']

        ttk.Label(self, text="Elevation Range").pack(pady=10)

        self.combo = ttk.Combobox(self, values=options, state='readonly')
        self.combo.current(0)
        self.combo.pack(padx=15)

        ttk.Button(self, text='OK', command=self.ok).pack(side='right', padx=15, pady=10)

    def ok(self):
        print('Selection: {}'.format(self.combo.get()))


class EleNa(tk.Frame):
    def __init__(self, master):
        tk.Frame.__init__(self, master)
        self.pack(padx=15, pady=15)
        self.master.title("EleNa")
        self.master.resizable(True, True)
        self.master.tk_setPalette(background='#e6e6e6')

        frame2 = tk.Frame(self)
        frame2.grid(row=1, column=0)

        EntryApp(frame2)

        frame3 = tk.Frame(self)
        frame3.grid(row=1, column=1)

        ComboboxApp(frame3)


if __name__ == '__main__':
    root = tk.Tk()

    tk.Message(
        root, text='Close to Force Quit'
    )

    top = tk.Toplevel(root)
    EleNa(top)

    AppKit.NSApplication.sharedApplication().activateIgnoringOtherApps_(True)

    root.mainloop()
