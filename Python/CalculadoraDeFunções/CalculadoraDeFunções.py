import TKinterModernThemes as TKMT
import tkinter as tk

class App(TKMT.ThemedTKinterFrame):

    def textupdate(self, _var, _indx, _mode):

        if self.optionmenuvar.get() == "Triângulo":
            print("Valor 1:", self.textinputvar.get())
            print("Valor 2:", self.textinputvar2.get())
            print("Valor 3:", self.textinputvar3.get())

        if self.optionmenuvar.get() == "Quadrado":
            print("Valor 1:", self.textinputvar.get())

        if self.optionmenuvar.get() == "Retângulo":
            print("Valor 1:", self.textinputvar.get())
            print("Valor 2:", self.textinputvar2.get())

        if self.optionmenuvar.get() == "Paralelogramo":
            print("Valor 1:", self.textinputvar.get())
            print("Valor 2:", self.textinputvar2.get())

        if self.optionmenuvar.get() == "Losango":
            print("Valor 1:", self.textinputvar.get())

        if self.optionmenuvar.get() == "Trapézio":
            print("Valor 1:", self.textinputvar.get())
            print("Valor 2:", self.textinputvar2.get())
            print("Valor 3:", self.textinputvar3.get())
            print("Valor 4:", self.textinputvar4.get())

        if self.optionmenuvar.get() == "Círculo":
            print("Valor 1:", self.textinputvar.get())

    def printcheckboxvars2(self, number):

        if self.checkbox2.get() == True:
            print("Cálculo do Perímetro")

    def printcheckboxvars1(self, number):

        if self.checkbox1.get() == True:
            print("Cálculo da Área")

    def handleButton2Click(self):
        print("Botão Clicado")

    def handleButtonClick(self):
        print("Opção escolhida:", self.optionmenuvar.get())

        escolha1.destroy()
        escolha2.destroy()
        escolha3.destroy()
        escolha4.destroy()

        if self.optionmenuvar.get() == "Triângulo":

            self.textinputvar = tk.StringVar()
            self.textinputvar.trace_add('write', self.textupdate)
            self.input_frame.Entry(self.textinputvar)
            self.textinputvar2 = tk.StringVar()
            self.textinputvar2.trace_add('write', self.textupdate)
            self.input_frame.Entry(self.textinputvar2)
            self.textinputvar3 = tk.StringVar()
            self.textinputvar3.trace_add('write', self.textupdate)
            self.input_frame.Entry(self.textinputvar3)

        if self.optionmenuvar.get() == "Quadrado":

            self.textinputvar = tk.StringVar()
            self.textinputvar.trace_add('write', self.textupdate)
            self.input_frame.Entry(self.textinputvar)

        if self.optionmenuvar.get() == "Retângulo":

            self.textinputvar = tk.StringVar()
            self.textinputvar.trace_add('write', self.textupdate)
            self.input_frame.Entry(self.textinputvar)
            self.textinputvar2 = tk.StringVar()
            self.textinputvar2.trace_add('write', self.textupdate)
            self.input_frame.Entry(self.textinputvar2)

        if self.optionmenuvar.get() == "Paralelogramo":

            self.textinputvar = tk.StringVar()
            self.textinputvar.trace_add('write', self.textupdate)
            self.input_frame.Entry(self.textinputvar)
            self.textinputvar2 = tk.StringVar()
            self.textinputvar2.trace_add('write', self.textupdate)
            self.input_frame.Entry(self.textinputvar2)

        if self.optionmenuvar.get() == "Losango":

            self.textinputvar = tk.StringVar()
            self.textinputvar.trace_add('write', self.textupdate)
            self.input_frame.Entry(self.textinputvar)

        if self.optionmenuvar.get() == "Trapézio":

            self.textinputvar = tk.StringVar()
            self.textinputvar.trace_add('write', self.textupdate)
            self.input_frame.Entry(self.textinputvar)
            self.textinputvar2 = tk.StringVar()
            self.textinputvar2.trace_add('write', self.textupdate)
            self.input_frame.Entry(self.textinputvar2)
            self.textinputvar3 = tk.StringVar()
            self.textinputvar3.trace_add('write', self.textupdate)
            self.input_frame.Entry(self.textinputvar3)
            self.textinputvar4 = tk.StringVar()
            self.textinputvar4.trace_add('write', self.textupdate)
            self.input_frame.Entry(self.textinputvar4)

        if self.optionmenuvar.get() == "Círculo":

            self.textinputvar = tk.StringVar()
            self.textinputvar.trace_add('write', self.textupdate)
            self.input_frame.Entry(self.textinputvar)

        self.input_frame.Button("Confirmar", self.handleButton2Click)

    def __init__(self):
        super().__init__("Funções", "park", "dark")

        global escolha1
        global escolha2
        global escolha3
        global escolha4

        self.option_menu_list = ["Triângulo", "Quadrado", "Retângulo", "Paralelogramo", "Losango", "Trapézio", "Círculo"]
        self.optionmenuvar = tk.StringVar(value=self.option_menu_list[0])
        self.input_frame = self.addLabelFrame("Menu:", rowspan=2)
        escolha1 = self.input_frame.OptionMenu(self.option_menu_list, self.optionmenuvar)
        
        self.checkbox1 = tk.BooleanVar()
        self.checkbox2 = tk.BooleanVar()
        self.togglebuttonvar = tk.BooleanVar()
        escolha2 = self.input_frame.Checkbutton("Perímetro", self.checkbox2, self.printcheckboxvars2, (1,))
        escolha3 = self.input_frame.Checkbutton("Área", self.checkbox1, self.printcheckboxvars1, (1,))

        escolha4 = self.input_frame.Button("Confirmar", self.handleButtonClick)

        self.run()

App()