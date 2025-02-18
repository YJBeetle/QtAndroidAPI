#pragma once

#include "./UpdateSignalsRequest.def.hpp"
#include "../../net/Uri.def.hpp"
#include "./UpdateSignalsRequest_Builder.def.hpp"

namespace android::adservices::signals
{
	// Fields
	
	// Constructors
	inline UpdateSignalsRequest_Builder::UpdateSignalsRequest_Builder(android::net::Uri arg0)
		: JObject(
			"android.adservices.signals.UpdateSignalsRequest$Builder",
			"(Landroid/net/Uri;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::adservices::signals::UpdateSignalsRequest UpdateSignalsRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/signals/UpdateSignalsRequest;"
		);
	}
	inline android::adservices::signals::UpdateSignalsRequest_Builder UpdateSignalsRequest_Builder::setUpdateUri(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setUpdateUri",
			"(Landroid/net/Uri;)Landroid/adservices/signals/UpdateSignalsRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::signals

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::signals;
#endif
