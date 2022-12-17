class CH252D_Shaw_BlackVisr : CH252D_Shaw
{
	author = "Shaw";
	displayName = "[Shaw] CH252D Helmet";
	class XtdGearInfo
	{
		model = "CH252D_Shaw";
		Helmet = "Rookie";
		visor = "Black";
	};

	hiddenSelectionsTextures[] = {
		"\Shaws_Armour_config_Public\armours\helm\odst_helmet_rookie.paa",
		"\Shaws_Armour_config_Public\armours\helm\odst_visor_black.paa"
	};
};
class CH252D_Shaw_BlackVisr_dp : CH252D_Shaw_dp
{
	author = "Shaw";
	displayName = "[Shaw] CH252D Helmet";
	hiddenSelectionsTextures[] = {
		"\Shaws_Armour_config_Public\armours\helm\odst_helmet_rookie.paa",
		""
	};
};