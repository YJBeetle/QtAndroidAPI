#include "../../content/Context.hpp"
#include "./TvRecordingClient_RecordingCallback.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Handler.hpp"
#include "../../../JString.hpp"
#include "./TvRecordingClient.hpp"

namespace android::media::tv
{
	// Fields
	
	// QAndroidJniObject forward
	TvRecordingClient::TvRecordingClient(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TvRecordingClient::TvRecordingClient(android::content::Context arg0, JString arg1, android::media::tv::TvRecordingClient_RecordingCallback arg2, android::os::Handler arg3)
		: JObject(
			"android.media.tv.TvRecordingClient",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/media/tv/TvRecordingClient$RecordingCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	void TvRecordingClient::pauseRecording()
	{
		callMethod<void>(
			"pauseRecording",
			"()V"
		);
	}
	void TvRecordingClient::pauseRecording(android::os::Bundle arg0)
	{
		callMethod<void>(
			"pauseRecording",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void TvRecordingClient::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void TvRecordingClient::resumeRecording()
	{
		callMethod<void>(
			"resumeRecording",
			"()V"
		);
	}
	void TvRecordingClient::resumeRecording(android::os::Bundle arg0)
	{
		callMethod<void>(
			"resumeRecording",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void TvRecordingClient::sendAppPrivateCommand(JString arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"sendAppPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
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
	void TvRecordingClient::startRecording(android::net::Uri arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"startRecording",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void TvRecordingClient::stopRecording()
	{
		callMethod<void>(
			"stopRecording",
			"()V"
		);
	}
	void TvRecordingClient::tune(JString arg0, android::net::Uri arg1)
	{
		callMethod<void>(
			"tune",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void TvRecordingClient::tune(JString arg0, android::net::Uri arg1, android::os::Bundle arg2)
	{
		callMethod<void>(
			"tune",
			"(Ljava/lang/String;Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::media::tv

