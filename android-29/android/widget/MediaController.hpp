#pragma once

#include "./FrameLayout.hpp"

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
	class MediaController : public android::widget::FrameLayout
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaController(const char *className, const char *sig, Ts...agv) : android::widget::FrameLayout(className, sig, std::forward<Ts>(agv)...) {}
		MediaController(QAndroidJniObject obj) : android::widget::FrameLayout(obj) {}
		
		// Constructors
		MediaController(android::content::Context arg0);
		MediaController(android::content::Context arg0, JObject arg1);
		MediaController(android::content::Context arg0, jboolean arg1);
		
		// Methods
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0) const;
		JString getAccessibilityClassName() const;
		void hide() const;
		jboolean isShowing() const;
		void onFinishInflate() const;
		jboolean onTouchEvent(android::view::MotionEvent arg0) const;
		jboolean onTrackballEvent(android::view::MotionEvent arg0) const;
		void setAnchorView(android::view::View arg0) const;
		void setEnabled(jboolean arg0) const;
		void setMediaPlayer(JObject arg0) const;
		void setPrevNextListeners(JObject arg0, JObject arg1) const;
		void show() const;
		void show(jint arg0) const;
	};
} // namespace android::widget

