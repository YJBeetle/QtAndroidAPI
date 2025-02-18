#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::media
{
	class RouteListingPreference : public JObject
	{
	public:
		// Fields
		static JString ACTION_TRANSFER_MEDIA();
		static JObject CREATOR();
		static JString EXTRA_ROUTE_ID();
		
		// QJniObject forward
		template<typename ...Ts> explicit RouteListingPreference(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RouteListingPreference(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JObject getItems() const;
		android::content::ComponentName getLinkedItemComponentName() const;
		jboolean getUseSystemOrdering() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media

