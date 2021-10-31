#include "../../app/Dialog.hpp"
#include "../../app/assist/AssistContent.hpp"
#include "../../app/assist/AssistStructure.hpp"
#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "../../content/res/Configuration.hpp"
#include "../../graphics/Bitmap.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Handler.hpp"
#include "./VoiceInteractionSession_AbortVoiceRequest.hpp"
#include "./VoiceInteractionSession_CommandRequest.hpp"
#include "./VoiceInteractionSession_CompleteVoiceRequest.hpp"
#include "./VoiceInteractionSession_ConfirmationRequest.hpp"
#include "./VoiceInteractionSession_Insets.hpp"
#include "./VoiceInteractionSession_PickOptionRequest.hpp"
#include "./VoiceInteractionSession_Request.hpp"
#include "../../view/KeyEvent.hpp"
#include "../../view/LayoutInflater.hpp"
#include "../../view/View.hpp"
#include "../../../java/io/FileDescriptor.hpp"
#include "../../../java/io/PrintWriter.hpp"
#include "./VoiceInteractionSession.hpp"

namespace android::service::voice
{
	// Fields
	jint VoiceInteractionSession::SHOW_SOURCE_ACTIVITY()
	{
		return getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_SOURCE_ACTIVITY"
		);
	}
	jint VoiceInteractionSession::SHOW_SOURCE_APPLICATION()
	{
		return getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_SOURCE_APPLICATION"
		);
	}
	jint VoiceInteractionSession::SHOW_SOURCE_ASSIST_GESTURE()
	{
		return getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_SOURCE_ASSIST_GESTURE"
		);
	}
	jint VoiceInteractionSession::SHOW_WITH_ASSIST()
	{
		return getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_WITH_ASSIST"
		);
	}
	jint VoiceInteractionSession::SHOW_WITH_SCREENSHOT()
	{
		return getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_WITH_SCREENSHOT"
		);
	}
	
	// QAndroidJniObject forward
	VoiceInteractionSession::VoiceInteractionSession(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	VoiceInteractionSession::VoiceInteractionSession(android::content::Context arg0)
		: __JniBaseClass(
			"android.service.voice.VoiceInteractionSession",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	VoiceInteractionSession::VoiceInteractionSession(android::content::Context arg0, android::os::Handler arg1)
		: __JniBaseClass(
			"android.service.voice.VoiceInteractionSession",
			"(Landroid/content/Context;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void VoiceInteractionSession::closeSystemDialogs()
	{
		callMethod<void>(
			"closeSystemDialogs",
			"()V"
		);
	}
	void VoiceInteractionSession::dump(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3)
	{
		callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	void VoiceInteractionSession::finish()
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	android::content::Context VoiceInteractionSession::getContext()
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	jint VoiceInteractionSession::getDisabledShowContext()
	{
		return callMethod<jint>(
			"getDisabledShowContext",
			"()I"
		);
	}
	android::view::LayoutInflater VoiceInteractionSession::getLayoutInflater()
	{
		return callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	jint VoiceInteractionSession::getUserDisabledShowContext()
	{
		return callMethod<jint>(
			"getUserDisabledShowContext",
			"()I"
		);
	}
	android::app::Dialog VoiceInteractionSession::getWindow()
	{
		return callObjectMethod(
			"getWindow",
			"()Landroid/app/Dialog;"
		);
	}
	void VoiceInteractionSession::hide()
	{
		callMethod<void>(
			"hide",
			"()V"
		);
	}
	void VoiceInteractionSession::onAssistStructureFailure(jthrowable arg0)
	{
		callMethod<void>(
			"onAssistStructureFailure",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void VoiceInteractionSession::onBackPressed()
	{
		callMethod<void>(
			"onBackPressed",
			"()V"
		);
	}
	void VoiceInteractionSession::onCancelRequest(android::service::voice::VoiceInteractionSession_Request arg0)
	{
		callMethod<void>(
			"onCancelRequest",
			"(Landroid/service/voice/VoiceInteractionSession$Request;)V",
			arg0.object()
		);
	}
	void VoiceInteractionSession::onCloseSystemDialogs()
	{
		callMethod<void>(
			"onCloseSystemDialogs",
			"()V"
		);
	}
	void VoiceInteractionSession::onComputeInsets(android::service::voice::VoiceInteractionSession_Insets arg0)
	{
		callMethod<void>(
			"onComputeInsets",
			"(Landroid/service/voice/VoiceInteractionSession$Insets;)V",
			arg0.object()
		);
	}
	void VoiceInteractionSession::onConfigurationChanged(android::content::res::Configuration arg0)
	{
		callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	void VoiceInteractionSession::onCreate()
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	android::view::View VoiceInteractionSession::onCreateContentView()
	{
		return callObjectMethod(
			"onCreateContentView",
			"()Landroid/view/View;"
		);
	}
	void VoiceInteractionSession::onDestroy()
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	jbooleanArray VoiceInteractionSession::onGetSupportedCommands(jarray arg0)
	{
		return callObjectMethod(
			"onGetSupportedCommands",
			"([Ljava/lang/String;)[Z",
			arg0
		).object<jbooleanArray>();
	}
	void VoiceInteractionSession::onHandleAssist(android::os::Bundle arg0, android::app::assist::AssistStructure arg1, android::app::assist::AssistContent arg2)
	{
		callMethod<void>(
			"onHandleAssist",
			"(Landroid/os/Bundle;Landroid/app/assist/AssistStructure;Landroid/app/assist/AssistContent;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void VoiceInteractionSession::onHandleAssistSecondary(android::os::Bundle arg0, android::app::assist::AssistStructure arg1, android::app::assist::AssistContent arg2, jint arg3, jint arg4)
	{
		callMethod<void>(
			"onHandleAssistSecondary",
			"(Landroid/os/Bundle;Landroid/app/assist/AssistStructure;Landroid/app/assist/AssistContent;II)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3,
			arg4
		);
	}
	void VoiceInteractionSession::onHandleScreenshot(android::graphics::Bitmap arg0)
	{
		callMethod<void>(
			"onHandleScreenshot",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		);
	}
	void VoiceInteractionSession::onHide()
	{
		callMethod<void>(
			"onHide",
			"()V"
		);
	}
	jboolean VoiceInteractionSession::onKeyDown(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean VoiceInteractionSession::onKeyLongPress(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyLongPress",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean VoiceInteractionSession::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2)
	{
		return callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean VoiceInteractionSession::onKeyUp(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	void VoiceInteractionSession::onLockscreenShown()
	{
		callMethod<void>(
			"onLockscreenShown",
			"()V"
		);
	}
	void VoiceInteractionSession::onLowMemory()
	{
		callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	void VoiceInteractionSession::onPrepareShow(android::os::Bundle arg0, jint arg1)
	{
		callMethod<void>(
			"onPrepareShow",
			"(Landroid/os/Bundle;I)V",
			arg0.object(),
			arg1
		);
	}
	void VoiceInteractionSession::onRequestAbortVoice(android::service::voice::VoiceInteractionSession_AbortVoiceRequest arg0)
	{
		callMethod<void>(
			"onRequestAbortVoice",
			"(Landroid/service/voice/VoiceInteractionSession$AbortVoiceRequest;)V",
			arg0.object()
		);
	}
	void VoiceInteractionSession::onRequestCommand(android::service::voice::VoiceInteractionSession_CommandRequest arg0)
	{
		callMethod<void>(
			"onRequestCommand",
			"(Landroid/service/voice/VoiceInteractionSession$CommandRequest;)V",
			arg0.object()
		);
	}
	void VoiceInteractionSession::onRequestCompleteVoice(android::service::voice::VoiceInteractionSession_CompleteVoiceRequest arg0)
	{
		callMethod<void>(
			"onRequestCompleteVoice",
			"(Landroid/service/voice/VoiceInteractionSession$CompleteVoiceRequest;)V",
			arg0.object()
		);
	}
	void VoiceInteractionSession::onRequestConfirmation(android::service::voice::VoiceInteractionSession_ConfirmationRequest arg0)
	{
		callMethod<void>(
			"onRequestConfirmation",
			"(Landroid/service/voice/VoiceInteractionSession$ConfirmationRequest;)V",
			arg0.object()
		);
	}
	void VoiceInteractionSession::onRequestPickOption(android::service::voice::VoiceInteractionSession_PickOptionRequest arg0)
	{
		callMethod<void>(
			"onRequestPickOption",
			"(Landroid/service/voice/VoiceInteractionSession$PickOptionRequest;)V",
			arg0.object()
		);
	}
	void VoiceInteractionSession::onShow(android::os::Bundle arg0, jint arg1)
	{
		callMethod<void>(
			"onShow",
			"(Landroid/os/Bundle;I)V",
			arg0.object(),
			arg1
		);
	}
	void VoiceInteractionSession::onTaskFinished(android::content::Intent arg0, jint arg1)
	{
		callMethod<void>(
			"onTaskFinished",
			"(Landroid/content/Intent;I)V",
			arg0.object(),
			arg1
		);
	}
	void VoiceInteractionSession::onTaskStarted(android::content::Intent arg0, jint arg1)
	{
		callMethod<void>(
			"onTaskStarted",
			"(Landroid/content/Intent;I)V",
			arg0.object(),
			arg1
		);
	}
	void VoiceInteractionSession::onTrimMemory(jint arg0)
	{
		callMethod<void>(
			"onTrimMemory",
			"(I)V",
			arg0
		);
	}
	void VoiceInteractionSession::setContentView(android::view::View arg0)
	{
		callMethod<void>(
			"setContentView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void VoiceInteractionSession::setDisabledShowContext(jint arg0)
	{
		callMethod<void>(
			"setDisabledShowContext",
			"(I)V",
			arg0
		);
	}
	void VoiceInteractionSession::setKeepAwake(jboolean arg0)
	{
		callMethod<void>(
			"setKeepAwake",
			"(Z)V",
			arg0
		);
	}
	void VoiceInteractionSession::setTheme(jint arg0)
	{
		callMethod<void>(
			"setTheme",
			"(I)V",
			arg0
		);
	}
	void VoiceInteractionSession::setUiEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setUiEnabled",
			"(Z)V",
			arg0
		);
	}
	void VoiceInteractionSession::show(android::os::Bundle arg0, jint arg1)
	{
		callMethod<void>(
			"show",
			"(Landroid/os/Bundle;I)V",
			arg0.object(),
			arg1
		);
	}
	void VoiceInteractionSession::startAssistantActivity(android::content::Intent arg0)
	{
		callMethod<void>(
			"startAssistantActivity",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void VoiceInteractionSession::startVoiceActivity(android::content::Intent arg0)
	{
		callMethod<void>(
			"startVoiceActivity",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
} // namespace android::service::voice

