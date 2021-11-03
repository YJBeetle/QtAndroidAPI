#pragma once

#include "../../../JObject.hpp"

namespace android::app
{
	class Dialog;
}
namespace android::app::assist
{
	class AssistContent;
}
namespace android::app::assist
{
	class AssistStructure;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::content::res
{
	class Configuration;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Handler;
}
namespace android::service::voice
{
	class VoiceInteractionSession_AbortVoiceRequest;
}
namespace android::service::voice
{
	class VoiceInteractionSession_CommandRequest;
}
namespace android::service::voice
{
	class VoiceInteractionSession_CompleteVoiceRequest;
}
namespace android::service::voice
{
	class VoiceInteractionSession_ConfirmationRequest;
}
namespace android::service::voice
{
	class VoiceInteractionSession_Insets;
}
namespace android::service::voice
{
	class VoiceInteractionSession_PickOptionRequest;
}
namespace android::service::voice
{
	class VoiceInteractionSession_Request;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class LayoutInflater;
}
namespace android::view
{
	class View;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class PrintWriter;
}

namespace android::service::voice
{
	class VoiceInteractionSession : public JObject
	{
	public:
		// Fields
		static jint SHOW_SOURCE_ACTIVITY();
		static jint SHOW_SOURCE_APPLICATION();
		static jint SHOW_SOURCE_ASSIST_GESTURE();
		static jint SHOW_WITH_ASSIST();
		static jint SHOW_WITH_SCREENSHOT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VoiceInteractionSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractionSession(QAndroidJniObject obj);
		
		// Constructors
		VoiceInteractionSession(android::content::Context arg0);
		VoiceInteractionSession(android::content::Context arg0, android::os::Handler arg1);
		
		// Methods
		void closeSystemDialogs();
		void dump(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3);
		void finish();
		android::content::Context getContext();
		jint getDisabledShowContext();
		android::view::LayoutInflater getLayoutInflater();
		jint getUserDisabledShowContext();
		android::app::Dialog getWindow();
		void hide();
		void onAssistStructureFailure(jthrowable arg0);
		void onBackPressed();
		void onCancelRequest(android::service::voice::VoiceInteractionSession_Request arg0);
		void onCloseSystemDialogs();
		void onComputeInsets(android::service::voice::VoiceInteractionSession_Insets arg0);
		void onConfigurationChanged(android::content::res::Configuration arg0);
		void onCreate();
		android::view::View onCreateContentView();
		void onDestroy();
		jbooleanArray onGetSupportedCommands(jarray arg0);
		void onHandleAssist(android::os::Bundle arg0, android::app::assist::AssistStructure arg1, android::app::assist::AssistContent arg2);
		void onHandleAssistSecondary(android::os::Bundle arg0, android::app::assist::AssistStructure arg1, android::app::assist::AssistContent arg2, jint arg3, jint arg4);
		void onHandleScreenshot(android::graphics::Bitmap arg0);
		void onHide();
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyLongPress(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2);
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1);
		void onLockscreenShown();
		void onLowMemory();
		void onPrepareShow(android::os::Bundle arg0, jint arg1);
		void onRequestAbortVoice(android::service::voice::VoiceInteractionSession_AbortVoiceRequest arg0);
		void onRequestCommand(android::service::voice::VoiceInteractionSession_CommandRequest arg0);
		void onRequestCompleteVoice(android::service::voice::VoiceInteractionSession_CompleteVoiceRequest arg0);
		void onRequestConfirmation(android::service::voice::VoiceInteractionSession_ConfirmationRequest arg0);
		void onRequestPickOption(android::service::voice::VoiceInteractionSession_PickOptionRequest arg0);
		void onShow(android::os::Bundle arg0, jint arg1);
		void onTaskFinished(android::content::Intent arg0, jint arg1);
		void onTaskStarted(android::content::Intent arg0, jint arg1);
		void onTrimMemory(jint arg0);
		void setContentView(android::view::View arg0);
		void setDisabledShowContext(jint arg0);
		void setKeepAwake(jboolean arg0);
		void setTheme(jint arg0);
		void setUiEnabled(jboolean arg0);
		void show(android::os::Bundle arg0, jint arg1);
		void startAssistantActivity(android::content::Intent arg0);
		void startVoiceActivity(android::content::Intent arg0);
	};
} // namespace android::service::voice

