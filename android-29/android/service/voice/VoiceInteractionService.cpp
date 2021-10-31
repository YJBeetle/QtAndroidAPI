#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "../../os/Bundle.hpp"
#include "./AlwaysOnHotwordDetector.hpp"
#include "./AlwaysOnHotwordDetector_Callback.hpp"
#include "../../../java/io/FileDescriptor.hpp"
#include "../../../java/io/PrintWriter.hpp"
#include "../../../java/util/Locale.hpp"
#include "./VoiceInteractionService.hpp"

namespace android::service::voice
{
	// Fields
	jstring VoiceInteractionService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.voice.VoiceInteractionService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoiceInteractionService::SERVICE_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.voice.VoiceInteractionService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	VoiceInteractionService::VoiceInteractionService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	VoiceInteractionService::VoiceInteractionService()
	{
		__thiz = QAndroidJniObject(
			"android.service.voice.VoiceInteractionService",
			"()V"
		);
	}
	
	// Methods
	jboolean VoiceInteractionService::isActiveService(android::content::Context arg0, android::content::ComponentName arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.service.voice.VoiceInteractionService",
			"isActiveService",
			"(Landroid/content/Context;Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject VoiceInteractionService::createAlwaysOnHotwordDetector(jstring arg0, java::util::Locale arg1, android::service::voice::AlwaysOnHotwordDetector_Callback arg2)
	{
		return __thiz.callObjectMethod(
			"createAlwaysOnHotwordDetector",
			"(Ljava/lang/String;Ljava/util/Locale;Landroid/service/voice/AlwaysOnHotwordDetector$Callback;)Landroid/service/voice/AlwaysOnHotwordDetector;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jint VoiceInteractionService::getDisabledShowContext()
	{
		return __thiz.callMethod<jint>(
			"getDisabledShowContext",
			"()I"
		);
	}
	QAndroidJniObject VoiceInteractionService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject VoiceInteractionService::onGetSupportedVoiceActions(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"onGetSupportedVoiceActions",
			"(Ljava/util/Set;)Ljava/util/Set;",
			arg0.__jniObject().object()
		);
	}
	void VoiceInteractionService::onLaunchVoiceAssistFromKeyguard()
	{
		__thiz.callMethod<void>(
			"onLaunchVoiceAssistFromKeyguard",
			"()V"
		);
	}
	void VoiceInteractionService::onReady()
	{
		__thiz.callMethod<void>(
			"onReady",
			"()V"
		);
	}
	void VoiceInteractionService::onShutdown()
	{
		__thiz.callMethod<void>(
			"onShutdown",
			"()V"
		);
	}
	void VoiceInteractionService::setDisabledShowContext(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDisabledShowContext",
			"(I)V",
			arg0
		);
	}
	void VoiceInteractionService::setUiHints(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"setUiHints",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void VoiceInteractionService::showSession(android::os::Bundle arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"showSession",
			"(Landroid/os/Bundle;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::service::voice

