#pragma once

#include "../../JObject.hpp"
#include "../view/View.hpp"
#include "./ImageView.hpp"
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

namespace android::widget
{
	class ZoomButton : public android::widget::ImageButton
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ZoomButton(const char *className, const char *sig, Ts...agv) : android::widget::ImageButton(className, sig, std::forward<Ts>(agv)...) {}
		ZoomButton(QAndroidJniObject obj);
		
		// Constructors
		ZoomButton(android::content::Context arg0);
		ZoomButton(android::content::Context arg0, JObject arg1);
		ZoomButton(android::content::Context arg0, JObject arg1, jint arg2);
		ZoomButton(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		jboolean dispatchUnhandledMove(android::view::View arg0, jint arg1);
		jstring getAccessibilityClassName();
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1);
		jboolean onLongClick(android::view::View arg0);
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		void setEnabled(jboolean arg0);
		void setZoomSpeed(jlong arg0);
	};
} // namespace android::widget

