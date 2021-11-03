#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::bluetooth
{
	class BluetoothHidDeviceAppSdpSettings : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothHidDeviceAppSdpSettings(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothHidDeviceAppSdpSettings(QJniObject obj);
		
		// Constructors
		BluetoothHidDeviceAppSdpSettings(JString arg0, JString arg1, JString arg2, jbyte arg3, JByteArray arg4);
		
		// Methods
		jint describeContents();
		JString getDescription();
		JByteArray getDescriptors();
		JString getName();
		JString getProvider();
		jbyte getSubclass();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::bluetooth

