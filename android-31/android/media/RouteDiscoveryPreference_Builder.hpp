#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class RouteDiscoveryPreference;
}

namespace android::media
{
	class RouteDiscoveryPreference_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RouteDiscoveryPreference_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RouteDiscoveryPreference_Builder(QAndroidJniObject obj);
		
		// Constructors
		RouteDiscoveryPreference_Builder(android::media::RouteDiscoveryPreference arg0);
		RouteDiscoveryPreference_Builder(JObject arg0, jboolean arg1);
		
		// Methods
		android::media::RouteDiscoveryPreference build() const;
		android::media::RouteDiscoveryPreference_Builder setPreferredFeatures(JObject arg0) const;
		android::media::RouteDiscoveryPreference_Builder setShouldPerformActiveScan(jboolean arg0) const;
	};
} // namespace android::media

