#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Point;
}
namespace android::graphics
{
	class Rect;
}
namespace android::view
{
	class Surface;
}

namespace android::view
{
	class ScrollCaptureSession : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ScrollCaptureSession(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ScrollCaptureSession(QJniObject obj);
		
		// Constructors
		ScrollCaptureSession(android::view::Surface arg0, android::graphics::Rect arg1, android::graphics::Point arg2);
		
		// Methods
		android::graphics::Point getPositionInWindow();
		android::graphics::Rect getScrollBounds();
		android::view::Surface getSurface();
	};
} // namespace android::view

