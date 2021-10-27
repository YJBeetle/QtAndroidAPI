#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./AudioEffect.hpp"

namespace __jni_impl::android::media::audiofx
{
	class DynamicsProcessing_Channel;
}
namespace __jni_impl::android::media::audiofx
{
	class DynamicsProcessing_Config;
}
namespace __jni_impl::android::media::audiofx
{
	class DynamicsProcessing_Eq;
}
namespace __jni_impl::android::media::audiofx
{
	class DynamicsProcessing_EqBand;
}
namespace __jni_impl::android::media::audiofx
{
	class DynamicsProcessing_Limiter;
}
namespace __jni_impl::android::media::audiofx
{
	class DynamicsProcessing_Mbc;
}
namespace __jni_impl::android::media::audiofx
{
	class DynamicsProcessing_MbcBand;
}

namespace __jni_impl::android::media::audiofx
{
	class DynamicsProcessing : public __jni_impl::android::media::audiofx::AudioEffect
	{
	public:
		// Fields
		static jint VARIANT_FAVOR_FREQUENCY_RESOLUTION();
		static jint VARIANT_FAVOR_TIME_RESOLUTION();
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor(jint arg0, jint arg1, __jni_impl::android::media::audiofx::DynamicsProcessing_Config arg2);
		
		// Methods
		QAndroidJniObject getChannelByChannelIndex(jint arg0);
		jint getChannelCount();
		QAndroidJniObject getConfig();
		jfloat getInputGainByChannelIndex(jint arg0);
		QAndroidJniObject getLimiterByChannelIndex(jint arg0);
		QAndroidJniObject getMbcBandByChannelIndex(jint arg0, jint arg1);
		QAndroidJniObject getMbcByChannelIndex(jint arg0);
		QAndroidJniObject getPostEqBandByChannelIndex(jint arg0, jint arg1);
		QAndroidJniObject getPostEqByChannelIndex(jint arg0);
		QAndroidJniObject getPreEqBandByChannelIndex(jint arg0, jint arg1);
		QAndroidJniObject getPreEqByChannelIndex(jint arg0);
		void setAllChannelsTo(__jni_impl::android::media::audiofx::DynamicsProcessing_Channel arg0);
		void setChannelTo(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_Channel arg1);
		void setInputGainAllChannelsTo(jfloat arg0);
		void setInputGainbyChannel(jint arg0, jfloat arg1);
		void setLimiterAllChannelsTo(__jni_impl::android::media::audiofx::DynamicsProcessing_Limiter arg0);
		void setLimiterByChannelIndex(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_Limiter arg1);
		void setMbcAllChannelsTo(__jni_impl::android::media::audiofx::DynamicsProcessing_Mbc arg0);
		void setMbcBandAllChannelsTo(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_MbcBand arg1);
		void setMbcBandByChannelIndex(jint arg0, jint arg1, __jni_impl::android::media::audiofx::DynamicsProcessing_MbcBand arg2);
		void setMbcByChannelIndex(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_Mbc arg1);
		void setPostEqAllChannelsTo(__jni_impl::android::media::audiofx::DynamicsProcessing_Eq arg0);
		void setPostEqBandAllChannelsTo(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_EqBand arg1);
		void setPostEqBandByChannelIndex(jint arg0, jint arg1, __jni_impl::android::media::audiofx::DynamicsProcessing_EqBand arg2);
		void setPostEqByChannelIndex(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_Eq arg1);
		void setPreEqAllChannelsTo(__jni_impl::android::media::audiofx::DynamicsProcessing_Eq arg0);
		void setPreEqBandAllChannelsTo(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_EqBand arg1);
		void setPreEqBandByChannelIndex(jint arg0, jint arg1, __jni_impl::android::media::audiofx::DynamicsProcessing_EqBand arg2);
		void setPreEqByChannelIndex(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_Eq arg1);
	};
} // namespace __jni_impl::android::media::audiofx

