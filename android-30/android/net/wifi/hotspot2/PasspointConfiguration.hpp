#pragma once

#include "../../../../JObject.hpp"

namespace android::net::wifi::hotspot2::pps
{
	class Credential;
}
namespace android::net::wifi::hotspot2::pps
{
	class HomeSp;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net::wifi::hotspot2
{
	class PasspointConfiguration : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit PasspointConfiguration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PasspointConfiguration(QJniObject obj);
		
		// Constructors
		PasspointConfiguration();
		PasspointConfiguration(android::net::wifi::hotspot2::PasspointConfiguration &arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		android::net::wifi::hotspot2::pps::Credential getCredential();
		android::net::wifi::hotspot2::pps::HomeSp getHomeSp();
		jlong getSubscriptionExpirationTimeMillis();
		JString getUniqueId();
		jint hashCode();
		jboolean isOsuProvisioned();
		void setCredential(android::net::wifi::hotspot2::pps::Credential arg0);
		void setHomeSp(android::net::wifi::hotspot2::pps::HomeSp arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::hotspot2

