#pragma once

#ifndef ANDROID_BLUETOOTH_LE_SCANFILTER_BUILDER
#define ANDROID_BLUETOOTH_LE_SCANFILTER_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::bluetooth::le
{
	class ScanFilter;
}
namespace __jni_impl::android::os
{
	class ParcelUuid;
}

namespace __jni_impl::android::bluetooth::le
{
	class ScanFilter_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setDeviceName(jstring arg0);
		QAndroidJniObject setDeviceName(const QString &arg0);
		QAndroidJniObject setDeviceAddress(jstring arg0);
		QAndroidJniObject setDeviceAddress(const QString &arg0);
		QAndroidJniObject setServiceUuid(__jni_impl::android::os::ParcelUuid arg0);
		QAndroidJniObject setServiceUuid(__jni_impl::android::os::ParcelUuid arg0, __jni_impl::android::os::ParcelUuid arg1);
		QAndroidJniObject setServiceSolicitationUuid(__jni_impl::android::os::ParcelUuid arg0, __jni_impl::android::os::ParcelUuid arg1);
		QAndroidJniObject setServiceSolicitationUuid(__jni_impl::android::os::ParcelUuid arg0);
		QAndroidJniObject setServiceData(__jni_impl::android::os::ParcelUuid arg0, jbyteArray arg1);
		QAndroidJniObject setServiceData(__jni_impl::android::os::ParcelUuid arg0, jbyteArray arg1, jbyteArray arg2);
		QAndroidJniObject setManufacturerData(jint arg0, jbyteArray arg1, jbyteArray arg2);
		QAndroidJniObject setManufacturerData(jint arg0, jbyteArray arg1);
	};
} // namespace __jni_impl::android::bluetooth::le

#include "ScanFilter.hpp"
#include "../../os/ParcelUuid.hpp"

namespace __jni_impl::android::bluetooth::le
{
	// Fields
	
	// Constructors
	void ScanFilter_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.ScanFilter$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ScanFilter_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/ScanFilter;"
		);
	}
	QAndroidJniObject ScanFilter_Builder::setDeviceName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setDeviceName",
			"(Ljava/lang/String;)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0
		);
	}
	QAndroidJniObject ScanFilter_Builder::setDeviceName(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setDeviceName",
			"(Ljava/lang/String;)Landroid/bluetooth/le/ScanFilter$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ScanFilter_Builder::setDeviceAddress(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setDeviceAddress",
			"(Ljava/lang/String;)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0
		);
	}
	QAndroidJniObject ScanFilter_Builder::setDeviceAddress(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setDeviceAddress",
			"(Ljava/lang/String;)Landroid/bluetooth/le/ScanFilter$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ScanFilter_Builder::setServiceUuid(__jni_impl::android::os::ParcelUuid arg0)
	{
		return __thiz.callObjectMethod(
			"setServiceUuid",
			"(Landroid/os/ParcelUuid;)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ScanFilter_Builder::setServiceUuid(__jni_impl::android::os::ParcelUuid arg0, __jni_impl::android::os::ParcelUuid arg1)
	{
		return __thiz.callObjectMethod(
			"setServiceUuid",
			"(Landroid/os/ParcelUuid;Landroid/os/ParcelUuid;)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ScanFilter_Builder::setServiceSolicitationUuid(__jni_impl::android::os::ParcelUuid arg0, __jni_impl::android::os::ParcelUuid arg1)
	{
		return __thiz.callObjectMethod(
			"setServiceSolicitationUuid",
			"(Landroid/os/ParcelUuid;Landroid/os/ParcelUuid;)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ScanFilter_Builder::setServiceSolicitationUuid(__jni_impl::android::os::ParcelUuid arg0)
	{
		return __thiz.callObjectMethod(
			"setServiceSolicitationUuid",
			"(Landroid/os/ParcelUuid;)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ScanFilter_Builder::setServiceData(__jni_impl::android::os::ParcelUuid arg0, jbyteArray arg1)
	{
		return __thiz.callObjectMethod(
			"setServiceData",
			"(Landroid/os/ParcelUuid;[B)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ScanFilter_Builder::setServiceData(__jni_impl::android::os::ParcelUuid arg0, jbyteArray arg1, jbyteArray arg2)
	{
		return __thiz.callObjectMethod(
			"setServiceData",
			"(Landroid/os/ParcelUuid;[B[B)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject ScanFilter_Builder::setManufacturerData(jint arg0, jbyteArray arg1, jbyteArray arg2)
	{
		return __thiz.callObjectMethod(
			"setManufacturerData",
			"(I[B[B)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject ScanFilter_Builder::setManufacturerData(jint arg0, jbyteArray arg1)
	{
		return __thiz.callObjectMethod(
			"setManufacturerData",
			"(I[B)Landroid/bluetooth/le/ScanFilter$Builder;",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::bluetooth::le

namespace android::bluetooth::le
{
	class ScanFilter_Builder : public __jni_impl::android::bluetooth::le::ScanFilter_Builder
	{
	public:
		ScanFilter_Builder(QAndroidJniObject obj) { __thiz = obj; }
		ScanFilter_Builder()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth::le

#endif // ANDROID_BLUETOOTH_LE_SCANFILTER_BUILDER

