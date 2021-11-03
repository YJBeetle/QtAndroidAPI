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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothGattDescriptor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothGattDescriptor(QAndroidJniObject obj);
		
		// Constructors
		BluetoothGattDescriptor(java::util::UUID arg0, jint arg1);
		
		// Methods
		jint describeContents();
		android::bluetooth::BluetoothGattCharacteristic getCharacteristic();
		jint getPermissions();
		java::util::UUID getUuid();
		JByteArray getValue();
		jboolean setValue(JByteArray arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::bluetooth

