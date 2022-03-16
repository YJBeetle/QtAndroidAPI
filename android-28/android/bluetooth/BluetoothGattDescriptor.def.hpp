#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::bluetooth
{
	class BluetoothGattCharacteristic;
}
namespace android::os
{
	class Parcel;
}
namespace java::util
{
	class UUID;
}

namespace android::bluetooth
{
	class BluetoothGattDescriptor : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JByteArray DISABLE_NOTIFICATION_VALUE();
		static JByteArray ENABLE_INDICATION_VALUE();
		static JByteArray ENABLE_NOTIFICATION_VALUE();
		static jint PERMISSION_READ();
		static jint PERMISSION_READ_ENCRYPTED();
		static jint PERMISSION_READ_ENCRYPTED_MITM();
		static jint PERMISSION_WRITE();
		static jint PERMISSION_WRITE_ENCRYPTED();
		static jint PERMISSION_WRITE_ENCRYPTED_MITM();
		static jint PERMISSION_WRITE_SIGNED();
		static jint PERMISSION_WRITE_SIGNED_MITM();
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothGattDescriptor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothGattDescriptor(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BluetoothGattDescriptor(java::util::UUID arg0, jint arg1);
		
		// Methods
		jint describeContents() const;
		android::bluetooth::BluetoothGattCharacteristic getCharacteristic() const;
		jint getPermissions() const;
		java::util::UUID getUuid() const;
		JByteArray getValue() const;
		jboolean setValue(JByteArray arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::bluetooth

