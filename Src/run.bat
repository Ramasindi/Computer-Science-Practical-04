@echo off
del *.exe
g++ UserInput.cpp -o UserInput
g++ ApplyInterest.cpp -o ApplyInterest
g++ Output.cpp -o Output
echo Build Completed,Running program
UserInput.exe |ApplyInterest.exe |ApplyInterest.exe |ApplyInterest.exe |Output.exe >> result.txt
pause