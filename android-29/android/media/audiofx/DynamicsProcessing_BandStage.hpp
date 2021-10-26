#pragma once

#ifndef ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_BANDSTAGE
#define ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_BANDSTAGE

#include "../../../__JniBaseClass.hpp"
#include "DynamicsProcessing_Stage.hpp"


namespace __jni_impl::android::media::audiofx
{
	class DynamicsProcessing_BandStage : public __jni_impl::android::media::audiofx::DynamicsProcessing_Stage
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jboolean arg0, jboolean arg1, jint arg2);
		
		// Methods
		jstring toString();
		jint getBandCount();
	};
} // namespace __jni_impl::android::media::audiofx


namespace __jni_impl::android::media::audiofx
{
	// Fields
	
	// Constructors
	void DynamicsProcessing_BandStage::__constructor(jboolean arg0, jboolean arg1, jint arg2)
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
	jstring DynamicsProcessing_BandStage::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint DynamicsProcessing_BandStage::getBandCount()
	{
		return __thiz.callMethod<jint>(
			"getBandCount",
			"()I"
		);
	}
} // namespace __jni_impl::android::media::audiofx

namespace android::media::audiofx
{
	class DynamicsProcessing_BandStage : public __jni_impl::android::media::audiofx::DynamicsProcessing_BandStage
	{
	public:
		DynamicsProcessing_BandStage(QAndroidJniObject obj) { __thiz = obj; }
		DynamicsProcessing_BandStage(jboolean arg0, jboolean arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::media::audiofx

#endif // ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_BANDSTAGE

