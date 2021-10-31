#pragma once

#include "../../../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net::wifi::hotspot2::pps
{
	class HomeSp : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit HomeSp(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		HomeSp(QAndroidJniObject obj);
		
		// Constructors
		HomeSp();
		HomeSp(android::net::wifi::hotspot2::pps::HomeSp &arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getFqdn();
		jstring getFriendlyName();
		jlongArray getRoamingConsortiumOis();
		jint hashCode();
		void setFqdn(jstring arg0);
		void setFriendlyName(jstring arg0);
		void setRoamingConsortiumOis(jlongArray arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::hotspot2::pps

