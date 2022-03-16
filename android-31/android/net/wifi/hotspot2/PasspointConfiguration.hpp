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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PasspointConfiguration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PasspointConfiguration(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		PasspointConfiguration();
		PasspointConfiguration(android::net::wifi::hotspot2::PasspointConfiguration &arg0);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::net::wifi::hotspot2::pps::Credential getCredential() const;
		JString getDecoratedIdentityPrefix() const;
		android::net::wifi::hotspot2::pps::HomeSp getHomeSp() const;
		jlong getSubscriptionExpirationTimeMillis() const;
		JString getUniqueId() const;
		jint hashCode() const;
		jboolean isOsuProvisioned() const;
		void setCredential(android::net::wifi::hotspot2::pps::Credential arg0) const;
		void setDecoratedIdentityPrefix(JString arg0) const;
		void setHomeSp(android::net::wifi::hotspot2::pps::HomeSp arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::hotspot2

