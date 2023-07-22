#pragma once

#include "./BluetoothCodecConfig.def.hpp"
#include "./BluetoothCodecConfig_Builder.def.hpp"

namespace android::bluetooth
{
	// Fields
	
	// Constructors
	inline BluetoothCodecConfig_Builder::BluetoothCodecConfig_Builder()
		: JObject(
			"android.bluetooth.BluetoothCodecConfig$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::bluetooth::BluetoothCodecConfig BluetoothCodecConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/bluetooth/BluetoothCodecConfig;"
		);
	}
	inline android::bluetooth::BluetoothCodecConfig_Builder BluetoothCodecConfig_Builder::setBitsPerSample(jint arg0) const
	{
		return callObjectMethod(
			"setBitsPerSample",
			"(I)Landroid/bluetooth/BluetoothCodecConfig$Builder;",
			arg0
		);
	}
	inline android::bluetooth::BluetoothCodecConfig_Builder BluetoothCodecConfig_Builder::setChannelMode(jint arg0) const
	{
		return callObjectMethod(
			"setChannelMode",
			"(I)Landroid/bluetooth/BluetoothCodecConfig$Builder;",
			arg0
		);
	}
	inline android::bluetooth::BluetoothCodecConfig_Builder BluetoothCodecConfig_Builder::setCodecPriority(jint arg0) const
	{
		return callObjectMethod(
			"setCodecPriority",
			"(I)Landroid/bluetooth/BluetoothCodecConfig$Builder;",
			arg0
		);
	}
	inline android::bluetooth::BluetoothCodecConfig_Builder BluetoothCodecConfig_Builder::setCodecSpecific1(jlong arg0) const
	{
		return callObjectMethod(
			"setCodecSpecific1",
			"(J)Landroid/bluetooth/BluetoothCodecConfig$Builder;",
			arg0
		);
	}
	inline android::bluetooth::BluetoothCodecConfig_Builder BluetoothCodecConfig_Builder::setCodecSpecific2(jlong arg0) const
	{
		return callObjectMethod(
			"setCodecSpecific2",
			"(J)Landroid/bluetooth/BluetoothCodecConfig$Builder;",
			arg0
		);
	}
	inline android::bluetooth::BluetoothCodecConfig_Builder BluetoothCodecConfig_Builder::setCodecSpecific3(jlong arg0) const
	{
		return callObjectMethod(
			"setCodecSpecific3",
			"(J)Landroid/bluetooth/BluetoothCodecConfig$Builder;",
			arg0
		);
	}
	inline android::bluetooth::BluetoothCodecConfig_Builder BluetoothCodecConfig_Builder::setCodecSpecific4(jlong arg0) const
	{
		return callObjectMethod(
			"setCodecSpecific4",
			"(J)Landroid/bluetooth/BluetoothCodecConfig$Builder;",
			arg0
		);
	}
	inline android::bluetooth::BluetoothCodecConfig_Builder BluetoothCodecConfig_Builder::setCodecType(jint arg0) const
	{
		return callObjectMethod(
			"setCodecType",
			"(I)Landroid/bluetooth/BluetoothCodecConfig$Builder;",
			arg0
		);
	}
	inline android::bluetooth::BluetoothCodecConfig_Builder BluetoothCodecConfig_Builder::setSampleRate(jint arg0) const
	{
		return callObjectMethod(
			"setSampleRate",
			"(I)Landroid/bluetooth/BluetoothCodecConfig$Builder;",
			arg0
		);
	}
} // namespace android::bluetooth

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth;
#endif
