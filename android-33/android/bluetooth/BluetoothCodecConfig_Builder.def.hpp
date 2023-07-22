#pragma once

#include "../../JObject.hpp"

namespace android::bluetooth
{
	class BluetoothCodecConfig;
}

namespace android::bluetooth
{
	class BluetoothCodecConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothCodecConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothCodecConfig_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BluetoothCodecConfig_Builder();
		
		// Methods
		android::bluetooth::BluetoothCodecConfig build() const;
		android::bluetooth::BluetoothCodecConfig_Builder setBitsPerSample(jint arg0) const;
		android::bluetooth::BluetoothCodecConfig_Builder setChannelMode(jint arg0) const;
		android::bluetooth::BluetoothCodecConfig_Builder setCodecPriority(jint arg0) const;
		android::bluetooth::BluetoothCodecConfig_Builder setCodecSpecific1(jlong arg0) const;
		android::bluetooth::BluetoothCodecConfig_Builder setCodecSpecific2(jlong arg0) const;
		android::bluetooth::BluetoothCodecConfig_Builder setCodecSpecific3(jlong arg0) const;
		android::bluetooth::BluetoothCodecConfig_Builder setCodecSpecific4(jlong arg0) const;
		android::bluetooth::BluetoothCodecConfig_Builder setCodecType(jint arg0) const;
		android::bluetooth::BluetoothCodecConfig_Builder setSampleRate(jint arg0) const;
	};
} // namespace android::bluetooth

