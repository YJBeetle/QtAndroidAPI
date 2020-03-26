#pragma once

#ifndef ANDROID_COMPANION_BLUETOOTHDEVICEFILTER_BUILDER
#define ANDROID_COMPANION_BLUETOOTHDEVICEFILTER_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::companion
{
	class BluetoothDeviceFilter;
}
namespace __jni_impl::java::util::regex
{
	class Pattern;
}
namespace __jni_impl::android::os
{
	class ParcelUuid;
}

namespace __jni_impl::android::companion
{
	class BluetoothDeviceFilter_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAddress(jstring arg0);
		QAndroidJniObject setNamePattern(__jni_impl::java::util::regex::Pattern arg0);
		QAndroidJniObject addServiceUuid(__jni_impl::android::os::ParcelUuid arg0, __jni_impl::android::os::ParcelUuid arg1);
	};
} // namespace __jni_impl::android::companion

#include "BluetoothDeviceFilter.hpp"
#include "../../java/util/regex/Pattern.hpp"
#include "../os/ParcelUuid.hpp"

namespace __jni_impl::android::companion
{
	// Fields
	
	// Constructors
	void BluetoothDeviceFilter_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.companion.BluetoothDeviceFilter$Builder",
			"()V");
	}
	
	// Methods
	QAndroidJniObject BluetoothDeviceFilter_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/companion/BluetoothDeviceFilter;"
		);
	}
	QAndroidJniObject BluetoothDeviceFilter_Builder::setAddress(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setAddress",
			"(Ljava/lang/String;)Landroid/companion/BluetoothDeviceFilter$Builder;",
			arg0
		);
	}
	QAndroidJniObject BluetoothDeviceFilter_Builder::setNamePattern(__jni_impl::java::util::regex::Pattern arg0)
	{
		return __thiz.callObjectMethod(
			"setNamePattern",
			"(Ljava/util/regex/Pattern;)Landroid/companion/BluetoothDeviceFilter$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothDeviceFilter_Builder::addServiceUuid(__jni_impl::android::os::ParcelUuid arg0, __jni_impl::android::os::ParcelUuid arg1)
	{
		return __thiz.callObjectMethod(
			"addServiceUuid",
			"(Landroid/os/ParcelUuid;Landroid/os/ParcelUuid;)Landroid/companion/BluetoothDeviceFilter$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::companion

namespace android::companion
{
	class BluetoothDeviceFilter_Builder : public __jni_impl::android::companion::BluetoothDeviceFilter_Builder
	{
	public:
		BluetoothDeviceFilter_Builder(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothDeviceFilter_Builder()
		{
			__constructor();
		}
	};
} // namespace android::companion

#endif // ANDROID_COMPANION_BLUETOOTHDEVICEFILTER_BUILDER

