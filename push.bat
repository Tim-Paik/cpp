@echo off
cd %~dp0
git add .
git commit -m "%date:~0,4%-%date:~5,2%-%date:~8,2%"
git push
pause
