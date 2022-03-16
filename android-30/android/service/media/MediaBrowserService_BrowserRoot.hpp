#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../../JString.hpp"
#include "./MediaBrowserService_BrowserRoot.def.hpp"

namespace android::service::media
{
	// Fields
	inline JString MediaBrowserService_BrowserRoot::EXTRA_OFFLINE()
	{
		return getStaticObjectField(
			"android.service.media.MediaBrowserService$BrowserRoot",
			"EXTRA_OFFLINE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaBrowserService_BrowserRoot::EXTRA_RECENT()
	{
		return getStaticObjectField(
			"android.service.media.MediaBrowserService$BrowserRoot",
			"EXTRA_RECENT",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaBrowserService_BrowserRoot::EXTRA_SUGGESTED()
	{
		return getStaticObjectField(
			"android.service.media.MediaBrowserService$BrowserRoot",
			"EXTRA_SUGGESTED",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline MediaBrowserService_BrowserRoot::MediaBrowserService_BrowserRoot(JString arg0, android::os::Bundle arg1)
		: JObject(
			"android.service.media.MediaBrowserService$BrowserRoot",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline android::os::Bundle MediaBrowserService_BrowserRoot::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString MediaBrowserService_BrowserRoot::getRootId() const
	{
		return callObjectMethod(
			"getRootId",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::service::media

// Base class headers

