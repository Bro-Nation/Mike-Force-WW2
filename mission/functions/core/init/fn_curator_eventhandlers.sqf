params ["_curatorObject"];

_curatorObject addEventHandler ["CuratorObjectDeleted", {
	params ["_curator", "_entity"];

	private _curator = getAssignedCuratorUnit  _curator;

	diag_log format ["[IA] %1 deleted %2", name _curator, _entity];
}];