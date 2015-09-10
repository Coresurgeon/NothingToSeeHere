# Copyright (C) 2008-2015 TrinityCore <http://www.trinitycore.org/>
#
# This file is free software; as a special exception the author gives
# unlimited permission to copy and/or distribute it, with or without
# modifications, as long as this notice is preserved.
#
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY, to the extent permitted by law; without even the
# implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

# file(GLOB_RECURSE sources_Custom Custom/*.cpp Custom/*.h)

set(scripts_STAT_SRCS
  ${scripts_STAT_SRCS}
#  ${sources_Custom}
Custom/1V1/npc_arena1v1.cpp
Custom/1V1/npc_arena1v1.h
Custom/PVP/arena_crystal.cpp
Custom/Arenaspectator/arena_spectator.cpp
Custom/PVP/arenaladder.cpp
Custom/WorldChat/worldchat.cpp
Custom/CustomFunStuff/beastmaster.cpp
Custom/CustomFunStuff/enchanter.cpp
Custom/Killstreak/KillstreakManager.cpp
Custom/Killstreak/KillstreakManager.h
Custom/Killstreak/script_killstreak_example.cpp
Custom/Killstreak/script_killstreak_handling.cpp
Custom/CustomFunStuff/cooldowns_crystal.cpp
Custom/TemplateNPC/TemplateNPC.cpp
Custom/TemplateNPC/TemplateNPC.h
Custom/CustomFunStuff/reset_onduel_end.cpp
Custom/CustomFunStuff/playertools.cpp
Custom/CustomFunStuff/Phased_duel.cpp
Custom/CustomFunStuff/druidformhackfix.cpp

)

message("  -> Prepared: Custom")
