#pragma once

#include "../../net/Uri.def.hpp"
#include "../../../JString.hpp"
#include "./TvRecordingClient_RecordingCallback.def.hpp"

namespace android::media::tv
{
	// Fields
	
	// Constructors
	inline TvRecordingClient_RecordingCallback::TvRecordingClient_RecordingCallback()
		: JObject(
			"android.media.tv.TvRecordingClient$RecordingCallback",
			"()V"
		) {}
	
	// Methods
	inline void TvRecordingClient_RecordingCallback::onConnectionFailed(JString arg0) const
	{
		callMethod<void>(
			"onConnectionFailed",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvRecordingClient_RecordingCallback::onDisconnected(JString arg0) const
	{
		callMethod<void>(
			"onDisconnected",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvRecordingClient_RecordingCallback::onError(jint arg0) const
	{
		callMethod<void>(
			"onError",
			"(I)V",
			arg0
		);
	}
	inline void TvRecordingClient_RecordingCallback::onRecordingStopped(android::net::Uri arg0) const
	{
		callMethod<void>(
			"onRecordingStopped",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	inline void TvRecordingClient_RecordingCallback::onTuned(android::net::Uri arg0) const
	{
		callMethod<void>(
			"onTuned",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
} // namespace android::media::tv

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv;
#endif
