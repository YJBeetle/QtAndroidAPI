#pragma once

#include "../../__JniBaseClass.hpp"

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
	class BluetoothGattDescriptor : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jbyteArray DISABLE_NOTIFICATION_VALUE();
		static jbyteArray ENABLE_INDICATION_VALUE();
		static jbyteArray ENABLE_NOTIFICATION_VALUE();
		static jint PERMISSION_READ();
		static jint PERMISSION_READ_ENCRYPTED();
		static jint PERMISSION_READ_ENCRYPTED_MITM();
		static jint PERMISSION_WRITE();
		static jint PERMISSION_WRITE_ENCRYPTED();
		static jint PERMISSION_WRITE_ENCRYPTED_MITM();
		static jint PERMISSION_WRITE_SIGNED();
		static jint PERMISSION_WRITE_SIGNED_MITM();
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothGattDescriptor(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothGattDescriptor(QJniObject obj);
		
		// Constructors
		BluetoothGattDescriptor(java::util::UUID arg0, jint arg1);
		
		// Methods
		jint describeContents();
		android::bluetooth::BluetoothGattCharacteristic getCharacteristic();
		jint getPermissions();
		java::util::UUID getUuid();
		jbyteArray getValue();
		jboolean setValue(jbyteArray arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::bluetooth

