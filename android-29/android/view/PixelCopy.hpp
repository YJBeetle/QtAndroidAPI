#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class Rect;
}
namespace android::os
{
	class Handler;
}
namespace android::view
{
	class Surface;
}
namespace android::view
{
	class SurfaceView;
}
namespace android::view
{
	class Window;
}

namespace android::view
{
	class PixelCopy : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_DESTINATION_INVALID();
		static jint ERROR_SOURCE_INVALID();
		static jint ERROR_SOURCE_NO_DATA();
		static jint ERROR_TIMEOUT();
		static jint ERROR_UNKNOWN();
		static jint SUCCESS();
		
		// QJniObject forward
		template<typename ...Ts> explicit PixelCopy(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PixelCopy(QJniObject obj);
		
		// Constructors
		
		// Methods
		static void request(android::view::Surface arg0, android::graphics::Bitmap arg1, __JniBaseClass arg2, android::os::Handler arg3);
		static void request(android::view::SurfaceView arg0, android::graphics::Bitmap arg1, __JniBaseClass arg2, android::os::Handler arg3);
		static void request(android::view::Window arg0, android::graphics::Bitmap arg1, __JniBaseClass arg2, android::os::Handler arg3);
		static void request(android::view::Surface arg0, android::graphics::Rect arg1, android::graphics::Bitmap arg2, __JniBaseClass arg3, android::os::Handler arg4);
		static void request(android::view::SurfaceView arg0, android::graphics::Rect arg1, android::graphics::Bitmap arg2, __JniBaseClass arg3, android::os::Handler arg4);
		static void request(android::view::Window arg0, android::graphics::Rect arg1, android::graphics::Bitmap arg2, __JniBaseClass arg3, android::os::Handler arg4);
	};
} // namespace android::view

