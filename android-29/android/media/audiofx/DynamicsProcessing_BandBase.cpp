#include "./DynamicsProcessing_BandBase.hpp"

namespace android::media::audiofx
{
	// Fields
	
	DynamicsProcessing_BandBase::DynamicsProcessing_BandBase(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DynamicsProcessing_BandBase::DynamicsProcessing_BandBase(jboolean &arg0, jfloat &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.DynamicsProcessing$BandBase",
			"(ZF)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jfloat DynamicsProcessing_BandBase::getCutoffFrequency()
	{
		return __thiz.callMethod<jfloat>(
			"getCutoffFrequency",
			"()F"
		);
	}
	jboolean DynamicsProcessing_BandBase::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	void DynamicsProcessing_BandBase::setCutoffFrequency(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setCutoffFrequency",
			"(F)V",
			arg0
		);
	}
	void DynamicsProcessing_BandBase::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	jstring DynamicsProcessing_BandBase::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media::audiofx

