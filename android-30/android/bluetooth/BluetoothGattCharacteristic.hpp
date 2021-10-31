#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::bluetooth
{
	class BluetoothGattDescriptor;
}
namespace android::bluetooth
{
	class BluetoothGattService;
}
namespace android::os
{
	class Parcel;
}
namespace java::lang
{
	class Float;
}
namespace java::lang
{
	class Integer;
}
namespace java::util
{
	class UUID;
}

namespace android::bluetooth
{
	class BluetoothGattCharacteristic : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint FORMAT_FLOAT();
		static jint FORMAT_SFLOAT();
		static jint FORMAT_SINT16();
		static jint FORMAT_SINT32();
		static jint FORMAT_SINT8();
		static jint FORMAT_UINT16();
		static jint FORMAT_UINT32();
		static jint FORMAT_UINT8();
		static jint PERMISSION_READ();
		static jint PERMISSION_READ_ENCRYPTED();
		static jint PERMISSION_READ_ENCRYPTED_MITM();
		static jint PERMISSION_WRITE();
		static jint PERMISSION_WRITE_ENCRYPTED();
		static jint PERMISSION_WRITE_ENCRYPTED_MITM();
		static jint PERMISSION_WRITE_SIGNED();
		static jint PERMISSION_WRITE_SIGNED_MITM();
		static jint PROPERTY_BROADCAST();
		static jint PROPERTY_EXTENDED_PROPS();
		static jint PROPERTY_INDICATE();
		static jint PROPERTY_NOTIFY();
		static jint PROPERTY_READ();
		static jint PROPERTY_SIGNED_WRITE();
		static jint PROPERTY_WRITE();
		static jint PROPERTY_WRITE_NO_RESPONSE();
		static jint WRITE_TYPE_DEFAULT();
		static jint WRITE_TYPE_NO_RESPONSE();
		static jint WRITE_TYPE_SIGNED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothGattCharacteristic(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothGattCharacteristic(QAndroidJniObject obj);
		
		// Constructors
		BluetoothGattCharacteristic(java::util::UUID arg0, jint arg1, jint arg2);
		
		// Methods
		jboolean addDescriptor(android::bluetooth::BluetoothGattDescriptor arg0);
		jint describeContents();
		android::bluetooth::BluetoothGattDescriptor getDescriptor(java::util::UUID arg0);
		__JniBaseClass getDescriptors();
		java::lang::Float getFloatValue(jint arg0, jint arg1);
		jint getInstanceId();
		java::lang::Integer getIntValue(jint arg0, jint arg1);
		jint getPermissions();
		jint getProperties();
		android::bluetooth::BluetoothGattService getService();
		jstring getStringValue(jint arg0);
		java::util::UUID getUuid();
		jbyteArray getValue();
		jint getWriteType();
		jboolean setValue(jbyteArray arg0);
		jboolean setValue(jstring arg0);
		jboolean setValue(jint arg0, jint arg1, jint arg2);
		jboolean setValue(jint arg0, jint arg1, jint arg2, jint arg3);
		void setWriteType(jint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::bluetooth

