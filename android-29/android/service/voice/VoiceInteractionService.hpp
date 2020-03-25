#pragma once

#ifndef ANDROID_SERVICE_VOICE_VOICEINTERACTIONSERVICE
#define ANDROID_SERVICE_VOICE_VOICEINTERACTIONSERVICE

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
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::service::voice
{
	class AlwaysOnHotwordDetector;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::android::service::voice
{
	class AlwaysOnHotwordDetector_Callback;
}

namespace __jni_impl::android::service::voice
{
	class VoiceInteractionService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static QAndroidJniObject SERVICE_INTERFACE();
		static QAndroidJniObject SERVICE_META_DATA();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		void setDisabledShowContext(jint arg0);
		jint getDisabledShowContext();
		void onReady();
		void onLaunchVoiceAssistFromKeyguard();
		static jboolean isActiveService(__jni_impl::android::content::Context arg0, __jni_impl::android::content::ComponentName arg1);
		void onShutdown();
		void showSession(__jni_impl::android::os::Bundle arg0, jint arg1);
		QAndroidJniObject createAlwaysOnHotwordDetector(jstring arg0, __jni_impl::java::util::Locale arg1, __jni_impl::android::service::voice::AlwaysOnHotwordDetector_Callback arg2);
		void setUiHints(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject onGetSupportedVoiceActions(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::service::voice

#include "../../content/Intent.hpp"
#include "../../../java/io/FileDescriptor.hpp"
#include "../../../java/io/PrintWriter.hpp"
#include "../../content/Context.hpp"
#include "../../content/ComponentName.hpp"
#include "../../os/Bundle.hpp"
#include "AlwaysOnHotwordDetector.hpp"
#include "../../../java/util/Locale.hpp"
#include "AlwaysOnHotwordDetector_Callback.hpp"

namespace __jni_impl::android::service::voice
{
	// Fields
	QAndroidJniObject VoiceInteractionService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.voice.VoiceInteractionService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoiceInteractionService::SERVICE_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.voice.VoiceInteractionService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void VoiceInteractionService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.voice.VoiceInteractionService",
			"()V");
	}
	
	// Methods
	QAndroidJniObject VoiceInteractionService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object());
	}
	void VoiceInteractionService::setDisabledShowContext(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDisabledShowContext",
			"(I)V",
			arg0);
	}
	jint VoiceInteractionService::getDisabledShowContext()
	{
		return __thiz.callMethod<jint>(
			"getDisabledShowContext",
			"()I");
	}
	void VoiceInteractionService::onReady()
	{
		__thiz.callMethod<void>(
			"onReady",
			"()V");
	}
	void VoiceInteractionService::onLaunchVoiceAssistFromKeyguard()
	{
		__thiz.callMethod<void>(
			"onLaunchVoiceAssistFromKeyguard",
			"()V");
	}
	jboolean VoiceInteractionService::isActiveService(__jni_impl::android::content::Context arg0, __jni_impl::android::content::ComponentName arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.service.voice.VoiceInteractionService",
			"isActiveService",
			"(Landroid/content/Context;Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void VoiceInteractionService::onShutdown()
	{
		__thiz.callMethod<void>(
			"onShutdown",
			"()V");
	}
	void VoiceInteractionService::showSession(__jni_impl::android::os::Bundle arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"showSession",
			"(Landroid/os/Bundle;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject VoiceInteractionService::createAlwaysOnHotwordDetector(jstring arg0, __jni_impl::java::util::Locale arg1, __jni_impl::android::service::voice::AlwaysOnHotwordDetector_Callback arg2)
	{
		return __thiz.callObjectMethod(
			"createAlwaysOnHotwordDetector",
			"(Ljava/lang/String;Ljava/util/Locale;Landroid/service/voice/AlwaysOnHotwordDetector$Callback;)Landroid/service/voice/AlwaysOnHotwordDetector;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void VoiceInteractionService::setUiHints(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"setUiHints",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject VoiceInteractionService::onGetSupportedVoiceActions(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"onGetSupportedVoiceActions",
			"(Ljava/util/Set;)Ljava/util/Set;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::service::voice

namespace android::service::voice
{
	class VoiceInteractionService : public __jni_impl::android::service::voice::VoiceInteractionService
	{
	public:
		VoiceInteractionService(QAndroidJniObject obj) { __thiz = obj; }
		VoiceInteractionService()
		{
			__constructor();
		}
	};
} // namespace android::service::voice

#endif // ANDROID_SERVICE_VOICE_VOICEINTERACTIONSERVICE

