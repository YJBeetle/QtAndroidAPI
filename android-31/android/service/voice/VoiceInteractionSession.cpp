#include "../../../JArray.hpp"
#include "../../../JBooleanArray.hpp"
#include "../../app/Dialog.hpp"
#include "../../app/DirectAction.hpp"
#include "../../app/assist/AssistContent.hpp"
#include "../../app/assist/AssistStructure.hpp"
#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "../../content/res/Configuration.hpp"
#include "../../graphics/Bitmap.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/CancellationSignal.hpp"
#include "../../os/Handler.hpp"
#include "./VoiceInteractionSession_AbortVoiceRequest.hpp"
#include "./VoiceInteractionSession_ActivityId.hpp"
#include "./VoiceInteractionSession_AssistState.hpp"
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
#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
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
	jint VoiceInteractionSession::SHOW_SOURCE_AUTOMOTIVE_SYSTEM_UI()
	{
		return getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_SOURCE_AUTOMOTIVE_SYSTEM_UI"
		);
	}
	jint VoiceInteractionSession::SHOW_SOURCE_NOTIFICATION()
	{
		return getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_SOURCE_NOTIFICATION"
		);
	}
	jint VoiceInteractionSession::SHOW_SOURCE_PUSH_TO_TALK()
	{
		return getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_SOURCE_PUSH_TO_TALK"
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
	
	// Constructors
	VoiceInteractionSession::VoiceInteractionSession(android::content::Context arg0)
		: JObject(
			"android.service.voice.VoiceInteractionSession",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	VoiceInteractionSession::VoiceInteractionSession(android::content::Context arg0, android::os::Handler arg1)
		: JObject(
			"android.service.voice.VoiceInteractionSession",
			"(Landroid/content/Context;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void VoiceInteractionSession::closeSystemDialogs() const
	{
		callMethod<void>(
			"closeSystemDialogs",
			"()V"
		);
	}
	void VoiceInteractionSession::dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const
	{
		callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object<jarray>()
		);
	}
	void VoiceInteractionSession::finish() const
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	android::content::Context VoiceInteractionSession::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	jint VoiceInteractionSession::getDisabledShowContext() const
	{
		return callMethod<jint>(
			"getDisabledShowContext",
			"()I"
		);
	}
	android::view::LayoutInflater VoiceInteractionSession::getLayoutInflater() const
	{
		return callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	jint VoiceInteractionSession::getUserDisabledShowContext() const
	{
		return callMethod<jint>(
			"getUserDisabledShowContext",
			"()I"
		);
	}
	android::app::Dialog VoiceInteractionSession::getWindow() const
	{
		return callObjectMethod(
			"getWindow",
			"()Landroid/app/Dialog;"
		);
	}
	void VoiceInteractionSession::hide() const
	{
		callMethod<void>(
			"hide",
			"()V"
		);
	}
	void VoiceInteractionSession::onAssistStructureFailure(JThrowable arg0) const
	{
		callMethod<void>(
			"onAssistStructureFailure",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		);
	}
	void VoiceInteractionSession::onBackPressed() const
	{
		callMethod<void>(
			"onBackPressed",
			"()V"
		);
	}
	void VoiceInteractionSession::onCancelRequest(android::service::voice::VoiceInteractionSession_Request arg0) const
	{
		callMethod<void>(
			"onCancelRequest",
			"(Landroid/service/voice/VoiceInteractionSession$Request;)V",
			arg0.object()
		);
	}
	void VoiceInteractionSession::onCloseSystemDialogs() const
	{
		callMethod<void>(
			"onCloseSystemDialogs",
			"()V"
		);
	}
	void VoiceInteractionSession::onComputeInsets(android::service::voice::VoiceInteractionSession_Insets arg0) const
	{
		callMethod<void>(
			"onComputeInsets",
			"(Landroid/service/voice/VoiceInteractionSession$Insets;)V",
			arg0.object()
		);
	}
	void VoiceInteractionSession::onConfigurationChanged(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	void VoiceInteractionSession::onCreate() const
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	android::view::View VoiceInteractionSession::onCreateContentView() const
	{
		return callObjectMethod(
			"onCreateContentView",
			"()Landroid/view/View;"
		);
	}
	void VoiceInteractionSession::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void VoiceInteractionSession::onDirectActionsInvalidated(android::service::voice::VoiceInteractionSession_ActivityId arg0) const
	{
		callMethod<void>(
			"onDirectActionsInvalidated",
			"(Landroid/service/voice/VoiceInteractionSession$ActivityId;)V",
			arg0.object()
		);
	}
	JBooleanArray VoiceInteractionSession::onGetSupportedCommands(JArray arg0) const
	{
		return callObjectMethod(
			"onGetSupportedCommands",
			"([Ljava/lang/String;)[Z",
			arg0.object<jarray>()
		);
	}
	void VoiceInteractionSession::onHandleAssist(android::service::voice::VoiceInteractionSession_AssistState arg0) const
	{
		callMethod<void>(
			"onHandleAssist",
			"(Landroid/service/voice/VoiceInteractionSession$AssistState;)V",
			arg0.object()
		);
	}
	void VoiceInteractionSession::onHandleAssist(android::os::Bundle arg0, android::app::assist::AssistStructure arg1, android::app::assist::AssistContent arg2) const
	{
		callMethod<void>(
			"onHandleAssist",
			"(Landroid/os/Bundle;Landroid/app/assist/AssistStructure;Landroid/app/assist/AssistContent;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void VoiceInteractionSession::onHandleAssistSecondary(android::os::Bundle arg0, android::app::assist::AssistStructure arg1, android::app::assist::AssistContent arg2, jint arg3, jint arg4) const
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
	void VoiceInteractionSession::onHandleScreenshot(android::graphics::Bitmap arg0) const
	{
		callMethod<void>(
			"onHandleScreenshot",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		);
	}
	void VoiceInteractionSession::onHide() const
	{
		callMethod<void>(
			"onHide",
			"()V"
		);
	}
	jboolean VoiceInteractionSession::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean VoiceInteractionSession::onKeyLongPress(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyLongPress",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean VoiceInteractionSession::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const
	{
		return callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean VoiceInteractionSession::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	void VoiceInteractionSession::onLockscreenShown() const
	{
		callMethod<void>(
			"onLockscreenShown",
			"()V"
		);
	}
	void VoiceInteractionSession::onLowMemory() const
	{
		callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	void VoiceInteractionSession::onPrepareShow(android::os::Bundle arg0, jint arg1) const
	{
		callMethod<void>(
			"onPrepareShow",
			"(Landroid/os/Bundle;I)V",
			arg0.object(),
			arg1
		);
	}
	void VoiceInteractionSession::onRequestAbortVoice(android::service::voice::VoiceInteractionSession_AbortVoiceRequest arg0) const
	{
		callMethod<void>(
			"onRequestAbortVoice",
			"(Landroid/service/voice/VoiceInteractionSession$AbortVoiceRequest;)V",
			arg0.object()
		);
	}
	void VoiceInteractionSession::onRequestCommand(android::service::voice::VoiceInteractionSession_CommandRequest arg0) const
	{
		callMethod<void>(
			"onRequestCommand",
			"(Landroid/service/voice/VoiceInteractionSession$CommandRequest;)V",
			arg0.object()
		);
	}
	void VoiceInteractionSession::onRequestCompleteVoice(android::service::voice::VoiceInteractionSession_CompleteVoiceRequest arg0) const
	{
		callMethod<void>(
			"onRequestCompleteVoice",
			"(Landroid/service/voice/VoiceInteractionSession$CompleteVoiceRequest;)V",
			arg0.object()
		);
	}
	void VoiceInteractionSession::onRequestConfirmation(android::service::voice::VoiceInteractionSession_ConfirmationRequest arg0) const
	{
		callMethod<void>(
			"onRequestConfirmation",
			"(Landroid/service/voice/VoiceInteractionSession$ConfirmationRequest;)V",
			arg0.object()
		);
	}
	void VoiceInteractionSession::onRequestPickOption(android::service::voice::VoiceInteractionSession_PickOptionRequest arg0) const
	{
		callMethod<void>(
			"onRequestPickOption",
			"(Landroid/service/voice/VoiceInteractionSession$PickOptionRequest;)V",
			arg0.object()
		);
	}
	void VoiceInteractionSession::onShow(android::os::Bundle arg0, jint arg1) const
	{
		callMethod<void>(
			"onShow",
			"(Landroid/os/Bundle;I)V",
			arg0.object(),
			arg1
		);
	}
	void VoiceInteractionSession::onTaskFinished(android::content::Intent arg0, jint arg1) const
	{
		callMethod<void>(
			"onTaskFinished",
			"(Landroid/content/Intent;I)V",
			arg0.object(),
			arg1
		);
	}
	void VoiceInteractionSession::onTaskStarted(android::content::Intent arg0, jint arg1) const
	{
		callMethod<void>(
			"onTaskStarted",
			"(Landroid/content/Intent;I)V",
			arg0.object(),
			arg1
		);
	}
	void VoiceInteractionSession::onTrimMemory(jint arg0) const
	{
		callMethod<void>(
			"onTrimMemory",
			"(I)V",
			arg0
		);
	}
	void VoiceInteractionSession::performDirectAction(android::app::DirectAction arg0, android::os::Bundle arg1, android::os::CancellationSignal arg2, JObject arg3, JObject arg4) const
	{
		callMethod<void>(
			"performDirectAction",
			"(Landroid/app/DirectAction;Landroid/os/Bundle;Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	void VoiceInteractionSession::requestDirectActions(android::service::voice::VoiceInteractionSession_ActivityId arg0, android::os::CancellationSignal arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"requestDirectActions",
			"(Landroid/service/voice/VoiceInteractionSession$ActivityId;Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	void VoiceInteractionSession::setContentView(android::view::View arg0) const
	{
		callMethod<void>(
			"setContentView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void VoiceInteractionSession::setDisabledShowContext(jint arg0) const
	{
		callMethod<void>(
			"setDisabledShowContext",
			"(I)V",
			arg0
		);
	}
	void VoiceInteractionSession::setKeepAwake(jboolean arg0) const
	{
		callMethod<void>(
			"setKeepAwake",
			"(Z)V",
			arg0
		);
	}
	void VoiceInteractionSession::setTheme(jint arg0) const
	{
		callMethod<void>(
			"setTheme",
			"(I)V",
			arg0
		);
	}
	void VoiceInteractionSession::setUiEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setUiEnabled",
			"(Z)V",
			arg0
		);
	}
	void VoiceInteractionSession::show(android::os::Bundle arg0, jint arg1) const
	{
		callMethod<void>(
			"show",
			"(Landroid/os/Bundle;I)V",
			arg0.object(),
			arg1
		);
	}
	void VoiceInteractionSession::startAssistantActivity(android::content::Intent arg0) const
	{
		callMethod<void>(
			"startAssistantActivity",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void VoiceInteractionSession::startVoiceActivity(android::content::Intent arg0) const
	{
		callMethod<void>(
			"startVoiceActivity",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
} // namespace android::service::voice

