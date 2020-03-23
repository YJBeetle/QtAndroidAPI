#pragma once

#ifndef ANDROID_BLUETOOTH_BLUETOOTHCLASS_SERVICE
#define ANDROID_BLUETOOTH_BLUETOOTHCLASS_SERVICE

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::bluetooth
{
	class BluetoothClass_Service : public __JniBaseClass
	{
	public:
		// Fields
		static jint AUDIO();
		static jint CAPTURE();
		static jint INFORMATION();
		static jint LIMITED_DISCOVERABILITY();
		static jint NETWORKING();
		static jint OBJECT_TRANSFER();
		static jint POSITIONING();
		static jint RENDER();
		static jint TELEPHONY();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::bluetooth


namespace __jni_impl::android::bluetooth
{
	// Fields
	jint BluetoothClass_Service::AUDIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"AUDIO");
	}
	jint BluetoothClass_Service::CAPTURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"CAPTURE");
	}
	jint BluetoothClass_Service::INFORMATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"INFORMATION");
	}
	jint BluetoothClass_Service::LIMITED_DISCOVERABILITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"LIMITED_DISCOVERABILITY");
	}
	jint BluetoothClass_Service::NETWORKING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"NETWORKING");
	}
	jint BluetoothClass_Service::OBJECT_TRANSFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"OBJECT_TRANSFER");
	}
	jint BluetoothClass_Service::POSITIONING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"POSITIONING");
	}
	jint BluetoothClass_Service::RENDER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"RENDER");
	}
	jint BluetoothClass_Service::TELEPHONY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Service",
			"TELEPHONY");
	}
	
	// Constructors
	void BluetoothClass_Service::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothClass$Service",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::bluetooth

namespace android::bluetooth
{
	class BluetoothClass_Service : public __jni_impl::android::bluetooth::BluetoothClass_Service
	{
	public:
		BluetoothClass_Service(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothClass_Service()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth

#endif // ANDROID_BLUETOOTH_BLUETOOTHCLASS_SERVICE

