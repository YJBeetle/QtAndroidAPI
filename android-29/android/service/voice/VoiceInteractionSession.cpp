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
#include "./VoiceInteractionSession.hpp"

namespace android::service::voice
{
	// Fields
	jint VoiceInteractionSession::SHOW_SOURCE_ACTIVITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_SOURCE_ACTIVITY"
		);
	}
	jint VoiceInteractionSession::SHOW_SOURCE_APPLICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_SOURCE_APPLICATION"
		);
	}
	jint VoiceInteractionSession::SHOW_SOURCE_ASSIST_GESTURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_SOURCE_ASSIST_GESTURE"
		);
	}
	jint VoiceInteractionSession::SHOW_SOURCE_AUTOMOTIVE_SYSTEM_UI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_SOURCE_AUTOMOTIVE_SYSTEM_UI"
		);
	}
	jint VoiceInteractionSession::SHOW_SOURCE_NOTIFICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_SOURCE_NOTIFICATION"
		);
	}
	jint VoiceInteractionSession::SHOW_SOURCE_PUSH_TO_TALK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_SOURCE_PUSH_TO_TALK"
		);
	}
	jint VoiceInteractionSession::SHOW_WITH_ASSIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_WITH_ASSIST"
		);
	}
	jint VoiceInteractionSession::SHOW_WITH_SCREENSHOT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_WITH_SCREENSHOT"
		);
	}
	
	VoiceInteractionSession::VoiceInteractionSession(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	VoiceInteractionSession::VoiceInteractionSession(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.service.voice.VoiceInteractionSession",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	VoiceInteractionSession::VoiceInteractionSession(android::content::Context arg0, android::os::Handler arg1)
	{
		__thiz = QAndroidJniObject(
			"android.service.voice.VoiceInteractionSession",
			"(Landroid/content/Context;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void VoiceInteractionSession::closeSystemDialogs()
	{
		__thiz.callMethod<void>(
			"closeSystemDialogs",
			"()V"
		);
	}
	void VoiceInteractionSession::dump(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void VoiceInteractionSession::finish()
	{
		__thiz.callMethod<void>(
			"finish",
			"()V"
		);
	}
	QAndroidJniObject VoiceInteractionSession::getContext()
	{
		return __thiz.callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	jint VoiceInteractionSession::getDisabledShowContext()
	{
		return __thiz.callMethod<jint>(
			"getDisabledShowContext",
			"()I"
		);
	}
	QAndroidJniObject VoiceInteractionSession::getLayoutInflater()
	{
		return __thiz.callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	jint VoiceInteractionSession::getUserDisabledShowContext()
	{
		return __thiz.callMethod<jint>(
			"getUserDisabledShowContext",
			"()I"
		);
	}
	QAndroidJniObject VoiceInteractionSession::getWindow()
	{
		return __thiz.callObjectMethod(
			"getWindow",
			"()Landroid/app/Dialog;"
		);
	}
	void VoiceInteractionSession::hide()
	{
		__thiz.callMethod<void>(
			"hide",
			"()V"
		);
	}
	void VoiceInteractionSession::onAssistStructureFailure(jthrowable arg0)
	{
		__thiz.callMethod<void>(
			"onAssistStructureFailure",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void VoiceInteractionSession::onBackPressed()
	{
		__thiz.callMethod<void>(
			"onBackPressed",
			"()V"
		);
	}
	void VoiceInteractionSession::onCancelRequest(android::service::voice::VoiceInteractionSession_Request arg0)
	{
		__thiz.callMethod<void>(
			"onCancelRequest",
			"(Landroid/service/voice/VoiceInteractionSession$Request;)V",
			arg0.__jniObject().object()
		);
	}
	void VoiceInteractionSession::onCloseSystemDialogs()
	{
		__thiz.callMethod<void>(
			"onCloseSystemDialogs",
			"()V"
		);
	}
	void VoiceInteractionSession::onComputeInsets(android::service::voice::VoiceInteractionSession_Insets arg0)
	{
		__thiz.callMethod<void>(
			"onComputeInsets",
			"(Landroid/service/voice/VoiceInteractionSession$Insets;)V",
			arg0.__jniObject().object()
		);
	}
	void VoiceInteractionSession::onConfigurationChanged(android::content::res::Configuration arg0)
	{
		__thiz.callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object()
		);
	}
	void VoiceInteractionSession::onCreate()
	{
		__thiz.callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	QAndroidJniObject VoiceInteractionSession::onCreateContentView()
	{
		return __thiz.callObjectMethod(
			"onCreateContentView",
			"()Landroid/view/View;"
		);
	}
	void VoiceInteractionSession::onDestroy()
	{
		__thiz.callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void VoiceInteractionSession::onDirectActionsInvalidated(android::service::voice::VoiceInteractionSession_ActivityId arg0)
	{
		__thiz.callMethod<void>(
			"onDirectActionsInvalidated",
			"(Landroid/service/voice/VoiceInteractionSession$ActivityId;)V",
			arg0.__jniObject().object()
		);
	}
	jbooleanArray VoiceInteractionSession::onGetSupportedCommands(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"onGetSupportedCommands",
			"([Ljava/lang/String;)[Z",
			arg0
		).object<jbooleanArray>();
	}
	void VoiceInteractionSession::onHandleAssist(android::service::voice::VoiceInteractionSession_AssistState arg0)
	{
		__thiz.callMethod<void>(
			"onHandleAssist",
			"(Landroid/service/voice/VoiceInteractionSession$AssistState;)V",
			arg0.__jniObject().object()
		);
	}
	void VoiceInteractionSession::onHandleAssist(android::os::Bundle arg0, android::app::assist::AssistStructure arg1, android::app::assist::AssistContent arg2)
	{
		__thiz.callMethod<void>(
			"onHandleAssist",
			"(Landroid/os/Bundle;Landroid/app/assist/AssistStructure;Landroid/app/assist/AssistContent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void VoiceInteractionSession::onHandleAssistSecondary(android::os::Bundle arg0, android::app::assist::AssistStructure arg1, android::app::assist::AssistContent arg2, jint arg3, jint arg4)
	{
		__thiz.callMethod<void>(
			"onHandleAssistSecondary",
			"(Landroid/os/Bundle;Landroid/app/assist/AssistStructure;Landroid/app/assist/AssistContent;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			arg4
		);
	}
	void VoiceInteractionSession::onHandleScreenshot(android::graphics::Bitmap arg0)
	{
		__thiz.callMethod<void>(
			"onHandleScreenshot",
			"(Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object()
		);
	}
	void VoiceInteractionSession::onHide()
	{
		__thiz.callMethod<void>(
			"onHide",
			"()V"
		);
	}
	jboolean VoiceInteractionSession::onKeyDown(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean VoiceInteractionSession::onKeyLongPress(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyLongPress",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean VoiceInteractionSession::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean VoiceInteractionSession::onKeyUp(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void VoiceInteractionSession::onLockscreenShown()
	{
		__thiz.callMethod<void>(
			"onLockscreenShown",
			"()V"
		);
	}
	void VoiceInteractionSession::onLowMemory()
	{
		__thiz.callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	void VoiceInteractionSession::onPrepareShow(android::os::Bundle arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onPrepareShow",
			"(Landroid/os/Bundle;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void VoiceInteractionSession::onRequestAbortVoice(android::service::voice::VoiceInteractionSession_AbortVoiceRequest arg0)
	{
		__thiz.callMethod<void>(
			"onRequestAbortVoice",
			"(Landroid/service/voice/VoiceInteractionSession$AbortVoiceRequest;)V",
			arg0.__jniObject().object()
		);
	}
	void VoiceInteractionSession::onRequestCommand(android::service::voice::VoiceInteractionSession_CommandRequest arg0)
	{
		__thiz.callMethod<void>(
			"onRequestCommand",
			"(Landroid/service/voice/VoiceInteractionSession$CommandRequest;)V",
			arg0.__jniObject().object()
		);
	}
	void VoiceInteractionSession::onRequestCompleteVoice(android::service::voice::VoiceInteractionSession_CompleteVoiceRequest arg0)
	{
		__thiz.callMethod<void>(
			"onRequestCompleteVoice",
			"(Landroid/service/voice/VoiceInteractionSession$CompleteVoiceRequest;)V",
			arg0.__jniObject().object()
		);
	}
	void VoiceInteractionSession::onRequestConfirmation(android::service::voice::VoiceInteractionSession_ConfirmationRequest arg0)
	{
		__thiz.callMethod<void>(
			"onRequestConfirmation",
			"(Landroid/service/voice/VoiceInteractionSession$ConfirmationRequest;)V",
			arg0.__jniObject().object()
		);
	}
	void VoiceInteractionSession::onRequestPickOption(android::service::voice::VoiceInteractionSession_PickOptionRequest arg0)
	{
		__thiz.callMethod<void>(
			"onRequestPickOption",
			"(Landroid/service/voice/VoiceInteractionSession$PickOptionRequest;)V",
			arg0.__jniObject().object()
		);
	}
	void VoiceInteractionSession::onShow(android::os::Bundle arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onShow",
			"(Landroid/os/Bundle;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void VoiceInteractionSession::onTaskFinished(android::content::Intent arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onTaskFinished",
			"(Landroid/content/Intent;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void VoiceInteractionSession::onTaskStarted(android::content::Intent arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onTaskStarted",
			"(Landroid/content/Intent;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void VoiceInteractionSession::onTrimMemory(jint arg0)
	{
		__thiz.callMethod<void>(
			"onTrimMemory",
			"(I)V",
			arg0
		);
	}
	void VoiceInteractionSession::performDirectAction(android::app::DirectAction arg0, android::os::Bundle arg1, android::os::CancellationSignal arg2, __JniBaseClass arg3, __JniBaseClass arg4)
	{
		__thiz.callMethod<void>(
			"performDirectAction",
			"(Landroid/app/DirectAction;Landroid/os/Bundle;Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	void VoiceInteractionSession::requestDirectActions(android::service::voice::VoiceInteractionSession_ActivityId arg0, android::os::CancellationSignal arg1, __JniBaseClass arg2, __JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"requestDirectActions",
			"(Landroid/service/voice/VoiceInteractionSession$ActivityId;Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void VoiceInteractionSession::setContentView(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setContentView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void VoiceInteractionSession::setDisabledShowContext(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDisabledShowContext",
			"(I)V",
			arg0
		);
	}
	void VoiceInteractionSession::setKeepAwake(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setKeepAwake",
			"(Z)V",
			arg0
		);
	}
	void VoiceInteractionSession::setTheme(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTheme",
			"(I)V",
			arg0
		);
	}
	void VoiceInteractionSession::setUiEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setUiEnabled",
			"(Z)V",
			arg0
		);
	}
	void VoiceInteractionSession::show(android::os::Bundle arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"show",
			"(Landroid/os/Bundle;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void VoiceInteractionSession::startAssistantActivity(android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"startAssistantActivity",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void VoiceInteractionSession::startVoiceActivity(android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"startVoiceActivity",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::service::voice

