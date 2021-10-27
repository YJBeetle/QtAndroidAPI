#include "./DynamicsProcessing_EqBand.hpp"

namespace android::media::audiofx
{
	// Fields
	
	DynamicsProcessing_EqBand::DynamicsProcessing_EqBand(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DynamicsProcessing_EqBand::DynamicsProcessing_EqBand(android::media::audiofx::DynamicsProcessing_EqBand &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.DynamicsProcessing$EqBand",
			"(Landroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0.__jniObject().object()
		);
	}
	DynamicsProcessing_EqBand::DynamicsProcessing_EqBand(jboolean &arg0, jfloat &arg1, jfloat &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.DynamicsProcessing$EqBand",
			"(ZFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jfloat DynamicsProcessing_EqBand::getGain()
	{
		return __thiz.callMethod<jfloat>(
			"getGain",
			"()F"
		);
	}
	void DynamicsProcessing_EqBand::setGain(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setGain",
			"(F)V",
			arg0
		);
	}
	jstring DynamicsProcessing_EqBand::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media::audiofx

