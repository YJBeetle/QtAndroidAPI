#pragma once

#include "../../JObject.hpp"

namespace android::companion
{
	class AssociatedDevice;
}
namespace android::net
{
	class MacAddress;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JObject;
class JString;

namespace android::companion
{
	class AssociationInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit AssociationInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AssociationInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::companion::AssociatedDevice getAssociatedDevice() const;
		android::net::MacAddress getDeviceMacAddress() const;
		JString getDeviceProfile() const;
		JString getDisplayName() const;
		jint getId() const;
		jint getSystemDataSyncFlags() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::companion

