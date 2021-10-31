#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class RouteDiscoveryPreference;
}

namespace android::media
{
	class RouteDiscoveryPreference_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RouteDiscoveryPreference_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RouteDiscoveryPreference_Builder(QJniObject obj);
		
		// Constructors
		RouteDiscoveryPreference_Builder(android::media::RouteDiscoveryPreference arg0);
		RouteDiscoveryPreference_Builder(__JniBaseClass arg0, jboolean arg1);
		
		// Methods
		android::media::RouteDiscoveryPreference build();
		android::media::RouteDiscoveryPreference_Builder setPreferredFeatures(__JniBaseClass arg0);
		android::media::RouteDiscoveryPreference_Builder setShouldPerformActiveScan(jboolean arg0);
	};
} // namespace android::media

