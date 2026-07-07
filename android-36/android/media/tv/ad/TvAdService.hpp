#pragma once

#include "../../../content/Intent.def.hpp"
#include "./TvAdService_Session.def.hpp"
#include "../../../os/Bundle.def.hpp"
#include "../../../../JString.hpp"
#include "./TvAdService.def.hpp"

namespace android::media::tv::ad
{
	// Fields
	inline JString TvAdService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.media.tv.ad.TvAdService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvAdService::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.media.tv.ad.TvAdService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline TvAdService::TvAdService()
		: android::app::Service(
			"android.media.tv.ad.TvAdService",
			"()V"
		) {}
	
	// Methods
	inline void TvAdService::onAppLinkCommand(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onAppLinkCommand",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline JObject TvAdService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline android::media::tv::ad::TvAdService_Session TvAdService::onCreateSession(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"onCreateSession",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/media/tv/ad/TvAdService$Session;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
} // namespace android::media::tv::ad

// Base class headers
#include "../../../content/Context.hpp"
#include "../../../content/ContextWrapper.hpp"
#include "../../../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv::ad;
#endif
