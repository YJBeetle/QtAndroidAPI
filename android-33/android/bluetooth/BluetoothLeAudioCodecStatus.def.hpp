#pragma once

#include "../../JObject.hpp"

namespace android::bluetooth
{
	class BluetoothLeAudioCodecConfig;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::bluetooth
{
	class BluetoothLeAudioCodecStatus : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString EXTRA_LE_AUDIO_CODEC_STATUS();
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothLeAudioCodecStatus(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothLeAudioCodecStatus(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BluetoothLeAudioCodecStatus(android::bluetooth::BluetoothLeAudioCodecConfig arg0, android::bluetooth::BluetoothLeAudioCodecConfig arg1, JObject arg2, JObject arg3, JObject arg4, JObject arg5);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::bluetooth::BluetoothLeAudioCodecConfig getInputCodecConfig() const;
		JObject getInputCodecLocalCapabilities() const;
		JObject getInputCodecSelectableCapabilities() const;
		android::bluetooth::BluetoothLeAudioCodecConfig getOutputCodecConfig() const;
		JObject getOutputCodecLocalCapabilities() const;
		JObject getOutputCodecSelectableCapabilities() const;
		jint hashCode() const;
		jboolean isInputCodecConfigSelectable(android::bluetooth::BluetoothLeAudioCodecConfig arg0) const;
		jboolean isOutputCodecConfigSelectable(android::bluetooth::BluetoothLeAudioCodecConfig arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::bluetooth

