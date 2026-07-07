#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class ParcelUuid;
}
class JObject;
class JString;

namespace android::companion
{
	class DevicePresenceEvent : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint EVENT_BLE_APPEARED();
		static jint EVENT_BLE_DISAPPEARED();
		static jint EVENT_BT_CONNECTED();
		static jint EVENT_BT_DISCONNECTED();
		static jint EVENT_SELF_MANAGED_APPEARED();
		static jint EVENT_SELF_MANAGED_DISAPPEARED();
		static jint NO_ASSOCIATION();
		
		// QJniObject forward
		template<typename ...Ts> explicit DevicePresenceEvent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DevicePresenceEvent(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DevicePresenceEvent(jint arg0, jint arg1, android::os::ParcelUuid arg2);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getAssociationId() const;
		jint getEvent() const;
		android::os::ParcelUuid getUuid() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::companion

