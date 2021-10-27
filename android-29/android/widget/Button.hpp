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
		
		Button(QAndroidJniObject obj);
		// Constructors
		Button(android::content::Context &arg0);
		Button(android::content::Context &arg0, __JniBaseClass &arg1);
		Button(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2);
		Button(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3);
		Button() = default;
		
		// Methods
		jstring getAccessibilityClassName();
		QAndroidJniObject onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1);
	};
} // namespace android::widget

