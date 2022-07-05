/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.				*/
#ifndef ENGINE_SHARED_CONFIG_VARIABLES_H
#define ENGINE_SHARED_CONFIG_VARIABLES_H
#undef ENGINE_SHARED_CONFIG_VARIABLES_H // this file will be included several times

// TODO: remove this
#include "././game/variables.h"

MACRO_CONFIG_STR(Password, password, 32, "", CFGFLAG_SERVER, "Password to the server")
MACRO_CONFIG_STR(Logfile, logfile, 128, "", CFGFLAG_SERVER, "Filename to log all output to")
MACRO_CONFIG_INT(ConsoleOutputLevel, console_output_level, 0, 0, 2, CFGFLAG_SERVER, "Adjusts the amount of information in the console")

MACRO_CONFIG_STR(SvName, sv_name, 128, "infclassCR 服务器", CFGFLAG_SERVER, "Server name")
MACRO_CONFIG_STR(Bindaddr, bindaddr, 128, "", CFGFLAG_SERVER|CFGFLAG_MASTER, "Address to bind the client/server to")
MACRO_CONFIG_INT(SvPort, sv_port, 8303, 0, 0, CFGFLAG_SERVER, "Port to use for the server")
MACRO_CONFIG_INT(SvExternalPort, sv_external_port, 0, 0, 0, CFGFLAG_SERVER, "External port to report to the master servers")
MACRO_CONFIG_STR(SvMap, sv_map, 128, "", CFGFLAG_SERVER, "Map to use on the server")
MACRO_CONFIG_INT(SvMaxClients, sv_max_clients, 64, 1, MAX_CLIENTS, CFGFLAG_SERVER, "Maximum number of clients that are allowed on a server")
MACRO_CONFIG_INT(SvMaxClientsPerIP, sv_max_clients_per_ip, 4, 1, MAX_CLIENTS, CFGFLAG_SERVER, "Maximum number of clients with the same IP that can connect to the server")
MACRO_CONFIG_INT(SvHighBandwidth, sv_high_bandwidth, 0, 0, 1, CFGFLAG_SERVER, "Use high bandwidth mode. Doubles the bandwidth required for the server. LAN use only")
MACRO_CONFIG_INT(SvHighBandwidthMult, sv_high_bandwidth_mult, 2, 0, 10, CFGFLAG_SERVER, "Multiplier for tickspeed interval when snap, set for limit bandwidth")
MACRO_CONFIG_INT(SvRegister, sv_register, 1, 0, 1, CFGFLAG_SERVER, "Register server with master server for public listing")
MACRO_CONFIG_STR(SvRconPassword, sv_rcon_password, 32, "", CFGFLAG_SERVER, "Remote console password (full access)")
MACRO_CONFIG_STR(SvRconModPassword, sv_rcon_mod_password, 32, "", CFGFLAG_SERVER, "Remote console password for moderators (limited access)")
MACRO_CONFIG_INT(SvRconMaxTries, sv_rcon_max_tries, 3, 0, 100, CFGFLAG_SERVER, "Maximum number of tries for remote console authentication")
MACRO_CONFIG_INT(SvRconBantime, sv_rcon_bantime, 5, 0, 1440, CFGFLAG_SERVER, "The time a client gets banned if remote console authentication fails. 0 makes it just use kick")
MACRO_CONFIG_INT(SvRconTokenCheck, sv_rcon_token_check, 1, 0, 1, CFGFLAG_SERVER, "Require the use of a client with tokenized protection against IP address spoofing to permit access to the console")
MACRO_CONFIG_INT(SvAutoDemoRecord, sv_auto_demo_record, 0, 0, 1, CFGFLAG_SERVER, "Automatically record demos")
MACRO_CONFIG_INT(SvAutoDemoAddMapName, sv_auto_demo_add_map_name, 0, 0, 1, CFGFLAG_SERVER, "Add map name to auto demo file when no max demo number limit")
MACRO_CONFIG_INT(SvAutoDemoMinPlayers, sv_auto_demo_min_players, 4, 2, 16, CFGFLAG_SERVER, "Min active players for automatically record demos")
MACRO_CONFIG_INT(SvAutoDemoMax, sv_auto_demo_max, 10, 0, 1000, CFGFLAG_SERVER, "Maximum number of automatically recorded demos (0 = no limit)")
MACRO_CONFIG_INT(SvServerInfoPerSecond, sv_server_info_per_second, 10, 1, 1000, CFGFLAG_SERVER, "Maximum number of complete server info responses that are sent out per second")

