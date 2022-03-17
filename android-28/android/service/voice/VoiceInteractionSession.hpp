#pragma once

#include "../../../JArray.hpp"
#include "../../../JBooleanArray.hpp"
#include "../../app/Dialog.def.hpp"
#include "../../app/assist/AssistContent.def.hpp"
#include "../../app/assist/AssistStructure.def.hpp"
#include "../../content/Context.def.hpp"
#include "../../content/Intent.def.hpp"
#include "../../content/res/Configuration.def.hpp"
#include "../../graphics/Bitmap.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/Handler.def.hpp"
#include "./VoiceInteractionSession_AbortVoiceRequest.def.hpp"
#include "./VoiceInteractionSession_CommandRequest.def.hpp"
#include "./VoiceInteractionSession_CompleteVoiceRequest.def.hpp"
#include "./VoiceInteractionSession_ConfirmationRequest.def.hpp"
#include "./VoiceInteractionSession_Insets.def.hpp"
#include "./VoiceInteractionSession_PickOptionRequest.def.hpp"
#include "./VoiceInteractionSession_Request.def.hpp"
#include "../../view/KeyEvent.def.hpp"
#include "../../view/LayoutInflater.def.hpp"
#include "../../view/View.def.hpp"
#include "../../../java/io/FileDescriptor.def.hpp"
#include "../../../java/io/PrintWriter.def.hpp"
#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./VoiceInteractionSession.def.hpp"

