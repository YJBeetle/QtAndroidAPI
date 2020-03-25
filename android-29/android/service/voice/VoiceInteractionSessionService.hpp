#pragma once

#ifndef ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSIONSERVICE
#define ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSIONSERVICE

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::io
{
	class PrintWriter;
}
namespace __jni_impl::android::content::res
{
	class Configuration;
}
namespace __jni_impl::android::service::voice
{
	class VoiceInteractionSession;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::service::voice
{
	class VoiceInteractionSessionService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		void onCreate();
		void onConfigurationChanged(__jni_impl::android::content::res::Configuration arg0);
		void onLowMemory();
		void onTrimMemory(jint arg0);
		QAndroidJniObject onNewSession(__jni_impl::android::os::Bundle arg0);
	};
} // namespace __jni_impl::android::service::voice

#include "../../content/Intent.hpp"
#include "../../../java/io/FileDescriptor.hpp"
#include "../../../java/io/PrintWriter.hpp"
#include "../../content/res/Configuration.hpp"
#include "VoiceInteractionSession.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::service::voice
{
	// Fields
	
	// Constructors
	void VoiceInteractionSessionService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.voice.VoiceInteractionSessionService",
			"()V");
	}
	
	// Methods
	QAndroidJniObject VoiceInteractionSessionService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object());
	}
	void VoiceInteractionSessionService::onCreate()
	{
		__thiz.callMethod<void>(
			"onCreate",
			"()V");
	}
	void VoiceInteractionSessionService::onConfigurationChanged(__jni_impl::android::content::res::Configuration arg0)
	{
		__thiz.callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object());
	}
	void VoiceInteractionSessionService::onLowMemory()
	{
		__thiz.callMethod<void>(
			"onLowMemory",
			"()V");
	}
	void VoiceInteractionSessionService::onTrimMemory(jint arg0)
	{
		__thiz.callMethod<void>(
			"onTrimMemory",
			"(I)V",
			arg0);
	}
	QAndroidJniObject VoiceInteractionSessionService::onNewSession(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"onNewSession",
			"(Landroid/os/Bundle;)Landroid/service/voice/VoiceInteractionSession;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::service::voice

namespace android::service::voice
{
	class VoiceInteractionSessionService : public __jni_impl::android::service::voice::VoiceInteractionSessionService
	{
	public:
		VoiceInteractionSessionService(QAndroidJniObject obj) { __thiz = obj; }
		VoiceInteractionSessionService()
		{
			__constructor();
		}
	};
} // namespace android::service::voice

#endif // ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSIONSERVICE

