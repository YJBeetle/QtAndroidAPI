#pragma once

#include "./BluetoothLeAudioCodecConfig.def.hpp"
#include "./BluetoothLeAudioCodecConfig_Builder.def.hpp"

namespace android::bluetooth
{
	// Fields
	
	// Constructors
	inline BluetoothLeAudioCodecConfig_Builder::BluetoothLeAudioCodecConfig_Builder()
		: JObject(
			"android.bluetooth.BluetoothLeAudioCodecConfig$Builder",
			"()V"
		) {}
	inline BluetoothLeAudioCodecConfig_Builder::BluetoothLeAudioCodecConfig_Builder(android::bluetooth::BluetoothLeAudioCodecConfig arg0)
		: JObject(
			"android.bluetooth.BluetoothLeAudioCodecConfig$Builder",
			"(Landroid/bluetooth/BluetoothLeAudioCodecConfig;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::bluetooth::BluetoothLeAudioCodecConfig BluetoothLeAudioCodecConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/bluetooth/BluetoothLeAudioCodecConfig;"
		);
	}
	inline android::bluetooth::BluetoothLeAudioCodecConfig_Builder BluetoothLeAudioCodecConfig_Builder::setBitsPerSample(jint arg0) const
	{
		return callObjectMethod(
			"setBitsPerSample",
			"(I)Landroid/bluetooth/BluetoothLeAudioCodecConfig$Builder;",
			arg0
		);
	}
	inline android::bluetooth::BluetoothLeAudioCodecConfig_Builder BluetoothLeAudioCodecConfig_Builder::setChannelCount(jint arg0) const
	{
		return callObjectMethod(
			"setChannelCount",
			"(I)Landroid/bluetooth/BluetoothLeAudioCodecConfig$Builder;",
			arg0
		);
	}
	inline android::bluetooth::BluetoothLeAudioCodecConfig_Builder BluetoothLeAudioCodecConfig_Builder::setCodecPriority(jint arg0) const
	{
		return callObjectMethod(
			"setCodecPriority",
			"(I)Landroid/bluetooth/BluetoothLeAudioCodecConfig$Builder;",
			arg0
		);
	}
	inline android::bluetooth::BluetoothLeAudioCodecConfig_Builder BluetoothLeAudioCodecConfig_Builder::setCodecType(jint arg0) const
	{
		return callObjectMethod(
			"setCodecType",
			"(I)Landroid/bluetooth/BluetoothLeAudioCodecConfig$Builder;",
			arg0
		);
	}
	inline android::bluetooth::BluetoothLeAudioCodecConfig_Builder BluetoothLeAudioCodecConfig_Builder::setFrameDuration(jint arg0) const
	{
		return callObjectMethod(
			"setFrameDuration",
			"(I)Landroid/bluetooth/BluetoothLeAudioCodecConfig$Builder;",
			arg0
		);
	}
	inline android::bluetooth::BluetoothLeAudioCodecConfig_Builder BluetoothLeAudioCodecConfig_Builder::setMaxOctetsPerFrame(jint arg0) const
	{
		return callObjectMethod(
			"setMaxOctetsPerFrame",
			"(I)Landroid/bluetooth/BluetoothLeAudioCodecConfig$Builder;",
			arg0
		);
	}
	inline android::bluetooth::BluetoothLeAudioCodecConfig_Builder BluetoothLeAudioCodecConfig_Builder::setMinOctetsPerFrame(jint arg0) const
	{
		return callObjectMethod(
			"setMinOctetsPerFrame",
			"(I)Landroid/bluetooth/BluetoothLeAudioCodecConfig$Builder;",
			arg0
		);
	}
	inline android::bluetooth::BluetoothLeAudioCodecConfig_Builder BluetoothLeAudioCodecConfig_Builder::setOctetsPerFrame(jint arg0) const
	{
		return callObjectMethod(
			"setOctetsPerFrame",
			"(I)Landroid/bluetooth/BluetoothLeAudioCodecConfig$Builder;",
			arg0
		);
	}
	inline android::bluetooth::BluetoothLeAudioCodecConfig_Builder BluetoothLeAudioCodecConfig_Builder::setSampleRate(jint arg0) const
	{
		return callObjectMethod(
			"setSampleRate",
			"(I)Landroid/bluetooth/BluetoothLeAudioCodecConfig$Builder;",
			arg0
		);
	}
} // namespace android::bluetooth

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth;
#endif
