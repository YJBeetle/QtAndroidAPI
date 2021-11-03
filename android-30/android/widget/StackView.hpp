#pragma once

#include "../../JObject.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./AdapterView.hpp"
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
		void advance();
		jstring getAccessibilityClassName();
		jboolean onGenericMotionEvent(android::view::MotionEvent arg0);
		jboolean onInterceptTouchEvent(android::view::MotionEvent arg0);
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		void showNext();
		void showPrevious();
	};
} // namespace android::widget

