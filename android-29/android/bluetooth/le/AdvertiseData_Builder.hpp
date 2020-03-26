#pragma once

#ifndef ANDROID_BLUETOOTH_LE_ADVERTISEDATA_BUILDER
#define ANDROID_BLUETOOTH_LE_ADVERTISEDATA_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::bluetooth::le
{
	class AdvertiseData;
}
namespace __jni_impl::android::os
{
	class ParcelUuid;
}

namespace __jni_impl::android::bluetooth::le
{
	class AdvertiseData_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject addServiceData(__jni_impl::android::os::ParcelUuid arg0, jbyteArray arg1);
		QAndroidJniObject addManufacturerData(jint arg0, jbyteArray arg1);
		QAndroidJniObject setIncludeTxPowerLevel(jboolean arg0);
		QAndroidJniObject setIncludeDeviceName(jboolean arg0);
		QAndroidJniObject addServiceUuid(__jni_impl::android::os::ParcelUuid arg0);
	};
} // namespace __jni_impl::android::bluetooth::le

#include "AdvertiseData.hpp"
#include "../../os/ParcelUuid.hpp"

namespace __jni_impl::android::bluetooth::le
{
	// Fields
	
	// Constructors
	void AdvertiseData_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.AdvertiseData$Builder",
			"()V");
	}
	
	// Methods
	QAndroidJniObject AdvertiseData_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/bluetooth/le/AdvertiseData;"
		);
	}
	QAndroidJniObject AdvertiseData_Builder::addServiceData(__jni_impl::android::os::ParcelUuid arg0, jbyteArray arg1)
	{
		return __thiz.callObjectMethod(
			"addServiceData",
			"(Landroid/os/ParcelUuid;[B)Landroid/bluetooth/le/AdvertiseData$Builder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AdvertiseData_Builder::addManufacturerData(jint arg0, jbyteArray arg1)
	{
		return __thiz.callObjectMethod(
			"addManufacturerData",
			"(I[B)Landroid/bluetooth/le/AdvertiseData$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject AdvertiseData_Builder::setIncludeTxPowerLevel(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setIncludeTxPowerLevel",
			"(Z)Landroid/bluetooth/le/AdvertiseData$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertiseData_Builder::setIncludeDeviceName(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setIncludeDeviceName",
			"(Z)Landroid/bluetooth/le/AdvertiseData$Builder;",
			arg0
		);
	}
	QAndroidJniObject AdvertiseData_Builder::addServiceUuid(__jni_impl::android::os::ParcelUuid arg0)
	{
		return __thiz.callObjectMethod(
			"addServiceUuid",
			"(Landroid/os/ParcelUuid;)Landroid/bluetooth/le/AdvertiseData$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::bluetooth::le

namespace android::bluetooth::le
{
	class AdvertiseData_Builder : public __jni_impl::android::bluetooth::le::AdvertiseData_Builder
	{
	public:
		AdvertiseData_Builder(QAndroidJniObject obj) { __thiz = obj; }
		AdvertiseData_Builder()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth::le

#endif // ANDROID_BLUETOOTH_LE_ADVERTISEDATA_BUILDER

