#pragma once

#include "../../JObject.hpp"

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
	class BluetoothGattService : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint SERVICE_TYPE_PRIMARY();
		static jint SERVICE_TYPE_SECONDARY();
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothGattService(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothGattService(QJniObject obj);
		
		// Constructors
		BluetoothGattService(java::util::UUID arg0, jint arg1);
		
		// Methods
		jboolean addCharacteristic(android::bluetooth::BluetoothGattCharacteristic arg0) const;
		jboolean addService(android::bluetooth::BluetoothGattService arg0) const;
		jint describeContents() const;
		android::bluetooth::BluetoothGattCharacteristic getCharacteristic(java::util::UUID arg0) const;
		JObject getCharacteristics() const;
		JObject getIncludedServices() const;
		jint getInstanceId() const;
		jint getType() const;
		java::util::UUID getUuid() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::bluetooth

