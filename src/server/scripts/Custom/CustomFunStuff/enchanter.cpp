// quadral

enum Enchants
{
	ENCHANT_WEP_BERSERKING              = 3789,
	ENCHANT_WEP_BLADE_WARD              = 3869,
	ENCHANT_WEP_BLOOD_DRAINING          = 3870,
	ENCHANT_WEP_ACCURACY                = 3788,
	ENCHANT_WEP_AGILITY_1H              = 1103,
	ENCHANT_WEP_SPIRIT                  = 3844,
	ENCHANT_WEP_BATTLEMASTER            = 2675,
	ENCHANT_WEP_BLACK_MAGIC             = 3790,
	ENCHANT_WEP_ICEBREAKER              = 3239,
	ENCHANT_WEP_LIFEWARD                = 3241,
	ENCHANT_WEP_MIGHTY_SPELL_POWER      = 3834, // One-hand
	ENCHANT_WEP_EXECUTIONER             = 3225,
	ENCHANT_WEP_POTENCY                 = 3833,
	ENCHANT_WEP_TITANGUARD              = 3851,
	ENCHANT_2WEP_MASSACRE               = 3827,
	ENCHANT_2WEP_SCOURGEBANE			= 3247,
	ENCHANT_2WEP_GIANT_SLAYER			= 3251,
	ENCHANT_2WEP_GREATER_SPELL_POWER    = 3854,
	ENCHANT_2WEP_AGILITY	            = 2670,
	ENCHANT_2WEP_MONGOOSE               = 2673,

	ENCHANT_SHIELD_DEFENSE              = 1952,
	ENCHANT_SHIELD_INTELLECT            = 1128,
	ENCHANT_SHIELD_RESILIENCE           = 3229,
	ENCHANT_SHIELD_BLOCK				= 2655,
	ENCHANT_SHIELD_STAMINA				= 1071,
	ENCHANT_SHIELD_TOUGHSHIELD			= 2653,
	ENCHANT_SHIELD_TITANIUM_PLATING     = 3849,

	ENCHANT_HEAD_BLISSFUL_MENDING       = 3819,
	ENCHANT_HEAD_BURNING_MYSTERIES      = 3820,
	ENCHANT_HEAD_DOMINANCE              = 3796,
	ENCHANT_HEAD_SAVAGE_GLADIATOR       = 3842,
	ENCHANT_HEAD_STALWART_PROTECTOR     = 3818,
	ENCHANT_HEAD_TORMENT                = 3817,
	ENCHANT_HEAD_TRIUMPH                = 3795,
	ENCHANT_HEAD_ECLIPSED_MOON			= 3815,
	ENCHANT_HEAD_FLAME_SOUL				= 3816,
	ENCHANT_HEAD_FLEEING_SHADOW			= 3814,
	ENCHANT_HEAD_FROSTY_SOUL			= 3812,
	ENCHANT_HEAD_TOXIC_WARDING			= 3813,

	ENCHANT_SHOULDER_MASTERS_AXE        = 3835,
	ENCHANT_SHOULDER_MASTERS_CRAG       = 3836,
	ENCHANT_SHOULDER_MASTERS_PINNACLE   = 3837,
	ENCHANT_SHOULDER_MASTERS_STORM      = 3838,
	ENCHANT_SHOULDER_GREATER_AXE        = 3808,
	ENCHANT_SHOULDER_GREATER_CRAG       = 3809,
	ENCHANT_SHOULDER_GREATER_GLADIATOR  = 3852,
	ENCHANT_SHOULDER_GREATER_PINNACLE   = 3811,
	ENCHANT_SHOULDER_GREATER_STORM      = 3810,
	ENCHANT_SHOULDER_DOMINANCE          = 3794,
	ENCHANT_SHOULDER_TRIUMPH            = 3793,

	ENCHANT_CLOAK_DARKGLOW_EMBROIDERY   = 3728,
	ENCHANT_CLOAK_SWORDGUARD_EMBROIDERY = 3730,
	ENCHANT_CLOAK_LIGHTWEAVE_EMBROIDERY = 3722,
	ENCHANT_CLOAK_SPRINGY_ARACHNOWEAVE  = 3859,
	ENCHANT_CLOAK_WISDOM                = 3296,
	ENCHANT_CLOAK_TITANWEAVE            = 1951,
	ENCHANT_CLOAK_SPELL_PIERCING        = 3243,
	ENCHANT_CLOAK_SHADOW_ARMOR          = 3256,
	ENCHANT_CLOAK_MIGHTY_ARMOR          = 3294,
	ENCHANT_CLOAK_MAJOR_AGILITY         = 1099,
	ENCHANT_CLOAK_GREATER_SPEED         = 3831,

	ENCHANT_LEG_EARTHEN					= 3853,
	ENCHANT_LEG_FROSTHIDE				= 3822,
	ENCHANT_LEG_ICESCALE				= 3823,
	ENCHANT_LEG_BRILLIANT_SPELLTHREAD	= 3719,
	ENCHANT_LEG_SAPPHIRE_SPELLTHREAD	= 3721,
	/*	ENCHANT_LEG_DRAGONSCALE				= 3331,
	ENCHANT_LEG_WYRMSCALE				= 3332, */

	ENCHANT_GLOVES_GREATER_BLASTING		= 3249,
	ENCHANT_GLOVES_ARMSMAN				= 3253,
	ENCHANT_GLOVES_CRUSHER				= 1603,
	ENCHANT_GLOVES_AGILITY				= 3222,
	ENCHANT_GLOVES_PRECISION			= 3234,
	ENCHANT_GLOVES_EXPERTISE			= 3231,
	ENCHANT_GLOVES_EXCEPTIONAL_SPELLPOWER  = 3246,

	ENCHANT_BRACERS_MAJOR_STAMINA		= 3850,
	ENCHANT_BRACERS_SUPERIOR_SP			= 2332,
	ENCHANT_BRACERS_GREATER_ASSUALT		= 3845,
	ENCHANT_BRACERS_MAJOR_SPIRT			= 1147,
	ENCHANT_BRACERS_EXPERTISE			= 3231,
	ENCHANT_BRACERS_GREATER_STATS		= 2661,
	ENCHANT_BRACERS_INTELLECT			= 1119,
	ENCHANT_BRACERS_FURL_ARCANE			= 3763,
	ENCHANT_BRACERS_FURL_FIRE			= 3759,
	ENCHANT_BRACERS_FURL_FROST			= 3760,
	ENCHANT_BRACERS_FURL_NATURE			= 3762,
	ENCHANT_BRACERS_FURL_SHADOW			= 3761,
	ENCHANT_BRACERS_FURL_ATTACK			= 3756,
	ENCHANT_BRACERS_FURL_STAMINA		= 3757,
	ENCHANT_BRACERS_FURL_SPELLPOWER		= 3758,

