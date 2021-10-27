#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::bluetooth
{
	class BluetoothGattDescriptor;
}
namespace __jni_impl::android::bluetooth
{
	class BluetoothGattService;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::lang
{
	class Float;
}
namespace __jni_impl::java::lang
{
	class Integer;
}
namespace __jni_impl::java::util
{
	class UUID;
}

namespace __jni_impl::android::bluetooth
{
	class BluetoothGattCharacteristic : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
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
		
		// Constructors
		void __constructor(__jni_impl::java::util::UUID arg0, jint arg1, jint arg2);
		
		// Methods
		jboolean addDescriptor(__jni_impl::android::bluetooth::BluetoothGattDescriptor arg0);
		jint describeContents();
		QAndroidJniObject getDescriptor(__jni_impl::java::util::UUID arg0);
		QAndroidJniObject getDescriptors();
		QAndroidJniObject getFloatValue(jint arg0, jint arg1);
		jint getInstanceId();
		QAndroidJniObject getIntValue(jint arg0, jint arg1);
		jint getPermissions();
		jint getProperties();
		QAndroidJniObject getService();
		jstring getStringValue(jint arg0);
		QAndroidJniObject getUuid();
		jbyteArray getValue();
		jint getWriteType();
		jboolean setValue(jbyteArray arg0);
		jboolean setValue(jstring arg0);
		jboolean setValue(const QString &arg0);
		jboolean setValue(jint arg0, jint arg1, jint arg2);
		jboolean setValue(jint arg0, jint arg1, jint arg2, jint arg3);
		void setWriteType(jint arg0);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::bluetooth

#include "./BluetoothGattDescriptor.hpp"
#include "./BluetoothGattService.hpp"
#include "../os/Parcel.hpp"
#include "../../java/lang/Float.hpp"
#include "../../java/lang/Integer.hpp"
#include "../../java/util/UUID.hpp"

namespace __jni_impl::android::bluetooth
{
	// Fields
	QAndroidJniObject BluetoothGattCharacteristic::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothGattCharacteristic",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint BluetoothGattCharacteristic::FORMAT_FLOAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"FORMAT_FLOAT"
		);
	}
	jint BluetoothGattCharacteristic::FORMAT_SFLOAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"FORMAT_SFLOAT"
		);
	}
	jint BluetoothGattCharacteristic::FORMAT_SINT16()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"FORMAT_SINT16"
		);
	}
	jint BluetoothGattCharacteristic::FORMAT_SINT32()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"FORMAT_SINT32"
		);
	}
	jint BluetoothGattCharacteristic::FORMAT_SINT8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"FORMAT_SINT8"
		);
	}
	jint BluetoothGattCharacteristic::FORMAT_UINT16()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"FORMAT_UINT16"
		);
	}
	jint BluetoothGattCharacteristic::FORMAT_UINT32()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"FORMAT_UINT32"
		);
	}
	jint BluetoothGattCharacteristic::FORMAT_UINT8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"FORMAT_UINT8"
		);
	}
	jint BluetoothGattCharacteristic::PERMISSION_READ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PERMISSION_READ"
		);
	}
	jint BluetoothGattCharacteristic::PERMISSION_READ_ENCRYPTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PERMISSION_READ_ENCRYPTED"
		);
	}
	jint BluetoothGattCharacteristic::PERMISSION_READ_ENCRYPTED_MITM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PERMISSION_READ_ENCRYPTED_MITM"
		);
	}
	jint BluetoothGattCharacteristic::PERMISSION_WRITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PERMISSION_WRITE"
		);
	}
	jint BluetoothGattCharacteristic::PERMISSION_WRITE_ENCRYPTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PERMISSION_WRITE_ENCRYPTED"
		);
	}
	jint BluetoothGattCharacteristic::PERMISSION_WRITE_ENCRYPTED_MITM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PERMISSION_WRITE_ENCRYPTED_MITM"
		);
	}
	jint BluetoothGattCharacteristic::PERMISSION_WRITE_SIGNED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PERMISSION_WRITE_SIGNED"
		);
	}
	jint BluetoothGattCharacteristic::PERMISSION_WRITE_SIGNED_MITM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PERMISSION_WRITE_SIGNED_MITM"
		);
	}
	jint BluetoothGattCharacteristic::PROPERTY_BROADCAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PROPERTY_BROADCAST"
		);
	}
	jint BluetoothGattCharacteristic::PROPERTY_EXTENDED_PROPS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PROPERTY_EXTENDED_PROPS"
		);
	}
	jint BluetoothGattCharacteristic::PROPERTY_INDICATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PROPERTY_INDICATE"
		);
	}
	jint BluetoothGattCharacteristic::PROPERTY_NOTIFY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PROPERTY_NOTIFY"
		);
	}
	jint BluetoothGattCharacteristic::PROPERTY_READ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PROPERTY_READ"
		);
	}
	jint BluetoothGattCharacteristic::PROPERTY_SIGNED_WRITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PROPERTY_SIGNED_WRITE"
		);
	}
	jint BluetoothGattCharacteristic::PROPERTY_WRITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PROPERTY_WRITE"
		);
	}
	jint BluetoothGattCharacteristic::PROPERTY_WRITE_NO_RESPONSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PROPERTY_WRITE_NO_RESPONSE"
		);
	}
	jint BluetoothGattCharacteristic::WRITE_TYPE_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"WRITE_TYPE_DEFAULT"
		);
	}
	jint BluetoothGattCharacteristic::WRITE_TYPE_NO_RESPONSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"WRITE_TYPE_NO_RESPONSE"
		);
	}
	jint BluetoothGattCharacteristic::WRITE_TYPE_SIGNED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"WRITE_TYPE_SIGNED"
		);
	}
	
	// Constructors
	void BluetoothGattCharacteristic::__constructor(__jni_impl::java::util::UUID arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothGattCharacteristic",
			"(Ljava/util/UUID;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	
	// Methods
	jboolean BluetoothGattCharacteristic::addDescriptor(__jni_impl::android::bluetooth::BluetoothGattDescriptor arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addDescriptor",
			"(Landroid/bluetooth/BluetoothGattDescriptor;)Z",
			arg0.__jniObject().object()
		);
	}
	jint BluetoothGattCharacteristic::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject BluetoothGattCharacteristic::getDescriptor(__jni_impl::java::util::UUID arg0)
	{
		return __thiz.callObjectMethod(
			"getDescriptor",
			"(Ljava/util/UUID;)Landroid/bluetooth/BluetoothGattDescriptor;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothGattCharacteristic::getDescriptors()
	{
		return __thiz.callObjectMethod(
			"getDescriptors",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject BluetoothGattCharacteristic::getFloatValue(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getFloatValue",
			"(II)Ljava/lang/Float;",
			arg0,
			arg1
		);
	}
	jint BluetoothGattCharacteristic::getInstanceId()
	{
		return __thiz.callMethod<jint>(
			"getInstanceId",
			"()I"
		);
	}
	QAndroidJniObject BluetoothGattCharacteristic::getIntValue(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getIntValue",
			"(II)Ljava/lang/Integer;",
			arg0,
			arg1
		);
	}
	jint BluetoothGattCharacteristic::getPermissions()
	{
		return __thiz.callMethod<jint>(
			"getPermissions",
			"()I"
		);
	}
	jint BluetoothGattCharacteristic::getProperties()
	{
		return __thiz.callMethod<jint>(
			"getProperties",
			"()I"
		);
	}
	QAndroidJniObject BluetoothGattCharacteristic::getService()
	{
		return __thiz.callObjectMethod(
			"getService",
			"()Landroid/bluetooth/BluetoothGattService;"
		);
	}
	jstring BluetoothGattCharacteristic::getStringValue(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getStringValue",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject BluetoothGattCharacteristic::getUuid()
	{
		return __thiz.callObjectMethod(
			"getUuid",
			"()Ljava/util/UUID;"
		);
	}
	jbyteArray BluetoothGattCharacteristic::getValue()
	{
		return __thiz.callObjectMethod(
			"getValue",
			"()[B"
		).object<jbyteArray>();
	}
	jint BluetoothGattCharacteristic::getWriteType()
	{
		return __thiz.callMethod<jint>(
			"getWriteType",
			"()I"
		);
	}
	jboolean BluetoothGattCharacteristic::setValue(jbyteArray arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setValue",
			"([B)Z",
			arg0
		);
	}
	jboolean BluetoothGattCharacteristic::setValue(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setValue",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean BluetoothGattCharacteristic::setValue(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setValue",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean BluetoothGattCharacteristic::setValue(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"setValue",
			"(III)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean BluetoothGattCharacteristic::setValue(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jboolean>(
			"setValue",
			"(IIII)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void BluetoothGattCharacteristic::setWriteType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setWriteType",
			"(I)V",
			arg0
		);
	}
	void BluetoothGattCharacteristic::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class BluetoothGattCharacteristic : public __jni_impl::android::bluetooth::BluetoothGattCharacteristic
	{
	public:
		BluetoothGattCharacteristic(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothGattCharacteristic(__jni_impl::java::util::UUID arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::bluetooth

