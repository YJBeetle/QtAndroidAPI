#include "./BluetoothGattCharacteristic.hpp"
#include "../os/Parcel.hpp"
#include "../../java/util/UUID.hpp"
#include "./BluetoothGattService.hpp"

namespace android::bluetooth
{
	// Fields
	QAndroidJniObject BluetoothGattService::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothGattService",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint BluetoothGattService::SERVICE_TYPE_PRIMARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattService",
			"SERVICE_TYPE_PRIMARY"
		);
	}
	jint BluetoothGattService::SERVICE_TYPE_SECONDARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattService",
			"SERVICE_TYPE_SECONDARY"
		);
	}
	
	BluetoothGattService::BluetoothGattService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BluetoothGattService::BluetoothGattService(java::util::UUID &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothGattService",
			"(Ljava/util/UUID;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jboolean BluetoothGattService::addCharacteristic(android::bluetooth::BluetoothGattCharacteristic arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addCharacteristic",
			"(Landroid/bluetooth/BluetoothGattCharacteristic;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean BluetoothGattService::addService(android::bluetooth::BluetoothGattService arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addService",
			"(Landroid/bluetooth/BluetoothGattService;)Z",
			arg0.__jniObject().object()
		);
	}
	jint BluetoothGattService::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject BluetoothGattService::getCharacteristic(java::util::UUID arg0)
	{
		return __thiz.callObjectMethod(
			"getCharacteristic",
			"(Ljava/util/UUID;)Landroid/bluetooth/BluetoothGattCharacteristic;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothGattService::getCharacteristics()
	{
		return __thiz.callObjectMethod(
			"getCharacteristics",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject BluetoothGattService::getIncludedServices()
	{
		return __thiz.callObjectMethod(
			"getIncludedServices",
			"()Ljava/util/List;"
		);
	}
	jint BluetoothGattService::getInstanceId()
	{
		return __thiz.callMethod<jint>(
			"getInstanceId",
			"()I"
		);
	}
	jint BluetoothGattService::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	QAndroidJniObject BluetoothGattService::getUuid()
	{
		return __thiz.callObjectMethod(
			"getUuid",
			"()Ljava/util/UUID;"
		);
	}
	void BluetoothGattService::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::bluetooth

