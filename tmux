
tmux -> initiate the tmux session

------------------------------------> <-------------------------------------------

Ctr + b +  "  = Split horizontally
Ctr + b +  % = Split Vetically

Ctr + b + d = Detch from the session "Not closing!"
Ctr + b + Spacabar = will arrange the panels as layouts 
Ctr + b + q = will show on windows the name of the panels you have
Ctr + b + Arrows = will jump and active between the panels 
Ctr + b [then release b wile holding Ctr] + Arrows = Resize the panes

Ctr + b + x = Kill only the current active pan
Ctr + b + & = kill the active session

Ctr + b + c = New window inside your session 
Ctr + b + N = Move around your windows sequentially 
Ctr + b + w =  jumb between active windows and sessions.
Ctr + b +   ,    = name your current window

----------------------------> On Termainl :  <----------------------------

tmux ls :
	will list all active sessions

tmux	new	-s	"name ":
	Creat new session named "name"

tmux	a	-t	"neme":
	t for target, this command will target the sessin you want, normally they will be named in numbers

tmux	kill-server:
	kill all sessions all at once
