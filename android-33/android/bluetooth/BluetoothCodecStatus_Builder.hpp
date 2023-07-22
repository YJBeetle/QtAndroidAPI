#pragma once

#include "./BluetoothCodecConfig.def.hpp"
#include "./BluetoothCodecStatus.def.hpp"
#include "./BluetoothCodecStatus_Builder.def.hpp"

namespace android::bluetooth
{
	// Fields
	
	// Constructors
	inline BluetoothCodecStatus_Builder::BluetoothCodecStatus_Builder()
		: JObject(
			"android.bluetooth.BluetoothCodecStatus$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::bluetooth::BluetoothCodecStatus BluetoothCodecStatus_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/bluetooth/BluetoothCodecStatus;"
		);
	}
	inline android::bluetooth::BluetoothCodecStatus_Builder BluetoothCodecStatus_Builder::setCodecConfig(android::bluetooth::BluetoothCodecConfig arg0) const
	{
		return callObjectMethod(
			"setCodecConfig",
			"(Landroid/bluetooth/BluetoothCodecConfig;)Landroid/bluetooth/BluetoothCodecStatus$Builder;",
			arg0.object()
		);
	}
	inline android::bluetooth::BluetoothCodecStatus_Builder BluetoothCodecStatus_Builder::setCodecsLocalCapabilities(JObject arg0) const
	{
		return callObjectMethod(
			"setCodecsLocalCapabilities",
			"(Ljava/util/List;)Landroid/bluetooth/BluetoothCodecStatus$Builder;",
			arg0.object()
		);
	}
	inline android::bluetooth::BluetoothCodecStatus_Builder BluetoothCodecStatus_Builder::setCodecsSelectableCapabilities(JObject arg0) const
	{
		return callObjectMethod(
			"setCodecsSelectableCapabilities",
			"(Ljava/util/List;)Landroid/bluetooth/BluetoothCodecStatus$Builder;",
			arg0.object()
		);
	}
} // namespace android::bluetooth

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth;
#endif
