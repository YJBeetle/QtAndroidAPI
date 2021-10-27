#pragma once

#ifndef ANDROID_COMPANION_BLUETOOTHLEDEVICEFILTER_BUILDER
#define ANDROID_COMPANION_BLUETOOTHLEDEVICEFILTER_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::bluetooth::le
{
	class ScanFilter;
}
namespace __jni_impl::android::companion
{
	class BluetoothLeDeviceFilter;
}
namespace __jni_impl::java::nio
{
	class ByteOrder;
}
namespace __jni_impl::java::util::regex
{
	class Pattern;
}

namespace __jni_impl::android::companion
{
	class BluetoothLeDeviceFilter_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setNamePattern(__jni_impl::java::util::regex::Pattern arg0);
		QAndroidJniObject setRawDataFilter(jbyteArray arg0, jbyteArray arg1);
		QAndroidJniObject setRenameFromBytes(jstring arg0, jstring arg1, jint arg2, jint arg3, __jni_impl::java::nio::ByteOrder arg4);
		QAndroidJniObject setRenameFromBytes(const QString &arg0, const QString &arg1, jint arg2, jint arg3, __jni_impl::java::nio::ByteOrder arg4);
		QAndroidJniObject setRenameFromName(jstring arg0, jstring arg1, jint arg2, jint arg3);
		QAndroidJniObject setRenameFromName(const QString &arg0, const QString &arg1, jint arg2, jint arg3);
		QAndroidJniObject setScanFilter(__jni_impl::android::bluetooth::le::ScanFilter arg0);
	};
} // namespace __jni_impl::android::companion

#include "../bluetooth/le/ScanFilter.hpp"
#include "BluetoothLeDeviceFilter.hpp"
#include "../../java/nio/ByteOrder.hpp"
#include "../../java/util/regex/Pattern.hpp"

namespace __jni_impl::android::companion
{
	// Fields
	
	// Constructors
	void BluetoothLeDeviceFilter_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.companion.BluetoothLeDeviceFilter$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject BluetoothLeDeviceFilter_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/companion/BluetoothLeDeviceFilter;"
		);
	}
	QAndroidJniObject BluetoothLeDeviceFilter_Builder::setNamePattern(__jni_impl::java::util::regex::Pattern arg0)
	{
		return __thiz.callObjectMethod(
			"setNamePattern",
			"(Ljava/util/regex/Pattern;)Landroid/companion/BluetoothLeDeviceFilter$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothLeDeviceFilter_Builder::setRawDataFilter(jbyteArray arg0, jbyteArray arg1)
	{
		return __thiz.callObjectMethod(
			"setRawDataFilter",
			"([B[B)Landroid/companion/BluetoothLeDeviceFilter$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject BluetoothLeDeviceFilter_Builder::setRenameFromBytes(jstring arg0, jstring arg1, jint arg2, jint arg3, __jni_impl::java::nio::ByteOrder arg4)
	{
		return __thiz.callObjectMethod(
			"setRenameFromBytes",
			"(Ljava/lang/String;Ljava/lang/String;IILjava/nio/ByteOrder;)Landroid/companion/BluetoothLeDeviceFilter$Builder;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothLeDeviceFilter_Builder::setRenameFromBytes(const QString &arg0, const QString &arg1, jint arg2, jint arg3, __jni_impl::java::nio::ByteOrder arg4)
	{
		return __thiz.callObjectMethod(
			"setRenameFromBytes",
			"(Ljava/lang/String;Ljava/lang/String;IILjava/nio/ByteOrder;)Landroid/companion/BluetoothLeDeviceFilter$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothLeDeviceFilter_Builder::setRenameFromName(jstring arg0, jstring arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"setRenameFromName",
			"(Ljava/lang/String;Ljava/lang/String;II)Landroid/companion/BluetoothLeDeviceFilter$Builder;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject BluetoothLeDeviceFilter_Builder::setRenameFromName(const QString &arg0, const QString &arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"setRenameFromName",
			"(Ljava/lang/String;Ljava/lang/String;II)Landroid/companion/BluetoothLeDeviceFilter$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	QAndroidJniObject BluetoothLeDeviceFilter_Builder::setScanFilter(__jni_impl::android::bluetooth::le::ScanFilter arg0)
	{
		return __thiz.callObjectMethod(
			"setScanFilter",
			"(Landroid/bluetooth/le/ScanFilter;)Landroid/companion/BluetoothLeDeviceFilter$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::companion

namespace android::companion
{
	class BluetoothLeDeviceFilter_Builder : public __jni_impl::android::companion::BluetoothLeDeviceFilter_Builder
	{
	public:
		BluetoothLeDeviceFilter_Builder(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothLeDeviceFilter_Builder()
		{
			__constructor();
		}
	};
} // namespace android::companion

#endif // ANDROID_COMPANION_BLUETOOTHLEDEVICEFILTER_BUILDER

