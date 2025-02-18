#pragma once

#include "../content/ComponentName.def.hpp"
#include "./RouteListingPreference.def.hpp"
#include "./RouteListingPreference_Builder.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline RouteListingPreference_Builder::RouteListingPreference_Builder()
		: JObject(
			"android.media.RouteListingPreference$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::media::RouteListingPreference RouteListingPreference_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/RouteListingPreference;"
		);
	}
	inline android::media::RouteListingPreference_Builder RouteListingPreference_Builder::setItems(JObject arg0) const
	{
		return callObjectMethod(
			"setItems",
			"(Ljava/util/List;)Landroid/media/RouteListingPreference$Builder;",
			arg0.object()
		);
	}
	inline android::media::RouteListingPreference_Builder RouteListingPreference_Builder::setLinkedItemComponentName(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"setLinkedItemComponentName",
			"(Landroid/content/ComponentName;)Landroid/media/RouteListingPreference$Builder;",
			arg0.object()
		);
	}
	inline android::media::RouteListingPreference_Builder RouteListingPreference_Builder::setUseSystemOrdering(jboolean arg0) const
	{
		return callObjectMethod(
			"setUseSystemOrdering",
			"(Z)Landroid/media/RouteListingPreference$Builder;",
			arg0
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
