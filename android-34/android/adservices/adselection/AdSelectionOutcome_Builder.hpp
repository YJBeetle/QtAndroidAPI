#pragma once

#include "./AdSelectionOutcome.def.hpp"
#include "../../net/Uri.def.hpp"
#include "./AdSelectionOutcome_Builder.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	
	// Constructors
	inline AdSelectionOutcome_Builder::AdSelectionOutcome_Builder()
		: JObject(
			"android.adservices.adselection.AdSelectionOutcome$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::adselection::AdSelectionOutcome AdSelectionOutcome_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/adselection/AdSelectionOutcome;"
		);
	}
	inline android::adservices::adselection::AdSelectionOutcome_Builder AdSelectionOutcome_Builder::setAdSelectionId(jlong arg0) const
	{
		return callObjectMethod(
			"setAdSelectionId",
			"(J)Landroid/adservices/adselection/AdSelectionOutcome$Builder;",
			arg0
		);
	}
	inline android::adservices::adselection::AdSelectionOutcome_Builder AdSelectionOutcome_Builder::setRenderUri(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setRenderUri",
			"(Landroid/net/Uri;)Landroid/adservices/adselection/AdSelectionOutcome$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