	ENCHANT_CHEST_POWERFUL_STATS		= 3832,
	ENCHANT_CHEST_SUPER_HEALTH			= 3297,
	ENCHANT_CHEST_GREATER_MAINA_REST	= 2381,
	ENCHANT_CHEST_EXCEPTIONAL_RESIL		= 3245,
	ENCHANT_CHEST_GREATER_DEFENSE		= 1953,

	ENCHANT_BOOTS_GREATER_ASSULT		= 1597,
	ENCHANT_BOOTS_TUSKARS_VITLIATY		= 3232,
	ENCHANT_BOOTS_SUPERIOR_AGILITY		= 983,
	ENCHANT_BOOTS_GREATER_SPIRIT		= 1147,
	ENCHANT_BOOTS_GREATER_VITALITY		= 3244,
	ENCHANT_BOOTS_ICEWALKER				= 3826,
	ENCHANT_BOOTS_GREATER_FORTITUDE		= 1075,
	ENCHANT_BOOTS_NITRO_BOOTS			= 3606,

	ENCHANT_RING_ASSULT					= 3839,
	ENCHANT_RING_GREATER_SP				= 3840,
	ENCHANT_RING_STAMINA				= 3791,

	ENCHANT_WAIST_SOCKET                = 3729
};

#include "ScriptPCH.h"

void AdvancedEnchant(Player* player, Item* item, EnchantmentSlot slot, uint32 socketGem)
{
	if (!item)
	{
		player->GetSession()->SendNotification("You must first equip the item you are trying to enchant in order to enchant it!");
		return;
	}

	if (!socketGem)
	{
		player->GetSession()->SendNotification("Something went wrong in the code. It has been logged for developers and will be looked into, sorry for the inconvenience.");
		return;
	}

	player->ApplyEnchantment(item, slot, false);
	item->SetEnchantment(slot, socketGem, 0, 0);
	player->ApplyEnchantment(item, slot, true);
	player->GetSession()->SendNotification("%s succesfully enchanted!", item->GetTemplate()->Name1.c_str());
}

void Enchant(Player* player, Item* item, uint32 enchantid)
{
	if (!item)
	{
		player->GetSession()->SendNotification("You must first equip the item you are trying to enchant in order to enchant it!");
		return;
	}

	if (!enchantid)
	{
		player->GetSession()->SendNotification("Something went wrong in the code. It has been logged for developers and will be looked into, sorry for the inconvenience.");
		return;
	}

	player->ApplyEnchantment(item, PERM_ENCHANTMENT_SLOT, false);
	item->SetEnchantment(PERM_ENCHANTMENT_SLOT, enchantid, 0, 0);
	player->ApplyEnchantment(item, PERM_ENCHANTMENT_SLOT, true);
	player->GetSession()->SendNotification("|cff800080%s |cffFF0000succesfully enchanted!", item->GetTemplate()->Name1.c_str());
}

class npc_enchantment : public CreatureScript
{
public:
	npc_enchantment() : CreatureScript("npc_enchantment") { }

	bool OnGossipHello(Player* player, Creature* creature)
	{
		player->ADD_GOSSIP_ITEM(4, "Enchant Weapon", GOSSIP_SENDER_MAIN, 1);
		player->ADD_GOSSIP_ITEM(4, "Enchant Off-Hand Weapon", GOSSIP_SENDER_MAIN, 13);
		player->ADD_GOSSIP_ITEM(4, "Enchant 2H Weapon", GOSSIP_SENDER_MAIN, 2);
		player->ADD_GOSSIP_ITEM(4, "Enchant Shield", GOSSIP_SENDER_MAIN, 3);
		player->ADD_GOSSIP_ITEM(4, "Enchant Head", GOSSIP_SENDER_MAIN, 4);
		player->ADD_GOSSIP_ITEM(4, "Enchant Shoulders", GOSSIP_SENDER_MAIN, 5);
		player->ADD_GOSSIP_ITEM(4, "Enchant Cloak", GOSSIP_SENDER_MAIN, 6);
		player->ADD_GOSSIP_ITEM(4, "Enchant Chest", GOSSIP_SENDER_MAIN, 7);
		player->ADD_GOSSIP_ITEM(4, "Enchant Bracers", GOSSIP_SENDER_MAIN, 8);
		player->ADD_GOSSIP_ITEM(4, "Enchant Gloves", GOSSIP_SENDER_MAIN, 9);
		player->ADD_GOSSIP_ITEM(4, "Enchant Belt (Socket Belt)", GOSSIP_SENDER_MAIN, 15);
		player->ADD_GOSSIP_ITEM(4, "Enchant Legs", GOSSIP_SENDER_MAIN, 10);
		player->ADD_GOSSIP_ITEM(4, "Enchant Feet", GOSSIP_SENDER_MAIN, 11);

		if (player->HasSkill(SKILL_ENCHANTING) && player->GetSkillValue(SKILL_ENCHANTING) == 450)
		{
			player->ADD_GOSSIP_ITEM(1, "Enchant Rings", GOSSIP_SENDER_MAIN, 12);
		}
		player->PlayerTalkClass->SendGossipMenu(60021, creature->GetGUID());
		return true;
	}

