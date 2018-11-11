set terminal pdf size 5,2
set output 'plotEuler.pdf'
plot '01.dat' w d t 'dt=0.01', '001.dat' w d t 'dt=0.001'
set term qt
replot