MACRO_CONFIG_STR(EcBindaddr, ec_bindaddr, 128, "localhost", CFGFLAG_ECON, "Address to bind the external console to. Anything but 'localhost' is dangerous")
MACRO_CONFIG_INT(EcPort, ec_port, 0, 0, 0, CFGFLAG_ECON, "Port to use for the external console")
MACRO_CONFIG_STR(EcPassword, ec_password, 32, "", CFGFLAG_ECON, "External console password")
MACRO_CONFIG_INT(EcBantime, ec_bantime, 0, 0, 1440, CFGFLAG_ECON, "The time a client gets banned if econ authentication fails. 0 just closes the connection")
MACRO_CONFIG_INT(EcAuthTimeout, ec_auth_timeout, 30, 1, 120, CFGFLAG_ECON, "Time in seconds before the the econ authentification times out")
MACRO_CONFIG_INT(EcOutputLevel, ec_output_level, 1, 0, 2, CFGFLAG_ECON, "Adjusts the amount of information in the external console")

MACRO_CONFIG_INT(Debug, debug, 0, 0, 1, CFGFLAG_SERVER, "Debug mode")
MACRO_CONFIG_INT(DbgStress, dbg_stress, 0, 0, 0, CFGFLAG_SERVER, "Stress systems")
MACRO_CONFIG_INT(DbgStressNetwork, dbg_stress_network, 0, 0, 0, CFGFLAG_SERVER, "Stress network")
MACRO_CONFIG_INT(DbgPref, dbg_pref, 0, 0, 1, CFGFLAG_SERVER, "Performance outputs")
MACRO_CONFIG_INT(DbgHitch, dbg_hitch, 0, 0, 0, CFGFLAG_SERVER, "Hitch warnings")

MACRO_CONFIG_STR(SvBroadcast, sv_broadcast, 64, "DDRace.info Trunk 0.5", CFGFLAG_SERVER, "The broadcasting message")

MACRO_CONFIG_INT(SvConnlimit, sv_connlimit, 4, 0, 100, CFGFLAG_SERVER, "Connlimit: Number of connections an IP is allowed to do in a timespan")
MACRO_CONFIG_INT(SvConnlimitTime, sv_connlimit_time, 20, 0, 1000, CFGFLAG_SERVER, "Connlimit: Time in which IP's connections are counted")
MACRO_CONFIG_INT(SvDistConnlimit, sv_distconnlimit, 16, 0, 100, CFGFLAG_SERVER, "DistConnlimit: Number of connections (from all IPs) that is allowed to do in a timespan")
MACRO_CONFIG_INT(SvDistConnlimitTime, sv_distconnlimit_time, 60, 0, 1000, CFGFLAG_SERVER, "DistConnlimit: Time in which (all IP's) connections are counted")

