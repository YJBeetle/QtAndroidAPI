#pragma once

#ifndef ANDROID_HARDWARE_DISPLAY_DISPLAYMANAGER
#define ANDROID_HARDWARE_DISPLAY_DISPLAYMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::hardware::display
{
	class VirtualDisplay;
}
namespace __jni_impl::android::view
{
	class Surface;
}
namespace __jni_impl::android::hardware::display
{
	class VirtualDisplay_Callback;
}
namespace __jni_impl::android::view
{
	class Display;
}

namespace __jni_impl::android::hardware::display
{
	class DisplayManager : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject DISPLAY_CATEGORY_PRESENTATION();
		static jint VIRTUAL_DISPLAY_FLAG_AUTO_MIRROR();
		static jint VIRTUAL_DISPLAY_FLAG_OWN_CONTENT_ONLY();
		static jint VIRTUAL_DISPLAY_FLAG_PRESENTATION();
		static jint VIRTUAL_DISPLAY_FLAG_PUBLIC();
		static jint VIRTUAL_DISPLAY_FLAG_SECURE();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getDisplays(jstring arg0);
		QAndroidJniObject getDisplays();
		void registerDisplayListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		void unregisterDisplayListener(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject createVirtualDisplay(jstring arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::view::Surface arg4, jint arg5, __jni_impl::android::hardware::display::VirtualDisplay_Callback arg6, __jni_impl::android::os::Handler arg7);
		QAndroidJniObject createVirtualDisplay(jstring arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::view::Surface arg4, jint arg5);
		QAndroidJniObject getDisplay(jint arg0);
	};
} // namespace __jni_impl::android::hardware::display

#include "../../content/Context.hpp"
#include "../../os/Handler.hpp"
#include "VirtualDisplay.hpp"
#include "../../view/Surface.hpp"
#include "VirtualDisplay_Callback.hpp"
#include "../../view/Display.hpp"

namespace __jni_impl::android::hardware::display
{
	// Fields
	QAndroidJniObject DisplayManager::DISPLAY_CATEGORY_PRESENTATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.display.DisplayManager",
			"DISPLAY_CATEGORY_PRESENTATION",
			"Ljava/lang/String;");
	}
	jint DisplayManager::VIRTUAL_DISPLAY_FLAG_AUTO_MIRROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.display.DisplayManager",
			"VIRTUAL_DISPLAY_FLAG_AUTO_MIRROR");
	}
	jint DisplayManager::VIRTUAL_DISPLAY_FLAG_OWN_CONTENT_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.display.DisplayManager",
			"VIRTUAL_DISPLAY_FLAG_OWN_CONTENT_ONLY");
	}
	jint DisplayManager::VIRTUAL_DISPLAY_FLAG_PRESENTATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.display.DisplayManager",
			"VIRTUAL_DISPLAY_FLAG_PRESENTATION");
	}
	jint DisplayManager::VIRTUAL_DISPLAY_FLAG_PUBLIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.display.DisplayManager",
			"VIRTUAL_DISPLAY_FLAG_PUBLIC");
	}
	jint DisplayManager::VIRTUAL_DISPLAY_FLAG_SECURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.display.DisplayManager",
			"VIRTUAL_DISPLAY_FLAG_SECURE");
	}
	
	// Constructors
	void DisplayManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.display.DisplayManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject DisplayManager::getDisplays(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplays",
			"(Ljava/lang/String;)[Landroid/view/Display;",
			arg0);
	}
	QAndroidJniObject DisplayManager::getDisplays()
	{
		return __thiz.callObjectMethod(
			"getDisplays",
			"()[Landroid/view/Display;");
	}
	void DisplayManager::registerDisplayListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerDisplayListener",
			"(Landroid/hardware/display/DisplayManager$DisplayListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void DisplayManager::unregisterDisplayListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"unregisterDisplayListener",
			"(Landroid/hardware/display/DisplayManager$DisplayListener;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DisplayManager::createVirtualDisplay(jstring arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::view::Surface arg4, jint arg5, __jni_impl::android::hardware::display::VirtualDisplay_Callback arg6, __jni_impl::android::os::Handler arg7)
	{
		return __thiz.callObjectMethod(
			"createVirtualDisplay",
			"(Ljava/lang/String;IIILandroid/view/Surface;ILandroid/hardware/display/VirtualDisplay$Callback;Landroid/os/Handler;)Landroid/hardware/display/VirtualDisplay;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5,
			arg6.__jniObject().object(),
			arg7.__jniObject().object());
	}
	QAndroidJniObject DisplayManager::createVirtualDisplay(jstring arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::view::Surface arg4, jint arg5)
	{
		return __thiz.callObjectMethod(
			"createVirtualDisplay",
			"(Ljava/lang/String;IIILandroid/view/Surface;I)Landroid/hardware/display/VirtualDisplay;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5);
	}
	QAndroidJniObject DisplayManager::getDisplay(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplay",
			"(I)Landroid/view/Display;",
			arg0);
	}
} // namespace __jni_impl::android::hardware::display

namespace android::hardware::display
{
	class DisplayManager : public __jni_impl::android::hardware::display::DisplayManager
	{
	public:
		DisplayManager(QAndroidJniObject obj) { __thiz = obj; }
		DisplayManager()
		{
			__constructor();
		}
	};
} // namespace android::hardware::display

#endif // ANDROID_HARDWARE_DISPLAY_DISPLAYMANAGER

