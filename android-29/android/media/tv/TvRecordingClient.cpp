#include "../../content/Context.hpp"
#include "./TvRecordingClient_RecordingCallback.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Handler.hpp"
#include "./TvRecordingClient.hpp"

namespace android::media::tv
{
	// Fields
	
	TvRecordingClient::TvRecordingClient(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TvRecordingClient::TvRecordingClient(android::content::Context &arg0, jstring &arg1, android::media::tv::TvRecordingClient_RecordingCallback &arg2, android::os::Handler &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvRecordingClient",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/media/tv/TvRecordingClient$RecordingCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	TvRecordingClient::TvRecordingClient(android::content::Context &arg0, const QString &arg1, android::media::tv::TvRecordingClient_RecordingCallback &arg2, android::os::Handler &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvRecordingClient",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/media/tv/TvRecordingClient$RecordingCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	void TvRecordingClient::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void TvRecordingClient::sendAppPrivateCommand(jstring arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"sendAppPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TvRecordingClient::sendAppPrivateCommand(const QString &arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"sendAppPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void TvRecordingClient::startRecording(android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"startRecording",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void TvRecordingClient::stopRecording()
	{
		__thiz.callMethod<void>(
			"stopRecording",
			"()V"
		);
	}
	void TvRecordingClient::tune(jstring arg0, android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"tune",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TvRecordingClient::tune(const QString &arg0, android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"tune",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void TvRecordingClient::tune(jstring arg0, android::net::Uri arg1, android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"tune",
			"(Ljava/lang/String;Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void TvRecordingClient::tune(const QString &arg0, android::net::Uri arg1, android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"tune",
			"(Ljava/lang/String;Landroid/net/Uri;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace android::media::tv

