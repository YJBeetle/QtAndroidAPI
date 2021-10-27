#pragma once

#ifndef ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_EQ
#define ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_EQ

#include "../../../__JniBaseClass.hpp"
#include "DynamicsProcessing_Stage.hpp"
#include "DynamicsProcessing_BandStage.hpp"

namespace __jni_impl::android::media::audiofx
{
	class DynamicsProcessing_EqBand;
}

namespace __jni_impl::android::media::audiofx
{
	class DynamicsProcessing_Eq : public __jni_impl::android::media::audiofx::DynamicsProcessing_BandStage
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::media::audiofx::DynamicsProcessing_Eq arg0);
		void __constructor(jboolean arg0, jboolean arg1, jint arg2);
		
		// Methods
		QAndroidJniObject getBand(jint arg0);
		void setBand(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_EqBand arg1);
		jstring toString();
	};
} // namespace __jni_impl::android::media::audiofx

#include "DynamicsProcessing_EqBand.hpp"

namespace __jni_impl::android::media::audiofx
{
	// Fields
	
	// Constructors
	void DynamicsProcessing_Eq::__constructor(__jni_impl::android::media::audiofx::DynamicsProcessing_Eq arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.DynamicsProcessing$Eq",
			"(Landroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0.__jniObject().object()
		);
	}
	void DynamicsProcessing_Eq::__constructor(jboolean arg0, jboolean arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.DynamicsProcessing$Eq",
			"(ZZI)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject DynamicsProcessing_Eq::getBand(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getBand",
			"(I)Landroid/media/audiofx/DynamicsProcessing$EqBand;",
			arg0
		);
	}
	void DynamicsProcessing_Eq::setBand(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_EqBand arg1)
	{
		__thiz.callMethod<void>(
			"setBand",
			"(ILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jstring DynamicsProcessing_Eq::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::media::audiofx

namespace android::media::audiofx
{
	class DynamicsProcessing_Eq : public __jni_impl::android::media::audiofx::DynamicsProcessing_Eq
	{
	public:
		DynamicsProcessing_Eq(QAndroidJniObject obj) { __thiz = obj; }
		DynamicsProcessing_Eq(__jni_impl::android::media::audiofx::DynamicsProcessing_Eq arg0)
		{
			__constructor(
				arg0);
		}
		DynamicsProcessing_Eq(jboolean arg0, jboolean arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::media::audiofx

#endif // ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_EQ

