#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class DynamicsProcessing_Limiter;
}
namespace __jni_impl::android::media::audiofx
{
	class DynamicsProcessing_Mbc;
}

namespace __jni_impl::android::media::audiofx
{
	class DynamicsProcessing_Config_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jint arg1, jboolean arg2, jint arg3, jboolean arg4, jint arg5, jboolean arg6, jint arg7, jboolean arg8);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAllChannelsTo(__jni_impl::android::media::audiofx::DynamicsProcessing_Channel arg0);
		QAndroidJniObject setChannelTo(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_Channel arg1);
		QAndroidJniObject setInputGainAllChannelsTo(jfloat arg0);
		QAndroidJniObject setInputGainByChannelIndex(jint arg0, jfloat arg1);
		QAndroidJniObject setLimiterAllChannelsTo(__jni_impl::android::media::audiofx::DynamicsProcessing_Limiter arg0);
		QAndroidJniObject setLimiterByChannelIndex(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_Limiter arg1);
		QAndroidJniObject setMbcAllChannelsTo(__jni_impl::android::media::audiofx::DynamicsProcessing_Mbc arg0);
		QAndroidJniObject setMbcByChannelIndex(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_Mbc arg1);
		QAndroidJniObject setPostEqAllChannelsTo(__jni_impl::android::media::audiofx::DynamicsProcessing_Eq arg0);
		QAndroidJniObject setPostEqByChannelIndex(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_Eq arg1);
		QAndroidJniObject setPreEqAllChannelsTo(__jni_impl::android::media::audiofx::DynamicsProcessing_Eq arg0);
		QAndroidJniObject setPreEqByChannelIndex(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_Eq arg1);
		QAndroidJniObject setPreferredFrameDuration(jfloat arg0);
	};
} // namespace __jni_impl::android::media::audiofx

#include "DynamicsProcessing_Channel.hpp"
#include "DynamicsProcessing_Config.hpp"
#include "DynamicsProcessing_Eq.hpp"
#include "DynamicsProcessing_Limiter.hpp"
#include "DynamicsProcessing_Mbc.hpp"

namespace __jni_impl::android::media::audiofx
{
	// Fields
	
	// Constructors
	void DynamicsProcessing_Config_Builder::__constructor(jint arg0, jint arg1, jboolean arg2, jint arg3, jboolean arg4, jint arg5, jboolean arg6, jint arg7, jboolean arg8)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.DynamicsProcessing$Config$Builder",
			"(IIZIZIZIZ)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8
		);
	}
	
	// Methods
	QAndroidJniObject DynamicsProcessing_Config_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/media/audiofx/DynamicsProcessing$Config;"
		);
	}
	QAndroidJniObject DynamicsProcessing_Config_Builder::setAllChannelsTo(__jni_impl::android::media::audiofx::DynamicsProcessing_Channel arg0)
	{
		return __thiz.callObjectMethod(
			"setAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Channel;)Landroid/media/audiofx/DynamicsProcessing$Config$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DynamicsProcessing_Config_Builder::setChannelTo(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_Channel arg1)
	{
		return __thiz.callObjectMethod(
			"setChannelTo",
			"(ILandroid/media/audiofx/DynamicsProcessing$Channel;)Landroid/media/audiofx/DynamicsProcessing$Config$Builder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DynamicsProcessing_Config_Builder::setInputGainAllChannelsTo(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"setInputGainAllChannelsTo",
			"(F)Landroid/media/audiofx/DynamicsProcessing$Config$Builder;",
			arg0
		);
	}
	QAndroidJniObject DynamicsProcessing_Config_Builder::setInputGainByChannelIndex(jint arg0, jfloat arg1)
	{
		return __thiz.callObjectMethod(
			"setInputGainByChannelIndex",
			"(IF)Landroid/media/audiofx/DynamicsProcessing$Config$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DynamicsProcessing_Config_Builder::setLimiterAllChannelsTo(__jni_impl::android::media::audiofx::DynamicsProcessing_Limiter arg0)
	{
		return __thiz.callObjectMethod(
			"setLimiterAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Limiter;)Landroid/media/audiofx/DynamicsProcessing$Config$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DynamicsProcessing_Config_Builder::setLimiterByChannelIndex(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_Limiter arg1)
	{
		return __thiz.callObjectMethod(
			"setLimiterByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Limiter;)Landroid/media/audiofx/DynamicsProcessing$Config$Builder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DynamicsProcessing_Config_Builder::setMbcAllChannelsTo(__jni_impl::android::media::audiofx::DynamicsProcessing_Mbc arg0)
	{
		return __thiz.callObjectMethod(
			"setMbcAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Mbc;)Landroid/media/audiofx/DynamicsProcessing$Config$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DynamicsProcessing_Config_Builder::setMbcByChannelIndex(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_Mbc arg1)
	{
		return __thiz.callObjectMethod(
			"setMbcByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Mbc;)Landroid/media/audiofx/DynamicsProcessing$Config$Builder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DynamicsProcessing_Config_Builder::setPostEqAllChannelsTo(__jni_impl::android::media::audiofx::DynamicsProcessing_Eq arg0)
	{
		return __thiz.callObjectMethod(
			"setPostEqAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Eq;)Landroid/media/audiofx/DynamicsProcessing$Config$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DynamicsProcessing_Config_Builder::setPostEqByChannelIndex(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_Eq arg1)
	{
		return __thiz.callObjectMethod(
			"setPostEqByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Eq;)Landroid/media/audiofx/DynamicsProcessing$Config$Builder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DynamicsProcessing_Config_Builder::setPreEqAllChannelsTo(__jni_impl::android::media::audiofx::DynamicsProcessing_Eq arg0)
	{
		return __thiz.callObjectMethod(
			"setPreEqAllChannelsTo",
			"(Landroid/media/audiofx/DynamicsProcessing$Eq;)Landroid/media/audiofx/DynamicsProcessing$Config$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DynamicsProcessing_Config_Builder::setPreEqByChannelIndex(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_Eq arg1)
	{
		return __thiz.callObjectMethod(
			"setPreEqByChannelIndex",
			"(ILandroid/media/audiofx/DynamicsProcessing$Eq;)Landroid/media/audiofx/DynamicsProcessing$Config$Builder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DynamicsProcessing_Config_Builder::setPreferredFrameDuration(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"setPreferredFrameDuration",
			"(F)Landroid/media/audiofx/DynamicsProcessing$Config$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::media::audiofx

namespace android::media::audiofx
{
	class DynamicsProcessing_Config_Builder : public __jni_impl::android::media::audiofx::DynamicsProcessing_Config_Builder
	{
	public:
		DynamicsProcessing_Config_Builder(QAndroidJniObject obj) { __thiz = obj; }
		DynamicsProcessing_Config_Builder(jint arg0, jint arg1, jboolean arg2, jint arg3, jboolean arg4, jint arg5, jboolean arg6, jint arg7, jboolean arg8)
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
				arg8);
		}
	};
} // namespace android::media::audiofx