namespace android::service::voice
{
	// Fields
	inline jint VoiceInteractionSession::SHOW_SOURCE_ACTIVITY()
	{
		return getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_SOURCE_ACTIVITY"
		);
	}
	inline jint VoiceInteractionSession::SHOW_SOURCE_APPLICATION()
	{
		return getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_SOURCE_APPLICATION"
		);
	}
	inline jint VoiceInteractionSession::SHOW_SOURCE_ASSIST_GESTURE()
	{
		return getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_SOURCE_ASSIST_GESTURE"
		);
	}
	inline jint VoiceInteractionSession::SHOW_WITH_ASSIST()
	{
		return getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_WITH_ASSIST"
		);
	}
	inline jint VoiceInteractionSession::SHOW_WITH_SCREENSHOT()
	{
		return getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_WITH_SCREENSHOT"
		);
	}
	
	// Constructors
	inline VoiceInteractionSession::VoiceInteractionSession(android::content::Context arg0)
		: JObject(
			"android.service.voice.VoiceInteractionSession",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline VoiceInteractionSession::VoiceInteractionSession(android::content::Context arg0, android::os::Handler arg1)
		: JObject(
			"android.service.voice.VoiceInteractionSession",
			"(Landroid/content/Context;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void VoiceInteractionSession::closeSystemDialogs() const
	{
		callMethod<void>(
			"closeSystemDialogs",
			"()V"
		);
	}
	inline void VoiceInteractionSession::dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const
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
	inline void VoiceInteractionSession::finish() const
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	inline android::content::Context VoiceInteractionSession::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	inline jint VoiceInteractionSession::getDisabledShowContext() const
	{
		return callMethod<jint>(
			"getDisabledShowContext",
			"()I"
		);
	}
	inline android::view::LayoutInflater VoiceInteractionSession::getLayoutInflater() const
	{
		return callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	inline jint VoiceInteractionSession::getUserDisabledShowContext() const
	{
		return callMethod<jint>(
			"getUserDisabledShowContext",
			"()I"
		);
	}
	inline android::app::Dialog VoiceInteractionSession::getWindow() const
	{
		return callObjectMethod(
			"getWindow",
			"()Landroid/app/Dialog;"
		);
	}
	inline void VoiceInteractionSession::hide() const
	{
		callMethod<void>(
			"hide",
			"()V"
		);
	}
	inline void VoiceInteractionSession::onAssistStructureFailure(JThrowable arg0) const
	{
		callMethod<void>(
			"onAssistStructureFailure",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		);
	}
	inline void VoiceInteractionSession::onBackPressed() const
	{
		callMethod<void>(
			"onBackPressed",
			"()V"
		);
	}
	inline void VoiceInteractionSession::onCancelRequest(android::service::voice::VoiceInteractionSession_Request arg0) const
	{
		callMethod<void>(
			"onCancelRequest",
			"(Landroid/service/voice/VoiceInteractionSession$Request;)V",
			arg0.object()
		);
	}
	inline void VoiceInteractionSession::onCloseSystemDialogs() const
	{
		callMethod<void>(
			"onCloseSystemDialogs",
			"()V"
		);
	}
	inline void VoiceInteractionSession::onComputeInsets(android::service::voice::VoiceInteractionSession_Insets arg0) const
	{
		callMethod<void>(
			"onComputeInsets",
			"(Landroid/service/voice/VoiceInteractionSession$Insets;)V",
			arg0.object()
		);
	}
	inline void VoiceInteractionSession::onConfigurationChanged(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	inline void VoiceInteractionSession::onCreate() const
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	inline android::view::View VoiceInteractionSession::onCreateContentView() const
	{
		return callObjectMethod(
			"onCreateContentView",
			"()Landroid/view/View;"
		);
	}
	inline void VoiceInteractionSession::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	inline JBooleanArray VoiceInteractionSession::onGetSupportedCommands(JArray arg0) const
	{
		return callObjectMethod(
			"onGetSupportedCommands",
			"([Ljava/lang/String;)[Z",
			arg0.object<jarray>()
		);
	}
	inline void VoiceInteractionSession::onHandleAssist(android::os::Bundle arg0, android::app::assist::AssistStructure arg1, android::app::assist::AssistContent arg2) const
	{
		callMethod<void>(
			"onHandleAssist",
			"(Landroid/os/Bundle;Landroid/app/assist/AssistStructure;Landroid/app/assist/AssistContent;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void VoiceInteractionSession::onHandleAssistSecondary(android::os::Bundle arg0, android::app::assist::AssistStructure arg1, android::app::assist::AssistContent arg2, jint arg3, jint arg4) const
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
	inline void VoiceInteractionSession::onHandleScreenshot(android::graphics::Bitmap arg0) const
	{
		callMethod<void>(
			"onHandleScreenshot",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		);
	}
	inline void VoiceInteractionSession::onHide() const
	{
		callMethod<void>(
			"onHide",
			"()V"
		);
	}
	inline jboolean VoiceInteractionSession::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean VoiceInteractionSession::onKeyLongPress(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyLongPress",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean VoiceInteractionSession::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const
	{
		return callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline jboolean VoiceInteractionSession::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void VoiceInteractionSession::onLockscreenShown() const
	{
		callMethod<void>(
			"onLockscreenShown",
			"()V"
		);
	}
	inline void VoiceInteractionSession::onLowMemory() const
	{
		callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	inline void VoiceInteractionSession::onPrepareShow(android::os::Bundle arg0, jint arg1) const
	{
		callMethod<void>(
			"onPrepareShow",
			"(Landroid/os/Bundle;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void VoiceInteractionSession::onRequestAbortVoice(android::service::voice::VoiceInteractionSession_AbortVoiceRequest arg0) const
	{
		callMethod<void>(
			"onRequestAbortVoice",
			"(Landroid/service/voice/VoiceInteractionSession$AbortVoiceRequest;)V",
			arg0.object()
		);
	}
	inline void VoiceInteractionSession::onRequestCommand(android::service::voice::VoiceInteractionSession_CommandRequest arg0) const
	{
		callMethod<void>(
			"onRequestCommand",
			"(Landroid/service/voice/VoiceInteractionSession$CommandRequest;)V",
			arg0.object()
		);
	}
	inline void VoiceInteractionSession::onRequestCompleteVoice(android::service::voice::VoiceInteractionSession_CompleteVoiceRequest arg0) const
	{
		callMethod<void>(
			"onRequestCompleteVoice",
			"(Landroid/service/voice/VoiceInteractionSession$CompleteVoiceRequest;)V",
			arg0.object()
		);
	}
	inline void VoiceInteractionSession::onRequestConfirmation(android::service::voice::VoiceInteractionSession_ConfirmationRequest arg0) const
	{
		callMethod<void>(
			"onRequestConfirmation",
			"(Landroid/service/voice/VoiceInteractionSession$ConfirmationRequest;)V",
			arg0.object()
		);
	}
	inline void VoiceInteractionSession::onRequestPickOption(android::service::voice::VoiceInteractionSession_PickOptionRequest arg0) const
	{
		callMethod<void>(
			"onRequestPickOption",
			"(Landroid/service/voice/VoiceInteractionSession$PickOptionRequest;)V",
			arg0.object()
		);
	}
	inline void VoiceInteractionSession::onShow(android::os::Bundle arg0, jint arg1) const
	{
		callMethod<void>(
			"onShow",
			"(Landroid/os/Bundle;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void VoiceInteractionSession::onTaskFinished(android::content::Intent arg0, jint arg1) const
	{
		callMethod<void>(
			"onTaskFinished",
			"(Landroid/content/Intent;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void VoiceInteractionSession::onTaskStarted(android::content::Intent arg0, jint arg1) const
	{
		callMethod<void>(
			"onTaskStarted",
			"(Landroid/content/Intent;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void VoiceInteractionSession::onTrimMemory(jint arg0) const
	{
		callMethod<void>(
			"onTrimMemory",
			"(I)V",
			arg0
		);
	}
	inline void VoiceInteractionSession::setContentView(android::view::View arg0) const
	{
		callMethod<void>(
			"setContentView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void VoiceInteractionSession::setDisabledShowContext(jint arg0) const
	{
		callMethod<void>(
			"setDisabledShowContext",
			"(I)V",
			arg0
		);
	}
	inline void VoiceInteractionSession::setKeepAwake(jboolean arg0) const
	{
		callMethod<void>(
			"setKeepAwake",
			"(Z)V",
			arg0
		);
	}
	inline void VoiceInteractionSession::setTheme(jint arg0) const
	{
		callMethod<void>(
			"setTheme",
			"(I)V",
			arg0
		);
	}
	inline void VoiceInteractionSession::setUiEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setUiEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void VoiceInteractionSession::show(android::os::Bundle arg0, jint arg1) const
	{
		callMethod<void>(
			"show",
			"(Landroid/os/Bundle;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void VoiceInteractionSession::startAssistantActivity(android::content::Intent arg0) const
	{
		callMethod<void>(
			"startAssistantActivity",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	inline void VoiceInteractionSession::startVoiceActivity(android::content::Intent arg0) const
	{
		callMethod<void>(
			"startVoiceActivity",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
} // namespace android::service::voice

// Base class headers

