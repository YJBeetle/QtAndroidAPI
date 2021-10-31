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
	class RelativeLayout_LayoutParams;
}

namespace android::widget
{
	class RelativeLayout : public android::view::ViewGroup
	{
	public:
		// Fields
		static jint ABOVE();
		static jint ALIGN_BASELINE();
		static jint ALIGN_BOTTOM();
		static jint ALIGN_END();
		static jint ALIGN_LEFT();
		static jint ALIGN_PARENT_BOTTOM();
		static jint ALIGN_PARENT_END();
		static jint ALIGN_PARENT_LEFT();
		static jint ALIGN_PARENT_RIGHT();
		static jint ALIGN_PARENT_START();
		static jint ALIGN_PARENT_TOP();
		static jint ALIGN_RIGHT();
		static jint ALIGN_START();
		static jint ALIGN_TOP();
		static jint BELOW();
		static jint CENTER_HORIZONTAL();
		static jint CENTER_IN_PARENT();
		static jint CENTER_VERTICAL();
		static jint END_OF();
		static jint LEFT_OF();
		static jint RIGHT_OF();
		static jint START_OF();
		static jint TRUE();
		
		RelativeLayout(QAndroidJniObject obj);
		// Constructors
		RelativeLayout(android::content::Context arg0);
		RelativeLayout(android::content::Context arg0, __JniBaseClass arg1);
		RelativeLayout(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		RelativeLayout(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		RelativeLayout() = default;
		
		// Methods
		QAndroidJniObject generateLayoutParams(__JniBaseClass arg0);
		jstring getAccessibilityClassName();
		jint getBaseline();
		jint getGravity();
		jint getIgnoreGravity();
		void requestLayout();
		void setGravity(jint arg0);
		void setHorizontalGravity(jint arg0);
		void setIgnoreGravity(jint arg0);
		void setVerticalGravity(jint arg0);
		jboolean shouldDelayChildPressedState();
	};
} // namespace android::widget

