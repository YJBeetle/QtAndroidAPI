#pragma once

#include "../../../JObject.hpp"

class JArray;
class JBooleanArray;
namespace android::app
{
	class Dialog;
}
namespace android::app
{
	class DirectAction;
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
	class CancellationSignal;
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
	class VoiceInteractionSession_ActivityId;
}
namespace android::service::voice
{
	class VoiceInteractionSession_AssistState;
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
class JString;
class JThrowable;

namespace android::service::voice
{
	class VoiceInteractionSession : public JObject
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VoiceInteractionSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractionSession(QAndroidJniObject obj);
		
		// Constructors
		VoiceInteractionSession(android::content::Context arg0);
		VoiceInteractionSession(android::content::Context arg0, android::os::Handler arg1);
		
		// Methods
		void closeSystemDialogs() const;
		void dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const;
		void finish() const;
		android::content::Context getContext() const;
		jint getDisabledShowContext() const;
		android::view::LayoutInflater getLayoutInflater() const;
		jint getUserDisabledShowContext() const;
		android::app::Dialog getWindow() const;
		void hide() const;
		void onAssistStructureFailure(JThrowable arg0) const;
		void onBackPressed() const;
		void onCancelRequest(android::service::voice::VoiceInteractionSession_Request arg0) const;
		void onCloseSystemDialogs() const;
		void onComputeInsets(android::service::voice::VoiceInteractionSession_Insets arg0) const;
		void onConfigurationChanged(android::content::res::Configuration arg0) const;
		void onCreate() const;
		android::view::View onCreateContentView() const;
		void onDestroy() const;
		void onDirectActionsInvalidated(android::service::voice::VoiceInteractionSession_ActivityId arg0) const;
		JBooleanArray onGetSupportedCommands(JArray arg0) const;
		void onHandleAssist(android::service::voice::VoiceInteractionSession_AssistState arg0) const;
		void onHandleAssist(android::os::Bundle arg0, android::app::assist::AssistStructure arg1, android::app::assist::AssistContent arg2) const;
		void onHandleAssistSecondary(android::os::Bundle arg0, android::app::assist::AssistStructure arg1, android::app::assist::AssistContent arg2, jint arg3, jint arg4) const;
		void onHandleScreenshot(android::graphics::Bitmap arg0) const;
		void onHide() const;
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyLongPress(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const;
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1) const;
		void onLockscreenShown() const;
		void onLowMemory() const;
		void onPrepareShow(android::os::Bundle arg0, jint arg1) const;
		void onRequestAbortVoice(android::service::voice::VoiceInteractionSession_AbortVoiceRequest arg0) const;
		void onRequestCommand(android::service::voice::VoiceInteractionSession_CommandRequest arg0) const;
		void onRequestCompleteVoice(android::service::voice::VoiceInteractionSession_CompleteVoiceRequest arg0) const;
		void onRequestConfirmation(android::service::voice::VoiceInteractionSession_ConfirmationRequest arg0) const;
		void onRequestPickOption(android::service::voice::VoiceInteractionSession_PickOptionRequest arg0) const;
		void onShow(android::os::Bundle arg0, jint arg1) const;
		void onTaskFinished(android::content::Intent arg0, jint arg1) const;
		void onTaskStarted(android::content::Intent arg0, jint arg1) const;
		void onTrimMemory(jint arg0) const;
		void performDirectAction(android::app::DirectAction arg0, android::os::Bundle arg1, android::os::CancellationSignal arg2, JObject arg3, JObject arg4) const;
		void requestDirectActions(android::service::voice::VoiceInteractionSession_ActivityId arg0, android::os::CancellationSignal arg1, JObject arg2, JObject arg3) const;
		void setContentView(android::view::View arg0) const;
		void setDisabledShowContext(jint arg0) const;
		void setKeepAwake(jboolean arg0) const;
		void setTheme(jint arg0) const;
		void setUiEnabled(jboolean arg0) const;
		void show(android::os::Bundle arg0, jint arg1) const;
		void startAssistantActivity(android::content::Intent arg0) const;
		void startVoiceActivity(android::content::Intent arg0) const;
	};
} // namespace android::service::voice

