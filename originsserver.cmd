@echo off

"C:\Program Files\MySQL\MySQL Server 8.0\bin\mysql.exe" -u patriot -p KdKMOs91 dayz_origins -e "call pMain" 
start "arma2" "G:\Steam\steamapps\common\Arma 2 Operation Arrowhead\arma2oaserver.exe" -port=2302 "-config=G:\Steam\steamapps\common\Arma 2 Operation Arrowhead\dayz_1.origins.tavi\config.cfg" "-cfg=G:\Steam\steamapps\common\Arma 2 Operation Arrowhead\dayz_1.origins.tavi\basic.cfg" "-profiles=dayz_1.origins.tavi" -name=dayz_1.origins.tavi "-mod=@dayzoriginsP;@dayz_1.origins.tavi" -cpuCount=4 -maxMem=1578 -exThreads=1
