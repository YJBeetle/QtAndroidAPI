#pragma once

#include "./ImageButton.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class MotionEvent;
}
namespace android::view
{
	class View;
}
class JString;

namespace android::widget
{
	class ZoomButton : public android::widget::ImageButton
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ZoomButton(const char *className, const char *sig, Ts...agv) : android::widget::ImageButton(className, sig, std::forward<Ts>(agv)...) {}
		ZoomButton(QJniObject obj);
		
		// Constructors
		ZoomButton(android::content::Context arg0);
		ZoomButton(android::content::Context arg0, JObject arg1);
		ZoomButton(android::content::Context arg0, JObject arg1, jint arg2);
		ZoomButton(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		jboolean dispatchUnhandledMove(android::view::View arg0, jint arg1) const;
		JString getAccessibilityClassName() const;
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onLongClick(android::view::View arg0) const;
		jboolean onTouchEvent(android::view::MotionEvent arg0) const;
		void setEnabled(jboolean arg0) const;
		void setZoomSpeed(jlong arg0) const;
	};
} // namespace android::widget