	bool OnGossipSelect(Player* player, Creature* creature, uint32 /*sender*/, uint32 action)
	{
		player->PlayerTalkClass->ClearMenus();
		Item * item;

		switch (action)
		{

		case 1: // Enchant Weapon
			if (player->HasSkill(SKILL_ENCHANTING) && player->GetSkillValue(SKILL_ENCHANTING) == 450)
			{
				player->ADD_GOSSIP_ITEM(1, "Blade Ward", GOSSIP_SENDER_MAIN, 102);
				player->ADD_GOSSIP_ITEM(1, "Blood Draining", GOSSIP_SENDER_MAIN, 103);
			}
			player->ADD_GOSSIP_ITEM(1, "Exceptional Agility", GOSSIP_SENDER_MAIN, 100);
			player->ADD_GOSSIP_ITEM(1, "Exceptional Spirit", GOSSIP_SENDER_MAIN, 101);
			player->ADD_GOSSIP_ITEM(1, "Berserking", GOSSIP_SENDER_MAIN, 104);
			player->ADD_GOSSIP_ITEM(1, "Accuracy", GOSSIP_SENDER_MAIN, 105);
			player->ADD_GOSSIP_ITEM(1, "Black Magic", GOSSIP_SENDER_MAIN, 106);
			player->ADD_GOSSIP_ITEM(1, "Battlemaster", GOSSIP_SENDER_MAIN, 107);
			player->ADD_GOSSIP_ITEM(1, "Icebreaker", GOSSIP_SENDER_MAIN, 108);
			player->ADD_GOSSIP_ITEM(1, "Lifeward", GOSSIP_SENDER_MAIN, 109);
			player->ADD_GOSSIP_ITEM(1, "Titanguard", GOSSIP_SENDER_MAIN, 110);
			player->ADD_GOSSIP_ITEM(1, "Superior Potency", GOSSIP_SENDER_MAIN, 111);
			player->ADD_GOSSIP_ITEM(1, "Mighty Spellpower", GOSSIP_SENDER_MAIN, 112);
			player->ADD_GOSSIP_ITEM(1, "Mongoose", GOSSIP_SENDER_MAIN, 113);
			player->ADD_GOSSIP_ITEM(1, "Executioner", GOSSIP_SENDER_MAIN, 114);
			player->ADD_GOSSIP_ITEM(1, "<-Back", GOSSIP_SENDER_MAIN, 300);
			player->PlayerTalkClass->SendGossipMenu(100002, creature->GetGUID());
			return true;
			break;

		case 2: // Enchant 2H Weapon
			{
				item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_MAINHAND);

				if (!item)
				{
					player->GetSession()->SendNotification("You must equip a Two-Handed weapon first.");
					player->PlayerTalkClass->SendCloseGossip();
					return false;
				}

				if (item->GetTemplate()->InventoryType == INVTYPE_2HWEAPON)
				{
					player->ADD_GOSSIP_ITEM(1, "Berserking", GOSSIP_SENDER_MAIN, 104);
					player->ADD_GOSSIP_ITEM(1, "Greater Spellpower", GOSSIP_SENDER_MAIN, 115);
					player->ADD_GOSSIP_ITEM(1, "Major Agility", GOSSIP_SENDER_MAIN, 116);
					player->ADD_GOSSIP_ITEM(1, "Massacre", GOSSIP_SENDER_MAIN, 117);
					player->ADD_GOSSIP_ITEM(1, "Mongoose", GOSSIP_SENDER_MAIN, 113);
					player->ADD_GOSSIP_ITEM(1, "Executioner", GOSSIP_SENDER_MAIN, 114);
					player->ADD_GOSSIP_ITEM(1, "<-Back", GOSSIP_SENDER_MAIN, 300);
					player->PlayerTalkClass->SendGossipMenu(100003, creature->GetGUID());
					return true;
				}
				else
				{
					player->GetSession()->SendNotification("You don't have a Two-Handed weapon equipped.");
					player->PlayerTalkClass->SendCloseGossip();
				}
			}
			break;

		case 3: // Enchant Shield
			{
				item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND);

				if (!item)
				{
					player->GetSession()->SendNotification("You must equip a shield first.");
					player->PlayerTalkClass->SendCloseGossip();
					return false;
				}

				if (item->GetTemplate()->InventoryType == INVTYPE_SHIELD)
				{
					player->ADD_GOSSIP_ITEM(1, "+20 Defense Rating", GOSSIP_SENDER_MAIN, 118);
					player->ADD_GOSSIP_ITEM(1, "+25 Intellect", GOSSIP_SENDER_MAIN, 119);
					player->ADD_GOSSIP_ITEM(1, "+12 Resilience", GOSSIP_SENDER_MAIN, 120);
					player->ADD_GOSSIP_ITEM(1, "+81 Block Value & -50% Disarm Effect", GOSSIP_SENDER_MAIN, 121);
					player->ADD_GOSSIP_ITEM(1, "+18 Stamina", GOSSIP_SENDER_MAIN, 122);
					player->ADD_GOSSIP_ITEM(1, "+36 Block Value", GOSSIP_SENDER_MAIN, 123);
					player->ADD_GOSSIP_ITEM(1, "<-Back", GOSSIP_SENDER_MAIN, 300);
					player->PlayerTalkClass->SendGossipMenu(100004, creature->GetGUID());
					return true;
				}
				else
				{
					player->GetSession()->SendNotification("You don't have a shield equipped.");
					player->PlayerTalkClass->SendCloseGossip();
				}
			}
			break;

		case 4: // Enchant Head
			player->ADD_GOSSIP_ITEM(1, "30 Spell Power + 10 Mp5 ", GOSSIP_SENDER_MAIN, 124);
			player->ADD_GOSSIP_ITEM(1, "30 Spell Power + 20 Crit Rating", GOSSIP_SENDER_MAIN, 125);
			player->ADD_GOSSIP_ITEM(1, "29 Spell Power + 20 Resilience Rating", GOSSIP_SENDER_MAIN, 126);
			player->ADD_GOSSIP_ITEM(1, "30 Stamina + 25 Resilience Rating", GOSSIP_SENDER_MAIN, 127);
			player->ADD_GOSSIP_ITEM(1, "37 Stamina + 20 Defense Rating", GOSSIP_SENDER_MAIN, 128);
			player->ADD_GOSSIP_ITEM(1, "50 Attack Power + 20 Crit Rating", GOSSIP_SENDER_MAIN, 129);
			player->ADD_GOSSIP_ITEM(1, "50 Attack Power + 20 Resilience Rating", GOSSIP_SENDER_MAIN, 130);
			player->ADD_GOSSIP_ITEM(1, "25 Arcane Resist + 30 Stamina", GOSSIP_SENDER_MAIN, 131);
			player->ADD_GOSSIP_ITEM(1, "25 Fire Resist + 30 Stamina", GOSSIP_SENDER_MAIN, 132);
			player->ADD_GOSSIP_ITEM(1, "25 Shadow Resist + 30 Stamina", GOSSIP_SENDER_MAIN, 133);
			player->ADD_GOSSIP_ITEM(1, "25 Frost Resist + 30 Stamina", GOSSIP_SENDER_MAIN, 134);
			player->ADD_GOSSIP_ITEM(1, "25 Nature Resist + 30 Stamina", GOSSIP_SENDER_MAIN, 135);
			player->ADD_GOSSIP_ITEM(1, "<-Back", GOSSIP_SENDER_MAIN, 300);
			player->PlayerTalkClass->SendGossipMenu(100005, creature->GetGUID());
			return true;
			break;

