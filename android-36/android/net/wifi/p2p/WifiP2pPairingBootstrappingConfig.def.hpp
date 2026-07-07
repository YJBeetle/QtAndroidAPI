#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::net::wifi::p2p
{
	class WifiP2pPairingBootstrappingConfig : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint PAIRING_BOOTSTRAPPING_METHOD_DISPLAY_PASSPHRASE();
		static jint PAIRING_BOOTSTRAPPING_METHOD_DISPLAY_PINCODE();
		static jint PAIRING_BOOTSTRAPPING_METHOD_KEYPAD_PASSPHRASE();
		static jint PAIRING_BOOTSTRAPPING_METHOD_KEYPAD_PINCODE();
		static jint PAIRING_BOOTSTRAPPING_METHOD_OPPORTUNISTIC();
		static jint PAIRING_BOOTSTRAPPING_METHOD_OUT_OF_BAND();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiP2pPairingBootstrappingConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pPairingBootstrappingConfig(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WifiP2pPairingBootstrappingConfig(jint arg0, JString arg1);
		
		// Methods
		jint describeContents() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::p2p

