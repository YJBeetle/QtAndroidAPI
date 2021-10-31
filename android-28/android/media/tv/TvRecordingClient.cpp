#include "../../content/Context.hpp"
#include "./TvRecordingClient_RecordingCallback.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Handler.hpp"
#include "./TvRecordingClient.hpp"

namespace android::media::tv
{
	// Fields
	
	// QJniObject forward
	TvRecordingClient::TvRecordingClient(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TvRecordingClient::TvRecordingClient(android::content::Context arg0, jstring arg1, android::media::tv::TvRecordingClient_RecordingCallback arg2, android::os::Handler arg3)
		: __JniBaseClass(
			"android.media.tv.TvRecordingClient",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/media/tv/TvRecordingClient$RecordingCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	void TvRecordingClient::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void TvRecordingClient::sendAppPrivateCommand(jstring arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"sendAppPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
	void TvRecordingClient::startRecording(android::net::Uri arg0)
	{
		callMethod<void>(
			"startRecording",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void TvRecordingClient::stopRecording()
	{
		callMethod<void>(
			"stopRecording",
			"()V"
		);
	}
	void TvRecordingClient::tune(jstring arg0, android::net::Uri arg1)
	{
		callMethod<void>(
			"tune",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0,
			arg1.object()
		);
	}
	void TvRecordingClient::tune(jstring arg0, android::net::Uri arg1, android::os::Bundle arg2)
	{
		callMethod<void>(
			"tune",
			"(Ljava/lang/String;Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::media::tv

