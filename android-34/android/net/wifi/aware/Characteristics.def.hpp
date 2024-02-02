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
		static jint WIFI_AWARE_CIPHER_SUITE_NCS_PK_128();
		static jint WIFI_AWARE_CIPHER_SUITE_NCS_PK_256();
		static jint WIFI_AWARE_CIPHER_SUITE_NCS_PK_PASN_128();
		static jint WIFI_AWARE_CIPHER_SUITE_NCS_PK_PASN_256();
		static jint WIFI_AWARE_CIPHER_SUITE_NCS_SK_128();
		static jint WIFI_AWARE_CIPHER_SUITE_NCS_SK_256();
		static jint WIFI_AWARE_CIPHER_SUITE_NONE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Characteristics(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Characteristics(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jint getMaxMatchFilterLength() const;
		jint getMaxServiceNameLength() const;
		jint getMaxServiceSpecificInfoLength() const;
		jint getNumberOfSupportedDataInterfaces() const;
		jint getNumberOfSupportedDataPaths() const;
		jint getNumberOfSupportedPublishSessions() const;
		jint getNumberOfSupportedSubscribeSessions() const;
		jint getSupportedCipherSuites() const;
		jint getSupportedPairingCipherSuites() const;
		jboolean isAwarePairingSupported() const;
		jboolean isInstantCommunicationModeSupported() const;
		jboolean isSuspensionSupported() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::aware