#include "./DynamicsProcessing_Channel.hpp"
#include "./DynamicsProcessing_Config.hpp"
#include "./DynamicsProcessing_Eq.hpp"
#include "./DynamicsProcessing_EqBand.hpp"
#include "./DynamicsProcessing_Limiter.hpp"
#include "./DynamicsProcessing_Mbc.hpp"
#include "./DynamicsProcessing_MbcBand.hpp"

namespace __jni_impl::android::media::audiofx
{
	// Fields
	jint DynamicsProcessing::VARIANT_FAVOR_FREQUENCY_RESOLUTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.DynamicsProcessing",
			"VARIANT_FAVOR_FREQUENCY_RESOLUTION"
		);
	}
	jint DynamicsProcessing::VARIANT_FAVOR_TIME_RESOLUTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.DynamicsProcessing",
			"VARIANT_FAVOR_TIME_RESOLUTION"
		);
	}
	
	// Constructors
	void DynamicsProcessing::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.DynamicsProcessing",
			"(I)V",
			arg0
		);
	}
	void DynamicsProcessing::__constructor(jint arg0, jint arg1, __jni_impl::android::media::audiofx::DynamicsProcessing_Config arg2)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.DynamicsProcessing",
			"(IILandroid/media/audiofx/DynamicsProcessing$Config;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject DynamicsProcessing::getChannelByChannelIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getChannelByChannelIndex",
			"(I)Landroid/media/audiofx/DynamicsProcessing$Channel;",
			arg0
		);
	}
	jint DynamicsProcessing::getChannelCount()
	{
		return __thiz.callMethod<jint>(
			"getChannelCount",
			"()I"
		);
	}
	QAndroidJniObject DynamicsProcessing::getConfig()
	{
		return __thiz.callObjectMethod(
			"getConfig",
			"()Landroid/media/audiofx/DynamicsProcessing$Config;"
		);
	}
	jfloat DynamicsProcessing::getInputGainByChannelIndex(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getInputGainByChannelIndex",
			"(I)F",
			arg0
		);
	}
	QAndroidJniObject DynamicsProcessing::getLimiterByChannelIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getLimiterByChannelIndex",
			"(I)Landroid/media/audiofx/DynamicsProcessing$Limiter;",
			arg0
		);
	}
	QAndroidJniObject DynamicsProcessing::getMbcBandByChannelIndex(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getMbcBandByChannelIndex",
			"(II)Landroid/media/audiofx/DynamicsProcessing$MbcBand;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DynamicsProcessing::getMbcByChannelIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getMbcByChannelIndex",
			"(I)Landroid/media/audiofx/DynamicsProcessing$Mbc;",
			arg0
		);
	}
	QAndroidJniObject DynamicsProcessing::getPostEqBandByChannelIndex(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getPostEqBandByChannelIndex",
			"(II)Landroid/media/audiofx/DynamicsProcessing$EqBand;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DynamicsProcessing::getPostEqByChannelIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getPostEqByChannelIndex",
			"(I)Landroid/media/audiofx/DynamicsProcessing$Eq;",
			arg0
		);
	}
	QAndroidJniObject DynamicsProcessing::getPreEqBandByChannelIndex(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getPreEqBandByChannelIndex",
			"(II)Landroid/media/audiofx/DynamicsProcessing$EqBand;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DynamicsProcessing::getPreEqByChannelIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getPreEqByChannelIndex",
			"(I)Landroid/media/audiofx/DynamicsProcessing$Eq;",
			arg0
		);
	}
	void DynamicsProcessing::setAllChannelsTo(__jni_impl::android::media::audiofx::DynamicsProcessing_Channel arg0)
	{
		__thiz.callMethod<void>(
			"setAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Channel;)V",
			arg0.__jniObject().object()
		);
	}
	void DynamicsProcessing::setChannelTo(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_Channel arg1)
	{
		__thiz.callMethod<void>(
			"setChannelTo",
			"(ILandroid/media/audiofx/DynamicsProcessing$Channel;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void DynamicsProcessing::setInputGainAllChannelsTo(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setInputGainAllChannelsTo",
			"(F)V",
			arg0
		);
	}
	void DynamicsProcessing::setInputGainbyChannel(jint arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setInputGainbyChannel",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void DynamicsProcessing::setLimiterAllChannelsTo(__jni_impl::android::media::audiofx::DynamicsProcessing_Limiter arg0)
	{
		__thiz.callMethod<void>(
			"setLimiterAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Limiter;)V",
			arg0.__jniObject().object()
		);
	}
	void DynamicsProcessing::setLimiterByChannelIndex(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_Limiter arg1)
	{
		__thiz.callMethod<void>(
			"setLimiterByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Limiter;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void DynamicsProcessing::setMbcAllChannelsTo(__jni_impl::android::media::audiofx::DynamicsProcessing_Mbc arg0)
	{
		__thiz.callMethod<void>(
			"setMbcAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Mbc;)V",
			arg0.__jniObject().object()
		);
	}
	void DynamicsProcessing::setMbcBandAllChannelsTo(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_MbcBand arg1)
	{
		__thiz.callMethod<void>(
			"setMbcBandAllChannelsTo",
			"(ILandroid/media/audiofx/DynamicsProcessing$MbcBand;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void DynamicsProcessing::setMbcBandByChannelIndex(jint arg0, jint arg1, __jni_impl::android::media::audiofx::DynamicsProcessing_MbcBand arg2)
	{
		__thiz.callMethod<void>(
			"setMbcBandByChannelIndex",
			"(IILandroid/media/audiofx/DynamicsProcessing$MbcBand;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void DynamicsProcessing::setMbcByChannelIndex(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_Mbc arg1)
	{
		__thiz.callMethod<void>(
			"setMbcByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Mbc;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void DynamicsProcessing::setPostEqAllChannelsTo(__jni_impl::android::media::audiofx::DynamicsProcessing_Eq arg0)
	{
		__thiz.callMethod<void>(
			"setPostEqAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0.__jniObject().object()
		);
	}
	void DynamicsProcessing::setPostEqBandAllChannelsTo(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_EqBand arg1)
	{
		__thiz.callMethod<void>(
			"setPostEqBandAllChannelsTo",
			"(ILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void DynamicsProcessing::setPostEqBandByChannelIndex(jint arg0, jint arg1, __jni_impl::android::media::audiofx::DynamicsProcessing_EqBand arg2)
	{
		__thiz.callMethod<void>(
			"setPostEqBandByChannelIndex",
			"(IILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void DynamicsProcessing::setPostEqByChannelIndex(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_Eq arg1)
	{
		__thiz.callMethod<void>(
			"setPostEqByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void DynamicsProcessing::setPreEqAllChannelsTo(__jni_impl::android::media::audiofx::DynamicsProcessing_Eq arg0)
	{
		__thiz.callMethod<void>(
			"setPreEqAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0.__jniObject().object()
		);
	}
	void DynamicsProcessing::setPreEqBandAllChannelsTo(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_EqBand arg1)
	{
		__thiz.callMethod<void>(
			"setPreEqBandAllChannelsTo",
			"(ILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void DynamicsProcessing::setPreEqBandByChannelIndex(jint arg0, jint arg1, __jni_impl::android::media::audiofx::DynamicsProcessing_EqBand arg2)
	{
		__thiz.callMethod<void>(
			"setPreEqBandByChannelIndex",
			"(IILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void DynamicsProcessing::setPreEqByChannelIndex(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_Eq arg1)
	{
		__thiz.callMethod<void>(
			"setPreEqByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media::audiofx

namespace android::media::audiofx
{
	class DynamicsProcessing : public __jni_impl::android::media::audiofx::DynamicsProcessing
	{
	public:
		DynamicsProcessing(QAndroidJniObject obj) { __thiz = obj; }
		DynamicsProcessing(jint arg0)
		{
			__constructor(
				arg0);
		}
		DynamicsProcessing(jint arg0, jint arg1, __jni_impl::android::media::audiofx::DynamicsProcessing_Config arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::media::audiofx

