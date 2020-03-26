#pragma once

#ifndef ANDROID_BLUETOOTH_BLUETOOTHDEVICE
#define ANDROID_BLUETOOTH_BLUETOOTHDEVICE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::bluetooth
{
	class BluetoothClass;
}
namespace __jni_impl::android::bluetooth
{
	class BluetoothSocket;
}
namespace __jni_impl::java::util
{
	class UUID;
}
namespace __jni_impl::android::bluetooth
{
	class BluetoothGatt;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::bluetooth
{
	class BluetoothGattCallback;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::bluetooth
{
	class BluetoothDevice : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_ACL_CONNECTED();
		static jstring ACTION_ACL_DISCONNECTED();
		static jstring ACTION_ACL_DISCONNECT_REQUESTED();
		static jstring ACTION_BOND_STATE_CHANGED();
		static jstring ACTION_CLASS_CHANGED();
		static jstring ACTION_FOUND();
		static jstring ACTION_NAME_CHANGED();
		static jstring ACTION_PAIRING_REQUEST();
		static jstring ACTION_UUID();
		static jint BOND_BONDED();
		static jint BOND_BONDING();
		static jint BOND_NONE();
		static QAndroidJniObject CREATOR();
		static jint DEVICE_TYPE_CLASSIC();
		static jint DEVICE_TYPE_DUAL();
		static jint DEVICE_TYPE_LE();
		static jint DEVICE_TYPE_UNKNOWN();
		static jint ERROR();
		static jstring EXTRA_BOND_STATE();
		static jstring EXTRA_CLASS();
		static jstring EXTRA_DEVICE();
		static jstring EXTRA_NAME();
		static jstring EXTRA_PAIRING_KEY();
		static jstring EXTRA_PAIRING_VARIANT();
		static jstring EXTRA_PREVIOUS_BOND_STATE();
		static jstring EXTRA_RSSI();
		static jstring EXTRA_UUID();
		static jint PAIRING_VARIANT_PASSKEY_CONFIRMATION();
		static jint PAIRING_VARIANT_PIN();
		static jint PHY_LE_1M();
		static jint PHY_LE_1M_MASK();
		static jint PHY_LE_2M();
		static jint PHY_LE_2M_MASK();
		static jint PHY_LE_CODED();
		static jint PHY_LE_CODED_MASK();
		static jint PHY_OPTION_NO_PREFERRED();
		static jint PHY_OPTION_S2();
		static jint PHY_OPTION_S8();
		static jint TRANSPORT_AUTO();
		static jint TRANSPORT_BREDR();
		static jint TRANSPORT_LE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getName();
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jint getType();
		jstring getAddress();
		jboolean createBond();
		jint getBondState();
		QAndroidJniObject getBluetoothClass();
		jarray getUuids();
		jboolean fetchUuidsWithSdp();
		jboolean setPin(jbyteArray arg0);
		jboolean setPairingConfirmation(jboolean arg0);
		QAndroidJniObject createRfcommSocketToServiceRecord(__jni_impl::java::util::UUID arg0);
		QAndroidJniObject createInsecureRfcommSocketToServiceRecord(__jni_impl::java::util::UUID arg0);
		QAndroidJniObject connectGatt(__jni_impl::android::content::Context arg0, jboolean arg1, __jni_impl::android::bluetooth::BluetoothGattCallback arg2, jint arg3);
		QAndroidJniObject connectGatt(__jni_impl::android::content::Context arg0, jboolean arg1, __jni_impl::android::bluetooth::BluetoothGattCallback arg2, jint arg3, jint arg4);
		QAndroidJniObject connectGatt(__jni_impl::android::content::Context arg0, jboolean arg1, __jni_impl::android::bluetooth::BluetoothGattCallback arg2, jint arg3, jint arg4, __jni_impl::android::os::Handler arg5);
		QAndroidJniObject connectGatt(__jni_impl::android::content::Context arg0, jboolean arg1, __jni_impl::android::bluetooth::BluetoothGattCallback arg2);
		QAndroidJniObject createL2capChannel(jint arg0);
		QAndroidJniObject createInsecureL2capChannel(jint arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::bluetooth

#include "BluetoothClass.hpp"
#include "BluetoothSocket.hpp"
#include "../../java/util/UUID.hpp"
#include "BluetoothGatt.hpp"
#include "../content/Context.hpp"
#include "BluetoothGattCallback.hpp"
#include "../os/Handler.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::bluetooth
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
	
	// Constructors
	void BluetoothDevice::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothDevice",
			"(V)V");
	}
	
