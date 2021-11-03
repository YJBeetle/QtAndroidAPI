#include "./DynamicsProcessing_EqBand.hpp"
#include "../../../JString.hpp"
#include "./DynamicsProcessing_Eq.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// QJniObject forward
	DynamicsProcessing_Eq::DynamicsProcessing_Eq(QJniObject obj) : android::media::audiofx::DynamicsProcessing_BandStage(obj) {}
	
	// Constructors
	DynamicsProcessing_Eq::DynamicsProcessing_Eq(android::media::audiofx::DynamicsProcessing_Eq &arg0)
		: android::media::audiofx::DynamicsProcessing_BandStage(
			"android.media.audiofx.DynamicsProcessing$Eq",
			"(Landroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0.object()
		) {}
	DynamicsProcessing_Eq::DynamicsProcessing_Eq(jboolean arg0, jboolean arg1, jint arg2)
		: android::media::audiofx::DynamicsProcessing_BandStage(
			"android.media.audiofx.DynamicsProcessing$Eq",
			"(ZZI)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	android::media::audiofx::DynamicsProcessing_EqBand DynamicsProcessing_Eq::getBand(jint arg0)
	{
		return callObjectMethod(
			"getBand",
			"(I)Landroid/media/audiofx/DynamicsProcessing$EqBand;",
			arg0
		);
	}
	void DynamicsProcessing_Eq::setBand(jint arg0, android::media::audiofx::DynamicsProcessing_EqBand arg1)
	{
		callMethod<void>(
			"setBand",
			"(ILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1.object()
		);
	}
	JString DynamicsProcessing_Eq::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media::audiofx

