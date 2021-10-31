#include "../../content/Context.hpp"
#include "./VirtualDisplay.hpp"
#include "./VirtualDisplay_Callback.hpp"
#include "../../os/Handler.hpp"
#include "../../view/Display.hpp"
#include "../../view/Surface.hpp"
#include "./DisplayManager.hpp"

namespace android::hardware::display
{
	// Fields
	jstring DisplayManager::DISPLAY_CATEGORY_PRESENTATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.display.DisplayManager",
			"DISPLAY_CATEGORY_PRESENTATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DisplayManager::VIRTUAL_DISPLAY_FLAG_AUTO_MIRROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.display.DisplayManager",
			"VIRTUAL_DISPLAY_FLAG_AUTO_MIRROR"
		);
	}
	jint DisplayManager::VIRTUAL_DISPLAY_FLAG_OWN_CONTENT_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.display.DisplayManager",
			"VIRTUAL_DISPLAY_FLAG_OWN_CONTENT_ONLY"
		);
	}
	jint DisplayManager::VIRTUAL_DISPLAY_FLAG_PRESENTATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.display.DisplayManager",
			"VIRTUAL_DISPLAY_FLAG_PRESENTATION"
		);
	}
	jint DisplayManager::VIRTUAL_DISPLAY_FLAG_PUBLIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.display.DisplayManager",
			"VIRTUAL_DISPLAY_FLAG_PUBLIC"
		);
	}
	jint DisplayManager::VIRTUAL_DISPLAY_FLAG_SECURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.display.DisplayManager",
			"VIRTUAL_DISPLAY_FLAG_SECURE"
		);
	}
	
	// QAndroidJniObject forward
	DisplayManager::DisplayManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject DisplayManager::createVirtualDisplay(jstring arg0, jint arg1, jint arg2, jint arg3, android::view::Surface arg4, jint arg5)
	{
		return callObjectMethod(
			"createVirtualDisplay",
			"(Ljava/lang/String;IIILandroid/view/Surface;I)Landroid/hardware/display/VirtualDisplay;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object(),
			arg5
		);
	}
	QAndroidJniObject DisplayManager::createVirtualDisplay(jstring arg0, jint arg1, jint arg2, jint arg3, android::view::Surface arg4, jint arg5, android::hardware::display::VirtualDisplay_Callback arg6, android::os::Handler arg7)
	{
		return callObjectMethod(
			"createVirtualDisplay",
			"(Ljava/lang/String;IIILandroid/view/Surface;ILandroid/hardware/display/VirtualDisplay$Callback;Landroid/os/Handler;)Landroid/hardware/display/VirtualDisplay;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object(),
			arg5,
			arg6.object(),
			arg7.object()
		);
	}
	QAndroidJniObject DisplayManager::getDisplay(jint arg0)
	{
		return callObjectMethod(
			"getDisplay",
			"(I)Landroid/view/Display;",
			arg0
		);
	}
	jarray DisplayManager::getDisplays()
	{
		return callObjectMethod(
			"getDisplays",
			"()[Landroid/view/Display;"
		).object<jarray>();
	}
	jarray DisplayManager::getDisplays(jstring arg0)
	{
		return callObjectMethod(
			"getDisplays",
			"(Ljava/lang/String;)[Landroid/view/Display;",
			arg0
		).object<jarray>();
	}
	void DisplayManager::registerDisplayListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"registerDisplayListener",
			"(Landroid/hardware/display/DisplayManager$DisplayListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void DisplayManager::unregisterDisplayListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"unregisterDisplayListener",
			"(Landroid/hardware/display/DisplayManager$DisplayListener;)V",
			arg0.object()
		);
	}
} // namespace android::hardware::display

