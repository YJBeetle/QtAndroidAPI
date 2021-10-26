#pragma once

#ifndef ANDROID_BLUETOOTH_BLUETOOTHCLASS_DEVICE
#define ANDROID_BLUETOOTH_BLUETOOTHCLASS_DEVICE

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::bluetooth
{
	class BluetoothClass_Device : public __JniBaseClass
	{
	public:
		// Fields
		static jint AUDIO_VIDEO_CAMCORDER();
		static jint AUDIO_VIDEO_CAR_AUDIO();
		static jint AUDIO_VIDEO_HANDSFREE();
		static jint AUDIO_VIDEO_HEADPHONES();
		static jint AUDIO_VIDEO_HIFI_AUDIO();
		static jint AUDIO_VIDEO_LOUDSPEAKER();
		static jint AUDIO_VIDEO_MICROPHONE();
		static jint AUDIO_VIDEO_PORTABLE_AUDIO();
		static jint AUDIO_VIDEO_SET_TOP_BOX();
		static jint AUDIO_VIDEO_UNCATEGORIZED();
		static jint AUDIO_VIDEO_VCR();
		static jint AUDIO_VIDEO_VIDEO_CAMERA();
		static jint AUDIO_VIDEO_VIDEO_CONFERENCING();
		static jint AUDIO_VIDEO_VIDEO_DISPLAY_AND_LOUDSPEAKER();
		static jint AUDIO_VIDEO_VIDEO_GAMING_TOY();
		static jint AUDIO_VIDEO_VIDEO_MONITOR();
		static jint AUDIO_VIDEO_WEARABLE_HEADSET();
		static jint COMPUTER_DESKTOP();
		static jint COMPUTER_HANDHELD_PC_PDA();
		static jint COMPUTER_LAPTOP();
		static jint COMPUTER_PALM_SIZE_PC_PDA();
		static jint COMPUTER_SERVER();
		static jint COMPUTER_UNCATEGORIZED();
		static jint COMPUTER_WEARABLE();
		static jint HEALTH_BLOOD_PRESSURE();
		static jint HEALTH_DATA_DISPLAY();
		static jint HEALTH_GLUCOSE();
		static jint HEALTH_PULSE_OXIMETER();
		static jint HEALTH_PULSE_RATE();
		static jint HEALTH_THERMOMETER();
		static jint HEALTH_UNCATEGORIZED();
		static jint HEALTH_WEIGHING();
		static jint PHONE_CELLULAR();
		static jint PHONE_CORDLESS();
		static jint PHONE_ISDN();
		static jint PHONE_MODEM_OR_GATEWAY();
		static jint PHONE_SMART();
		static jint PHONE_UNCATEGORIZED();
		static jint TOY_CONTROLLER();
		static jint TOY_DOLL_ACTION_FIGURE();
		static jint TOY_GAME();
		static jint TOY_ROBOT();
		static jint TOY_UNCATEGORIZED();
		static jint TOY_VEHICLE();
		static jint WEARABLE_GLASSES();
		static jint WEARABLE_HELMET();
		static jint WEARABLE_JACKET();
		static jint WEARABLE_PAGER();
		static jint WEARABLE_UNCATEGORIZED();
		static jint WEARABLE_WRIST_WATCH();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::bluetooth


namespace __jni_impl::android::bluetooth
{
	// Fields
	jint BluetoothClass_Device::AUDIO_VIDEO_CAMCORDER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"AUDIO_VIDEO_CAMCORDER"
		);
	}
	jint BluetoothClass_Device::AUDIO_VIDEO_CAR_AUDIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"AUDIO_VIDEO_CAR_AUDIO"
		);
	}
	jint BluetoothClass_Device::AUDIO_VIDEO_HANDSFREE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"AUDIO_VIDEO_HANDSFREE"
		);
	}
	jint BluetoothClass_Device::AUDIO_VIDEO_HEADPHONES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"AUDIO_VIDEO_HEADPHONES"
		);
	}
	jint BluetoothClass_Device::AUDIO_VIDEO_HIFI_AUDIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"AUDIO_VIDEO_HIFI_AUDIO"
		);
	}
	jint BluetoothClass_Device::AUDIO_VIDEO_LOUDSPEAKER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"AUDIO_VIDEO_LOUDSPEAKER"
		);
	}
	jint BluetoothClass_Device::AUDIO_VIDEO_MICROPHONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"AUDIO_VIDEO_MICROPHONE"
		);
	}
	jint BluetoothClass_Device::AUDIO_VIDEO_PORTABLE_AUDIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"AUDIO_VIDEO_PORTABLE_AUDIO"
		);
	}
	jint BluetoothClass_Device::AUDIO_VIDEO_SET_TOP_BOX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"AUDIO_VIDEO_SET_TOP_BOX"
		);
	}
	jint BluetoothClass_Device::AUDIO_VIDEO_UNCATEGORIZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"AUDIO_VIDEO_UNCATEGORIZED"
		);
	}
	jint BluetoothClass_Device::AUDIO_VIDEO_VCR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"AUDIO_VIDEO_VCR"
		);
	}
	jint BluetoothClass_Device::AUDIO_VIDEO_VIDEO_CAMERA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"AUDIO_VIDEO_VIDEO_CAMERA"
		);
	}
	jint BluetoothClass_Device::AUDIO_VIDEO_VIDEO_CONFERENCING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"AUDIO_VIDEO_VIDEO_CONFERENCING"
		);
	}
	jint BluetoothClass_Device::AUDIO_VIDEO_VIDEO_DISPLAY_AND_LOUDSPEAKER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"AUDIO_VIDEO_VIDEO_DISPLAY_AND_LOUDSPEAKER"
		);
	}
	jint BluetoothClass_Device::AUDIO_VIDEO_VIDEO_GAMING_TOY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"AUDIO_VIDEO_VIDEO_GAMING_TOY"
		);
	}
	jint BluetoothClass_Device::AUDIO_VIDEO_VIDEO_MONITOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"AUDIO_VIDEO_VIDEO_MONITOR"
		);
	}
	jint BluetoothClass_Device::AUDIO_VIDEO_WEARABLE_HEADSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"AUDIO_VIDEO_WEARABLE_HEADSET"
		);
	}
	jint BluetoothClass_Device::COMPUTER_DESKTOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"COMPUTER_DESKTOP"
		);
	}
	jint BluetoothClass_Device::COMPUTER_HANDHELD_PC_PDA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"COMPUTER_HANDHELD_PC_PDA"
		);
	}
	jint BluetoothClass_Device::COMPUTER_LAPTOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"COMPUTER_LAPTOP"
		);
	}
	jint BluetoothClass_Device::COMPUTER_PALM_SIZE_PC_PDA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"COMPUTER_PALM_SIZE_PC_PDA"
		);
	}
	jint BluetoothClass_Device::COMPUTER_SERVER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"COMPUTER_SERVER"
		);
	}
	jint BluetoothClass_Device::COMPUTER_UNCATEGORIZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"COMPUTER_UNCATEGORIZED"
		);
	}
	jint BluetoothClass_Device::COMPUTER_WEARABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"COMPUTER_WEARABLE"
		);
	}
	jint BluetoothClass_Device::HEALTH_BLOOD_PRESSURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"HEALTH_BLOOD_PRESSURE"
		);
	}
	jint BluetoothClass_Device::HEALTH_DATA_DISPLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"HEALTH_DATA_DISPLAY"
		);
	}
	jint BluetoothClass_Device::HEALTH_GLUCOSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"HEALTH_GLUCOSE"
		);
	}
	jint BluetoothClass_Device::HEALTH_PULSE_OXIMETER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"HEALTH_PULSE_OXIMETER"
		);
	}
	jint BluetoothClass_Device::HEALTH_PULSE_RATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"HEALTH_PULSE_RATE"
		);
	}
	jint BluetoothClass_Device::HEALTH_THERMOMETER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"HEALTH_THERMOMETER"
		);
	}
	jint BluetoothClass_Device::HEALTH_UNCATEGORIZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"HEALTH_UNCATEGORIZED"
		);
	}
	jint BluetoothClass_Device::HEALTH_WEIGHING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"HEALTH_WEIGHING"
		);
	}
	jint BluetoothClass_Device::PHONE_CELLULAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"PHONE_CELLULAR"
		);
	}
	jint BluetoothClass_Device::PHONE_CORDLESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"PHONE_CORDLESS"
		);
	}
	jint BluetoothClass_Device::PHONE_ISDN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"PHONE_ISDN"
		);
	}
	jint BluetoothClass_Device::PHONE_MODEM_OR_GATEWAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"PHONE_MODEM_OR_GATEWAY"
		);
	}
	jint BluetoothClass_Device::PHONE_SMART()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"PHONE_SMART"
		);
	}
	jint BluetoothClass_Device::PHONE_UNCATEGORIZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"PHONE_UNCATEGORIZED"
		);
	}
	jint BluetoothClass_Device::TOY_CONTROLLER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"TOY_CONTROLLER"
		);
	}
	jint BluetoothClass_Device::TOY_DOLL_ACTION_FIGURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"TOY_DOLL_ACTION_FIGURE"
		);
	}
	jint BluetoothClass_Device::TOY_GAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"TOY_GAME"
		);
	}
	jint BluetoothClass_Device::TOY_ROBOT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"TOY_ROBOT"
		);
	}
	jint BluetoothClass_Device::TOY_UNCATEGORIZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"TOY_UNCATEGORIZED"
		);
	}
	jint BluetoothClass_Device::TOY_VEHICLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"TOY_VEHICLE"
		);
	}
	jint BluetoothClass_Device::WEARABLE_GLASSES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"WEARABLE_GLASSES"
		);
	}
	jint BluetoothClass_Device::WEARABLE_HELMET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"WEARABLE_HELMET"
		);
	}
	jint BluetoothClass_Device::WEARABLE_JACKET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"WEARABLE_JACKET"
		);
	}
	jint BluetoothClass_Device::WEARABLE_PAGER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"WEARABLE_PAGER"
		);
	}
	jint BluetoothClass_Device::WEARABLE_UNCATEGORIZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"WEARABLE_UNCATEGORIZED"
		);
	}
	jint BluetoothClass_Device::WEARABLE_WRIST_WATCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothClass$Device",
			"WEARABLE_WRIST_WATCH"
		);
	}
	
	// Constructors
	void BluetoothClass_Device::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothClass$Device",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::bluetooth

namespace android::bluetooth
{
	class BluetoothClass_Device : public __jni_impl::android::bluetooth::BluetoothClass_Device
	{
	public:
		BluetoothClass_Device(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothClass_Device()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth

#endif // ANDROID_BLUETOOTH_BLUETOOTHCLASS_DEVICE

