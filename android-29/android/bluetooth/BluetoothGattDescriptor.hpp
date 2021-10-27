#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::bluetooth
{
	class BluetoothGattCharacteristic;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::util
{
	class UUID;
}

namespace __jni_impl::android::bluetooth
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
		
		// Constructors
		void __constructor(__jni_impl::java::util::UUID arg0, jint arg1);
		
		// Methods
		jint describeContents();
		QAndroidJniObject getCharacteristic();
		jint getPermissions();
		QAndroidJniObject getUuid();
		jbyteArray getValue();
		jboolean setValue(jbyteArray arg0);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::bluetooth

#include "./BluetoothGattCharacteristic.hpp"
#include "../os/Parcel.hpp"
#include "../../java/util/UUID.hpp"

namespace __jni_impl::android::bluetooth
{
	// Fields
	QAndroidJniObject BluetoothGattDescriptor::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothGattDescriptor",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jbyteArray BluetoothGattDescriptor::DISABLE_NOTIFICATION_VALUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothGattDescriptor",
			"DISABLE_NOTIFICATION_VALUE",
			"[B"
		).object<jbyteArray>();
	}
	jbyteArray BluetoothGattDescriptor::ENABLE_INDICATION_VALUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothGattDescriptor",
			"ENABLE_INDICATION_VALUE",
			"[B"
		).object<jbyteArray>();
	}
	jbyteArray BluetoothGattDescriptor::ENABLE_NOTIFICATION_VALUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothGattDescriptor",
			"ENABLE_NOTIFICATION_VALUE",
			"[B"
		).object<jbyteArray>();
	}
	jint BluetoothGattDescriptor::PERMISSION_READ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattDescriptor",
			"PERMISSION_READ"
		);
	}
	jint BluetoothGattDescriptor::PERMISSION_READ_ENCRYPTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattDescriptor",
			"PERMISSION_READ_ENCRYPTED"
		);
	}
	jint BluetoothGattDescriptor::PERMISSION_READ_ENCRYPTED_MITM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattDescriptor",
			"PERMISSION_READ_ENCRYPTED_MITM"
		);
	}
	jint BluetoothGattDescriptor::PERMISSION_WRITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattDescriptor",
			"PERMISSION_WRITE"
		);
	}
	jint BluetoothGattDescriptor::PERMISSION_WRITE_ENCRYPTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattDescriptor",
			"PERMISSION_WRITE_ENCRYPTED"
		);
	}
	jint BluetoothGattDescriptor::PERMISSION_WRITE_ENCRYPTED_MITM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattDescriptor",
			"PERMISSION_WRITE_ENCRYPTED_MITM"
		);
	}
	jint BluetoothGattDescriptor::PERMISSION_WRITE_SIGNED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattDescriptor",
			"PERMISSION_WRITE_SIGNED"
		);
	}
	jint BluetoothGattDescriptor::PERMISSION_WRITE_SIGNED_MITM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattDescriptor",
			"PERMISSION_WRITE_SIGNED_MITM"
		);
	}
	
	// Constructors
	void BluetoothGattDescriptor::__constructor(__jni_impl::java::util::UUID arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothGattDescriptor",
			"(Ljava/util/UUID;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jint BluetoothGattDescriptor::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject BluetoothGattDescriptor::getCharacteristic()
	{
		return __thiz.callObjectMethod(
			"getCharacteristic",
			"()Landroid/bluetooth/BluetoothGattCharacteristic;"
		);
	}
	jint BluetoothGattDescriptor::getPermissions()
	{
		return __thiz.callMethod<jint>(
			"getPermissions",
			"()I"
		);
	}
	QAndroidJniObject BluetoothGattDescriptor::getUuid()
	{
		return __thiz.callObjectMethod(
			"getUuid",
			"()Ljava/util/UUID;"
		);
	}
	jbyteArray BluetoothGattDescriptor::getValue()
	{
		return __thiz.callObjectMethod(
			"getValue",
			"()[B"
		).object<jbyteArray>();
	}
	jboolean BluetoothGattDescriptor::setValue(jbyteArray arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setValue",
			"([B)Z",
			arg0
		);
	}
	void BluetoothGattDescriptor::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class BluetoothGattDescriptor : public __jni_impl::android::bluetooth::BluetoothGattDescriptor
	{
	public:
		BluetoothGattDescriptor(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothGattDescriptor(__jni_impl::java::util::UUID arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::bluetooth

