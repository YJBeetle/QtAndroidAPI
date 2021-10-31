#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "./TextView.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class MotionEvent;
}
namespace android::view
{
	class PointerIcon;
}

namespace android::widget
{
	class Button : public android::widget::TextView
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Button(const char *className, const char *sig, Ts...agv) : android::widget::TextView(className, sig, std::forward<Ts>(agv)...) {}
		Button(QJniObject obj);
		
		// Constructors
		Button(android::content::Context arg0);
		Button(android::content::Context arg0, __JniBaseClass arg1);
		Button(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		Button(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		jstring getAccessibilityClassName();
		android::view::PointerIcon onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1);
	};
} // namespace android::widget

