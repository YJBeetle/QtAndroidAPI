#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
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

namespace android::widget
{
	class MediaController : public android::widget::FrameLayout
	{
	public:
		// Fields
		
		MediaController(QAndroidJniObject obj);
		// Constructors
		MediaController(android::content::Context &arg0);
		MediaController(android::content::Context &arg0, __JniBaseClass &arg1);
		MediaController(android::content::Context &arg0, jboolean &arg1);
		MediaController() = default;
		
		// Methods
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0);
		jstring getAccessibilityClassName();
		void hide();
		jboolean isShowing();
		void onFinishInflate();
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		jboolean onTrackballEvent(android::view::MotionEvent arg0);
		void setAnchorView(android::view::View arg0);
		void setEnabled(jboolean arg0);
		void setMediaPlayer(__JniBaseClass arg0);
		void setPrevNextListeners(__JniBaseClass arg0, __JniBaseClass arg1);
		void show();
		void show(jint arg0);
	};
} // namespace android::widget

