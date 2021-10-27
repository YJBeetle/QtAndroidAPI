#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./DynamicsProcessing_BandBase.hpp"


namespace __jni_impl::android::media::audiofx
{
	class DynamicsProcessing_EqBand : public __jni_impl::android::media::audiofx::DynamicsProcessing_BandBase
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::media::audiofx::DynamicsProcessing_EqBand arg0);
		void __constructor(jboolean arg0, jfloat arg1, jfloat arg2);
		
		// Methods
		jfloat getGain();
		void setGain(jfloat arg0);
		jstring toString();
	};
} // namespace __jni_impl::android::media::audiofx


namespace __jni_impl::android::media::audiofx
{
	// Fields
	
	// Constructors
	void DynamicsProcessing_EqBand::__constructor(__jni_impl::android::media::audiofx::DynamicsProcessing_EqBand arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.DynamicsProcessing$EqBand",
			"(Landroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0.__jniObject().object()
		);
	}
	void DynamicsProcessing_EqBand::__constructor(jboolean arg0, jfloat arg1, jfloat arg2)
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
} // namespace __jni_impl::android::media::audiofx

namespace android::media::audiofx
{
	class DynamicsProcessing_EqBand : public __jni_impl::android::media::audiofx::DynamicsProcessing_EqBand
	{
	public:
		DynamicsProcessing_EqBand(QAndroidJniObject obj) { __thiz = obj; }
		DynamicsProcessing_EqBand(__jni_impl::android::media::audiofx::DynamicsProcessing_EqBand arg0)
		{
			__constructor(
				arg0);
		}
		DynamicsProcessing_EqBand(jboolean arg0, jfloat arg1, jfloat arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::media::audiofx