MACRO_CONFIG_INT(InfMinPlayers, inf_min_players, 2, 0, 64, CFGFLAG_SERVER, "Minimum number of players to start the round")
MACRO_CONFIG_INT(InfChallenge, inf_challenge, 1, 0, 1, CFGFLAG_SERVER, "Enable challenges")
MACRO_CONFIG_INT(InfAccusationThreshold, inf_accusation_threshold, 4, 0, 8, CFGFLAG_SERVER, "Number of accusations needed to start a banvote")
MACRO_CONFIG_INT(InfLeaverBanTime, inf_leaver_ban_time, 5, 0, 180, CFGFLAG_SERVER, "How long an infected gets banned (in minutes), when leaving and leaving causes a human to get infected")
MACRO_CONFIG_INT(InfFastDownload, inf_fast_download, 1, 0, 1, CFGFLAG_SERVER, "Enables fast download of maps")
MACRO_CONFIG_INT(InfMapWindow, inf_map_window, 15, 0, 100, CFGFLAG_SERVER, "Map downloading send-ahead window")
MACRO_CONFIG_INT(InfShowScoreTime, inf_show_score_time, 2, 0, 12, CFGFLAG_SERVER, "Number of seconds the score will be shown at the end of a round")
MACRO_CONFIG_INT(InfMaprotationRandom, inf_maprotation_random, 1, 0, 1, CFGFLAG_SERVER, "When enabled, next map in rotation will be chosen randomly")
MACRO_CONFIG_INT(InfMinRoundsForMapVote, inf_min_rounds_map_vote, 0, 0, 100, CFGFLAG_SERVER, "Minimum number of rounds before a new map can be voted")
MACRO_CONFIG_INT(InfMinPlayerPercentForMapVote, inf_min_player_percent_map_vote, 30, 0, 200, CFGFLAG_SERVER, "Minimum percentage of players that are needed to start a map vote")
MACRO_CONFIG_INT(InfMinPlayerNumberForMapVote, inf_min_player_number_map_vote, 1, 1, 32, CFGFLAG_SERVER, "Minimum number of players that are needed to start a map vote")
MACRO_CONFIG_INT(InfConWaitingTime, inf_con_waiting_time, 1, 0, 60, CFGFLAG_SERVER, "Number of seconds to wait before enter the game")
MACRO_CONFIG_INT(InfCaptcha, inf_captcha, 0, 0, 1, CFGFLAG_SERVER, "Enable captcha")
MACRO_CONFIG_INT(InfShockwaveAffectHumans, inf_shock_wave_affect_humans, 1, 0, 1, CFGFLAG_SERVER, "Explosion shockwave affect humans")
MACRO_CONFIG_INT(InfSpawnProtectionTime, inf_spawn_protection_time, 1, 0, 10000, CFGFLAG_SERVER, "Time zombies stay invincible while in spawn (in seconds)")

MACRO_CONFIG_INT(InfDefenderLimit, inf_defender_limit, 40, 0, 64, CFGFLAG_SERVER, "Maximum number of defenders in game")
MACRO_CONFIG_INT(InfSciogistLimit, inf_sciogist_limit, 1, 0, 64, CFGFLAG_SERVER, "Maximum number of sciogists in game")
MACRO_CONFIG_INT(InfMedicLimit, inf_medic_limit, 20, 0, 64, CFGFLAG_SERVER, "Maximum number of medics in game")
MACRO_CONFIG_INT(InfHeroLimit, inf_hero_limit, 10, 0, 64, CFGFLAG_SERVER, "Maximum number of heros in game")
MACRO_CONFIG_INT(InfSupportLimit, inf_support_limit, 40, 0, 64, CFGFLAG_SERVER, "Maximum number of supports in game")
MACRO_CONFIG_INT(InfReviverLimit, inf_reviver_limit, 1, 0, 4, CFGFLAG_SERVER, "Maximum number of revivers in game")

MACRO_CONFIG_INT(InfSoldierBombs, inf_soldier_bombs, 3, 1, 16, CFGFLAG_SERVER, "Number of bombs for the soldier")
MACRO_CONFIG_INT(InfMercBombs, inf_merc_bombs, 15, 1, 100, CFGFLAG_SERVER, "Number of poison grenades for the mercenary")
MACRO_CONFIG_INT(InfMercLove, inf_merc_love, 1, 0, 1, CFGFLAG_SERVER, "Enables love bombs for the mercenary (hammer)")
MACRO_CONFIG_INT(InfBarrierLifeSpan, inf_barrier_lifespan, 30, 0, 100, CFGFLAG_SERVER, "Barrier lifespan")


