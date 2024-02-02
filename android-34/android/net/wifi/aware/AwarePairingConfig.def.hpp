#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;

namespace android::net::wifi::aware
{
	class AwarePairingConfig : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint PAIRING_BOOTSTRAPPING_NFC_READER();
		static jint PAIRING_BOOTSTRAPPING_NFC_TAG();
		static jint PAIRING_BOOTSTRAPPING_OPPORTUNISTIC();
		static jint PAIRING_BOOTSTRAPPING_PASSPHRASE_DISPLAY();
		static jint PAIRING_BOOTSTRAPPING_PASSPHRASE_KEYPAD();
		static jint PAIRING_BOOTSTRAPPING_PIN_CODE_DISPLAY();
		static jint PAIRING_BOOTSTRAPPING_PIN_CODE_KEYPAD();
		static jint PAIRING_BOOTSTRAPPING_QR_DISPLAY();
		static jint PAIRING_BOOTSTRAPPING_QR_SCAN();
		
		// QJniObject forward
		template<typename ...Ts> explicit AwarePairingConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AwarePairingConfig(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getBootstrappingMethods() const;
		jint hashCode() const;
		jboolean isPairingCacheEnabled() const;
		jboolean isPairingSetupEnabled() const;
		jboolean isPairingVerificationEnabled() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::aware

