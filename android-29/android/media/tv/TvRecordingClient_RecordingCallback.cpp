#include "../../net/Uri.hpp"
#include "./TvRecordingClient_RecordingCallback.hpp"

namespace android::media::tv
{
	// Fields
	
	TvRecordingClient_RecordingCallback::TvRecordingClient_RecordingCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TvRecordingClient_RecordingCallback::TvRecordingClient_RecordingCallback()
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvRecordingClient$RecordingCallback",
			"()V"
		);
	}
	
	// Methods
	void TvRecordingClient_RecordingCallback::onConnectionFailed(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onConnectionFailed",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TvRecordingClient_RecordingCallback::onConnectionFailed(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"onConnectionFailed",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void TvRecordingClient_RecordingCallback::onDisconnected(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onDisconnected",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TvRecordingClient_RecordingCallback::onDisconnected(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"onDisconnected",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void TvRecordingClient_RecordingCallback::onError(jint arg0)
	{
		__thiz.callMethod<void>(
			"onError",
			"(I)V",
			arg0
		);
	}
	void TvRecordingClient_RecordingCallback::onRecordingStopped(android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"onRecordingStopped",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void TvRecordingClient_RecordingCallback::onTuned(android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"onTuned",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::media::tv

