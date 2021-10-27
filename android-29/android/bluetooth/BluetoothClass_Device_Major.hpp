#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::bluetooth
{
	class BluetoothClass_Device_Major : public __JniBaseClass
	{
	public:
		// Fields
		static jint AUDIO_VIDEO();
		static jint COMPUTER();
		static jint HEALTH();
		static jint IMAGING();
		static jint MISC();
		static jint NETWORKING();
		static jint PERIPHERAL();
		static jint PHONE();
		static jint TOY();
		static jint UNCATEGORIZED();
		static jint WEARABLE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::bluetooth


namespace __jni_impl::android::bluetooth
{
	// Fields
	jint BluetoothClass_Device_Major::AUDIO_VIDEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"AUDIO_VIDEO"
		);
	}
	jint BluetoothClass_Device_Major::COMPUTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"COMPUTER"
		);
	}
	jint BluetoothClass_Device_Major::HEALTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"HEALTH"
		);
	}
	jint BluetoothClass_Device_Major::IMAGING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"IMAGING"
		);
	}
	jint BluetoothClass_Device_Major::MISC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"MISC"
		);
	}
	jint BluetoothClass_Device_Major::NETWORKING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"NETWORKING"
		);
	}
	jint BluetoothClass_Device_Major::PERIPHERAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"PERIPHERAL"
		);
	}
	jint BluetoothClass_Device_Major::PHONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"PHONE"
		);
	}
	jint BluetoothClass_Device_Major::TOY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"TOY"
		);
	}
	jint BluetoothClass_Device_Major::UNCATEGORIZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"UNCATEGORIZED"
		);
	}
	jint BluetoothClass_Device_Major::WEARABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device$Major",
			"WEARABLE"
		);
	}
	
	// Constructors
	void BluetoothClass_Device_Major::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothClass$Device$Major",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::bluetooth

namespace android::bluetooth
{
	class BluetoothClass_Device_Major : public __jni_impl::android::bluetooth::BluetoothClass_Device_Major
	{
	public:
		BluetoothClass_Device_Major(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothClass_Device_Major()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth

