#pragma once

#ifndef ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_CONFIG
#define ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_CONFIG

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::media::audiofx
{
	class DynamicsProcessing_Channel;
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
	class DynamicsProcessing_Config : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getChannelByChannelIndex(jint arg0);
		jfloat getInputGainByChannelIndex(jint arg0);
		QAndroidJniObject getLimiterByChannelIndex(jint arg0);
		QAndroidJniObject getMbcBandByChannelIndex(jint arg0, jint arg1);
		jint getMbcBandCount();
		QAndroidJniObject getMbcByChannelIndex(jint arg0);
		QAndroidJniObject getPostEqBandByChannelIndex(jint arg0, jint arg1);
		jint getPostEqBandCount();
		QAndroidJniObject getPostEqByChannelIndex(jint arg0);
		QAndroidJniObject getPreEqBandByChannelIndex(jint arg0, jint arg1);
		jint getPreEqBandCount();
		QAndroidJniObject getPreEqByChannelIndex(jint arg0);
		jfloat getPreferredFrameDuration();
		jint getVariant();
		jboolean isLimiterInUse();
		jboolean isMbcInUse();
		jboolean isPostEqInUse();
		jboolean isPreEqInUse();
		void setAllChannelsTo(__jni_impl::android::media::audiofx::DynamicsProcessing_Channel arg0);
		void setChannelTo(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_Channel arg1);
		void setInputGainAllChannelsTo(jfloat arg0);
		void setInputGainByChannelIndex(jint arg0, jfloat arg1);
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
		jstring toString();
	};
} // namespace __jni_impl::android::media::audiofx

#include "DynamicsProcessing_Channel.hpp"
#include "DynamicsProcessing_Eq.hpp"
#include "DynamicsProcessing_EqBand.hpp"
#include "DynamicsProcessing_Limiter.hpp"
#include "DynamicsProcessing_Mbc.hpp"
#include "DynamicsProcessing_MbcBand.hpp"

namespace __jni_impl::android::media::audiofx
{
	// Fields
	
