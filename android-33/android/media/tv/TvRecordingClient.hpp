#pragma once

#include "../../content/Context.def.hpp"
#include "./TvRecordingClient_RecordingCallback.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/Handler.def.hpp"
#include "../../../JString.hpp"
#include "./TvRecordingClient.def.hpp"

namespace android::media::tv
{
	// Fields
	
	// Constructors
	inline TvRecordingClient::TvRecordingClient(android::content::Context arg0, JString arg1, android::media::tv::TvRecordingClient_RecordingCallback arg2, android::os::Handler arg3)
		: JObject(
			"android.media.tv.TvRecordingClient",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/media/tv/TvRecordingClient$RecordingCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline void TvRecordingClient::pauseRecording() const
	{
		callMethod<void>(
			"pauseRecording",
			"()V"
		);
	}
	inline void TvRecordingClient::pauseRecording(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"pauseRecording",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void TvRecordingClient::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline void TvRecordingClient::resumeRecording() const
	{
		callMethod<void>(
			"resumeRecording",
			"()V"
		);
	}
	inline void TvRecordingClient::resumeRecording(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"resumeRecording",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void TvRecordingClient::sendAppPrivateCommand(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"sendAppPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void TvRecordingClient::startRecording(android::net::Uri arg0) const
	{
		callMethod<void>(
			"startRecording",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	inline void TvRecordingClient::startRecording(android::net::Uri arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"startRecording",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void TvRecordingClient::stopRecording() const
	{
		callMethod<void>(
			"stopRecording",
			"()V"
		);
	}
	inline void TvRecordingClient::tune(JString arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"tune",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void TvRecordingClient::tune(JString arg0, android::net::Uri arg1, android::os::Bundle arg2) const
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

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv;
#endif
