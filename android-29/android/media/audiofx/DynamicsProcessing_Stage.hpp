#pragma once

#ifndef ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_STAGE
#define ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_STAGE

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::media::audiofx
{
	class DynamicsProcessing_Stage : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jboolean arg0, jboolean arg1);
		
		// Methods
		jstring toString();
		jboolean isEnabled();
		void setEnabled(jboolean arg0);
		jboolean isInUse();
	};
} // namespace __jni_impl::android::media::audiofx


namespace __jni_impl::android::media::audiofx
{
	// Fields
	
	// Constructors
	void DynamicsProcessing_Stage::__constructor(jboolean arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.DynamicsProcessing$Stage",
			"(ZZ)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jstring DynamicsProcessing_Stage::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean DynamicsProcessing_Stage::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	void DynamicsProcessing_Stage::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	jboolean DynamicsProcessing_Stage::isInUse()
	{
		return __thiz.callMethod<jboolean>(
			"isInUse",
			"()Z"
		);
	}
} // namespace __jni_impl::android::media::audiofx

namespace android::media::audiofx
{
	class DynamicsProcessing_Stage : public __jni_impl::android::media::audiofx::DynamicsProcessing_Stage
	{
	public:
		DynamicsProcessing_Stage(QAndroidJniObject obj) { __thiz = obj; }
		DynamicsProcessing_Stage(jboolean arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::media::audiofx

#endif // ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_STAGE

