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
		static QAndroidJniObject CREATOR();
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothGattDescriptor(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothGattDescriptor(QAndroidJniObject obj);
		
		// Constructors
		BluetoothGattDescriptor(java::util::UUID arg0, jint arg1);
		
		// Methods
		jint describeContents();
		QAndroidJniObject getCharacteristic();
		jint getPermissions();
		QAndroidJniObject getUuid();
		jbyteArray getValue();
		jboolean setValue(jbyteArray arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::bluetooth

