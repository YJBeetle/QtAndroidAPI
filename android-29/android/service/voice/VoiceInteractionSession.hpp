#pragma once

#ifndef ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION
#define ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::io
{
	class PrintWriter;
}
namespace __jni_impl::android::app
{
	class Dialog;
}
namespace __jni_impl::android::content::res
{
	class Configuration;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::view
{
	class LayoutInflater;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::service::voice
{
	class VoiceInteractionSession_ActivityId;
}
namespace __jni_impl::android::os
{
	class CancellationSignal;
}
namespace __jni_impl::android::app
{
	class DirectAction;
}
namespace __jni_impl::android::service::voice
{
	class VoiceInteractionSession_AssistState;
}
namespace __jni_impl::android::app::assist
{
	class AssistStructure;
}
namespace __jni_impl::android::app::assist
{
	class AssistContent;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::service::voice
{
	class VoiceInteractionSession_Insets;
}
namespace __jni_impl::android::service::voice
{
	class VoiceInteractionSession_ConfirmationRequest;
}
namespace __jni_impl::android::service::voice
{
	class VoiceInteractionSession_PickOptionRequest;
}
namespace __jni_impl::android::service::voice
{
	class VoiceInteractionSession_CompleteVoiceRequest;
}
namespace __jni_impl::android::service::voice
{
	class VoiceInteractionSession_AbortVoiceRequest;
}
namespace __jni_impl::android::service::voice
{
	class VoiceInteractionSession_CommandRequest;
}
namespace __jni_impl::android::service::voice
{
	class VoiceInteractionSession_Request;
}

namespace __jni_impl::android::service::voice
{
	class VoiceInteractionSession : public __JniBaseClass
	{
	public:
		// Fields
		static jint SHOW_SOURCE_ACTIVITY();
		static jint SHOW_SOURCE_APPLICATION();
		static jint SHOW_SOURCE_ASSIST_GESTURE();
		static jint SHOW_SOURCE_AUTOMOTIVE_SYSTEM_UI();
		static jint SHOW_SOURCE_NOTIFICATION();
		static jint SHOW_SOURCE_PUSH_TO_TALK();
		static jint SHOW_WITH_ASSIST();
		static jint SHOW_WITH_SCREENSHOT();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::os::Handler arg1);
		
