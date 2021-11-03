#include "../../content/Context.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Bundle.hpp"
#include "../../../JString.hpp"
#include "./TvInputService_RecordingSession.hpp"

namespace android::media::tv
{
	// Fields
	
	// QAndroidJniObject forward
	TvInputService_RecordingSession::TvInputService_RecordingSession(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TvInputService_RecordingSession::TvInputService_RecordingSession(android::content::Context arg0)
		: JObject(
			"android.media.tv.TvInputService$RecordingSession",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	void TvInputService_RecordingSession::notifyError(jint arg0) const
	{
		callMethod<void>(
			"notifyError",
			"(I)V",
			arg0
		);
	}
	void TvInputService_RecordingSession::notifyRecordingStopped(android::net::Uri arg0) const
	{
		callMethod<void>(
			"notifyRecordingStopped",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void TvInputService_RecordingSession::notifyTuned(android::net::Uri arg0) const
	{
		callMethod<void>(
			"notifyTuned",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void TvInputService_RecordingSession::onAppPrivateCommand(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onAppPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void TvInputService_RecordingSession::onPauseRecording(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onPauseRecording",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void TvInputService_RecordingSession::onRelease() const
	{
		callMethod<void>(
			"onRelease",
			"()V"
		);
	}
	void TvInputService_RecordingSession::onResumeRecording(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onResumeRecording",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void TvInputService_RecordingSession::onStartRecording(android::net::Uri arg0) const
	{
		callMethod<void>(
			"onStartRecording",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void TvInputService_RecordingSession::onStartRecording(android::net::Uri arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onStartRecording",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void TvInputService_RecordingSession::onStopRecording() const
	{
		callMethod<void>(
			"onStopRecording",
			"()V"
		);
	}
	void TvInputService_RecordingSession::onTune(android::net::Uri arg0) const
	{
		callMethod<void>(
			"onTune",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void TvInputService_RecordingSession::onTune(android::net::Uri arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onTune",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::media::tv

