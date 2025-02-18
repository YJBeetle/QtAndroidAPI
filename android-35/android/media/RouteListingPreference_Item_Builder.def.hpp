#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class RouteListingPreference_Item;
}
class JString;
class JString;

namespace android::media
{
	class RouteListingPreference_Item_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RouteListingPreference_Item_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RouteListingPreference_Item_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RouteListingPreference_Item_Builder(JString arg0);
		
		// Methods
		android::media::RouteListingPreference_Item build() const;
		android::media::RouteListingPreference_Item_Builder setCustomSubtextMessage(JString arg0) const;
		android::media::RouteListingPreference_Item_Builder setFlags(jint arg0) const;
		android::media::RouteListingPreference_Item_Builder setSelectionBehavior(jint arg0) const;
		android::media::RouteListingPreference_Item_Builder setSubText(jint arg0) const;
	};
} // namespace android::media

