#pragma once

#include "../../JObject.hpp"

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
	class ScrollCaptureSession : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScrollCaptureSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScrollCaptureSession(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ScrollCaptureSession(android::view::Surface arg0, android::graphics::Rect arg1, android::graphics::Point arg2);
		
		// Methods
		android::graphics::Point getPositionInWindow() const;
		android::graphics::Rect getScrollBounds() const;
		android::view::Surface getSurface() const;
	};
} // namespace android::view

