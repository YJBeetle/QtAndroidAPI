#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::bluetooth
{
	class BluetoothDevice_BluetoothAddress : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothDevice_BluetoothAddress(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothDevice_BluetoothAddress(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BluetoothDevice_BluetoothAddress(JString arg0, jint arg1);
		
		// Methods
		jint describeContents() const;
		JString getAddress() const;
		jint getAddressType() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::bluetooth

