#pragma once

#include "../../content/Intent.def.hpp"
#include "./TvInputService_RecordingSession.def.hpp"
#include "./TvInputService_Session.def.hpp"
#include "../../../JString.hpp"
#include "./TvInputService.def.hpp"

namespace android::media::tv
{
	// Fields
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
	inline android::media::tv::TvInputService_Session TvInputService::onCreateSession(JString arg0) const
	{
		return callObjectMethod(
			"onCreateSession",
			"(Ljava/lang/String;)Landroid/media/tv/TvInputService$Session;",
			arg0.object<jstring>()
		);
	}
} // namespace android::media::tv

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

