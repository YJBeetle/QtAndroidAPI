#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::hardware::display
{
	class VirtualDisplay;
}
namespace android::hardware::display
{
	class VirtualDisplay_Callback;
}
namespace android::os
{
	class Handler;
}
namespace android::view
{
	class Display;
}
namespace android::view
{
	class Surface;
}

namespace android::hardware::display
{
	class DisplayManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring DISPLAY_CATEGORY_PRESENTATION();
		static jint VIRTUAL_DISPLAY_FLAG_AUTO_MIRROR();
		static jint VIRTUAL_DISPLAY_FLAG_OWN_CONTENT_ONLY();
		static jint VIRTUAL_DISPLAY_FLAG_PRESENTATION();
		static jint VIRTUAL_DISPLAY_FLAG_PUBLIC();
		static jint VIRTUAL_DISPLAY_FLAG_SECURE();
		
		// QJniObject forward
		template<typename ...Ts> explicit DisplayManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DisplayManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::hardware::display::VirtualDisplay createVirtualDisplay(jstring arg0, jint arg1, jint arg2, jint arg3, android::view::Surface arg4, jint arg5);
		android::hardware::display::VirtualDisplay createVirtualDisplay(jstring arg0, jint arg1, jint arg2, jint arg3, android::view::Surface arg4, jint arg5, android::hardware::display::VirtualDisplay_Callback arg6, android::os::Handler arg7);
		android::view::Display getDisplay(jint arg0);
		jarray getDisplays();
		jarray getDisplays(jstring arg0);
		void registerDisplayListener(__JniBaseClass arg0, android::os::Handler arg1);
		void unregisterDisplayListener(__JniBaseClass arg0);
	};
} // namespace android::hardware::display

