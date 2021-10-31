#pragma once

#include "../../__JniBaseClass.hpp"
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
		
		StackView(QAndroidJniObject obj);
		// Constructors
		StackView(android::content::Context arg0);
		StackView(android::content::Context arg0, __JniBaseClass arg1);
		StackView(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		StackView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		StackView() = default;
		
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