		case 5: // Enchant Shoulders
			if (player->HasSkill(SKILL_INSCRIPTION) && player->GetSkillValue(SKILL_INSCRIPTION) == 450)
			{
				player->ADD_GOSSIP_ITEM(1, "120 Attack Power + 15 Crit Rating", GOSSIP_SENDER_MAIN, 136);
				player->ADD_GOSSIP_ITEM(1, "70 Spell Power + 8 Mp5", GOSSIP_SENDER_MAIN, 137);
				player->ADD_GOSSIP_ITEM(1, "60 Dodge Rating + 15 Defense Rating", GOSSIP_SENDER_MAIN, 138);
				player->ADD_GOSSIP_ITEM(1, "70 Spell Power + 15 Crit Rating", GOSSIP_SENDER_MAIN, 139);
			}
			player->ADD_GOSSIP_ITEM(1, "40 Attack Power + 15 Crit Rating", GOSSIP_SENDER_MAIN, 140);
			player->ADD_GOSSIP_ITEM(1, "24 Spell Power + 8 Mp5", GOSSIP_SENDER_MAIN, 141);
			player->ADD_GOSSIP_ITEM(1, "30 Stamina + 15 Resilience", GOSSIP_SENDER_MAIN, 142);
			player->ADD_GOSSIP_ITEM(1, "20 Dodge Rating + 15 Defense Rating", GOSSIP_SENDER_MAIN, 143);
			player->ADD_GOSSIP_ITEM(1, "24 Spell Power + 15 Crit Rating", GOSSIP_SENDER_MAIN, 144);
			player->ADD_GOSSIP_ITEM(1, "23 Spell Power + 15 Resilience", GOSSIP_SENDER_MAIN, 145);
			player->ADD_GOSSIP_ITEM(1, "40 Attack Power + 15 Resilience", GOSSIP_SENDER_MAIN, 146);
			player->ADD_GOSSIP_ITEM(1, "<-Back", GOSSIP_SENDER_MAIN, 300);
			player->PlayerTalkClass->SendGossipMenu(100006, creature->GetGUID());
			return true;
			break;

		case 6: // Enchant Cloak
			player->ADD_GOSSIP_ITEM(1, "+27 Spell Power + Parachute", GOSSIP_SENDER_MAIN, 147);
			player->ADD_GOSSIP_ITEM(1, "+10 Agility + Slightly Stealth Increase", GOSSIP_SENDER_MAIN, 148);                    
			player->ADD_GOSSIP_ITEM(1, "+400 Mana (Tailoring)", GOSSIP_SENDER_MAIN, 149);
			player->ADD_GOSSIP_ITEM(1, "+295 Spell Power (Tailoring)", GOSSIP_SENDER_MAIN, 150);
			player->ADD_GOSSIP_ITEM(1, "+400 Attack Power (Tailoring)", GOSSIP_SENDER_MAIN, 151);                    
			player->ADD_GOSSIP_ITEM(1, "+10 Spirit + Slighty reduce threat", GOSSIP_SENDER_MAIN, 152);
			player->ADD_GOSSIP_ITEM(1, "+16 Defense Rating", GOSSIP_SENDER_MAIN, 153);
			player->ADD_GOSSIP_ITEM(1, "+35 Spell Penetration", GOSSIP_SENDER_MAIN, 154);
			player->ADD_GOSSIP_ITEM(1, "+225 Armor", GOSSIP_SENDER_MAIN, 155);
			player->ADD_GOSSIP_ITEM(1, "+22 Agility", GOSSIP_SENDER_MAIN, 156);
			player->ADD_GOSSIP_ITEM(1, "+23 Haste", GOSSIP_SENDER_MAIN, 157);
			player->ADD_GOSSIP_ITEM(1, "<-Back", GOSSIP_SENDER_MAIN, 300);
			player->PlayerTalkClass->SendGossipMenu(100007, creature->GetGUID());
			return true;
			break;

		case 7: //Enchant chest
			player->ADD_GOSSIP_ITEM(1, "+10 All Stats", GOSSIP_SENDER_MAIN, 158);
			player->ADD_GOSSIP_ITEM(1, "+275 Health", GOSSIP_SENDER_MAIN, 159);
			player->ADD_GOSSIP_ITEM(1, "+10 Mp5", GOSSIP_SENDER_MAIN, 160);
			player->ADD_GOSSIP_ITEM(1, "+20 Resilience", GOSSIP_SENDER_MAIN, 161);
			player->ADD_GOSSIP_ITEM(1, "+22 Defense Rating", GOSSIP_SENDER_MAIN, 162);
			player->ADD_GOSSIP_ITEM(1, "<-Back", GOSSIP_SENDER_MAIN, 300);
			player->PlayerTalkClass->SendGossipMenu(100008, creature->GetGUID());
			return true;
			break;

		case 8: //Enchant Bracers
			player->ADD_GOSSIP_ITEM(1, "+40 Stamina", GOSSIP_SENDER_MAIN, 163);
			player->ADD_GOSSIP_ITEM(1, "+30 Spell Power", GOSSIP_SENDER_MAIN, 164);
			player->ADD_GOSSIP_ITEM(1, "+50 Attack Power", GOSSIP_SENDER_MAIN, 165);
			player->ADD_GOSSIP_ITEM(1, "+18 Spirit", GOSSIP_SENDER_MAIN, 166);
			player->ADD_GOSSIP_ITEM(1, "+15 Expertise Rating", GOSSIP_SENDER_MAIN, 167);
			player->ADD_GOSSIP_ITEM(1, "+6 All Stats", GOSSIP_SENDER_MAIN, 168);
			player->ADD_GOSSIP_ITEM(1, "+16 Intellect", GOSSIP_SENDER_MAIN, 169);
			player->ADD_GOSSIP_ITEM(1, "+70 Arcane Resistance (LW)", GOSSIP_SENDER_MAIN, 170);
			player->ADD_GOSSIP_ITEM(1, "+70 Fire Resistance (LW)", GOSSIP_SENDER_MAIN, 171);
			player->ADD_GOSSIP_ITEM(1, "+70 Frost Resistance (LW)", GOSSIP_SENDER_MAIN, 172);
			player->ADD_GOSSIP_ITEM(1, "+70 Nature Resistance (LW)", GOSSIP_SENDER_MAIN, 173);
			player->ADD_GOSSIP_ITEM(1, "+70 Shadow Resistance (LW)", GOSSIP_SENDER_MAIN, 174);
			player->ADD_GOSSIP_ITEM(1, "+130 Attack Power (LW)", GOSSIP_SENDER_MAIN, 175);
			player->ADD_GOSSIP_ITEM(1, "+102 Stamina (LW)", GOSSIP_SENDER_MAIN, 176);
			player->ADD_GOSSIP_ITEM(1, "+76 Spell Power (LW)", GOSSIP_SENDER_MAIN, 177);
			player->ADD_GOSSIP_ITEM(1, "<-Back", GOSSIP_SENDER_MAIN, 300);
			player->PlayerTalkClass->SendGossipMenu(100009, creature->GetGUID());
			return true;
			break;

