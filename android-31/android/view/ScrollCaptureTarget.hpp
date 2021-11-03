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
	class View;
}
class JString;

namespace android::view
{
	class ScrollCaptureTarget : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ScrollCaptureTarget(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScrollCaptureTarget(QJniObject obj);
		
		// Constructors
		ScrollCaptureTarget(android::view::View arg0, android::graphics::Rect arg1, android::graphics::Point arg2, JObject arg3);
		
		// Methods
		JObject getCallback() const;
		android::view::View getContainingView() const;
		jint getHint() const;
		android::graphics::Rect getLocalVisibleRect() const;
		android::graphics::Point getPositionInWindow() const;
		android::graphics::Rect getScrollBounds() const;
		void setScrollBounds(android::graphics::Rect arg0) const;
		JString toString() const;
		void updatePositionInWindow() const;
	};
} // namespace android::view

