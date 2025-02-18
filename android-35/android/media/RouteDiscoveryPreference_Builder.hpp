#pragma once

#include "./RouteDiscoveryPreference.def.hpp"
#include "./RouteDiscoveryPreference_Builder.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline RouteDiscoveryPreference_Builder::RouteDiscoveryPreference_Builder(android::media::RouteDiscoveryPreference arg0)
		: JObject(
			"android.media.RouteDiscoveryPreference$Builder",
			"(Landroid/media/RouteDiscoveryPreference;)V",
			arg0.object()
		) {}
	inline RouteDiscoveryPreference_Builder::RouteDiscoveryPreference_Builder(JObject arg0, jboolean arg1)
		: JObject(
			"android.media.RouteDiscoveryPreference$Builder",
			"(Ljava/util/List;Z)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline android::media::RouteDiscoveryPreference RouteDiscoveryPreference_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/RouteDiscoveryPreference;"
		);
	}
	inline android::media::RouteDiscoveryPreference_Builder RouteDiscoveryPreference_Builder::setPreferredFeatures(JObject arg0) const
	{
		return callObjectMethod(
			"setPreferredFeatures",
			"(Ljava/util/List;)Landroid/media/RouteDiscoveryPreference$Builder;",
			arg0.object()
		);
	}
	inline android::media::RouteDiscoveryPreference_Builder RouteDiscoveryPreference_Builder::setShouldPerformActiveScan(jboolean arg0) const
	{
		return callObjectMethod(
			"setShouldPerformActiveScan",
			"(Z)Landroid/media/RouteDiscoveryPreference$Builder;",
			arg0
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