		case 9: //Enchant Gloves
			player->ADD_GOSSIP_ITEM(1, "+16 Crit Rating", GOSSIP_SENDER_MAIN, 178);
			player->ADD_GOSSIP_ITEM(1, "+10 Parry Rating + 2% Threat", GOSSIP_SENDER_MAIN, 179);
			player->ADD_GOSSIP_ITEM(1, "+44 Attack Power", GOSSIP_SENDER_MAIN, 180);
			player->ADD_GOSSIP_ITEM(1, "+20 Agility", GOSSIP_SENDER_MAIN, 181);
			player->ADD_GOSSIP_ITEM(1, "+20 Hit Rating", GOSSIP_SENDER_MAIN, 182);
			player->ADD_GOSSIP_ITEM(1, "+15 Expertise Rating", GOSSIP_SENDER_MAIN, 183);
			player->ADD_GOSSIP_ITEM(1, "+28 Spell Power", GOSSIP_SENDER_MAIN, 199);
			player->ADD_GOSSIP_ITEM(1, "<-Back", GOSSIP_SENDER_MAIN, 300);
			player->PlayerTalkClass->SendGossipMenu(100010, creature->GetGUID());
			return true;
			break;

		case 10: //Enchant legs
			player->ADD_GOSSIP_ITEM(1, "40 Reslience + 28 Stamina", GOSSIP_SENDER_MAIN, 184);
			player->ADD_GOSSIP_ITEM(1, "22 Agility + 55 Stamina", GOSSIP_SENDER_MAIN, 185);
			player->ADD_GOSSIP_ITEM(1, "75 Attack Power + 22 Crit Rating", GOSSIP_SENDER_MAIN, 186);
			player->ADD_GOSSIP_ITEM(1, "50 Spell Power + 20 Spirit", GOSSIP_SENDER_MAIN, 187);
			player->ADD_GOSSIP_ITEM(1, "50 Spell Power + 30 Stamina", GOSSIP_SENDER_MAIN, 188);
			player->ADD_GOSSIP_ITEM(1, "<-Back", GOSSIP_SENDER_MAIN, 300);
			player->PlayerTalkClass->SendGossipMenu(100011, creature->GetGUID());
			return true;
			break;

		case 11: //Enchant feet
			player->ADD_GOSSIP_ITEM(1, "+32 Attack Power ", GOSSIP_SENDER_MAIN, 191);
			player->ADD_GOSSIP_ITEM(1, "+15 Stamina + Minor Movement Speed Increase", GOSSIP_SENDER_MAIN, 192);
			player->ADD_GOSSIP_ITEM(1, "+16 Agility", GOSSIP_SENDER_MAIN, 193);
			player->ADD_GOSSIP_ITEM(1, "+18 Spirit", GOSSIP_SENDER_MAIN, 194);
			player->ADD_GOSSIP_ITEM(1, "+7 Mp5 + Health every 5 Seconds", GOSSIP_SENDER_MAIN, 195);
			player->ADD_GOSSIP_ITEM(1, "+12 Hit Rating + Crit Rating", GOSSIP_SENDER_MAIN, 196);
			player->ADD_GOSSIP_ITEM(1, "+22 Stamina", GOSSIP_SENDER_MAIN, 197);
			player->ADD_GOSSIP_ITEM(1, "<-Back", GOSSIP_SENDER_MAIN, 300);
			player->PlayerTalkClass->SendGossipMenu(100012, creature->GetGUID());
			return true;
			break;

		case 12: //Enchant rings
			player->ADD_GOSSIP_ITEM(1, "+40 Attack Power (JW)", GOSSIP_SENDER_MAIN, 202);
			player->ADD_GOSSIP_ITEM(1, "+12 Spell Power", GOSSIP_SENDER_MAIN, 203);
			player->ADD_GOSSIP_ITEM(1, "+30 Stamina", GOSSIP_SENDER_MAIN, 204);
			player->ADD_GOSSIP_ITEM(1, "<-Back", GOSSIP_SENDER_MAIN, 300);
			player->PlayerTalkClass->SendGossipMenu(100013, creature->GetGUID());
			return true;
			break;

		case 13: //Enchant Off-Hand weapons
			{
				item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND);

				if(!item)
				{
					player->GetSession()->SendNotification("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
					return false;
				}

				if (item->GetTemplate()->InventoryType == INVTYPE_WEAPON)
				{
					player->ADD_GOSSIP_ITEM(1, "Blade Ward", GOSSIP_SENDER_MAIN, 205);
					player->ADD_GOSSIP_ITEM(1, "Blood Draining", GOSSIP_SENDER_MAIN, 219);
					player->ADD_GOSSIP_ITEM(1, "Exceptional Agility", GOSSIP_SENDER_MAIN, 206);
					player->ADD_GOSSIP_ITEM(1, "Exceptional Spirit", GOSSIP_SENDER_MAIN, 207);
					player->ADD_GOSSIP_ITEM(1, "Berserking", GOSSIP_SENDER_MAIN, 208);
					player->ADD_GOSSIP_ITEM(1, "Accuracy", GOSSIP_SENDER_MAIN, 209);
					player->ADD_GOSSIP_ITEM(1, "Black Magic", GOSSIP_SENDER_MAIN, 210);
					player->ADD_GOSSIP_ITEM(1, "Battlemaster", GOSSIP_SENDER_MAIN, 211);
					player->ADD_GOSSIP_ITEM(1, "Icebreaker", GOSSIP_SENDER_MAIN, 212);
					player->ADD_GOSSIP_ITEM(1, "Lifeward", GOSSIP_SENDER_MAIN, 213);
					player->ADD_GOSSIP_ITEM(1, "Titanguard", GOSSIP_SENDER_MAIN, 214);
					player->ADD_GOSSIP_ITEM(1, "Superior Potency", GOSSIP_SENDER_MAIN, 215);
					player->ADD_GOSSIP_ITEM(1, "Mighty Spellpower", GOSSIP_SENDER_MAIN, 216);
					player->ADD_GOSSIP_ITEM(1, "Mongoose", GOSSIP_SENDER_MAIN, 217);
					player->ADD_GOSSIP_ITEM(1, "Executioner", GOSSIP_SENDER_MAIN, 218);
					player->ADD_GOSSIP_ITEM(1, "<-Back", GOSSIP_SENDER_MAIN, 300);
					player->PlayerTalkClass->SendGossipMenu(100002, creature->GetGUID());
					return true;
				}
				else
				{
					player->GetSession()->SendNotification("Your Off-Hand is not a weapon.");
					player->PlayerTalkClass->SendCloseGossip();
				}
			}
			break;