MACRO_CONFIG_INT(InfVoodooAliveTime, inf_voodoo_alive_time, 550, 0, 10000, CFGFLAG_SERVER, "How long a voodoo keeps staying alive after being killed (in ms)")
MACRO_CONFIG_INT(InfBarrierTimeReduce, inf_barrier_timereduce, 150, 0, 10000, CFGFLAG_SERVER, "Time to remove from a barrier lifespan when an infected dies (centisec)")
MACRO_CONFIG_INT(InfLooperBarrierTimeReduce, inf_looper_barrier_timereduce, 350, 0, 10000, CFGFLAG_SERVER, "Time to remove from a barrier lifespan when an infected dies (centisec)")
MACRO_CONFIG_INT(InfMineRadius, inf_mine_radius, 46, 0, 1024, CFGFLAG_SERVER, "Radius of mines")
MACRO_CONFIG_INT(InfMineLimit, inf_mine_limit, 2, 0, 1024, CFGFLAG_SERVER, "Maximum number of mines per player")
MACRO_CONFIG_INT(InfNinjaJump, inf_ninja_jump, 2, 0, 1024, CFGFLAG_SERVER, "Maximum number of katana attacks")
MACRO_CONFIG_INT(InfNinjaMinInfected, inf_ninja_min_infected, 2, 1, 15, CFGFLAG_SERVER, "Minimum number of infected to activate the target system")
MACRO_CONFIG_INT(InfNinjaTargetAfkTime, inf_ninja_target_afk_time, 1, 1, 10000, CFGFLAG_SERVER, "How long in minutes before an afk zombie in the infection zone does not count as target anymore")
MACRO_CONFIG_INT(InfSniperKillAmmo, inf_sniper_kill_ammo, 1, 0, 10, CFGFLAG_SERVER, "How many ammo regain when sniper kill zombie by laser")
MACRO_CONFIG_INT(InfPoisonDamage, inf_poison_damage, 8, 0, 1024, CFGFLAG_SERVER, "Damage deals by the poison grenades")
MACRO_CONFIG_INT(InfGhoulDigestion, inf_ghoul_digestion, 5, 0, 10000, CFGFLAG_SERVER, "Time for a ghoul to digest an infected (sec)")
MACRO_CONFIG_INT(InfGhoulStomachSize, inf_ghoul_stomach_size, 120, 0, 10000, CFGFLAG_SERVER, "Number of dead that the ghoul can eat")
MACRO_CONFIG_INT(InfGhoulThreshold, inf_ghoul_threshold, 3, 0, 10000, CFGFLAG_SERVER, "Ghouls will only be created when the number of infected has reached this threshold")
MACRO_CONFIG_INT(InfSlimeDuration, inf_slime_duration, 10, 0, 10000, CFGFLAG_SERVER, "How long Slug-Slime will stay in game (in seconds)")
MACRO_CONFIG_INT(InfSlimePoisonDuration, inf_slime_poison_duration, 5, 0, 10000, CFGFLAG_SERVER, "How long Slug-Slime will deal damage to humans (in seconds), BUG: when set to 1 second slime will deal damage very fast")
MACRO_CONFIG_INT(InfSlimeHealRate, inf_slime_heal_rate, 2, 0, 10000, CFGFLAG_SERVER, "Slug-Slime heals infected for X hearts every second")
MACRO_CONFIG_INT(InfInfzoneHealRate, inf_infzone_heal_rate, 3, 0, 10000, CFGFLAG_SERVER, "Infection zone heals infected for X hearts every second")
MACRO_CONFIG_INT(InfScientistTpSelfharm, inf_scientist_tp_selfharm, 0, 0, 10000, CFGFLAG_SERVER, "Self damage on each teleportation")
MACRO_CONFIG_INT(InfBatAirjumpLimit, inf_bat_airjump_limit, 10000, 0, 10000, CFGFLAG_SERVER, "Max number of extra airjumps")
MACRO_CONFIG_INT(InfBatDamage, inf_bat_damage, 3, 0, 10000, CFGFLAG_SERVER, "Damage taken by bat")
MACRO_CONFIG_INT(InfBatHookTime, inf_bat_hook_time, 5, 1, 10000, CFGFLAG_SERVER, "For how long bat will be able to hook humans (in seconds)")
MACRO_CONFIG_INT(InfSpiderHookTime, inf_spider_hook_time, 3, 1, 10000, CFGFLAG_SERVER, "For how long spiders will be able to hook humans (in seconds)")
MACRO_CONFIG_INT(InfSpiderDamage, inf_spider_damage, 10, 1, 10000, CFGFLAG_SERVER, "Damage taken by spider")
MACRO_CONFIG_INT(InfSlimeDamage, inf_slime_damage, 2, 1, 10000, CFGFLAG_SERVER, "Damage taken by slime")
MACRO_CONFIG_INT(InfSpiderHookDamage, inf_spider_hook_damage, 1, 0, 10000, CFGFLAG_SERVER, "Damage taken by spider (hook)")
MACRO_CONFIG_INT(InfSmokerHookDamage, inf_smoker_hook_damage, 3, 1, 10000, CFGFLAG_SERVER, "Damage taken by smoker (hook)")
MACRO_CONFIG_INT(InfSpiderCatchHumans, inf_spider_catch_humans, 1, 0, 1, CFGFLAG_SERVER, "Spider always catch humans with hook")
MACRO_CONFIG_INT(InfUndeadIncNumKills, inf_undead_inc_num_kills, 0, 0, 1, CFGFLAG_SERVER, "Whether freezing undead increase killer's NumberKills or not")

