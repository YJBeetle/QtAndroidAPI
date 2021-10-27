#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::inputmethodservice
{
	class Keyboard;
}
namespace android::inputmethodservice
{
	class Keyboard_Key;
}
namespace android::view
{
	class MotionEvent;
}
namespace android::view
{
	class View;
}

namespace android::inputmethodservice
{
	class KeyboardView : public android::view::View
	{
	public:
		// Fields
		
		KeyboardView(QAndroidJniObject obj);
		// Constructors
		KeyboardView(android::content::Context &arg0, __JniBaseClass &arg1);
		KeyboardView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2);
		KeyboardView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3);
		KeyboardView() = default;
		
		// Methods
		void closing();
		QAndroidJniObject getKeyboard();
		jboolean handleBack();
		void invalidateAllKeys();
		void invalidateKey(jint arg0);
		jboolean isPreviewEnabled();
		jboolean isProximityCorrectionEnabled();
		jboolean isShifted();
		void onClick(android::view::View arg0);
		void onDetachedFromWindow();
		void onDraw(android::graphics::Canvas arg0);
		jboolean onHoverEvent(android::view::MotionEvent arg0);
		void onMeasure(jint arg0, jint arg1);
		void onSizeChanged(jint arg0, jint arg1, jint arg2, jint arg3);
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		void setKeyboard(android::inputmethodservice::Keyboard arg0);
		void setOnKeyboardActionListener(__JniBaseClass arg0);
		void setPopupOffset(jint arg0, jint arg1);
		void setPopupParent(android::view::View arg0);
		void setPreviewEnabled(jboolean arg0);
		void setProximityCorrectionEnabled(jboolean arg0);
		jboolean setShifted(jboolean arg0);
		void setVerticalCorrection(jint arg0);
	};
} // namespace android::inputmethodservice

