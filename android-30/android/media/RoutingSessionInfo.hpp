#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JObject;
class JString;

namespace android::media
{
	class RoutingSessionInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit RoutingSessionInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RoutingSessionInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		JString getClientPackageName();
		android::os::Bundle getControlHints();
		JObject getDeselectableRoutes();
		JString getId();
		JString getName();
		JObject getSelectableRoutes();
		JObject getSelectedRoutes();
		JObject getTransferableRoutes();
		jint getVolume();
		jint getVolumeHandling();
		jint getVolumeMax();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media

