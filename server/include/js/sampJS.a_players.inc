forward Invoke_a_playersinc();
public Invoke_a_playersinc(){
	new Str[256];
	new iVar;
	new Float:fVar;

	SetSpawnInfo( 0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0, 0, 0, 0, 0, 0 );
	SpawnPlayer( 0 );
	SetPlayerPos( 0, 0.0, 0.0, 0.0 );
	SetPlayerPosFindZ( 0, 0.0, 0.0, 0.0 );
	GetPlayerPos( 0, fVar, fVar, fVar );
	SetPlayerFacingAngle( 0, 0.0 );
	GetPlayerFacingAngle( 0, fVar );
	IsPlayerInRangeOfPoint( 0, 0.0, 0.0, 0.0, 0.0 );
	GetPlayerDistanceFromPoint( 0, 0.0, 0.0, 0.0 );
	IsPlayerStreamedIn( 0, 0 );
	SetPlayerInterior( 0, 0 );
	GetPlayerInterior( 0 );
	SetPlayerHealth( 0, 0.0 );
	GetPlayerHealth( 0, fVar );
	SetPlayerArmour( 0, 0.0 );
	GetPlayerArmour( 0, fVar );
	SetPlayerAmmo( 0, 0, 0 );
	GetPlayerAmmo( 0 );
	GetPlayerWeaponState( 0 );
	GetPlayerTargetPlayer( 0 );
	GetPlayerTargetActor( 0 );
	SetPlayerTeam( 0, 0 );
	GetPlayerTeam( 0 );
	SetPlayerScore( 0, 0 );
	GetPlayerScore( 0 );
	GetPlayerDrunkLevel( 0 );
	SetPlayerDrunkLevel( 0, 0 );
	SetPlayerColor( 0, 0 );
	GetPlayerColor( 0 );
	SetPlayerSkin( 0, 0 );
	GetPlayerSkin( 0 );
	GivePlayerWeapon( 0, 0, 0 );
	ResetPlayerWeapons( 0 );
	SetPlayerArmedWeapon( 0, 0 );
	GetPlayerWeaponData( 0, 0, iVar, iVar );
	GivePlayerMoney( 0, 0 );
	ResetPlayerMoney( 0 );
	SetPlayerName( 0, "" );
	GetPlayerMoney( 0 );
	GetPlayerState( 0 );
	GetPlayerIp( 0, Str, 0 );
	GetPlayerPing( 0 );
	GetPlayerWeapon( 0 );
	GetPlayerKeys( 0, iVar, iVar, iVar );
	GetPlayerName( 0, Str, 0 );
	SetPlayerTime( 0, 0, 0 );
	GetPlayerTime( 0, iVar, iVar );
	TogglePlayerClock( 0, 0 );
	SetPlayerWeather( 0, 0 );
	ForceClassSelection( 0 );
	SetPlayerWantedLevel( 0, 0 );
	GetPlayerWantedLevel( 0 );
	SetPlayerFightingStyle( 0, 0 );
	GetPlayerFightingStyle( 0 );
	SetPlayerVelocity( 0, 0.0, 0.0, 0.0 );
	GetPlayerVelocity( 0, fVar, fVar, fVar );
	PlayCrimeReportForPlayer( 0, 0, 0 );
	PlayAudioStreamForPlayer( 0, "", 0.0, 0.0, 0.0, 0.0, 0 );
	StopAudioStreamForPlayer( 0 );
	SetPlayerShopName( 0, "" );
	SetPlayerSkillLevel( 0, 0, 0 );
	GetPlayerSurfingVehicleID( 0 );
	GetPlayerSurfingObjectID( 0 );
	RemoveBuildingForPlayer( 0, 0, 0.0, 0.0, 0.0, 0.0 );
	GetPlayerLastShotVectors( 0, fVar, fVar, fVar, fVar, fVar, fVar );
	SetPlayerAttachedObject( 0, 0, 0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0 );
	RemovePlayerAttachedObject( 0, 0 );
	IsPlayerAttachedObjectSlotUsed( 0, 0 );
	EditAttachedObject( 0, 0 );
	CreatePlayerTextDraw( 0, 0.0, 0.0, "" );
	PlayerTextDrawDestroy( 0, PlayerText:0 );
	PlayerTextDrawLetterSize( 0, PlayerText:0, 0.0, 0.0 );
	PlayerTextDrawTextSize( 0, PlayerText:0, 0.0, 0.0 );
	PlayerTextDrawAlignment( 0, PlayerText:0, 0 );
	PlayerTextDrawColor( 0, PlayerText:0, 0 );
	PlayerTextDrawUseBox( 0, PlayerText:0, 0 );
	PlayerTextDrawBoxColor( 0, PlayerText:0, 0 );
	PlayerTextDrawSetShadow( 0, PlayerText:0, 0 );
	PlayerTextDrawSetOutline( 0, PlayerText:0, 0 );
	PlayerTextDrawBackgroundColor( 0, PlayerText:0, 0 );
	PlayerTextDrawFont( 0, PlayerText:0, 0 );
	PlayerTextDrawSetProportional( 0, PlayerText:0, 0 );
	PlayerTextDrawSetSelectable( 0, PlayerText:0, 0 );
	PlayerTextDrawShow( 0, PlayerText:0 );
	PlayerTextDrawHide( 0, PlayerText:0 );
	PlayerTextDrawSetString( 0, PlayerText:0, "" );
	PlayerTextDrawSetPreviewModel( 0, PlayerText:0, 0 );
	PlayerTextDrawSetPreviewRot( 0, PlayerText:0, 0.0, 0.0, 0.0, 0.0 );
	PlayerTextDrawSetPreviewVehCol( 0, PlayerText:0, 0, 0 );
	SetPVarInt( 0, "", 0 );
	GetPVarInt( 0, "" );
	SetPVarString( 0, "", "" );
	GetPVarString( 0, "", Str, 0 );
	SetPVarFloat( 0, "", 0.0 );
	GetPVarFloat( 0, "" );
	DeletePVar( 0, "" );
	GetPVarsUpperIndex( 0 );
	GetPVarNameAtIndex( 0, 0, "", 0 );
	GetPVarType( 0, "" );
	SetPlayerChatBubble( 0, "", 0, 0.0, 0 );
	PutPlayerInVehicle( 0, 0, 0 );
	GetPlayerVehicleID( 0 );
	GetPlayerVehicleSeat( 0 );
	RemovePlayerFromVehicle( 0 );
	TogglePlayerControllable( 0, 0 );
	PlayerPlaySound( 0, 0, 0.0, 0.0, 0.0 );
	ApplyAnimation( 0, "", "", 0.0, 0, 0, 0, 0, 0, 0 );
	ClearAnimations( 0, 0 );
	GetPlayerAnimationIndex( 0 );
	GetAnimationName( 0, "", 0, "", 0 );
	GetPlayerSpecialAction( 0 );
	SetPlayerSpecialAction( 0, 0 );
	DisableRemoteVehicleCollisions( 0, 0 );
	SetPlayerCheckpoint( 0, 0.0, 0.0, 0.0, 0.0 );
	DisablePlayerCheckpoint( 0 );
	SetPlayerRaceCheckpoint( 0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 );
	DisablePlayerRaceCheckpoint( 0 );
	SetPlayerWorldBounds( 0, 0.0, 0.0, 0.0, 0.0 );
	SetPlayerMarkerForPlayer( 0, 0, 0 );
	ShowPlayerNameTagForPlayer( 0, 0, 0 );
	SetPlayerMapIcon( 0, 0, 0.0, 0.0, 0.0, 0, 0, 0 );
	RemovePlayerMapIcon( 0, 0 );
	AllowPlayerTeleport( 0, 0 );
	SetPlayerCameraPos( 0, 0.0, 0.0, 0.0 );
	SetPlayerCameraLookAt( 0, 0.0, 0.0, 0.0, 0 );
	SetCameraBehindPlayer( 0 );
	GetPlayerCameraPos( 0, fVar, fVar, fVar );
	GetPlayerCameraFrontVector( 0, fVar, fVar, fVar );
	GetPlayerCameraMode( 0 );
	EnablePlayerCameraTarget( 0, 0 );
	GetPlayerCameraTargetObject( 0 );
	GetPlayerCameraTargetVehicle( 0 );
	GetPlayerCameraTargetPlayer( 0 );
	GetPlayerCameraTargetActor( 0 );
	GetPlayerCameraAspectRatio( 0 );
	GetPlayerCameraZoom( 0 );
	AttachCameraToObject( 0, 0 );
	AttachCameraToPlayerObject( 0, 0 );
	InterpolateCameraPos( 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0 );
	InterpolateCameraLookAt( 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0, 0 );
	IsPlayerConnected( 0 );
	IsPlayerInVehicle( 0, 0 );
	IsPlayerInAnyVehicle( 0 );
	IsPlayerInCheckpoint( 0 );
	IsPlayerInRaceCheckpoint( 0 );
	SetPlayerVirtualWorld( 0, 0 );
	GetPlayerVirtualWorld( 0 );
	EnableStuntBonusForPlayer( 0, 0 );
	EnableStuntBonusForAll( 0 );
	TogglePlayerSpectating( 0, 0 );
	PlayerSpectatePlayer( 0, 0, 0 );
	PlayerSpectateVehicle( 0, 0, 0 );
	StartRecordingPlayerData( 0, 0, "" );
	StopRecordingPlayerData( 0 );
	SelectTextDraw( 0, 0 );
	CancelSelectTextDraw( 0 );
	CreateExplosionForPlayer( 0, 0.0, 0.0, 0.0, 0, 0.0 );
	#pragma unused iVar, fVar, Str
}
