#pragma once

#include "../../../../__JniBaseClass.hpp"

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

namespace android::net::wifi::hotspot2
{
	class PasspointConfiguration : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit PasspointConfiguration(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PasspointConfiguration(QJniObject obj);
		
		// Constructors
		PasspointConfiguration();
		PasspointConfiguration(android::net::wifi::hotspot2::PasspointConfiguration &arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		android::net::wifi::hotspot2::pps::Credential getCredential();
		jstring getDecoratedIdentityPrefix();
		android::net::wifi::hotspot2::pps::HomeSp getHomeSp();
		jlong getSubscriptionExpirationTimeMillis();
		jstring getUniqueId();
		jint hashCode();
		jboolean isOsuProvisioned();
		void setCredential(android::net::wifi::hotspot2::pps::Credential arg0);
		void setDecoratedIdentityPrefix(jstring arg0);
		void setHomeSp(android::net::wifi::hotspot2::pps::HomeSp arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::hotspot2

