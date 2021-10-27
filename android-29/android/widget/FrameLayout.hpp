#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class ViewGroup_LayoutParams;
}
namespace android::widget
{
	class FrameLayout_LayoutParams;
}

namespace android::widget
{
	class FrameLayout : public android::view::ViewGroup
	{
	public:
		// Fields
		
		FrameLayout(QAndroidJniObject obj);
		// Constructors
		FrameLayout(android::content::Context &arg0);
		FrameLayout(android::content::Context &arg0, __JniBaseClass &arg1);
		FrameLayout(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2);
		FrameLayout(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3);
		FrameLayout() = default;
		
		// Methods
		QAndroidJniObject generateLayoutParams(__JniBaseClass arg0);
		jstring getAccessibilityClassName();
		jboolean getConsiderGoneChildrenWhenMeasuring();
		jboolean getMeasureAllChildren();
		void setForegroundGravity(jint arg0);
		void setMeasureAllChildren(jboolean arg0);
		jboolean shouldDelayChildPressedState();
	};
} // namespace android::widget

