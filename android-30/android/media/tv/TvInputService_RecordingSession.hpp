#pragma once

#include "../../content/Context.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../../JString.hpp"
#include "./TvInputService_RecordingSession.def.hpp"

namespace android::media::tv
{
	// Fields
	
	// Constructors
	inline TvInputService_RecordingSession::TvInputService_RecordingSession(android::content::Context arg0)
		: JObject(
			"android.media.tv.TvInputService$RecordingSession",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void TvInputService_RecordingSession::notifyError(jint arg0) const
	{
		callMethod<void>(
			"notifyError",
			"(I)V",
			arg0
		);
	}
	inline void TvInputService_RecordingSession::notifyRecordingStopped(android::net::Uri arg0) const
	{
		callMethod<void>(
			"notifyRecordingStopped",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	inline void TvInputService_RecordingSession::notifyTuned(android::net::Uri arg0) const
	{
		callMethod<void>(
			"notifyTuned",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	inline void TvInputService_RecordingSession::onAppPrivateCommand(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onAppPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void TvInputService_RecordingSession::onRelease() const
	{
		callMethod<void>(
			"onRelease",
			"()V"
		);
	}
	inline void TvInputService_RecordingSession::onStartRecording(android::net::Uri arg0) const
	{
		callMethod<void>(
			"onStartRecording",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	inline void TvInputService_RecordingSession::onStartRecording(android::net::Uri arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onStartRecording",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void TvInputService_RecordingSession::onStopRecording() const
	{
		callMethod<void>(
			"onStopRecording",
			"()V"
		);
	}
	inline void TvInputService_RecordingSession::onTune(android::net::Uri arg0) const
	{
		callMethod<void>(
			"onTune",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	inline void TvInputService_RecordingSession::onTune(android::net::Uri arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onTune",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::media::tv

// Base class headers