		// Methods
		QAndroidJniObject getContext();
		void finish();
		void show(__jni_impl::android::os::Bundle arg0, jint arg1);
		void hide();
		void setTheme(jint arg0);
		void dump(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3);
		QAndroidJniObject getWindow();
		void onCreate();
		void onDestroy();
		void onConfigurationChanged(__jni_impl::android::content::res::Configuration arg0);
		void onLowMemory();
		void onTrimMemory(jint arg0);
		void setContentView(__jni_impl::android::view::View arg0);
		jboolean onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyLongPress(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyMultiple(jint arg0, jint arg1, __jni_impl::android::view::KeyEvent arg2);
		void onBackPressed();
		QAndroidJniObject getLayoutInflater();
		void setDisabledShowContext(jint arg0);
		jint getDisabledShowContext();
		jint getUserDisabledShowContext();
		void setUiEnabled(jboolean arg0);
		void startVoiceActivity(__jni_impl::android::content::Intent arg0);
		void startAssistantActivity(__jni_impl::android::content::Intent arg0);
		void requestDirectActions(__jni_impl::android::service::voice::VoiceInteractionSession_ActivityId arg0, __jni_impl::android::os::CancellationSignal arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3);
		void onDirectActionsInvalidated(__jni_impl::android::service::voice::VoiceInteractionSession_ActivityId arg0);
		void performDirectAction(__jni_impl::android::app::DirectAction arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::os::CancellationSignal arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::__JniBaseClass arg4);
		void setKeepAwake(jboolean arg0);
		void closeSystemDialogs();
		void onPrepareShow(__jni_impl::android::os::Bundle arg0, jint arg1);
		void onShow(__jni_impl::android::os::Bundle arg0, jint arg1);
		void onHide();
		QAndroidJniObject onCreateContentView();
		void onAssistStructureFailure(jthrowable arg0);
		void onHandleAssist(__jni_impl::android::service::voice::VoiceInteractionSession_AssistState arg0);
		void onHandleAssist(__jni_impl::android::os::Bundle arg0, __jni_impl::android::app::assist::AssistStructure arg1, __jni_impl::android::app::assist::AssistContent arg2);
		void onHandleAssistSecondary(__jni_impl::android::os::Bundle arg0, __jni_impl::android::app::assist::AssistStructure arg1, __jni_impl::android::app::assist::AssistContent arg2, jint arg3, jint arg4);
		void onHandleScreenshot(__jni_impl::android::graphics::Bitmap arg0);
		void onCloseSystemDialogs();
		void onLockscreenShown();
		void onComputeInsets(__jni_impl::android::service::voice::VoiceInteractionSession_Insets arg0);
		void onTaskStarted(__jni_impl::android::content::Intent arg0, jint arg1);
		void onTaskFinished(__jni_impl::android::content::Intent arg0, jint arg1);
		QAndroidJniObject onGetSupportedCommands(jarray arg0);
		void onRequestConfirmation(__jni_impl::android::service::voice::VoiceInteractionSession_ConfirmationRequest arg0);
		void onRequestPickOption(__jni_impl::android::service::voice::VoiceInteractionSession_PickOptionRequest arg0);
		void onRequestCompleteVoice(__jni_impl::android::service::voice::VoiceInteractionSession_CompleteVoiceRequest arg0);
		void onRequestAbortVoice(__jni_impl::android::service::voice::VoiceInteractionSession_AbortVoiceRequest arg0);
		void onRequestCommand(__jni_impl::android::service::voice::VoiceInteractionSession_CommandRequest arg0);
		void onCancelRequest(__jni_impl::android::service::voice::VoiceInteractionSession_Request arg0);
	};
} // namespace __jni_impl::android::service::voice

#include "../../content/Context.hpp"
#include "../../os/Handler.hpp"
#include "../../os/Bundle.hpp"
#include "../../../java/io/FileDescriptor.hpp"
#include "../../../java/io/PrintWriter.hpp"
#include "../../app/Dialog.hpp"
#include "../../content/res/Configuration.hpp"
#include "../../view/View.hpp"
#include "../../view/KeyEvent.hpp"
#include "../../view/LayoutInflater.hpp"
#include "../../content/Intent.hpp"
#include "VoiceInteractionSession_ActivityId.hpp"
#include "../../os/CancellationSignal.hpp"
#include "../../app/DirectAction.hpp"
#include "VoiceInteractionSession_AssistState.hpp"
#include "../../app/assist/AssistStructure.hpp"
#include "../../app/assist/AssistContent.hpp"
#include "../../graphics/Bitmap.hpp"
#include "VoiceInteractionSession_Insets.hpp"
#include "VoiceInteractionSession_ConfirmationRequest.hpp"
#include "VoiceInteractionSession_PickOptionRequest.hpp"
#include "VoiceInteractionSession_CompleteVoiceRequest.hpp"
#include "VoiceInteractionSession_AbortVoiceRequest.hpp"
#include "VoiceInteractionSession_CommandRequest.hpp"
#include "VoiceInteractionSession_Request.hpp"

namespace __jni_impl::android::service::voice
{
	// Fields
	jint VoiceInteractionSession::SHOW_SOURCE_ACTIVITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_SOURCE_ACTIVITY");
	}
	jint VoiceInteractionSession::SHOW_SOURCE_APPLICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_SOURCE_APPLICATION");
	}
	jint VoiceInteractionSession::SHOW_SOURCE_ASSIST_GESTURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_SOURCE_ASSIST_GESTURE");
	}
	jint VoiceInteractionSession::SHOW_SOURCE_AUTOMOTIVE_SYSTEM_UI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_SOURCE_AUTOMOTIVE_SYSTEM_UI");
	}
	jint VoiceInteractionSession::SHOW_SOURCE_NOTIFICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_SOURCE_NOTIFICATION");
	}
	jint VoiceInteractionSession::SHOW_SOURCE_PUSH_TO_TALK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_SOURCE_PUSH_TO_TALK");
	}
	jint VoiceInteractionSession::SHOW_WITH_ASSIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_WITH_ASSIST");
	}
	jint VoiceInteractionSession::SHOW_WITH_SCREENSHOT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession",
			"SHOW_WITH_SCREENSHOT");
	}
	
	// Constructors
	void VoiceInteractionSession::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.service.voice.VoiceInteractionSession",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	void VoiceInteractionSession::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz = QAndroidJniObject(
			"android.service.voice.VoiceInteractionSession",
			"(Landroid/content/Context;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject VoiceInteractionSession::getContext()
	{
		return __thiz.callObjectMethod(
			"getContext",
			"()Landroid/content/Context;");
	}
	void VoiceInteractionSession::finish()
	{
		__thiz.callMethod<void>(
			"finish",
			"()V");
	}
	void VoiceInteractionSession::show(__jni_impl::android::os::Bundle arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"show",
			"(Landroid/os/Bundle;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void VoiceInteractionSession::hide()
	{
		__thiz.callMethod<void>(
			"hide",
			"()V");
	}
	void VoiceInteractionSession::setTheme(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTheme",
			"(I)V",
			arg0);
	}
	void VoiceInteractionSession::dump(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3);
	}
	QAndroidJniObject VoiceInteractionSession::getWindow()
	{
		return __thiz.callObjectMethod(
			"getWindow",
			"()Landroid/app/Dialog;");
	}
	void VoiceInteractionSession::onCreate()
	{
		__thiz.callMethod<void>(
			"onCreate",
			"()V");
	}
	void VoiceInteractionSession::onDestroy()
	{
		__thiz.callMethod<void>(
			"onDestroy",
			"()V");
	}
	void VoiceInteractionSession::onConfigurationChanged(__jni_impl::android::content::res::Configuration arg0)
	{
		__thiz.callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object());
	}
	void VoiceInteractionSession::onLowMemory()
	{
		__thiz.callMethod<void>(
			"onLowMemory",
			"()V");
	}
	void VoiceInteractionSession::onTrimMemory(jint arg0)
	{
		__thiz.callMethod<void>(
			"onTrimMemory",
			"(I)V",
			arg0);
	}
	void VoiceInteractionSession::setContentView(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setContentView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	jboolean VoiceInteractionSession::onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean VoiceInteractionSession::onKeyLongPress(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyLongPress",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean VoiceInteractionSession::onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean VoiceInteractionSession::onKeyMultiple(jint arg0, jint arg1, __jni_impl::android::view::KeyEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void VoiceInteractionSession::onBackPressed()
	{
		__thiz.callMethod<void>(
			"onBackPressed",
			"()V");
	}
	QAndroidJniObject VoiceInteractionSession::getLayoutInflater()
	{
		return __thiz.callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;");
	}
	void VoiceInteractionSession::setDisabledShowContext(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDisabledShowContext",
			"(I)V",
			arg0);
	}
	jint VoiceInteractionSession::getDisabledShowContext()
	{
		return __thiz.callMethod<jint>(
			"getDisabledShowContext",
			"()I");
	}
	jint VoiceInteractionSession::getUserDisabledShowContext()
	{
		return __thiz.callMethod<jint>(
			"getUserDisabledShowContext",
			"()I");
	}
	void VoiceInteractionSession::setUiEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setUiEnabled",
			"(Z)V",
			arg0);
	}
	void VoiceInteractionSession::startVoiceActivity(__jni_impl::android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"startVoiceActivity",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object());
	}
	void VoiceInteractionSession::startAssistantActivity(__jni_impl::android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"startAssistantActivity",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object());
	}
	void VoiceInteractionSession::requestDirectActions(__jni_impl::android::service::voice::VoiceInteractionSession_ActivityId arg0, __jni_impl::android::os::CancellationSignal arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"requestDirectActions",
			"(Landroid/service/voice/VoiceInteractionSession$ActivityId;Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	void VoiceInteractionSession::onDirectActionsInvalidated(__jni_impl::android::service::voice::VoiceInteractionSession_ActivityId arg0)
	{
		__thiz.callMethod<void>(
			"onDirectActionsInvalidated",
			"(Landroid/service/voice/VoiceInteractionSession$ActivityId;)V",
			arg0.__jniObject().object());
	}
	void VoiceInteractionSession::performDirectAction(__jni_impl::android::app::DirectAction arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::os::CancellationSignal arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::__JniBaseClass arg4)
	{
		__thiz.callMethod<void>(
			"performDirectAction",
			"(Landroid/app/DirectAction;Landroid/os/Bundle;Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object());
	}
	void VoiceInteractionSession::setKeepAwake(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setKeepAwake",
			"(Z)V",
			arg0);
	}
	void VoiceInteractionSession::closeSystemDialogs()
	{
		__thiz.callMethod<void>(
			"closeSystemDialogs",
			"()V");
	}
	void VoiceInteractionSession::onPrepareShow(__jni_impl::android::os::Bundle arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onPrepareShow",
			"(Landroid/os/Bundle;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void VoiceInteractionSession::onShow(__jni_impl::android::os::Bundle arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onShow",
			"(Landroid/os/Bundle;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void VoiceInteractionSession::onHide()
	{
		__thiz.callMethod<void>(
			"onHide",
			"()V");
	}
	QAndroidJniObject VoiceInteractionSession::onCreateContentView()
	{
		return __thiz.callObjectMethod(
			"onCreateContentView",
			"()Landroid/view/View;");
	}
	void VoiceInteractionSession::onAssistStructureFailure(jthrowable arg0)
	{
		__thiz.callMethod<void>(
			"onAssistStructureFailure",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void VoiceInteractionSession::onHandleAssist(__jni_impl::android::service::voice::VoiceInteractionSession_AssistState arg0)
	{
		__thiz.callMethod<void>(
			"onHandleAssist",
			"(Landroid/service/voice/VoiceInteractionSession$AssistState;)V",
			arg0.__jniObject().object());
	}
	void VoiceInteractionSession::onHandleAssist(__jni_impl::android::os::Bundle arg0, __jni_impl::android::app::assist::AssistStructure arg1, __jni_impl::android::app::assist::AssistContent arg2)
	{
		__thiz.callMethod<void>(
			"onHandleAssist",
			"(Landroid/os/Bundle;Landroid/app/assist/AssistStructure;Landroid/app/assist/AssistContent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void VoiceInteractionSession::onHandleAssistSecondary(__jni_impl::android::os::Bundle arg0, __jni_impl::android::app::assist::AssistStructure arg1, __jni_impl::android::app::assist::AssistContent arg2, jint arg3, jint arg4)
	{
		__thiz.callMethod<void>(
			"onHandleAssistSecondary",
			"(Landroid/os/Bundle;Landroid/app/assist/AssistStructure;Landroid/app/assist/AssistContent;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			arg4);
	}
	void VoiceInteractionSession::onHandleScreenshot(__jni_impl::android::graphics::Bitmap arg0)
	{
		__thiz.callMethod<void>(
			"onHandleScreenshot",
			"(Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object());
	}
	void VoiceInteractionSession::onCloseSystemDialogs()
	{
		__thiz.callMethod<void>(
			"onCloseSystemDialogs",
			"()V");
	}
	void VoiceInteractionSession::onLockscreenShown()
	{
		__thiz.callMethod<void>(
			"onLockscreenShown",
			"()V");
	}
	void VoiceInteractionSession::onComputeInsets(__jni_impl::android::service::voice::VoiceInteractionSession_Insets arg0)
	{
		__thiz.callMethod<void>(
			"onComputeInsets",
			"(Landroid/service/voice/VoiceInteractionSession$Insets;)V",
			arg0.__jniObject().object());
	}
	void VoiceInteractionSession::onTaskStarted(__jni_impl::android::content::Intent arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onTaskStarted",
			"(Landroid/content/Intent;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void VoiceInteractionSession::onTaskFinished(__jni_impl::android::content::Intent arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onTaskFinished",
			"(Landroid/content/Intent;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject VoiceInteractionSession::onGetSupportedCommands(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"onGetSupportedCommands",
			"([Ljava/lang/String;)[Z",
			arg0);
	}
	void VoiceInteractionSession::onRequestConfirmation(__jni_impl::android::service::voice::VoiceInteractionSession_ConfirmationRequest arg0)
	{
		__thiz.callMethod<void>(
			"onRequestConfirmation",
			"(Landroid/service/voice/VoiceInteractionSession$ConfirmationRequest;)V",
			arg0.__jniObject().object());
	}
	void VoiceInteractionSession::onRequestPickOption(__jni_impl::android::service::voice::VoiceInteractionSession_PickOptionRequest arg0)
	{
		__thiz.callMethod<void>(
			"onRequestPickOption",
			"(Landroid/service/voice/VoiceInteractionSession$PickOptionRequest;)V",
			arg0.__jniObject().object());
	}
	void VoiceInteractionSession::onRequestCompleteVoice(__jni_impl::android::service::voice::VoiceInteractionSession_CompleteVoiceRequest arg0)
	{
		__thiz.callMethod<void>(
			"onRequestCompleteVoice",
			"(Landroid/service/voice/VoiceInteractionSession$CompleteVoiceRequest;)V",
			arg0.__jniObject().object());
	}
	void VoiceInteractionSession::onRequestAbortVoice(__jni_impl::android::service::voice::VoiceInteractionSession_AbortVoiceRequest arg0)
	{
		__thiz.callMethod<void>(
			"onRequestAbortVoice",
			"(Landroid/service/voice/VoiceInteractionSession$AbortVoiceRequest;)V",
			arg0.__jniObject().object());
	}
	void VoiceInteractionSession::onRequestCommand(__jni_impl::android::service::voice::VoiceInteractionSession_CommandRequest arg0)
	{
		__thiz.callMethod<void>(
			"onRequestCommand",
			"(Landroid/service/voice/VoiceInteractionSession$CommandRequest;)V",
			arg0.__jniObject().object());
	}
	void VoiceInteractionSession::onCancelRequest(__jni_impl::android::service::voice::VoiceInteractionSession_Request arg0)
	{
		__thiz.callMethod<void>(
			"onCancelRequest",
			"(Landroid/service/voice/VoiceInteractionSession$Request;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::service::voice

namespace android::service::voice
{
	class VoiceInteractionSession : public __jni_impl::android::service::voice::VoiceInteractionSession
	{
	public:
		VoiceInteractionSession(QAndroidJniObject obj) { __thiz = obj; }
		VoiceInteractionSession(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		VoiceInteractionSession(__jni_impl::android::content::Context arg0, __jni_impl::android::os::Handler arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::service::voice

#endif // ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION

