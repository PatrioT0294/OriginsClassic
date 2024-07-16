private _handled = false;
private _var1 = _this select 1;
diag_log "TEST DEBUG HOT KEY 2";
if _var1 == 22 then 
	{
	  diag_log "TEST DEBUG HOT KEY PRESSED U KEY";
			if (soundVolume == 1) then {
				diag_log "TEST DEBUG: soundVolume == 1";
				1 fadeSound 0.25;
				titletext localize "earplugs_on";
				}
						else 
				{
				diag_log "TEST DEBUG: soundVolume == 0";
				1 fadeSound 1;
				titletext localize "earplugs_removed";
				};
				_handled = true;
	};
_handled;

/*
switch (_this select 1) do {
 case 22: {
					if (soundVolume == 1) then {
									diag_log "TEST DEBUG: soundVolume == 1";
									1 fadeSound 0.25;
									titletext localize "earplugs_on";
					}
									else
					{
									diag_log "TEST DEBUG: soundVolume == 2";
									1 fadeSound 1;
									titletext localize "earplugs_removed";
									_handled = true;
		};
};
*/


