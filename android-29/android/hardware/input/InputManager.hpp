#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::view
{
	class InputDevice;
}

namespace __jni_impl::android::hardware::input
{
	class InputManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_QUERY_KEYBOARD_LAYOUTS();
		static jstring META_DATA_KEYBOARD_LAYOUTS();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getInputDevice(jint arg0);
		jintArray getInputDeviceIds();
		void registerInputDeviceListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		void unregisterInputDeviceListener(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::hardware::input

#include "../../os/Handler.hpp"
#include "../../view/InputDevice.hpp"

namespace __jni_impl::android::hardware::input
{
	// Fields
	jstring InputManager::ACTION_QUERY_KEYBOARD_LAYOUTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.input.InputManager",
			"ACTION_QUERY_KEYBOARD_LAYOUTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InputManager::META_DATA_KEYBOARD_LAYOUTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.input.InputManager",
			"META_DATA_KEYBOARD_LAYOUTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void InputManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.input.InputManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject InputManager::getInputDevice(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getInputDevice",
			"(I)Landroid/view/InputDevice;",
			arg0
		);
	}
	jintArray InputManager::getInputDeviceIds()
	{
		return __thiz.callObjectMethod(
			"getInputDeviceIds",
			"()[I"
		).object<jintArray>();
	}
	void InputManager::registerInputDeviceListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerInputDeviceListener",
			"(Landroid/hardware/input/InputManager$InputDeviceListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void InputManager::unregisterInputDeviceListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"unregisterInputDeviceListener",
			"(Landroid/hardware/input/InputManager$InputDeviceListener;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::hardware::input

namespace android::hardware::input
{
	class InputManager : public __jni_impl::android::hardware::input::InputManager
	{
	public:
		InputManager(QAndroidJniObject obj) { __thiz = obj; }
		InputManager()
		{
			__constructor();
		}
	};
} // namespace android::hardware::input

