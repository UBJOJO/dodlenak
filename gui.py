# from tkinter import Tk, Label, PhotoImage
# root = Tk()
# hello = Label(master=root, text='Hello Gui world!')
# hello.pack()
# root.mainloop()

# from tkinter import Tk, Label, PhotoImage
# root = Tk()
# photo = PhotoImage(file = 'snu.png')
# photoLabel = Label(master=root,image=photo,width=300,height=180)
# photoLabel.pack()
# root.mainloop() 

# from tkinter import Tk, Label, PhotoImage, BOTTOM, LEFT, RIGHT, RIDGE
# root=Tk()
# text= Label(root,font = ('Helvetica', 16, 'bold italic'),
# 						foreground = 'white',
# 						background = 'black',
# 						padx=25,
# 						pady=10,
# 						text='Cuty Snuppy!' )
# text.pack(side=BOTTOM)
# image_1 = PhotoImage(file='snu.png')
# image_1_Label = Label(root,
# 						borderwidth=3,
# 						relief=RIDGE,
# 						image=image_1)
# image_1_Label.pack(side=LEFT)

# image_2 = PhotoImage(file='snu_.png')
# image_2_Label = Label(root,
# 				image=image_2)
# image_2_Label.pack(side=RIGHT)
# root.mainloop()


# from tkinter import Tk, Label, RAISED
# root = Tk()
# labels = [['1','2','3'],
# 		  ['4','5','6'],
# 		  ['7','8','9'],
# 		  ['*','0','#']]
# for r in range(4):
# 	for c in range(3):
# 		label = Label(root,
# 					  relief=RAISED,
# 					  padx=10,
# 					  text=labels[r][c])
# 		label.grid(row=r,column=c)
# root.mainloop()

# from tkinter import Tk, Label
# from calendar import monthrange
# def cal(year, month):
# 	labels = [['Mon','Tue','Wed','Thu','Fri','Sat','Sun'],
# 			  [[],[],[],[],[],[],[]],
# 			  [[],[],[],[],[],[],[]],
# 			  [[],[],[],[],[],[],[]],
# 			  [[],[],[],[],[],[],[]],
# 			  [[],[],[],[],[],[],[]] ]
# 	first_day = monthrange(year, month)[0]
# 	days = monthrange(year,month)[1]
# 	day_counter=1
# 	for i in range(1,6):
# 		if i == 1:
# 			for j in range(first_day,7):
# 				labels[i][j] = day_counter
# 				day_counter+=1
# 				if day_counter > days:
# 					break
# 		else:
# 			for j in range(0,7):
# 				labels[i][j]= day_counter
# 				day_counter += 1
# 				if day_counter > days:
# 					break
# 	root = Tk()
# 	for i in range(0,6):
# 		for j in range(0,7):
# 			label=Label(root,
# 						padx=10,
# 						text=labels[i][j])
# 			label.grid(row=i,column=j)
# 	root.mainloop()

# if __name__ == '__main__':
# 	cal(2019,6)

# from tkinter import Tk, Button
# from tkinter.messagebox import showinfo
# from time import strftime, localtime
# def clicked():
# 	time = strftime('Day: %d %b %Y\n Time: %H:%M:%S %p\n', localtime())
# 	showinfo(message='time')

# root = Tk()

# button = Button(root,
# 	text='Click it',
# 	command= clicked)

# button.pack()
# root.mainloop()


# from tkinter import Tk, Button, Entry, Label, END
# from time import strptime, strftime
# from tkinter.messagebox import showinfo

# def compute():

# 	global dateEnt

# 	date = dateEnt.get()
# 	weekday = strftime('%A', strptime(date, '%b %d, %Y'))
# 	showinfo(message = '{} was a {}'.format(date,weekday))

# 	dateEnt.delete(0, END)

# root = Tk()
# label=Label(root, text='Enter date')
# label.grid(row=0, column=0)
# dateEnt = Entry(root)
# dateEnt.grid(row=0, column=1)

# button=Button(root, text='Enter date', command=compute)
# button.grid(row=1, column=0, columnspan=2)
# root.mainloop()


# from tkinter import Tk, Canvas

# def begin(event):
# 	global oldx, oldy
# 	oldx, oldy = event.x, event.y

# def draw(event):
# 	global oldx, oldy, canvas
# 	newx, newy = event.x, event.y

# 	canvas.create_line(oldx,oldy,newx,newy)
# 	oldx,oldy = newx,newy

# root = Tk()

# oldx, oldy = 0,0

# canvas = Canvas(root, height=100, width=150)

# canvas.bind("<Button-1>", begin)
# canvas.bind("<Button1-Motion>", draw)

# canvas.pack()
# root.mainloop()

# from tkinter import Tk, Canvas, Frame, BOTH
# class Draw(Frame):

# 	def __init__(self, parent):
# 		Frame.__init__(self, parent):
# 		Frame.__init__(self, parent)
# 		self.pack()

# 		self.oldx, self.oldy = 0,0

# 		self.canvas = Canvas(self, height=100, width=150)
# 		self.canvas.bind("<Button-1>", self.begin)
# 		self.canvas.bind("<Button1-Motion>", self.draw)
# 		self.canvas.pack(expand=True, fill)

from tkinter import Tk, Button, Frame
from tkinter.messagebox import showinfo
from time import strftime, localtime

class ClickIt(Frame):
	def __init__(self, master):
		Frame.__init__(self,master)
		self.pack()
		button = Button(self,
						text='Click it',
						command=self.clicked)
		button.pack()

	def clicked(self):
		t = 'tasdf'
		showinfo(message=t)

if __name__ == '__main__':
	root = Tk()
	app = ClickIt(root)
	app.pack()
	root.mainloop()