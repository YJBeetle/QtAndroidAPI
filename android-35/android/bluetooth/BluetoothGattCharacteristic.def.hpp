#pragma once

#include "../../JObject.hpp"

class JByteArray;
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
class JString;
namespace java::util
{
	class UUID;
}

namespace android::bluetooth
{
	class BluetoothGattCharacteristic : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
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
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothGattCharacteristic(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothGattCharacteristic(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BluetoothGattCharacteristic(java::util::UUID arg0, jint arg1, jint arg2);
		
		// Methods
		jboolean addDescriptor(android::bluetooth::BluetoothGattDescriptor arg0) const;
		jint describeContents() const;
		android::bluetooth::BluetoothGattDescriptor getDescriptor(java::util::UUID arg0) const;
		JObject getDescriptors() const;
		java::lang::Float getFloatValue(jint arg0, jint arg1) const;
		jint getInstanceId() const;
		java::lang::Integer getIntValue(jint arg0, jint arg1) const;
		jint getPermissions() const;
		jint getProperties() const;
		android::bluetooth::BluetoothGattService getService() const;
		JString getStringValue(jint arg0) const;
		java::util::UUID getUuid() const;
		JByteArray getValue() const;
		jint getWriteType() const;
		jboolean setValue(JByteArray arg0) const;
		jboolean setValue(JString arg0) const;
		jboolean setValue(jint arg0, jint arg1, jint arg2) const;
		jboolean setValue(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setWriteType(jint arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::bluetooth

