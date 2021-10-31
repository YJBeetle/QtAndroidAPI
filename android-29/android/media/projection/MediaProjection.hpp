#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::hardware::display
{
	class VirtualDisplay;
}
namespace android::hardware::display
{
	class VirtualDisplay_Callback;
}
namespace android::media::projection
{
	class MediaProjection_Callback;
}
namespace android::os
{
	class Handler;
}
namespace android::view
{
	class Surface;
}

namespace android::media::projection
{
	class MediaProjection : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaProjection(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaProjection(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject createVirtualDisplay(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::view::Surface arg5, android::hardware::display::VirtualDisplay_Callback arg6, android::os::Handler arg7);
		void registerCallback(android::media::projection::MediaProjection_Callback arg0, android::os::Handler arg1);
		void stop();
		void unregisterCallback(android::media::projection::MediaProjection_Callback arg0);
	};
} // namespace android::media::projection

