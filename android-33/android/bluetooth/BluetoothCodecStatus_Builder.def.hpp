#pragma once

#include "../../JObject.hpp"

namespace android::bluetooth
{
	class BluetoothCodecConfig;
}
namespace android::bluetooth
{
	class BluetoothCodecStatus;
}

namespace android::bluetooth
{
	class BluetoothCodecStatus_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothCodecStatus_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothCodecStatus_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BluetoothCodecStatus_Builder();
		
		// Methods
		android::bluetooth::BluetoothCodecStatus build() const;
		android::bluetooth::BluetoothCodecStatus_Builder setCodecConfig(android::bluetooth::BluetoothCodecConfig arg0) const;
		android::bluetooth::BluetoothCodecStatus_Builder setCodecsLocalCapabilities(JObject arg0) const;
		android::bluetooth::BluetoothCodecStatus_Builder setCodecsSelectableCapabilities(JObject arg0) const;
	};
} // namespace android::bluetooth

