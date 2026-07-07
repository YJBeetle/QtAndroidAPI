#pragma once

#include "../../content/AttributionSource.def.hpp"
#include "../../content/Intent.def.hpp"
#include "./TvInputService_RecordingSession.def.hpp"
#include "./TvInputService_Session.def.hpp"
#include "../../../JString.hpp"
#include "./TvInputService.def.hpp"

namespace android::media::tv
{
	// Fields
	inline jint TvInputService::PRIORITY_HINT_USE_CASE_TYPE_BACKGROUND()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputService",
			"PRIORITY_HINT_USE_CASE_TYPE_BACKGROUND"
		);
	}
	inline jint TvInputService::PRIORITY_HINT_USE_CASE_TYPE_LIVE()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputService",
			"PRIORITY_HINT_USE_CASE_TYPE_LIVE"
		);
	}
	inline jint TvInputService::PRIORITY_HINT_USE_CASE_TYPE_PLAYBACK()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputService",
			"PRIORITY_HINT_USE_CASE_TYPE_PLAYBACK"
		);
	}
	inline jint TvInputService::PRIORITY_HINT_USE_CASE_TYPE_RECORD()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputService",
			"PRIORITY_HINT_USE_CASE_TYPE_RECORD"
		);
	}
	inline jint TvInputService::PRIORITY_HINT_USE_CASE_TYPE_SCAN()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputService",
			"PRIORITY_HINT_USE_CASE_TYPE_SCAN"
		);
	}
	inline JString TvInputService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.media.tv.TvInputService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInputService::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.media.tv.TvInputService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline TvInputService::TvInputService()
		: android::app::Service(
			"android.media.tv.TvInputService",
			"()V"
		) {}
	
	// Methods
	inline JObject TvInputService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline android::media::tv::TvInputService_RecordingSession TvInputService::onCreateRecordingSession(JString arg0) const
	{
		return callObjectMethod(
			"onCreateRecordingSession",
			"(Ljava/lang/String;)Landroid/media/tv/TvInputService$RecordingSession;",
			arg0.object<jstring>()
		);
	}
	inline android::media::tv::TvInputService_RecordingSession TvInputService::onCreateRecordingSession(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"onCreateRecordingSession",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/media/tv/TvInputService$RecordingSession;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline android::media::tv::TvInputService_Session TvInputService::onCreateSession(JString arg0) const
	{
		return callObjectMethod(
			"onCreateSession",
			"(Ljava/lang/String;)Landroid/media/tv/TvInputService$Session;",
			arg0.object<jstring>()
		);
	}
	inline android::media::tv::TvInputService_Session TvInputService::onCreateSession(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"onCreateSession",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/media/tv/TvInputService$Session;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline android::media::tv::TvInputService_Session TvInputService::onCreateSession(JString arg0, JString arg1, android::content::AttributionSource arg2) const
	{
		return callObjectMethod(
			"onCreateSession",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/content/AttributionSource;)Landroid/media/tv/TvInputService$Session;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
} // namespace android::media::tv

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv;
#endif
