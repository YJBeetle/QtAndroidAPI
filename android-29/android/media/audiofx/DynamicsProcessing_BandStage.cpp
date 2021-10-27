#include "./DynamicsProcessing_BandStage.hpp"

namespace android::media::audiofx
{
	// Fields
	
	DynamicsProcessing_BandStage::DynamicsProcessing_BandStage(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DynamicsProcessing_BandStage::DynamicsProcessing_BandStage(jboolean &arg0, jboolean &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.DynamicsProcessing$BandStage",
			"(ZZI)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jint DynamicsProcessing_BandStage::getBandCount()
	{
		return __thiz.callMethod<jint>(
			"getBandCount",
			"()I"
		);
	}
	jstring DynamicsProcessing_BandStage::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media::audiofx

