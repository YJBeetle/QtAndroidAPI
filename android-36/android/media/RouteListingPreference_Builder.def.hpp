#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::media
{
	class RouteListingPreference;
}

namespace android::media
{
	class RouteListingPreference_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RouteListingPreference_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RouteListingPreference_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RouteListingPreference_Builder();
		
		// Methods
		android::media::RouteListingPreference build() const;
		android::media::RouteListingPreference_Builder setItems(JObject arg0) const;
		android::media::RouteListingPreference_Builder setLinkedItemComponentName(android::content::ComponentName arg0) const;
		android::media::RouteListingPreference_Builder setUseSystemOrdering(jboolean arg0) const;
	};
} // namespace android::media

