#pragma once

#ifndef ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_MBCBAND
#define ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_MBCBAND

#include "../../../__JniBaseClass.hpp"
#include "DynamicsProcessing_BandBase.hpp"


namespace __jni_impl::android::media::audiofx
{
	class DynamicsProcessing_MbcBand : public __jni_impl::android::media::audiofx::DynamicsProcessing_BandBase
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jboolean arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7, jfloat arg8, jfloat arg9, jfloat arg10);
		void __constructor(__jni_impl::android::media::audiofx::DynamicsProcessing_MbcBand arg0);
		
		// Methods
		QAndroidJniObject toString();
		void setThreshold(jfloat arg0);
		jfloat getAttackTime();
		void setAttackTime(jfloat arg0);
		jfloat getReleaseTime();
		void setReleaseTime(jfloat arg0);
		jfloat getRatio();
		void setRatio(jfloat arg0);
		jfloat getThreshold();
		jfloat getKneeWidth();
		void setKneeWidth(jfloat arg0);
		jfloat getNoiseGateThreshold();
		void setNoiseGateThreshold(jfloat arg0);
		jfloat getExpanderRatio();
		void setExpanderRatio(jfloat arg0);
		jfloat getPreGain();
		void setPreGain(jfloat arg0);
		jfloat getPostGain();
		void setPostGain(jfloat arg0);
	};
} // namespace __jni_impl::android::media::audiofx


namespace __jni_impl::android::media::audiofx
{
	// Fields
	
	// Constructors
	void DynamicsProcessing_MbcBand::__constructor(jboolean arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7, jfloat arg8, jfloat arg9, jfloat arg10)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.DynamicsProcessing$MbcBand",
			"(ZFFFFFFFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg10);
	}
	void DynamicsProcessing_MbcBand::__constructor(__jni_impl::android::media::audiofx::DynamicsProcessing_MbcBand arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.DynamicsProcessing$MbcBand",
			"(Landroid/media/audiofx/DynamicsProcessing$MbcBand;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject DynamicsProcessing_MbcBand::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	void DynamicsProcessing_MbcBand::setThreshold(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setThreshold",
			"(F)V",
			arg0);
	}
	jfloat DynamicsProcessing_MbcBand::getAttackTime()
	{
		return __thiz.callMethod<jfloat>(
			"getAttackTime",
			"()F");
	}
	void DynamicsProcessing_MbcBand::setAttackTime(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setAttackTime",
			"(F)V",
			arg0);
	}
	jfloat DynamicsProcessing_MbcBand::getReleaseTime()
	{
		return __thiz.callMethod<jfloat>(
			"getReleaseTime",
			"()F");
	}
	void DynamicsProcessing_MbcBand::setReleaseTime(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setReleaseTime",
			"(F)V",
			arg0);
	}
	jfloat DynamicsProcessing_MbcBand::getRatio()
	{
		return __thiz.callMethod<jfloat>(
			"getRatio",
			"()F");
	}
	void DynamicsProcessing_MbcBand::setRatio(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setRatio",
			"(F)V",
			arg0);
	}
	jfloat DynamicsProcessing_MbcBand::getThreshold()
	{
		return __thiz.callMethod<jfloat>(
			"getThreshold",
			"()F");
	}
	jfloat DynamicsProcessing_MbcBand::getKneeWidth()
	{
		return __thiz.callMethod<jfloat>(
			"getKneeWidth",
			"()F");
	}
	void DynamicsProcessing_MbcBand::setKneeWidth(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setKneeWidth",
			"(F)V",
			arg0);
	}
	jfloat DynamicsProcessing_MbcBand::getNoiseGateThreshold()
	{
		return __thiz.callMethod<jfloat>(
			"getNoiseGateThreshold",
			"()F");
	}
	void DynamicsProcessing_MbcBand::setNoiseGateThreshold(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setNoiseGateThreshold",
			"(F)V",
			arg0);
	}
	jfloat DynamicsProcessing_MbcBand::getExpanderRatio()
	{
		return __thiz.callMethod<jfloat>(
			"getExpanderRatio",
			"()F");
	}
	void DynamicsProcessing_MbcBand::setExpanderRatio(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setExpanderRatio",
			"(F)V",
			arg0);
	}
	jfloat DynamicsProcessing_MbcBand::getPreGain()
	{
		return __thiz.callMethod<jfloat>(
			"getPreGain",
			"()F");
	}
	void DynamicsProcessing_MbcBand::setPreGain(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setPreGain",
			"(F)V",
			arg0);
	}
	jfloat DynamicsProcessing_MbcBand::getPostGain()
	{
		return __thiz.callMethod<jfloat>(
			"getPostGain",
			"()F");
	}
	void DynamicsProcessing_MbcBand::setPostGain(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setPostGain",
			"(F)V",
			arg0);
	}
} // namespace __jni_impl::android::media::audiofx

namespace android::media::audiofx
{
	class DynamicsProcessing_MbcBand : public __jni_impl::android::media::audiofx::DynamicsProcessing_MbcBand
	{
	public:
		DynamicsProcessing_MbcBand(QAndroidJniObject obj) { __thiz = obj; }
		DynamicsProcessing_MbcBand(jboolean arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7, jfloat arg8, jfloat arg9, jfloat arg10)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6,
				arg7,
				arg8,
				arg9,
				arg10);
		}
		DynamicsProcessing_MbcBand(__jni_impl::android::media::audiofx::DynamicsProcessing_MbcBand arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media::audiofx

#endif // ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_MBCBAND

