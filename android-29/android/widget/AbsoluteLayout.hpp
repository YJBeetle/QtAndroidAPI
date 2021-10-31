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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbsoluteLayout(const char *className, const char *sig, Ts...agv) : android::view::ViewGroup(className, sig, std::forward<Ts>(agv)...) {}
		AbsoluteLayout(QAndroidJniObject obj);
		
		// Constructors
		AbsoluteLayout(android::content::Context arg0);
		AbsoluteLayout(android::content::Context arg0, __JniBaseClass arg1);
		AbsoluteLayout(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		AbsoluteLayout(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		android::view::ViewGroup_LayoutParams generateLayoutParams(__JniBaseClass arg0);
		jboolean shouldDelayChildPressedState();
	};
} // namespace android::widget

