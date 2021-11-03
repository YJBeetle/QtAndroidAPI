#include "../../../JString.hpp"
#include "./DynamicsProcessing_BandStage.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// QJniObject forward
	DynamicsProcessing_BandStage::DynamicsProcessing_BandStage(QJniObject obj) : android::media::audiofx::DynamicsProcessing_Stage(obj) {}
	
	// Constructors
	DynamicsProcessing_BandStage::DynamicsProcessing_BandStage(jboolean arg0, jboolean arg1, jint arg2)
		: android::media::audiofx::DynamicsProcessing_Stage(
			"android.media.audiofx.DynamicsProcessing$BandStage",
			"(ZZI)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint DynamicsProcessing_BandStage::getBandCount()
	{
		return callMethod<jint>(
			"getBandCount",
			"()I"
		);
	}
	JString DynamicsProcessing_BandStage::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media::audiofx

