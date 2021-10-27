#include "./BluetoothClass.hpp"
#include "./BluetoothGatt.hpp"
#include "./BluetoothGattCallback.hpp"
#include "./BluetoothSocket.hpp"
#include "../content/Context.hpp"
#include "../os/Handler.hpp"
#include "../os/Parcel.hpp"
#include "../../java/util/UUID.hpp"
#include "./BluetoothDevice.hpp"

namespace android::bluetooth
{
	// Fields
	jstring BluetoothDevice::ACTION_ACL_CONNECTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_ACL_CONNECTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothDevice::ACTION_ACL_DISCONNECTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_ACL_DISCONNECTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothDevice::ACTION_ACL_DISCONNECT_REQUESTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_ACL_DISCONNECT_REQUESTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothDevice::ACTION_BOND_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_BOND_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothDevice::ACTION_CLASS_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_CLASS_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothDevice::ACTION_FOUND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_FOUND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothDevice::ACTION_NAME_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_NAME_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothDevice::ACTION_PAIRING_REQUEST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_PAIRING_REQUEST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothDevice::ACTION_UUID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_UUID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint BluetoothDevice::BOND_BONDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"BOND_BONDED"
		);
	}
	jint BluetoothDevice::BOND_BONDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"BOND_BONDING"
		);
	}
	jint BluetoothDevice::BOND_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"BOND_NONE"
		);
	}
	QAndroidJniObject BluetoothDevice::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint BluetoothDevice::DEVICE_TYPE_CLASSIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"DEVICE_TYPE_CLASSIC"
		);
	}
	jint BluetoothDevice::DEVICE_TYPE_DUAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"DEVICE_TYPE_DUAL"
		);
	}
	jint BluetoothDevice::DEVICE_TYPE_LE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"DEVICE_TYPE_LE"
		);
	}
	jint BluetoothDevice::DEVICE_TYPE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"DEVICE_TYPE_UNKNOWN"
		);
	}
	jint BluetoothDevice::ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"ERROR"
		);
	}
	jstring BluetoothDevice::EXTRA_BOND_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"EXTRA_BOND_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothDevice::EXTRA_CLASS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"EXTRA_CLASS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothDevice::EXTRA_DEVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"EXTRA_DEVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothDevice::EXTRA_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"EXTRA_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothDevice::EXTRA_PAIRING_KEY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"EXTRA_PAIRING_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothDevice::EXTRA_PAIRING_VARIANT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"EXTRA_PAIRING_VARIANT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothDevice::EXTRA_PREVIOUS_BOND_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"EXTRA_PREVIOUS_BOND_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothDevice::EXTRA_RSSI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"EXTRA_RSSI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothDevice::EXTRA_UUID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"EXTRA_UUID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint BluetoothDevice::PAIRING_VARIANT_PASSKEY_CONFIRMATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PAIRING_VARIANT_PASSKEY_CONFIRMATION"
		);
	}
	jint BluetoothDevice::PAIRING_VARIANT_PIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PAIRING_VARIANT_PIN"
		);
	}
	jint BluetoothDevice::PHY_LE_1M()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PHY_LE_1M"
		);
	}
	jint BluetoothDevice::PHY_LE_1M_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PHY_LE_1M_MASK"
		);
	}
	jint BluetoothDevice::PHY_LE_2M()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PHY_LE_2M"
		);
	}
	jint BluetoothDevice::PHY_LE_2M_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PHY_LE_2M_MASK"
		);
	}
	jint BluetoothDevice::PHY_LE_CODED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PHY_LE_CODED"
		);
	}
	jint BluetoothDevice::PHY_LE_CODED_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PHY_LE_CODED_MASK"
		);
	}
	jint BluetoothDevice::PHY_OPTION_NO_PREFERRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PHY_OPTION_NO_PREFERRED"
		);
	}
	jint BluetoothDevice::PHY_OPTION_S2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PHY_OPTION_S2"
		);
	}
	jint BluetoothDevice::PHY_OPTION_S8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PHY_OPTION_S8"
		);
	}
	jint BluetoothDevice::TRANSPORT_AUTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"TRANSPORT_AUTO"
		);
	}
	jint BluetoothDevice::TRANSPORT_BREDR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"TRANSPORT_BREDR"
		);
	}
	jint BluetoothDevice::TRANSPORT_LE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"TRANSPORT_LE"
		);
	}
	
	BluetoothDevice::BluetoothDevice(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject BluetoothDevice::connectGatt(android::content::Context arg0, jboolean arg1, android::bluetooth::BluetoothGattCallback arg2)
	{
		return __thiz.callObjectMethod(
			"connectGatt",
			"(Landroid/content/Context;ZLandroid/bluetooth/BluetoothGattCallback;)Landroid/bluetooth/BluetoothGatt;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothDevice::connectGatt(android::content::Context arg0, jboolean arg1, android::bluetooth::BluetoothGattCallback arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"connectGatt",
			"(Landroid/content/Context;ZLandroid/bluetooth/BluetoothGattCallback;I)Landroid/bluetooth/BluetoothGatt;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject BluetoothDevice::connectGatt(android::content::Context arg0, jboolean arg1, android::bluetooth::BluetoothGattCallback arg2, jint arg3, jint arg4)
	{
		return __thiz.callObjectMethod(
			"connectGatt",
			"(Landroid/content/Context;ZLandroid/bluetooth/BluetoothGattCallback;II)Landroid/bluetooth/BluetoothGatt;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4
		);
	}
	QAndroidJniObject BluetoothDevice::connectGatt(android::content::Context arg0, jboolean arg1, android::bluetooth::BluetoothGattCallback arg2, jint arg3, jint arg4, android::os::Handler arg5)
	{
		return __thiz.callObjectMethod(
			"connectGatt",
			"(Landroid/content/Context;ZLandroid/bluetooth/BluetoothGattCallback;IILandroid/os/Handler;)Landroid/bluetooth/BluetoothGatt;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	jboolean BluetoothDevice::createBond()
	{
		return __thiz.callMethod<jboolean>(
			"createBond",
			"()Z"
		);
	}
	QAndroidJniObject BluetoothDevice::createInsecureL2capChannel(jint arg0)
	{
		return __thiz.callObjectMethod(
			"createInsecureL2capChannel",
			"(I)Landroid/bluetooth/BluetoothSocket;",
			arg0
		);
	}
	QAndroidJniObject BluetoothDevice::createInsecureRfcommSocketToServiceRecord(java::util::UUID arg0)
	{
		return __thiz.callObjectMethod(
			"createInsecureRfcommSocketToServiceRecord",
			"(Ljava/util/UUID;)Landroid/bluetooth/BluetoothSocket;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothDevice::createL2capChannel(jint arg0)
	{
		return __thiz.callObjectMethod(
			"createL2capChannel",
			"(I)Landroid/bluetooth/BluetoothSocket;",
			arg0
		);
	}
	QAndroidJniObject BluetoothDevice::createRfcommSocketToServiceRecord(java::util::UUID arg0)
	{
		return __thiz.callObjectMethod(
			"createRfcommSocketToServiceRecord",
			"(Ljava/util/UUID;)Landroid/bluetooth/BluetoothSocket;",
			arg0.__jniObject().object()
		);
	}
	jint BluetoothDevice::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean BluetoothDevice::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean BluetoothDevice::fetchUuidsWithSdp()
	{
		return __thiz.callMethod<jboolean>(
			"fetchUuidsWithSdp",
			"()Z"
		);
	}
	jstring BluetoothDevice::getAddress()
	{
		return __thiz.callObjectMethod(
			"getAddress",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject BluetoothDevice::getBluetoothClass()
	{
		return __thiz.callObjectMethod(
			"getBluetoothClass",
			"()Landroid/bluetooth/BluetoothClass;"
		);
	}
	jint BluetoothDevice::getBondState()
	{
		return __thiz.callMethod<jint>(
			"getBondState",
			"()I"
		);
	}
	jstring BluetoothDevice::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint BluetoothDevice::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jarray BluetoothDevice::getUuids()
	{
		return __thiz.callObjectMethod(
			"getUuids",
			"()[Landroid/os/ParcelUuid;"
		).object<jarray>();
	}
	jint BluetoothDevice::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean BluetoothDevice::setPairingConfirmation(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setPairingConfirmation",
			"(Z)Z",
			arg0
		);
	}
	jboolean BluetoothDevice::setPin(jbyteArray arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setPin",
			"([B)Z",
			arg0
		);
	}
	jstring BluetoothDevice::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void BluetoothDevice::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::bluetooth