		case 14: //Remove enchant menu
			player->ADD_GOSSIP_ITEM(1, "Remove enchant on Main-hand", GOSSIP_SENDER_MAIN, 400);
			player->ADD_GOSSIP_ITEM(1, "Remove enchant on Off-hand", GOSSIP_SENDER_MAIN, 401);
			player->ADD_GOSSIP_ITEM(1, "Remove enchant on Head", GOSSIP_SENDER_MAIN, 402);
			player->ADD_GOSSIP_ITEM(1, "Remove enchant on Shoulders", GOSSIP_SENDER_MAIN, 403);
			player->ADD_GOSSIP_ITEM(1, "Remove enchant on Cloak", GOSSIP_SENDER_MAIN, 404);
			player->ADD_GOSSIP_ITEM(1, "Remove enchant on Chest", GOSSIP_SENDER_MAIN, 405);
			player->ADD_GOSSIP_ITEM(1, "Remove enchant on Bracers", GOSSIP_SENDER_MAIN, 406);
			player->ADD_GOSSIP_ITEM(1, "Remove enchant on Gloves", GOSSIP_SENDER_MAIN, 407);
			player->ADD_GOSSIP_ITEM(1, "Remove enchant on Legs", GOSSIP_SENDER_MAIN, 408);
			player->ADD_GOSSIP_ITEM(1, "Remove enchant on Feet", GOSSIP_SENDER_MAIN, 409);
			player->ADD_GOSSIP_ITEM(1, "Remove enchant on Rings", GOSSIP_SENDER_MAIN, 409);
			player->ADD_GOSSIP_ITEM(1, "<-Back", GOSSIP_SENDER_MAIN, 300);
			player->PlayerTalkClass->SendGossipMenu(100014, creature->GetGUID());
			return true;
			break;

