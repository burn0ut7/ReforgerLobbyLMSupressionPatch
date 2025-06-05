modded class PS_SpectatorMenu
{
	override void OnMenuOpen()
	{
		super.OnMenuOpen();
		
		ClearSupression();
	}
	
	void ClearSupression()
	{
		SCR_HUDManagerComponent hm = GetGame().GetHUDManager();
		LM_SuppressionScreenEffect suppression = LM_SuppressionScreenEffect.Cast(hm.FindInfoDisplay(LM_SuppressionScreenEffect));
		if(!suppression)
			return;
		
		suppression.ClearEffects();
	}
}