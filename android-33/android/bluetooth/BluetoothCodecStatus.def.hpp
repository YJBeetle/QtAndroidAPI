#pragma once

#include "../../JObject.hpp"

namespace android::bluetooth
{
	class BluetoothCodecConfig;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::bluetooth
{
	class BluetoothCodecStatus : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString EXTRA_CODEC_STATUS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothCodecStatus(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothCodecStatus(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::bluetooth::BluetoothCodecConfig getCodecConfig() const;
		JObject getCodecsLocalCapabilities() const;
		JObject getCodecsSelectableCapabilities() const;
		jint hashCode() const;
		jboolean isCodecConfigSelectable(android::bluetooth::BluetoothCodecConfig arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::bluetooth

