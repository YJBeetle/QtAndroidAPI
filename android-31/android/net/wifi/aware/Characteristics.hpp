#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net::wifi::aware
{
	class Characteristics : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint WIFI_AWARE_CIPHER_SUITE_NCS_SK_128();
		static jint WIFI_AWARE_CIPHER_SUITE_NCS_SK_256();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Characteristics(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Characteristics(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jint getMaxMatchFilterLength();
		jint getMaxServiceNameLength();
		jint getMaxServiceSpecificInfoLength();
		jint getSupportedCipherSuites();
		jboolean isInstantCommunicationModeSupported();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::aware