		case 15: // Socket Belt
			AdvancedEnchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_WAIST), PRISMATIC_ENCHANTMENT_SLOT, ENCHANT_WAIST_SOCKET); // Socket Belt
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 100:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_MAINHAND), ENCHANT_WEP_AGILITY_1H);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 101:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_MAINHAND), ENCHANT_WEP_SPIRIT);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 102:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_MAINHAND), ENCHANT_WEP_BLADE_WARD);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 103:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_MAINHAND), ENCHANT_WEP_BLOOD_DRAINING);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 104:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_MAINHAND), ENCHANT_WEP_BERSERKING);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 105:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_MAINHAND), ENCHANT_WEP_ACCURACY);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 106:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_MAINHAND), ENCHANT_WEP_BLACK_MAGIC);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 107:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_MAINHAND), ENCHANT_WEP_BATTLEMASTER);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 108:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_MAINHAND), ENCHANT_WEP_ICEBREAKER);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 109:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_MAINHAND), ENCHANT_WEP_LIFEWARD);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 110:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_MAINHAND), ENCHANT_WEP_TITANGUARD);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 111:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_MAINHAND), ENCHANT_WEP_POTENCY);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 112:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_MAINHAND), ENCHANT_WEP_MIGHTY_SPELL_POWER);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 113:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_MAINHAND), ENCHANT_2WEP_MONGOOSE);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 114:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_MAINHAND), ENCHANT_WEP_EXECUTIONER);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 115:
			{
				item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_MAINHAND);

				if (!item)
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a 2H weapon equipped.");
					player->PlayerTalkClass->SendCloseGossip();
					return false;
				}

				if (item->GetTemplate()->InventoryType == INVTYPE_2HWEAPON)
				{
					Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_MAINHAND), ENCHANT_2WEP_GREATER_SPELL_POWER);
					player->PlayerTalkClass->SendCloseGossip();
				}
				else
				{
					player->GetSession()->SendAreaTriggerMessage("You don't have a Two-Handed weapon equipped.");
					player->PlayerTalkClass->SendCloseGossip();
				}
			}
			break;

		case 116:
			{
				item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_MAINHAND);

				if (!item)
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a 2H weapon equipped.");
					player->PlayerTalkClass->SendCloseGossip();
					return false;
				}

				if (item->GetTemplate()->InventoryType == INVTYPE_2HWEAPON)
				{
					Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_MAINHAND), ENCHANT_2WEP_AGILITY);
					player->PlayerTalkClass->SendCloseGossip();
				}
				else
				{
					player->GetSession()->SendAreaTriggerMessage("You don't have a Two-Handed weapon equipped.");
					player->PlayerTalkClass->SendCloseGossip();
				}
			}
			break;

		case 117:
			{
				item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_MAINHAND);

				if (!item)
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a 2H weapon equipped.");
					player->PlayerTalkClass->SendCloseGossip();
					return false;
				}

				if (item->GetTemplate()->InventoryType == INVTYPE_2HWEAPON)
				{
					Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_MAINHAND), ENCHANT_2WEP_MASSACRE);
					player->PlayerTalkClass->SendCloseGossip();
				}
				else
				{
					player->GetSession()->SendAreaTriggerMessage("You don't have a Two-Handed weapon equipped.");
					player->PlayerTalkClass->SendCloseGossip();
				}
			}
			break;

		case 118:
			{
				item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND);

				if(!item)
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a shield equipped.");
					player->PlayerTalkClass->SendCloseGossip();
					return false;
				}

				if (item->GetTemplate()->InventoryType == INVTYPE_SHIELD)
				{
					Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND), ENCHANT_SHIELD_DEFENSE);
					player->PlayerTalkClass->SendCloseGossip();
				}
				else
				{
					player->GetSession()->SendAreaTriggerMessage("You don't have a shield equipped.");
					player->PlayerTalkClass->SendCloseGossip();
				}						
			}
			break;

		case 119:
			{
				item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND);

				if(!item)
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a shield equipped.");
					player->PlayerTalkClass->SendCloseGossip();
					return false;
				}

				if (item->GetTemplate()->InventoryType == INVTYPE_SHIELD)
				{
					Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND), ENCHANT_SHIELD_INTELLECT);
					player->PlayerTalkClass->SendCloseGossip();
				}
				else
				{
					player->GetSession()->SendAreaTriggerMessage("You don't have a shield equipped.");
					player->PlayerTalkClass->SendCloseGossip();
				}
			}
			break;

		case 120:
			{
				item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND);

				if(!item)
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a shield equipped.");
					player->PlayerTalkClass->SendCloseGossip();
					return false;
				}

				if (item->GetTemplate()->InventoryType == INVTYPE_SHIELD)
				{
					Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND), ENCHANT_SHIELD_RESILIENCE);
					player->PlayerTalkClass->SendCloseGossip();
				}
				else
				{
					player->GetSession()->SendAreaTriggerMessage("You don't have a shield equipped.");
					player->PlayerTalkClass->SendCloseGossip();
				}
			}
			break;

		case 121:
			{
				item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND);

				if(!item)
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a shield equipped.");
					player->PlayerTalkClass->SendCloseGossip();
					return false;
				}

				if (item->GetTemplate()->InventoryType == INVTYPE_SHIELD)
				{
					Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND), ENCHANT_SHIELD_TITANIUM_PLATING);
					player->PlayerTalkClass->SendCloseGossip();
				}
				else
				{
					player->GetSession()->SendAreaTriggerMessage("You don't have a shield equipped.");
					player->PlayerTalkClass->SendCloseGossip();
				}
			}
			break;

		case 122:
			{
				item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND);

				if(!item)
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a shield equipped.");
					player->PlayerTalkClass->SendCloseGossip();
					return false;
				}

				if (item->GetTemplate()->InventoryType == INVTYPE_SHIELD)
				{
					Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND), ENCHANT_SHIELD_STAMINA);
					player->PlayerTalkClass->SendCloseGossip();
				}
				else
				{
					player->GetSession()->SendAreaTriggerMessage("You don't have a shield equipped.");
					player->PlayerTalkClass->SendCloseGossip();
				}
			}
			break;

		case 123:
			{
				item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND);

				if(!item)
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a shield equipped.");
					player->PlayerTalkClass->SendCloseGossip();
					return false;
				}

				if (item->GetTemplate()->InventoryType == INVTYPE_SHIELD)
				{
					Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND), ENCHANT_SHIELD_TOUGHSHIELD);
					player->PlayerTalkClass->SendCloseGossip();
				}
				else
				{
					player->GetSession()->SendAreaTriggerMessage("You don't have a shield equipped.");
					player->PlayerTalkClass->SendCloseGossip();
				}
			}
			break;

		case 124:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_HEAD), ENCHANT_HEAD_BLISSFUL_MENDING);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 125:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_HEAD), ENCHANT_HEAD_BURNING_MYSTERIES);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 126:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_HEAD), ENCHANT_HEAD_DOMINANCE);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 127:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_HEAD), ENCHANT_HEAD_SAVAGE_GLADIATOR);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 128:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_HEAD), ENCHANT_HEAD_STALWART_PROTECTOR);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 129:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_HEAD), ENCHANT_HEAD_TORMENT);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 130:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_HEAD), ENCHANT_HEAD_TRIUMPH);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 131:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_HEAD), ENCHANT_HEAD_ECLIPSED_MOON);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 132:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_HEAD), ENCHANT_HEAD_FLAME_SOUL);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 133:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_HEAD), ENCHANT_HEAD_FLEEING_SHADOW);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 134:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_HEAD), ENCHANT_HEAD_FROSTY_SOUL);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 135:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_HEAD), ENCHANT_HEAD_TOXIC_WARDING);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 136:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_SHOULDERS), ENCHANT_SHOULDER_MASTERS_AXE);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 137:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_SHOULDERS), ENCHANT_SHOULDER_MASTERS_CRAG);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 138:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_SHOULDERS), ENCHANT_SHOULDER_MASTERS_PINNACLE);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 139:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_SHOULDERS), ENCHANT_SHOULDER_MASTERS_STORM);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 140:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_SHOULDERS), ENCHANT_SHOULDER_GREATER_AXE);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 141:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_SHOULDERS), ENCHANT_SHOULDER_GREATER_CRAG);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 142:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_SHOULDERS), ENCHANT_SHOULDER_GREATER_GLADIATOR);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 143:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_SHOULDERS), ENCHANT_SHOULDER_GREATER_PINNACLE);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 144:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_SHOULDERS), ENCHANT_SHOULDER_GREATER_STORM);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 145:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_SHOULDERS), ENCHANT_SHOULDER_DOMINANCE);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 146:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_SHOULDERS), ENCHANT_SHOULDER_TRIUMPH);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 147:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_BACK), ENCHANT_CLOAK_SPRINGY_ARACHNOWEAVE);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 148:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_BACK), ENCHANT_CLOAK_SHADOW_ARMOR);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 149:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_BACK), ENCHANT_CLOAK_DARKGLOW_EMBROIDERY);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 150:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_BACK), ENCHANT_CLOAK_LIGHTWEAVE_EMBROIDERY);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 151:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_BACK), ENCHANT_CLOAK_SWORDGUARD_EMBROIDERY);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 152:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_BACK), ENCHANT_CLOAK_WISDOM);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 153:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_BACK), ENCHANT_CLOAK_TITANWEAVE);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 154:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_BACK), ENCHANT_CLOAK_SPELL_PIERCING);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 155:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_BACK), ENCHANT_CLOAK_MIGHTY_ARMOR);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 156:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_BACK), ENCHANT_CLOAK_MAJOR_AGILITY);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 157:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_BACK), ENCHANT_CLOAK_GREATER_SPEED);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 158:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_CHEST), ENCHANT_CHEST_POWERFUL_STATS);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 159:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_CHEST), ENCHANT_CHEST_SUPER_HEALTH);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 160:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_CHEST), ENCHANT_CHEST_GREATER_MAINA_REST);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 161:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_CHEST), ENCHANT_CHEST_EXCEPTIONAL_RESIL);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 162:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_CHEST), ENCHANT_CHEST_GREATER_DEFENSE);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 163:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_WRISTS), ENCHANT_BRACERS_MAJOR_STAMINA);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 164:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_WRISTS), ENCHANT_BRACERS_SUPERIOR_SP);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 165:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_WRISTS), ENCHANT_BRACERS_GREATER_ASSUALT);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 166:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_WRISTS), ENCHANT_BRACERS_MAJOR_SPIRT);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 167:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_WRISTS), ENCHANT_BRACERS_EXPERTISE);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 168:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_WRISTS), ENCHANT_BRACERS_GREATER_STATS);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 169:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_WRISTS), ENCHANT_BRACERS_INTELLECT);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 170:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_WRISTS), ENCHANT_BRACERS_FURL_ARCANE);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 171:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_WRISTS), ENCHANT_BRACERS_FURL_FIRE);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 172:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_WRISTS), ENCHANT_BRACERS_FURL_FROST);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 173:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_WRISTS), ENCHANT_BRACERS_FURL_NATURE);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 174:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_WRISTS), ENCHANT_BRACERS_FURL_SHADOW);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 175:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_WRISTS), ENCHANT_BRACERS_FURL_ATTACK);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 176:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_WRISTS), ENCHANT_BRACERS_FURL_STAMINA);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 177:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_WRISTS), ENCHANT_BRACERS_FURL_SPELLPOWER);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 178:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_HANDS), ENCHANT_GLOVES_GREATER_BLASTING);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 179:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_HANDS), ENCHANT_GLOVES_ARMSMAN);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 180:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_HANDS), ENCHANT_GLOVES_CRUSHER);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 181:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_HANDS), ENCHANT_GLOVES_AGILITY);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 182:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_HANDS), ENCHANT_GLOVES_PRECISION);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 183:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_HANDS), ENCHANT_GLOVES_EXPERTISE);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 184:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_LEGS), ENCHANT_LEG_EARTHEN);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 185:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_LEGS), ENCHANT_LEG_FROSTHIDE);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 186:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_LEGS), ENCHANT_LEG_ICESCALE);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 187:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_LEGS), ENCHANT_LEG_BRILLIANT_SPELLTHREAD);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 188:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_LEGS), ENCHANT_LEG_SAPPHIRE_SPELLTHREAD);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 191:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_FEET), ENCHANT_BOOTS_GREATER_ASSULT);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 192:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_FEET), ENCHANT_BOOTS_TUSKARS_VITLIATY);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 193:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_FEET), ENCHANT_BOOTS_SUPERIOR_AGILITY);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 194:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_FEET), ENCHANT_BOOTS_GREATER_SPIRIT);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 195:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_FEET), ENCHANT_BOOTS_GREATER_VITALITY);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 196:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_FEET), ENCHANT_BOOTS_ICEWALKER);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 197:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_FEET), ENCHANT_BOOTS_GREATER_FORTITUDE);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 199:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_HANDS), ENCHANT_GLOVES_EXCEPTIONAL_SPELLPOWER);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 202:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_FINGER1), ENCHANT_RING_ASSULT);
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_FINGER2), ENCHANT_RING_ASSULT);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 203:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_FINGER1), ENCHANT_RING_GREATER_SP);
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_FINGER2), ENCHANT_RING_GREATER_SP);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 204:
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_FINGER1), ENCHANT_RING_STAMINA);
			Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_FINGER2), ENCHANT_RING_STAMINA);
			player->PlayerTalkClass->SendCloseGossip();
			break;

		case 205:
			{
				item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND);

				if(!item)
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
					return false;
				}

				if (item->GetTemplate()->InventoryType == INVTYPE_WEAPON)
				{
					Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND), ENCHANT_WEP_BLADE_WARD);
					player->PlayerTalkClass->SendCloseGossip();
				}
				else
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
				}
			}
			break;

		case 206:
			{
				item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND);

				if(!item)
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
					return false;
				}

				if (item->GetTemplate()->InventoryType == INVTYPE_WEAPON)
				{
					Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND), ENCHANT_WEP_AGILITY_1H);
					player->PlayerTalkClass->SendCloseGossip();
				}
				else
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
				}
			}
			break;

		case 207:
			{
				item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND);

				if(!item)
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
					return false;
				}

				if (item->GetTemplate()->InventoryType == INVTYPE_WEAPON)
				{
					Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND), ENCHANT_WEP_SPIRIT);
					player->PlayerTalkClass->SendCloseGossip();
				}
				else
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
				}
			}
			break;

		case 208:
			{
				item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND);

				if(!item)
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
					return false;
				}

				if (item->GetTemplate()->InventoryType == INVTYPE_WEAPON)
				{
					Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND), ENCHANT_WEP_BERSERKING);
					player->PlayerTalkClass->SendCloseGossip();
				}
				else
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
				}
			}
			break;

		case 209:
			{
				item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND);

				if(!item)
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
					return false;
				}

				if (item->GetTemplate()->InventoryType == INVTYPE_WEAPON)
				{
					Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND), ENCHANT_WEP_ACCURACY);
					player->PlayerTalkClass->SendCloseGossip();
				}
				else
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
				}
			}
			break;

		case 210:
			{
				item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND);

				if(!item)
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
					return false;
				}

				if (item->GetTemplate()->InventoryType == INVTYPE_WEAPON)
				{
					Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND), ENCHANT_WEP_BLACK_MAGIC);
					player->PlayerTalkClass->SendCloseGossip();
				}
				else
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
				}
			}
			break;

		case 211:
			{
				item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND);

				if(!item)
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
					return false;
				}

				if (item->GetTemplate()->InventoryType == INVTYPE_WEAPON)
				{
					Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND), ENCHANT_WEP_BATTLEMASTER);
					player->PlayerTalkClass->SendCloseGossip();
				}
				else
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
				}
			}
			break;

		case 212:
			{
				item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND);

				if(!item)
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
					return false;
				}

				if (item->GetTemplate()->InventoryType == INVTYPE_WEAPON)
				{
					Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND), ENCHANT_WEP_ICEBREAKER);
					player->PlayerTalkClass->SendCloseGossip();
				}
				else
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
				}
			}
			break;

		case 213:
			{
				item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND);

				if(!item)
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
					return false;
				}

				if (item->GetTemplate()->InventoryType == INVTYPE_WEAPON)
				{
					Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND), ENCHANT_WEP_LIFEWARD);
					player->PlayerTalkClass->SendCloseGossip();
				}
				else
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
				}
			}
			break;

		case 214:
			{
				item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND);

				if(!item)
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
					return false;
				}

				if (item->GetTemplate()->InventoryType == INVTYPE_WEAPON)
				{
					Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND), ENCHANT_WEP_TITANGUARD);
					player->PlayerTalkClass->SendCloseGossip();
				}
				else
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
				}
			}
			break;

		case 215:
			{
				item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND);

				if(!item)
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
					return false;
				}

				if (item->GetTemplate()->InventoryType == INVTYPE_WEAPON)
				{
					Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND), ENCHANT_WEP_POTENCY);
					player->PlayerTalkClass->SendCloseGossip();
				}
				else
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
				}
			}
			break;

		case 216:
			{
				item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND);

				if(!item)
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
					return false;
				}

				if (item->GetTemplate()->InventoryType == INVTYPE_WEAPON)
				{
					Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND), ENCHANT_WEP_MIGHTY_SPELL_POWER);
					player->PlayerTalkClass->SendCloseGossip();
				}
				else
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
				}
			}
			break;

		case 217:
			{
				item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND);

				if(!item)
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
					return false;
				}

				if (item->GetTemplate()->InventoryType == INVTYPE_WEAPON)
				{
					Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND), ENCHANT_2WEP_MONGOOSE);
					player->PlayerTalkClass->SendCloseGossip();
				}
				else
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
				}
			}
			break;

		case 218:
			{
				item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND);

				if(!item)
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
					return false;
				}

				if (item->GetTemplate()->InventoryType == INVTYPE_WEAPON)
				{
					Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND), ENCHANT_WEP_EXECUTIONER);
					player->PlayerTalkClass->SendCloseGossip();
				}
				else
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
				}
			}
			break;

		case 219:
			{
				item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND);

				if(!item)
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
					return false;
				}

				if (item->GetTemplate()->InventoryType == INVTYPE_WEAPON)
				{
					Enchant(player, player->GetItemByPos(INVENTORY_SLOT_BAG_0, EQUIPMENT_SLOT_OFFHAND), ENCHANT_WEP_BLOOD_DRAINING);
					player->PlayerTalkClass->SendCloseGossip();
				}
				else
				{
					player->GetSession()->SendAreaTriggerMessage("This enchant needs a one-hand weapon equipped in the off-hand.");
					player->PlayerTalkClass->SendCloseGossip();
				}
			}
			break;

		case 300: //<-Back menu
			OnGossipHello(player, creature);
			break;

		case 500: // Back to Main Menu..
			OnGossipHello(player, creature);
			break;
		}
		return true;
	}


};

void AddSC_npc_enchantment()
{
	new npc_enchantment();
}