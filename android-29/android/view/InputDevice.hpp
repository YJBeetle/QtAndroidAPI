#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::os
{
	class Vibrator;
}
namespace __jni_impl::android::view
{
	class InputDevice_MotionRange;
}
namespace __jni_impl::android::view
{
	class KeyCharacterMap;
}

namespace __jni_impl::android::view
{
	class InputDevice : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint KEYBOARD_TYPE_ALPHABETIC();
		static jint KEYBOARD_TYPE_NONE();
		static jint KEYBOARD_TYPE_NON_ALPHABETIC();
		static jint MOTION_RANGE_ORIENTATION();
		static jint MOTION_RANGE_PRESSURE();
		static jint MOTION_RANGE_SIZE();
		static jint MOTION_RANGE_TOOL_MAJOR();
		static jint MOTION_RANGE_TOOL_MINOR();
		static jint MOTION_RANGE_TOUCH_MAJOR();
		static jint MOTION_RANGE_TOUCH_MINOR();
		static jint MOTION_RANGE_X();
		static jint MOTION_RANGE_Y();
		static jint SOURCE_ANY();
		static jint SOURCE_BLUETOOTH_STYLUS();
		static jint SOURCE_CLASS_BUTTON();
		static jint SOURCE_CLASS_JOYSTICK();
		static jint SOURCE_CLASS_MASK();
		static jint SOURCE_CLASS_NONE();
		static jint SOURCE_CLASS_POINTER();
		static jint SOURCE_CLASS_POSITION();
		static jint SOURCE_CLASS_TRACKBALL();
		static jint SOURCE_DPAD();
		static jint SOURCE_GAMEPAD();
		static jint SOURCE_HDMI();
		static jint SOURCE_JOYSTICK();
		static jint SOURCE_KEYBOARD();
		static jint SOURCE_MOUSE();
		static jint SOURCE_MOUSE_RELATIVE();
		static jint SOURCE_ROTARY_ENCODER();
		static jint SOURCE_STYLUS();
		static jint SOURCE_TOUCHPAD();
		static jint SOURCE_TOUCHSCREEN();
		static jint SOURCE_TOUCH_NAVIGATION();
		static jint SOURCE_TRACKBALL();
		static jint SOURCE_UNKNOWN();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getDevice(jint arg0);
		static jintArray getDeviceIds();
		jint describeContents();
		jint getControllerNumber();
		jstring getDescriptor();
		jint getId();
		QAndroidJniObject getKeyCharacterMap();
		jint getKeyboardType();
		QAndroidJniObject getMotionRange(jint arg0);
		QAndroidJniObject getMotionRange(jint arg0, jint arg1);
		QAndroidJniObject getMotionRanges();
		jstring getName();
		jint getProductId();
		jint getSources();
		jint getVendorId();
		QAndroidJniObject getVibrator();
		jbooleanArray hasKeys(jintArray arg0);
		jboolean hasMicrophone();
		jboolean isEnabled();
		jboolean isExternal();
		jboolean isVirtual();
		jboolean supportsSource(jint arg0);
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view

#include "../os/Parcel.hpp"
#include "../os/Vibrator.hpp"
#include "./InputDevice_MotionRange.hpp"
#include "./KeyCharacterMap.hpp"

namespace __jni_impl::android::view
{
	// Fields
	QAndroidJniObject InputDevice::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.InputDevice",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint InputDevice::KEYBOARD_TYPE_ALPHABETIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"KEYBOARD_TYPE_ALPHABETIC"
		);
	}
	jint InputDevice::KEYBOARD_TYPE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"KEYBOARD_TYPE_NONE"
		);
	}
	jint InputDevice::KEYBOARD_TYPE_NON_ALPHABETIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"KEYBOARD_TYPE_NON_ALPHABETIC"
		);
	}
	jint InputDevice::MOTION_RANGE_ORIENTATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"MOTION_RANGE_ORIENTATION"
		);
	}
	jint InputDevice::MOTION_RANGE_PRESSURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"MOTION_RANGE_PRESSURE"
		);
	}
	jint InputDevice::MOTION_RANGE_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"MOTION_RANGE_SIZE"
		);
	}
	jint InputDevice::MOTION_RANGE_TOOL_MAJOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"MOTION_RANGE_TOOL_MAJOR"
		);
	}
	jint InputDevice::MOTION_RANGE_TOOL_MINOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"MOTION_RANGE_TOOL_MINOR"
		);
	}
	jint InputDevice::MOTION_RANGE_TOUCH_MAJOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"MOTION_RANGE_TOUCH_MAJOR"
		);
	}
	jint InputDevice::MOTION_RANGE_TOUCH_MINOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"MOTION_RANGE_TOUCH_MINOR"
		);
	}
	jint InputDevice::MOTION_RANGE_X()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"MOTION_RANGE_X"
		);
	}
	jint InputDevice::MOTION_RANGE_Y()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"MOTION_RANGE_Y"
		);
	}
	jint InputDevice::SOURCE_ANY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_ANY"
		);
	}
	jint InputDevice::SOURCE_BLUETOOTH_STYLUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_BLUETOOTH_STYLUS"
		);
	}
	jint InputDevice::SOURCE_CLASS_BUTTON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_CLASS_BUTTON"
		);
	}
	jint InputDevice::SOURCE_CLASS_JOYSTICK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_CLASS_JOYSTICK"
		);
	}
	jint InputDevice::SOURCE_CLASS_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_CLASS_MASK"
		);
	}
	jint InputDevice::SOURCE_CLASS_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_CLASS_NONE"
		);
	}
	jint InputDevice::SOURCE_CLASS_POINTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_CLASS_POINTER"
		);
	}
	jint InputDevice::SOURCE_CLASS_POSITION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_CLASS_POSITION"
		);
	}
	jint InputDevice::SOURCE_CLASS_TRACKBALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_CLASS_TRACKBALL"
		);
	}
	jint InputDevice::SOURCE_DPAD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_DPAD"
		);
	}
	jint InputDevice::SOURCE_GAMEPAD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_GAMEPAD"
		);
	}
	jint InputDevice::SOURCE_HDMI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_HDMI"
		);
	}
	jint InputDevice::SOURCE_JOYSTICK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_JOYSTICK"
		);
	}
	jint InputDevice::SOURCE_KEYBOARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_KEYBOARD"
		);
	}
	jint InputDevice::SOURCE_MOUSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_MOUSE"
		);
	}
	jint InputDevice::SOURCE_MOUSE_RELATIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_MOUSE_RELATIVE"
		);
	}
	jint InputDevice::SOURCE_ROTARY_ENCODER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_ROTARY_ENCODER"
		);
	}
	jint InputDevice::SOURCE_STYLUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_STYLUS"
		);
	}
	jint InputDevice::SOURCE_TOUCHPAD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_TOUCHPAD"
		);
	}
	jint InputDevice::SOURCE_TOUCHSCREEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_TOUCHSCREEN"
		);
	}
	jint InputDevice::SOURCE_TOUCH_NAVIGATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_TOUCH_NAVIGATION"
		);
	}
	jint InputDevice::SOURCE_TRACKBALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_TRACKBALL"
		);
	}
	jint InputDevice::SOURCE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.InputDevice",
			"SOURCE_UNKNOWN"
		);
	}
	
	// Constructors
	void InputDevice::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.InputDevice",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject InputDevice::getDevice(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.InputDevice",
			"getDevice",
			"(I)Landroid/view/InputDevice;",
			arg0
		);
	}
	jintArray InputDevice::getDeviceIds()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.InputDevice",
			"getDeviceIds",
			"()[I"
		).object<jintArray>();
	}
	jint InputDevice::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint InputDevice::getControllerNumber()
	{
		return __thiz.callMethod<jint>(
			"getControllerNumber",
			"()I"
		);
	}
	jstring InputDevice::getDescriptor()
	{
		return __thiz.callObjectMethod(
			"getDescriptor",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint InputDevice::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I"
		);
	}
	QAndroidJniObject InputDevice::getKeyCharacterMap()
	{
		return __thiz.callObjectMethod(
			"getKeyCharacterMap",
			"()Landroid/view/KeyCharacterMap;"
		);
	}
	jint InputDevice::getKeyboardType()
	{
		return __thiz.callMethod<jint>(
			"getKeyboardType",
			"()I"
		);
	}
	QAndroidJniObject InputDevice::getMotionRange(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getMotionRange",
			"(I)Landroid/view/InputDevice$MotionRange;",
			arg0
		);
	}
	QAndroidJniObject InputDevice::getMotionRange(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getMotionRange",
			"(II)Landroid/view/InputDevice$MotionRange;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject InputDevice::getMotionRanges()
	{
		return __thiz.callObjectMethod(
			"getMotionRanges",
			"()Ljava/util/List;"
		);
	}
	jstring InputDevice::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint InputDevice::getProductId()
	{
		return __thiz.callMethod<jint>(
			"getProductId",
			"()I"
		);
	}
	jint InputDevice::getSources()
	{
		return __thiz.callMethod<jint>(
			"getSources",
			"()I"
		);
	}
	jint InputDevice::getVendorId()
	{
		return __thiz.callMethod<jint>(
			"getVendorId",
			"()I"
		);
	}
	QAndroidJniObject InputDevice::getVibrator()
	{
		return __thiz.callObjectMethod(
			"getVibrator",
			"()Landroid/os/Vibrator;"
		);
	}
	jbooleanArray InputDevice::hasKeys(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"hasKeys",
			"([I)[Z",
			arg0
		).object<jbooleanArray>();
	}
	jboolean InputDevice::hasMicrophone()
	{
		return __thiz.callMethod<jboolean>(
			"hasMicrophone",
			"()Z"
		);
	}
	jboolean InputDevice::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean InputDevice::isExternal()
	{
		return __thiz.callMethod<jboolean>(
			"isExternal",
			"()Z"
		);
	}
	jboolean InputDevice::isVirtual()
	{
		return __thiz.callMethod<jboolean>(
			"isVirtual",
			"()Z"
		);
	}
	jboolean InputDevice::supportsSource(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"supportsSource",
			"(I)Z",
			arg0
		);
	}
	jstring InputDevice::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void InputDevice::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class InputDevice : public __jni_impl::android::view::InputDevice
	{
	public:
		InputDevice(QAndroidJniObject obj) { __thiz = obj; }
		InputDevice()
		{
			__constructor();
		}
	};
} // namespace android::view