	// Methods
	jstring BluetoothDevice::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean BluetoothDevice::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
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
	jint BluetoothDevice::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint BluetoothDevice::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jstring BluetoothDevice::getAddress()
	{
		return __thiz.callObjectMethod(
			"getAddress",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean BluetoothDevice::createBond()
	{
		return __thiz.callMethod<jboolean>(
			"createBond",
			"()Z"
		);
	}
	jint BluetoothDevice::getBondState()
	{
		return __thiz.callMethod<jint>(
			"getBondState",
			"()I"
		);
	}
	QAndroidJniObject BluetoothDevice::getBluetoothClass()
	{
		return __thiz.callObjectMethod(
			"getBluetoothClass",
			"()Landroid/bluetooth/BluetoothClass;"
		);
	}
	jarray BluetoothDevice::getUuids()
	{
		return __thiz.callObjectMethod(
			"getUuids",
			"()[Landroid/os/ParcelUuid;"
		).object<jarray>();
	}
	jboolean BluetoothDevice::fetchUuidsWithSdp()
	{
		return __thiz.callMethod<jboolean>(
			"fetchUuidsWithSdp",
			"()Z"
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
	jboolean BluetoothDevice::setPairingConfirmation(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setPairingConfirmation",
			"(Z)Z",
			arg0
		);
	}
	QAndroidJniObject BluetoothDevice::createRfcommSocketToServiceRecord(__jni_impl::java::util::UUID arg0)
	{
		return __thiz.callObjectMethod(
			"createRfcommSocketToServiceRecord",
			"(Ljava/util/UUID;)Landroid/bluetooth/BluetoothSocket;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothDevice::createInsecureRfcommSocketToServiceRecord(__jni_impl::java::util::UUID arg0)
	{
		return __thiz.callObjectMethod(
			"createInsecureRfcommSocketToServiceRecord",
			"(Ljava/util/UUID;)Landroid/bluetooth/BluetoothSocket;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothDevice::connectGatt(__jni_impl::android::content::Context arg0, jboolean arg1, __jni_impl::android::bluetooth::BluetoothGattCallback arg2, jint arg3)
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
	QAndroidJniObject BluetoothDevice::connectGatt(__jni_impl::android::content::Context arg0, jboolean arg1, __jni_impl::android::bluetooth::BluetoothGattCallback arg2, jint arg3, jint arg4)
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
	QAndroidJniObject BluetoothDevice::connectGatt(__jni_impl::android::content::Context arg0, jboolean arg1, __jni_impl::android::bluetooth::BluetoothGattCallback arg2, jint arg3, jint arg4, __jni_impl::android::os::Handler arg5)
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
	QAndroidJniObject BluetoothDevice::connectGatt(__jni_impl::android::content::Context arg0, jboolean arg1, __jni_impl::android::bluetooth::BluetoothGattCallback arg2)
	{
		return __thiz.callObjectMethod(
			"connectGatt",
			"(Landroid/content/Context;ZLandroid/bluetooth/BluetoothGattCallback;)Landroid/bluetooth/BluetoothGatt;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
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
	QAndroidJniObject BluetoothDevice::createInsecureL2capChannel(jint arg0)
	{
		return __thiz.callObjectMethod(
			"createInsecureL2capChannel",
			"(I)Landroid/bluetooth/BluetoothSocket;",
			arg0
		);
	}
	jint BluetoothDevice::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void BluetoothDevice::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::bluetooth

namespace android::bluetooth
{
	class BluetoothDevice : public __jni_impl::android::bluetooth::BluetoothDevice
	{
	public:
		BluetoothDevice(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothDevice()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth

#endif // ANDROID_BLUETOOTH_BLUETOOTHDEVICE

