#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net
{
	class MacAddress;
}
namespace android::os
{
	class Parcel;
}

namespace android::net::wifi
{
	class SoftApConfiguration : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint SECURITY_TYPE_OPEN();
		static jint SECURITY_TYPE_WPA2_PSK();
		static jint SECURITY_TYPE_WPA3_SAE();
		static jint SECURITY_TYPE_WPA3_SAE_TRANSITION();
		
		// QJniObject forward
		template<typename ...Ts> explicit SoftApConfiguration(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SoftApConfiguration(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		android::net::MacAddress getBssid();
		jstring getPassphrase();
		jint getSecurityType();
		jstring getSsid();
		jint hashCode();
		jboolean isHiddenSsid();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi

