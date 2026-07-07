#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class MacAddress;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::companion
{
	class DeviceId : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit DeviceId(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DeviceId(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getCustomId() const;
		android::net::MacAddress getMacAddress() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::companion

