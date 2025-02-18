#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;
class JObject;
class JString;

namespace android::media
{
	class RouteListingPreference_Item : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_ONGOING_SESSION();
		static jint FLAG_ONGOING_SESSION_MANAGED();
		static jint FLAG_SUGGESTED();
		static jint SELECTION_BEHAVIOR_GO_TO_APP();
		static jint SELECTION_BEHAVIOR_NONE();
		static jint SELECTION_BEHAVIOR_TRANSFER();
		static jint SUBTEXT_AD_ROUTING_DISALLOWED();
		static jint SUBTEXT_CUSTOM();
		static jint SUBTEXT_DEVICE_LOW_POWER();
		static jint SUBTEXT_DOWNLOADED_CONTENT_ROUTING_DISALLOWED();
		static jint SUBTEXT_ERROR_UNKNOWN();
		static jint SUBTEXT_NONE();
		static jint SUBTEXT_SUBSCRIPTION_REQUIRED();
		static jint SUBTEXT_TRACK_UNSUPPORTED();
		static jint SUBTEXT_UNAUTHORIZED();
		
		// QJniObject forward
		template<typename ...Ts> explicit RouteListingPreference_Item(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RouteListingPreference_Item(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getCustomSubtextMessage() const;
		jint getFlags() const;
		JString getRouteId() const;
		jint getSelectionBehavior() const;
		jint getSubText() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media

