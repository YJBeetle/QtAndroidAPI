#include "../../../JArray.hpp"
#include "../../content/Context.hpp"
#include "./VirtualDisplay.hpp"
#include "./VirtualDisplay_Callback.hpp"
#include "../../os/Handler.hpp"
#include "../../view/Display.hpp"
#include "../../view/Surface.hpp"
#include "../../../JString.hpp"
#include "./DisplayManager.hpp"

namespace android::hardware::display
{
	// Fields
	JString DisplayManager::DISPLAY_CATEGORY_PRESENTATION()
	{
		return getStaticObjectField(
			"android.hardware.display.DisplayManager",
			"DISPLAY_CATEGORY_PRESENTATION",
			"Ljava/lang/String;"
		);
	}
	jint DisplayManager::VIRTUAL_DISPLAY_FLAG_AUTO_MIRROR()
	{
		return getStaticField<jint>(
			"android.hardware.display.DisplayManager",
			"VIRTUAL_DISPLAY_FLAG_AUTO_MIRROR"
		);
	}
	jint DisplayManager::VIRTUAL_DISPLAY_FLAG_OWN_CONTENT_ONLY()
	{
		return getStaticField<jint>(
			"android.hardware.display.DisplayManager",
			"VIRTUAL_DISPLAY_FLAG_OWN_CONTENT_ONLY"
		);
	}
	jint DisplayManager::VIRTUAL_DISPLAY_FLAG_PRESENTATION()
	{
		return getStaticField<jint>(
			"android.hardware.display.DisplayManager",
			"VIRTUAL_DISPLAY_FLAG_PRESENTATION"
		);
	}
	jint DisplayManager::VIRTUAL_DISPLAY_FLAG_PUBLIC()
	{
		return getStaticField<jint>(
			"android.hardware.display.DisplayManager",
			"VIRTUAL_DISPLAY_FLAG_PUBLIC"
		);
	}
	jint DisplayManager::VIRTUAL_DISPLAY_FLAG_SECURE()
	{
		return getStaticField<jint>(
			"android.hardware.display.DisplayManager",
			"VIRTUAL_DISPLAY_FLAG_SECURE"
		);
	}
	
	// Constructors
	
	// Methods
	android::hardware::display::VirtualDisplay DisplayManager::createVirtualDisplay(JString arg0, jint arg1, jint arg2, jint arg3, android::view::Surface arg4, jint arg5) const
	{
		return callObjectMethod(
			"createVirtualDisplay",
			"(Ljava/lang/String;IIILandroid/view/Surface;I)Landroid/hardware/display/VirtualDisplay;",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4.object(),
			arg5
		);
	}
	android::hardware::display::VirtualDisplay DisplayManager::createVirtualDisplay(JString arg0, jint arg1, jint arg2, jint arg3, android::view::Surface arg4, jint arg5, android::hardware::display::VirtualDisplay_Callback arg6, android::os::Handler arg7) const
	{
		return callObjectMethod(
			"createVirtualDisplay",
			"(Ljava/lang/String;IIILandroid/view/Surface;ILandroid/hardware/display/VirtualDisplay$Callback;Landroid/os/Handler;)Landroid/hardware/display/VirtualDisplay;",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4.object(),
			arg5,
			arg6.object(),
			arg7.object()
		);
	}
	android::view::Display DisplayManager::getDisplay(jint arg0) const
	{
		return callObjectMethod(
			"getDisplay",
			"(I)Landroid/view/Display;",
			arg0
		);
	}
	JArray DisplayManager::getDisplays() const
	{
		return callObjectMethod(
			"getDisplays",
			"()[Landroid/view/Display;"
		);
	}
	JArray DisplayManager::getDisplays(JString arg0) const
	{
		return callObjectMethod(
			"getDisplays",
			"(Ljava/lang/String;)[Landroid/view/Display;",
			arg0.object<jstring>()
		);
	}
	void DisplayManager::registerDisplayListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerDisplayListener",
			"(Landroid/hardware/display/DisplayManager$DisplayListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void DisplayManager::unregisterDisplayListener(JObject arg0) const
	{
		callMethod<void>(
			"unregisterDisplayListener",
			"(Landroid/hardware/display/DisplayManager$DisplayListener;)V",
			arg0.object()
		);
	}
} // namespace android::hardware::display

