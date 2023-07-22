#pragma once

#include "../../JObject.hpp"

namespace android::bluetooth
{
	class BluetoothLeAudioCodecConfig;
}

namespace android::bluetooth
{
	class BluetoothLeAudioCodecConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothLeAudioCodecConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothLeAudioCodecConfig_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BluetoothLeAudioCodecConfig_Builder();
		BluetoothLeAudioCodecConfig_Builder(android::bluetooth::BluetoothLeAudioCodecConfig arg0);
		
		// Methods
		android::bluetooth::BluetoothLeAudioCodecConfig build() const;
		android::bluetooth::BluetoothLeAudioCodecConfig_Builder setBitsPerSample(jint arg0) const;
		android::bluetooth::BluetoothLeAudioCodecConfig_Builder setChannelCount(jint arg0) const;
		android::bluetooth::BluetoothLeAudioCodecConfig_Builder setCodecPriority(jint arg0) const;
		android::bluetooth::BluetoothLeAudioCodecConfig_Builder setCodecType(jint arg0) const;
		android::bluetooth::BluetoothLeAudioCodecConfig_Builder setFrameDuration(jint arg0) const;
		android::bluetooth::BluetoothLeAudioCodecConfig_Builder setMaxOctetsPerFrame(jint arg0) const;
		android::bluetooth::BluetoothLeAudioCodecConfig_Builder setMinOctetsPerFrame(jint arg0) const;
		android::bluetooth::BluetoothLeAudioCodecConfig_Builder setOctetsPerFrame(jint arg0) const;
		android::bluetooth::BluetoothLeAudioCodecConfig_Builder setSampleRate(jint arg0) const;
	};
} // namespace android::bluetooth

