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
	class AbsoluteLayout : public android::view::ViewGroup
	{
	public:
		// Fields
		
		AbsoluteLayout(QAndroidJniObject obj);
		// Constructors
		AbsoluteLayout(android::content::Context arg0);
		AbsoluteLayout(android::content::Context arg0, __JniBaseClass arg1);
		AbsoluteLayout(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		AbsoluteLayout(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		AbsoluteLayout() = default;
		
		// Methods
		QAndroidJniObject generateLayoutParams(__JniBaseClass arg0);
		jboolean shouldDelayChildPressedState();
	};
} // namespace android::widget

