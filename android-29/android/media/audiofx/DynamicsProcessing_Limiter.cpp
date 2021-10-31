#include "./DynamicsProcessing_Limiter.hpp"

namespace android::media::audiofx
{
	// Fields
	
	DynamicsProcessing_Limiter::DynamicsProcessing_Limiter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DynamicsProcessing_Limiter::DynamicsProcessing_Limiter(android::media::audiofx::DynamicsProcessing_Limiter &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.DynamicsProcessing$Limiter",
			"(Landroid/media/audiofx/DynamicsProcessing$Limiter;)V",
			arg0.__jniObject().object()
		);
	}
	DynamicsProcessing_Limiter::DynamicsProcessing_Limiter(jboolean arg0, jboolean arg1, jint arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.DynamicsProcessing$Limiter",
			"(ZZIFFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		);
	}
	
	// Methods
	jfloat DynamicsProcessing_Limiter::getAttackTime()
	{
		return __thiz.callMethod<jfloat>(
			"getAttackTime",
			"()F"
		);
	}
	jint DynamicsProcessing_Limiter::getLinkGroup()
	{
		return __thiz.callMethod<jint>(
			"getLinkGroup",
			"()I"
		);
	}
	jfloat DynamicsProcessing_Limiter::getPostGain()
	{
		return __thiz.callMethod<jfloat>(
			"getPostGain",
			"()F"
		);
	}
	jfloat DynamicsProcessing_Limiter::getRatio()
	{
		return __thiz.callMethod<jfloat>(
			"getRatio",
			"()F"
		);
	}
	jfloat DynamicsProcessing_Limiter::getReleaseTime()
	{
		return __thiz.callMethod<jfloat>(
			"getReleaseTime",
			"()F"
		);
	}
	jfloat DynamicsProcessing_Limiter::getThreshold()
	{
		return __thiz.callMethod<jfloat>(
			"getThreshold",
			"()F"
		);
	}
	void DynamicsProcessing_Limiter::setAttackTime(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setAttackTime",
			"(F)V",
			arg0
		);
	}
	void DynamicsProcessing_Limiter::setLinkGroup(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLinkGroup",
			"(I)V",
			arg0
		);
	}
	void DynamicsProcessing_Limiter::setPostGain(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setPostGain",
			"(F)V",
			arg0
		);
	}
	void DynamicsProcessing_Limiter::setRatio(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setRatio",
			"(F)V",
			arg0
		);
	}
	void DynamicsProcessing_Limiter::setReleaseTime(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setReleaseTime",
			"(F)V",
			arg0
		);
	}
	void DynamicsProcessing_Limiter::setThreshold(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setThreshold",
			"(F)V",
			arg0
		);
	}
	jstring DynamicsProcessing_Limiter::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media::audiofx