MACRO_CONFIG_INT(InfProbaSmoker, inf_proba_smoker, 16, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a smoker")
MACRO_CONFIG_INT(InfProbaHunter, inf_proba_hunter, 15, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a hunter")
MACRO_CONFIG_INT(InfProbaBat, inf_proba_bat, 5, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a bat")
MACRO_CONFIG_INT(InfProbaBoomer, inf_proba_boomer, 12, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a boomer")
MACRO_CONFIG_INT(InfProbaGhost, inf_proba_ghost, 5, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a ghost")
MACRO_CONFIG_INT(InfProbaSpider, inf_proba_spider, 5, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a spider")
MACRO_CONFIG_INT(InfProbaGhoul, inf_proba_ghoul, 5, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a ghoul")
MACRO_CONFIG_INT(InfProbaSlug, inf_proba_slug, 7, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a slug")
MACRO_CONFIG_INT(InfProbaVoodoo, inf_proba_voodoo, 6, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a voodoo")
MACRO_CONFIG_INT(InfProbaSlime, inf_proba_slime, 5, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a slime")
MACRO_CONFIG_INT(InfProbaWitch, inf_proba_witch, 5, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a witch")
MACRO_CONFIG_INT(InfProbaUndead, inf_proba_undead, 6, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be an undead")

MACRO_CONFIG_INT(InfEnableEngineer, inf_enable_engineer, 1, 0, 1, CFGFLAG_SERVER, "Makes the engineer class available")
MACRO_CONFIG_INT(InfEnableSoldier, inf_enable_soldier, 1, 0, 1, CFGFLAG_SERVER, "Makes the soldier class available")
MACRO_CONFIG_INT(InfEnableScientist, inf_enable_scientist, 1, 0, 1, CFGFLAG_SERVER, "Makes the scientist class available")
MACRO_CONFIG_INT(InfEnableBiologist, inf_enable_biologist, 1, 0, 1, CFGFLAG_SERVER, "Makes the biologist class available")
MACRO_CONFIG_INT(InfEnableLooper, inf_enable_looper, 1, 0, 1, CFGFLAG_SERVER, "Makes the looper class available")
MACRO_CONFIG_INT(InfEnableSciogist, inf_enable_sciogist, 1, 0, 1, CFGFLAG_SERVER, "Makes the sciogist class available")
MACRO_CONFIG_INT(InfEnableReviver, inf_enable_reviver, 1, 0, 1, CFGFLAG_SERVER, "Makes the reviver class available")
MACRO_CONFIG_INT(InfEnableCatapult, inf_enable_catapult, 1, 0, 1, CFGFLAG_SERVER, "Makes the catapult class available")
MACRO_CONFIG_INT(InfEnableMercenary, inf_enable_mercenary, 1, 0, 1, CFGFLAG_SERVER, "Makes the mercenary class available")
MACRO_CONFIG_INT(InfEnableSniper, inf_enable_sniper, 1, 0, 1, CFGFLAG_SERVER, "Makes the sniper class available")
MACRO_CONFIG_INT(InfEnableNinja, inf_enable_ninja, 1, 0, 1, CFGFLAG_SERVER, "Makes the ninja class available")
MACRO_CONFIG_INT(InfEnableMedic, inf_enable_medic, 1, 0, 1, CFGFLAG_SERVER, "Makes the medic class available")
MACRO_CONFIG_INT(InfEnableHero, inf_enable_hero, 1, 0, 1, CFGFLAG_SERVER, "Makes the hero class available")
MACRO_CONFIG_INT(InfEnablePolice, inf_enable_police, 1, 0, 1, CFGFLAG_SERVER, "Makes the police class available")

MACRO_CONFIG_INT(InfHeroFlagIndicator, inf_hero_flag_indicator, 1, 0, 1, CFGFLAG_SERVER, "Shows the heros in which direction the next flag is")
MACRO_CONFIG_INT(InfHeroFlagIndicatorTime, inf_hero_flag_indicator_time, 3, 0, 1000, CFGFLAG_SERVER, "How many seconds the hero has to stand still until the indicator is shown")

MACRO_CONFIG_STR(FunRoundTitle, funround_title, 64, "Fun round", CFGFLAG_SERVER, "Fun round title")
MACRO_CONFIG_INT(FunRoundLimit, funround_limit, 1, 0, 100, CFGFLAG_SERVER, "Number of possible fun rounds per map")
MACRO_CONFIG_INT(FunRoundDuration, funround_duration, 3, 0, 100, CFGFLAG_SERVER, "Fun round duration (min)")
MACRO_CONFIG_INT(FunRoundGhoulStomachSize, funround_ghoul_stomach_size, 40, 0, 10000, CFGFLAG_SERVER, "Number of dead that the ghoul can eat")

//Looper class config
MACRO_CONFIG_INT(InfSlowMotionWallDuration, inf_slow_motion_wall_duration, 30, 0, 1024, CFGFLAG_SERVER, "How long looper wall slow motion effect will slow down zombies (in centiSec)")
MACRO_CONFIG_INT(InfSlowMotionGunDuration, inf_slow_motion_gun_duration, 6, 0, 1024, CFGFLAG_SERVER, "How long looper gun slow motion effect will slow down zombies (in centiSec)")
MACRO_CONFIG_INT(InfLooperBarrierLifeSpan, inf_looper_barrier_life_span, 59, 0, 1024, CFGFLAG_SERVER, "How long looper barrier will last (in seconds)")
MACRO_CONFIG_INT(InfSlowMotionPercent, inf_slow_motion_percent, 65, 0, 90, CFGFLAG_SERVER, "Factor that manipulates the slowmotion intensity")
MACRO_CONFIG_INT(InfSlowMotionHookSpeed, inf_slow_motion_hook_speed, 30, 0, 100, CFGFLAG_SERVER, "Factor that manipulates the slowmotion hook speed")
MACRO_CONFIG_INT(InfSlowMotionHookAccel, inf_slow_motion_hook_accel, 15, 0, 100, CFGFLAG_SERVER, "Factor that manipulates the slowmotion hook acceleration")
MACRO_CONFIG_INT(InfSlowMotionMaxSpeed, inf_slow_motion_max_speed, 50, 0, 500, CFGFLAG_SERVER, "Create a speed limit while in slowmotion, make it 0 to disable it")
MACRO_CONFIG_INT(InfSlowMotionGravity, inf_slow_motion_gravity, 5, -100, 100, CFGFLAG_SERVER, "Modify gravity while in slowmotion")

//Turret
MACRO_CONFIG_INT(InfTurretEnable, inf_turret_enable, 1, 0, 1, CFGFLAG_SERVER, "If turrets are available")
MACRO_CONFIG_INT(InfTurretGive, inf_turret_give, 1, 0, 1000, CFGFLAG_SERVER, "Gives hero extra turrets")

MACRO_CONFIG_INT(InfTurretDuration, inf_turret_duration, 30, 0, 100, CFGFLAG_SERVER, "turret life span")
MACRO_CONFIG_INT(InfTurretSelfDestructDmg, inf_turret_self_destruct_dmg, 15, 0, 20, CFGFLAG_SERVER, "damage taken by zombie if turret is destroyed")
MACRO_CONFIG_INT(InfTurretRadarRange, inf_turret_radar_range, 800, 0, 1000, CFGFLAG_SERVER, "turret radar range")
MACRO_CONFIG_INT(InfTurretEnableLaser, inf_turret_enable_laser, 1, 0, 1, CFGFLAG_SERVER, "enable turret laser ammunition")
MACRO_CONFIG_INT(InfTurretEnablePlasma, inf_turret_enable_plasma, 0, 0, 1, CFGFLAG_SERVER, "enable turret plasma ammunition")
MACRO_CONFIG_INT(InfTurretPlasmaReloadDuration, inf_turret_plasma_reload_duration, 3, 0, 10, CFGFLAG_SERVER, "plasma ammo reload duration")
MACRO_CONFIG_INT(InfTurretLaserReloadDuration, inf_turret_laser_reload_duration, 1, 0, 10, CFGFLAG_SERVER, "laser ammo reload duration")
MACRO_CONFIG_INT(InfTurretPlasmaLifeSpan, inf_turret_plasma_life_span, 3, 0, 10, CFGFLAG_SERVER, "plasma life span")
MACRO_CONFIG_INT(InfTurretWarmUpDuration, inf_turret_warm_up_duration, 1, 0, 10, CFGFLAG_SERVER, "turret warm up duration")
MACRO_CONFIG_INT(InfTurretDmgFactor, inf_turret_dmg_factor, 9, 0, 10, CFGFLAG_SERVER, "how much damage a plasma turret does, 10 == grenade explosion")
MACRO_CONFIG_INT(InfTurretDmgHealthLaser, inf_turret_dmg_health_laser, 3, 0, 10, CFGFLAG_SERVER, "how much damage in life points a laser turret does")
MACRO_CONFIG_INT(InfTurretAmmunition, inf_turret_ammunition, 3, 0, 10, CFGFLAG_SERVER, "number of projectiles per multi-shot (not per zombie)")
MACRO_CONFIG_INT(InfTurretMaxPerPlayer, inf_turret_max_per_player, 3, 0, 10, CFGFLAG_SERVER, "maximal number of turrets per player")

//SuperWeapons
MACRO_CONFIG_INT(InfWhiteHoleMinimalKills, inf_white_hole_minimal_kills, 6, 0, 30, CFGFLAG_SERVER, "Minimal number of kills before white hole become available")
MACRO_CONFIG_INT(InfWhiteHoleProbability, inf_white_hole_probability, 20, 0, 100, CFGFLAG_SERVER, "Probability of super weapon being available after MinimalKill requirement")
MACRO_CONFIG_INT(InfWhiteHoleLifeSpan, inf_white_hole_life_span, 20, 0, 100, CFGFLAG_SERVER, "White hole life span")
MACRO_CONFIG_INT(InfWhiteHoleRadius, inf_white_hole_radius, 430, 0, 500, CFGFLAG_SERVER, "Radius of white holes")
MACRO_CONFIG_INT(InfWhiteHoleAffectsHumans, inf_white_hole_affects_humans, 0, 0, 1, CFGFLAG_SERVER, "Makes white holes suck in humans")
MACRO_CONFIG_INT(InfWhiteHoleNumParticles, inf_white_hole_num_particles, 50, 20, 500, CFGFLAG_SERVER, "Number of particles that will be used for a white hole animation")
MACRO_CONFIG_INT(InfWhiteHolePullStrength, inf_white_hole_pull_strength, 40, 0, 1000, CFGFLAG_SERVER, "How strong a white hole sucks players in")

MACRO_CONFIG_INT(InfElasticHoleMinimalKills, inf_elastic_hole_minimal_kills, 6, 0, 30, CFGFLAG_SERVER, "Minimal number of kills before elastic hole become available")
MACRO_CONFIG_INT(InfElasticHoleRadius, inf_elastic_hole_radius, 150, 0, 200, CFGFLAG_SERVER, "Radius of elastic holes")
MACRO_CONFIG_INT(InfElasticHoleLifeSpan, inf_elastic_hole_life_span, 20, 0, 100, CFGFLAG_SERVER, "Elastic hole life span")
MACRO_CONFIG_INT(InfElasticHoleProbability, inf_elastic_hole_probability, 20, 0, 100, CFGFLAG_SERVER, "Probability of super weapon being available after MinimalKill requirement")

MACRO_CONFIG_INT(InfHealBoomMinimalKills, inf_heal_boom_minimal_kills, 8, 0, 30, CFGFLAG_SERVER, "Minimal number of kills before elastic hole become available")
MACRO_CONFIG_INT(InfHealBoomRadius, inf_heal_boom_radius, 96, 0, 200, CFGFLAG_SERVER, "Radius of heal booms")
MACRO_CONFIG_INT(InfHealBoomLifeSpan, inf_heal_boom_life_span, 10, 0, 100, CFGFLAG_SERVER, "Heal boom life span")
MACRO_CONFIG_INT(InfHealBoomMaxHeal, inf_heal_boom_maxheal, 5, 4, 10, CFGFLAG_SERVER, "Max heal of heal booms")
MACRO_CONFIG_INT(InfHealBoomProbability, inf_heal_boom_probability, 10, 0, 100, CFGFLAG_SERVER, "Probability of super weapon being available after MinimalKill requirement")

MACRO_CONFIG_INT(InfElasticEntityRadius, inf_elastic_entity_radius, 50, 0, 200, CFGFLAG_SERVER, "Radius of elastic entitys")
MACRO_CONFIG_INT(InfElasticEntityLifeSpan, inf_elastic_entity_life_span, 15, 0, 100, CFGFLAG_SERVER, "Elastic entity life span")

MACRO_CONFIG_INT(InfElasticGrenadeLifeSpan, inf_elastic_grenade_life_span, 10, 0, 100, CFGFLAG_SERVER, "Elastic grenade life span")
MACRO_CONFIG_INT(InfElasticGrenadeCollisionNum, inf_elastic_grenade_collision_num, 3, 0, 10, CFGFLAG_SERVER, "Elastic grenade life span")

MACRO_CONFIG_INT(InfPoliceShieldRadius, inf_police_shield_Radius, 100, 0, 0, CFGFLAG_SERVER, "Police shield radius")

MACRO_CONFIG_INT(InfStunGrenadeMinimalKills, inf_stun_grenade_minimal_kills, 2, 0, 30, CFGFLAG_SERVER, "Minimal number of kills before grenade stun ammunition can be found")
MACRO_CONFIG_INT(InfStunGrenadeProbability, inf_stun_grenade_probability, 30, 0, 100, CFGFLAG_SERVER, "Probability of super weapon being available after MinimalKill requirement")
MACRO_CONFIG_INT(InfIgnoreSpec, inf_ignore_spec, 1, 0, 1, CFGFLAG_SERVER, "Ignore spectator number when set first infection (not count as infected)")



#endif
