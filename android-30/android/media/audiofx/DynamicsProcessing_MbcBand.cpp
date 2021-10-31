#include "./DynamicsProcessing_MbcBand.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// QAndroidJniObject forward
	DynamicsProcessing_MbcBand::DynamicsProcessing_MbcBand(QAndroidJniObject obj) : android::media::audiofx::DynamicsProcessing_BandBase(obj) {}
	
	// Constructors
	DynamicsProcessing_MbcBand::DynamicsProcessing_MbcBand(android::media::audiofx::DynamicsProcessing_MbcBand &arg0)
		: android::media::audiofx::DynamicsProcessing_BandBase(
			"android.media.audiofx.DynamicsProcessing$MbcBand",
			"(Landroid/media/audiofx/DynamicsProcessing$MbcBand;)V",
			arg0.object()
		) {}
	DynamicsProcessing_MbcBand::DynamicsProcessing_MbcBand(jboolean arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7, jfloat arg8, jfloat arg9, jfloat arg10)
		: android::media::audiofx::DynamicsProcessing_BandBase(
			"android.media.audiofx.DynamicsProcessing$MbcBand",
			"(ZFFFFFFFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg10
		) {}
	
	// Methods
	jfloat DynamicsProcessing_MbcBand::getAttackTime()
	{
		return callMethod<jfloat>(
			"getAttackTime",
			"()F"
		);
	}
	jfloat DynamicsProcessing_MbcBand::getExpanderRatio()
	{
		return callMethod<jfloat>(
			"getExpanderRatio",
			"()F"
		);
	}
	jfloat DynamicsProcessing_MbcBand::getKneeWidth()
	{
		return callMethod<jfloat>(
			"getKneeWidth",
			"()F"
		);
	}
	jfloat DynamicsProcessing_MbcBand::getNoiseGateThreshold()
	{
		return callMethod<jfloat>(
			"getNoiseGateThreshold",
			"()F"
		);
	}
	jfloat DynamicsProcessing_MbcBand::getPostGain()
	{
		return callMethod<jfloat>(
			"getPostGain",
			"()F"
		);
	}
	jfloat DynamicsProcessing_MbcBand::getPreGain()
	{
		return callMethod<jfloat>(
			"getPreGain",
			"()F"
		);
	}
	jfloat DynamicsProcessing_MbcBand::getRatio()
	{
		return callMethod<jfloat>(
			"getRatio",
			"()F"
		);
	}
	jfloat DynamicsProcessing_MbcBand::getReleaseTime()
	{
		return callMethod<jfloat>(
			"getReleaseTime",
			"()F"
		);
	}
	jfloat DynamicsProcessing_MbcBand::getThreshold()
	{
		return callMethod<jfloat>(
			"getThreshold",
			"()F"
		);
	}
	void DynamicsProcessing_MbcBand::setAttackTime(jfloat arg0)
	{
		callMethod<void>(
			"setAttackTime",
			"(F)V",
			arg0
		);
	}
	void DynamicsProcessing_MbcBand::setExpanderRatio(jfloat arg0)
	{
		callMethod<void>(
			"setExpanderRatio",
			"(F)V",
			arg0
		);
	}
	void DynamicsProcessing_MbcBand::setKneeWidth(jfloat arg0)
	{
		callMethod<void>(
			"setKneeWidth",
			"(F)V",
			arg0
		);
	}
	void DynamicsProcessing_MbcBand::setNoiseGateThreshold(jfloat arg0)
	{
		callMethod<void>(
			"setNoiseGateThreshold",
			"(F)V",
			arg0
		);
	}
	void DynamicsProcessing_MbcBand::setPostGain(jfloat arg0)
	{
		callMethod<void>(
			"setPostGain",
			"(F)V",
			arg0
		);
	}
	void DynamicsProcessing_MbcBand::setPreGain(jfloat arg0)
	{
		callMethod<void>(
			"setPreGain",
			"(F)V",
			arg0
		);
	}
	void DynamicsProcessing_MbcBand::setRatio(jfloat arg0)
	{
		callMethod<void>(
			"setRatio",
			"(F)V",
			arg0
		);
	}
	void DynamicsProcessing_MbcBand::setReleaseTime(jfloat arg0)
	{
		callMethod<void>(
			"setReleaseTime",
			"(F)V",
			arg0
		);
	}
	void DynamicsProcessing_MbcBand::setThreshold(jfloat arg0)
	{
		callMethod<void>(
			"setThreshold",
			"(F)V",
			arg0
		);
	}
	jstring DynamicsProcessing_MbcBand::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media::audiofx