	// Constructors
	void DynamicsProcessing_Config::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.DynamicsProcessing$Config",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject DynamicsProcessing_Config::getChannelByChannelIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getChannelByChannelIndex",
			"(I)Landroid/media/audiofx/DynamicsProcessing$Channel;",
			arg0
		);
	}
	jfloat DynamicsProcessing_Config::getInputGainByChannelIndex(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getInputGainByChannelIndex",
			"(I)F",
			arg0
		);
	}
	QAndroidJniObject DynamicsProcessing_Config::getLimiterByChannelIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getLimiterByChannelIndex",
			"(I)Landroid/media/audiofx/DynamicsProcessing$Limiter;",
			arg0
		);
	}
	QAndroidJniObject DynamicsProcessing_Config::getMbcBandByChannelIndex(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getMbcBandByChannelIndex",
			"(II)Landroid/media/audiofx/DynamicsProcessing$MbcBand;",
			arg0,
			arg1
		);
	}
	jint DynamicsProcessing_Config::getMbcBandCount()
	{
		return __thiz.callMethod<jint>(
			"getMbcBandCount",
			"()I"
		);
	}
	QAndroidJniObject DynamicsProcessing_Config::getMbcByChannelIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getMbcByChannelIndex",
			"(I)Landroid/media/audiofx/DynamicsProcessing$Mbc;",
			arg0
		);
	}
	QAndroidJniObject DynamicsProcessing_Config::getPostEqBandByChannelIndex(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getPostEqBandByChannelIndex",
			"(II)Landroid/media/audiofx/DynamicsProcessing$EqBand;",
			arg0,
			arg1
		);
	}
	jint DynamicsProcessing_Config::getPostEqBandCount()
	{
		return __thiz.callMethod<jint>(
			"getPostEqBandCount",
			"()I"
		);
	}
	QAndroidJniObject DynamicsProcessing_Config::getPostEqByChannelIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getPostEqByChannelIndex",
			"(I)Landroid/media/audiofx/DynamicsProcessing$Eq;",
			arg0
		);
	}
	QAndroidJniObject DynamicsProcessing_Config::getPreEqBandByChannelIndex(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getPreEqBandByChannelIndex",
			"(II)Landroid/media/audiofx/DynamicsProcessing$EqBand;",
			arg0,
			arg1
		);
	}
	jint DynamicsProcessing_Config::getPreEqBandCount()
	{
		return __thiz.callMethod<jint>(
			"getPreEqBandCount",
			"()I"
		);
	}
	QAndroidJniObject DynamicsProcessing_Config::getPreEqByChannelIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getPreEqByChannelIndex",
			"(I)Landroid/media/audiofx/DynamicsProcessing$Eq;",
			arg0
		);
	}
	jfloat DynamicsProcessing_Config::getPreferredFrameDuration()
	{
		return __thiz.callMethod<jfloat>(
			"getPreferredFrameDuration",
			"()F"
		);
	}
	jint DynamicsProcessing_Config::getVariant()
	{
		return __thiz.callMethod<jint>(
			"getVariant",
			"()I"
		);
	}
	jboolean DynamicsProcessing_Config::isLimiterInUse()
	{
		return __thiz.callMethod<jboolean>(
			"isLimiterInUse",
			"()Z"
		);
	}
	jboolean DynamicsProcessing_Config::isMbcInUse()
	{
		return __thiz.callMethod<jboolean>(
			"isMbcInUse",
			"()Z"
		);
	}
	jboolean DynamicsProcessing_Config::isPostEqInUse()
	{
		return __thiz.callMethod<jboolean>(
			"isPostEqInUse",
			"()Z"
		);
	}
	jboolean DynamicsProcessing_Config::isPreEqInUse()
	{
		return __thiz.callMethod<jboolean>(
			"isPreEqInUse",
			"()Z"
		);
	}
	void DynamicsProcessing_Config::setAllChannelsTo(__jni_impl::android::media::audiofx::DynamicsProcessing_Channel arg0)
	{
		__thiz.callMethod<void>(
			"setAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Channel;)V",
			arg0.__jniObject().object()
		);
	}
	void DynamicsProcessing_Config::setChannelTo(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_Channel arg1)
	{
		__thiz.callMethod<void>(
			"setChannelTo",
			"(ILandroid/media/audiofx/DynamicsProcessing$Channel;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void DynamicsProcessing_Config::setInputGainAllChannelsTo(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setInputGainAllChannelsTo",
			"(F)V",
			arg0
		);
	}
	void DynamicsProcessing_Config::setInputGainByChannelIndex(jint arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setInputGainByChannelIndex",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void DynamicsProcessing_Config::setLimiterAllChannelsTo(__jni_impl::android::media::audiofx::DynamicsProcessing_Limiter arg0)
	{
		__thiz.callMethod<void>(
			"setLimiterAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Limiter;)V",
			arg0.__jniObject().object()
		);
	}
	void DynamicsProcessing_Config::setLimiterByChannelIndex(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_Limiter arg1)
	{
		__thiz.callMethod<void>(
			"setLimiterByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Limiter;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void DynamicsProcessing_Config::setMbcAllChannelsTo(__jni_impl::android::media::audiofx::DynamicsProcessing_Mbc arg0)
	{
		__thiz.callMethod<void>(
			"setMbcAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Mbc;)V",
			arg0.__jniObject().object()
		);
	}
	void DynamicsProcessing_Config::setMbcBandAllChannelsTo(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_MbcBand arg1)
	{
		__thiz.callMethod<void>(
			"setMbcBandAllChannelsTo",
			"(ILandroid/media/audiofx/DynamicsProcessing$MbcBand;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void DynamicsProcessing_Config::setMbcBandByChannelIndex(jint arg0, jint arg1, __jni_impl::android::media::audiofx::DynamicsProcessing_MbcBand arg2)
	{
		__thiz.callMethod<void>(
			"setMbcBandByChannelIndex",
			"(IILandroid/media/audiofx/DynamicsProcessing$MbcBand;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void DynamicsProcessing_Config::setMbcByChannelIndex(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_Mbc arg1)
	{
		__thiz.callMethod<void>(
			"setMbcByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Mbc;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void DynamicsProcessing_Config::setPostEqAllChannelsTo(__jni_impl::android::media::audiofx::DynamicsProcessing_Eq arg0)
	{
		__thiz.callMethod<void>(
			"setPostEqAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0.__jniObject().object()
		);
	}
	void DynamicsProcessing_Config::setPostEqBandAllChannelsTo(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_EqBand arg1)
	{
		__thiz.callMethod<void>(
			"setPostEqBandAllChannelsTo",
			"(ILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void DynamicsProcessing_Config::setPostEqBandByChannelIndex(jint arg0, jint arg1, __jni_impl::android::media::audiofx::DynamicsProcessing_EqBand arg2)
	{
		__thiz.callMethod<void>(
			"setPostEqBandByChannelIndex",
			"(IILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void DynamicsProcessing_Config::setPostEqByChannelIndex(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_Eq arg1)
	{
		__thiz.callMethod<void>(
			"setPostEqByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void DynamicsProcessing_Config::setPreEqAllChannelsTo(__jni_impl::android::media::audiofx::DynamicsProcessing_Eq arg0)
	{
		__thiz.callMethod<void>(
			"setPreEqAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0.__jniObject().object()
		);
	}
	void DynamicsProcessing_Config::setPreEqBandAllChannelsTo(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_EqBand arg1)
	{
		__thiz.callMethod<void>(
			"setPreEqBandAllChannelsTo",
			"(ILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void DynamicsProcessing_Config::setPreEqBandByChannelIndex(jint arg0, jint arg1, __jni_impl::android::media::audiofx::DynamicsProcessing_EqBand arg2)
	{
		__thiz.callMethod<void>(
			"setPreEqBandByChannelIndex",
			"(IILandroid/media/audiofx/DynamicsProcessing$EqBand;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void DynamicsProcessing_Config::setPreEqByChannelIndex(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_Eq arg1)
	{
		__thiz.callMethod<void>(
			"setPreEqByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Eq;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jstring DynamicsProcessing_Config::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::media::audiofx

namespace android::media::audiofx
{
	class DynamicsProcessing_Config : public __jni_impl::android::media::audiofx::DynamicsProcessing_Config
	{
	public:
		DynamicsProcessing_Config(QAndroidJniObject obj) { __thiz = obj; }
		DynamicsProcessing_Config()
		{
			__constructor();
		}
	};
} // namespace android::media::audiofx

#endif // ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_CONFIG

