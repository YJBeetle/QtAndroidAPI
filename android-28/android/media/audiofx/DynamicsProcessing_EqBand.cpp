#include "./DynamicsProcessing_EqBand.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// QAndroidJniObject forward
	DynamicsProcessing_EqBand::DynamicsProcessing_EqBand(QAndroidJniObject obj) : android::media::audiofx::DynamicsProcessing_BandBase(obj) {}
	
	// Constructors
	DynamicsProcessing_EqBand::DynamicsProcessing_EqBand(android::media::audiofx::DynamicsProcessing_EqBand &arg0)
		: android::media::audiofx::DynamicsProcessing_BandBase(
			"android.media.audiofx.DynamicsProcessing$EqBand",
			"(Landroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0.object()
		) {}
	DynamicsProcessing_EqBand::DynamicsProcessing_EqBand(jboolean arg0, jfloat arg1, jfloat arg2)
		: android::media::audiofx::DynamicsProcessing_BandBase(
			"android.media.audiofx.DynamicsProcessing$EqBand",
			"(ZFF)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jfloat DynamicsProcessing_EqBand::getGain()
	{
		return callMethod<jfloat>(
			"getGain",
			"()F"
		);
	}
	void DynamicsProcessing_EqBand::setGain(jfloat arg0)
	{
		callMethod<void>(
			"setGain",
			"(F)V",
			arg0
		);
	}
	jstring DynamicsProcessing_EqBand::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media::audiofx
