set title "Plot of the sine function"
set xlabel "x axis [no units]"
set ylabel "functional value [no units]"
plot [0:2*3.1415926] sin(x),cos(x)
set term png
set output "sincos.png"
replot
unset output
set term qt
