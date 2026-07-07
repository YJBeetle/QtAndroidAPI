#pragma once

#include "../view/View.def.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyboardView(const char *className, const char *sig, Ts...agv) : android::view::View(className, sig, std::forward<Ts>(agv)...) {}
		KeyboardView(QJniObject obj) : android::view::View(obj) {}
		
		// Constructors
		KeyboardView(android::content::Context arg0, JObject arg1);
		KeyboardView(android::content::Context arg0, JObject arg1, jint arg2);
		KeyboardView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void closing() const;
		android::inputmethodservice::Keyboard getKeyboard() const;
		jboolean handleBack() const;
		void invalidateAllKeys() const;
		void invalidateKey(jint arg0) const;
		jboolean isPreviewEnabled() const;
		jboolean isProximityCorrectionEnabled() const;
		jboolean isShifted() const;
		void onClick(android::view::View arg0) const;
		void onDetachedFromWindow() const;
		void onDraw(android::graphics::Canvas arg0) const;
		jboolean onHoverEvent(android::view::MotionEvent arg0) const;
		void onMeasure(jint arg0, jint arg1) const;
		void onSizeChanged(jint arg0, jint arg1, jint arg2, jint arg3) const;
		jboolean onTouchEvent(android::view::MotionEvent arg0) const;
		void setKeyboard(android::inputmethodservice::Keyboard arg0) const;
		void setOnKeyboardActionListener(JObject arg0) const;
		void setPopupOffset(jint arg0, jint arg1) const;
		void setPopupParent(android::view::View arg0) const;
		void setPreviewEnabled(jboolean arg0) const;
		void setProximityCorrectionEnabled(jboolean arg0) const;
		jboolean setShifted(jboolean arg0) const;
		void setVerticalCorrection(jint arg0) const;
	};
} // namespace android::inputmethodservice

