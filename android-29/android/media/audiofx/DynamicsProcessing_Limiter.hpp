#pragma once

#ifndef ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_LIMITER
#define ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_LIMITER

#include "../../../__JniBaseClass.hpp"
#include "DynamicsProcessing_Stage.hpp"


namespace __jni_impl::android::media::audiofx
{
	class DynamicsProcessing_Limiter : public __jni_impl::android::media::audiofx::DynamicsProcessing_Stage
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::media::audiofx::DynamicsProcessing_Limiter arg0);
		void __constructor(jboolean arg0, jboolean arg1, jint arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7);
		
		// Methods
		jfloat getAttackTime();
		jint getLinkGroup();
		jfloat getPostGain();
		jfloat getRatio();
		jfloat getReleaseTime();
		jfloat getThreshold();
		void setAttackTime(jfloat arg0);
		void setLinkGroup(jint arg0);
		void setPostGain(jfloat arg0);
		void setRatio(jfloat arg0);
		void setReleaseTime(jfloat arg0);
		void setThreshold(jfloat arg0);
		jstring toString();
	};
} // namespace __jni_impl::android::media::audiofx


namespace __jni_impl::android::media::audiofx
{
	// Fields
	
	// Constructors
	void DynamicsProcessing_Limiter::__constructor(__jni_impl::android::media::audiofx::DynamicsProcessing_Limiter arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.DynamicsProcessing$Limiter",
			"(Landroid/media/audiofx/DynamicsProcessing$Limiter;)V",
			arg0.__jniObject().object()
		);
	}
	void DynamicsProcessing_Limiter::__constructor(jboolean arg0, jboolean arg1, jint arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7)
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
} // namespace __jni_impl::android::media::audiofx

namespace android::media::audiofx
{
	class DynamicsProcessing_Limiter : public __jni_impl::android::media::audiofx::DynamicsProcessing_Limiter
	{
	public:
		DynamicsProcessing_Limiter(QAndroidJniObject obj) { __thiz = obj; }
		DynamicsProcessing_Limiter(__jni_impl::android::media::audiofx::DynamicsProcessing_Limiter arg0)
		{
			__constructor(
				arg0);
		}
		DynamicsProcessing_Limiter(jboolean arg0, jboolean arg1, jint arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6,
				arg7);
		}
	};
} // namespace android::media::audiofx

#endif // ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_LIMITER

