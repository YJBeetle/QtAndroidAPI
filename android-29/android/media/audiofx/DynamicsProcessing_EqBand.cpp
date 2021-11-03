#include "../../../JString.hpp"
#include "./DynamicsProcessing_EqBand.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// QJniObject forward
	DynamicsProcessing_EqBand::DynamicsProcessing_EqBand(QJniObject obj) : android::media::audiofx::DynamicsProcessing_BandBase(obj) {}
	
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
	JString DynamicsProcessing_EqBand::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media::audiofx

