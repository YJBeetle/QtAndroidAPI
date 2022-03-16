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
		RoutingSessionInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getClientPackageName() const;
		android::os::Bundle getControlHints() const;
		JObject getDeselectableRoutes() const;
		JString getId() const;
		JString getName() const;
		JObject getSelectableRoutes() const;
		JObject getSelectedRoutes() const;
		JObject getTransferableRoutes() const;
		jint getVolume() const;
		jint getVolumeHandling() const;
		jint getVolumeMax() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media

