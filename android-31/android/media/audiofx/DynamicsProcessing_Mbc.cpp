#include "./DynamicsProcessing_MbcBand.hpp"
#include "../../../JString.hpp"
#include "./DynamicsProcessing_Mbc.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// QAndroidJniObject forward
	DynamicsProcessing_Mbc::DynamicsProcessing_Mbc(QAndroidJniObject obj) : android::media::audiofx::DynamicsProcessing_BandStage(obj) {}
	
	// Constructors
	DynamicsProcessing_Mbc::DynamicsProcessing_Mbc(android::media::audiofx::DynamicsProcessing_Mbc &arg0)
		: android::media::audiofx::DynamicsProcessing_BandStage(
			"android.media.audiofx.DynamicsProcessing$Mbc",
			"(Landroid/media/audiofx/DynamicsProcessing$Mbc;)V",
			arg0.object()
		) {}
	DynamicsProcessing_Mbc::DynamicsProcessing_Mbc(jboolean arg0, jboolean arg1, jint arg2)
		: android::media::audiofx::DynamicsProcessing_BandStage(
			"android.media.audiofx.DynamicsProcessing$Mbc",
			"(ZZI)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	android::media::audiofx::DynamicsProcessing_MbcBand DynamicsProcessing_Mbc::getBand(jint arg0) const
	{
		return callObjectMethod(
			"getBand",
			"(I)Landroid/media/audiofx/DynamicsProcessing$MbcBand;",
			arg0
		);
	}
	void DynamicsProcessing_Mbc::setBand(jint arg0, android::media::audiofx::DynamicsProcessing_MbcBand arg1) const
	{
		callMethod<void>(
			"setBand",
			"(ILandroid/media/audiofx/DynamicsProcessing$MbcBand;)V",
			arg0,
			arg1.object()
		);
	}
	JString DynamicsProcessing_Mbc::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media::audiofx

