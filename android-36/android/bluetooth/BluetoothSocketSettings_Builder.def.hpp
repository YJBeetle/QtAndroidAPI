#pragma once

#include "../../JObject.hpp"

namespace android::bluetooth
{
	class BluetoothSocketSettings;
}
class JString;
namespace java::util
{
	class UUID;
}

namespace android::bluetooth
{
	class BluetoothSocketSettings_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothSocketSettings_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothSocketSettings_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BluetoothSocketSettings_Builder();
		
		// Methods
		android::bluetooth::BluetoothSocketSettings build() const;
		android::bluetooth::BluetoothSocketSettings_Builder setAuthenticationRequired(jboolean arg0) const;
		android::bluetooth::BluetoothSocketSettings_Builder setEncryptionRequired(jboolean arg0) const;
		android::bluetooth::BluetoothSocketSettings_Builder setL2capPsm(jint arg0) const;
		android::bluetooth::BluetoothSocketSettings_Builder setRfcommServiceName(JString arg0) const;
		android::bluetooth::BluetoothSocketSettings_Builder setRfcommUuid(java::util::UUID arg0) const;
		android::bluetooth::BluetoothSocketSettings_Builder setSocketType(jint arg0) const;
	};
} // namespace android::bluetooth

