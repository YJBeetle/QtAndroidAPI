#pragma once

#include "./AdapterViewAnimator.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::view
{
	class MotionEvent;
}
class JString;

namespace android::widget
{
	class StackView : public android::widget::AdapterViewAnimator
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StackView(const char *className, const char *sig, Ts...agv) : android::widget::AdapterViewAnimator(className, sig, std::forward<Ts>(agv)...) {}
		StackView(QAndroidJniObject obj);
		
		// Constructors
		StackView(android::content::Context arg0);
		StackView(android::content::Context arg0, JObject arg1);
		StackView(android::content::Context arg0, JObject arg1, jint arg2);
		StackView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void advance() const;
		JString getAccessibilityClassName() const;
		jboolean onGenericMotionEvent(android::view::MotionEvent arg0) const;
		jboolean onInterceptTouchEvent(android::view::MotionEvent arg0) const;
		jboolean onTouchEvent(android::view::MotionEvent arg0) const;
		void showNext() const;
		void showPrevious() const;
	};
} // namespace android::widget

