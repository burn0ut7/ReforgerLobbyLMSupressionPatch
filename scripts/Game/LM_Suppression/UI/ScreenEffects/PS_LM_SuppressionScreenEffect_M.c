modded class LM_SuppressionScreenEffect
{	
	protected bool m_isSpectating = false;
	
	override void DisplayControlledEntityChanged(IEntity from, IEntity to)
	{
		super.DisplayControlledEntityChanged(from, to);
		
		PS_PlayableControllerComponent playableControllerComponent = PS_PlayableManager.GetPlayableController();
		if(playableControllerComponent)
			m_isSpectating = playableControllerComponent.IsSpectating();
		
		ClearEffects();
		s_fBlurriness = 0;
	}
	
	override void UpdateEffect(float timeSlice)
	{
		if(m_isSpectating)
			return;
			
		super.UpdateEffect(timeSlice);
	}
	
	override protected void FlinchEffect()
	{
		if(m_isSpectating)
			return;
			
		super.FlinchEffect();
	}
}