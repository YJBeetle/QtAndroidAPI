#include "../../content/Context.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Bundle.hpp"
#include "./TvInputService_RecordingSession.hpp"

namespace android::media::tv
{
	// Fields
	
	TvInputService_RecordingSession::TvInputService_RecordingSession(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TvInputService_RecordingSession::TvInputService_RecordingSession(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvInputService$RecordingSession",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void TvInputService_RecordingSession::notifyError(jint arg0)
	{
		__thiz.callMethod<void>(
			"notifyError",
			"(I)V",
			arg0
		);
	}
	void TvInputService_RecordingSession::notifyRecordingStopped(android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"notifyRecordingStopped",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void TvInputService_RecordingSession::notifyTuned(android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"notifyTuned",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void TvInputService_RecordingSession::onAppPrivateCommand(jstring arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onAppPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TvInputService_RecordingSession::onRelease()
	{
		__thiz.callMethod<void>(
			"onRelease",
			"()V"
		);
	}
	void TvInputService_RecordingSession::onStartRecording(android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"onStartRecording",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void TvInputService_RecordingSession::onStopRecording()
	{
		__thiz.callMethod<void>(
			"onStopRecording",
			"()V"
		);
	}
	void TvInputService_RecordingSession::onTune(android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"onTune",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void TvInputService_RecordingSession::onTune(android::net::Uri arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onTune",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::media::tv

