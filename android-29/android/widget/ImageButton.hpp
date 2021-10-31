#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "./ImageView.hpp"

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
	class ImageButton : public android::widget::ImageView
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ImageButton(const char *className, const char *sig, Ts...agv) : android::widget::ImageView(className, sig, std::forward<Ts>(agv)...) {}
		ImageButton(QAndroidJniObject obj);
		
		// Constructors
		ImageButton(android::content::Context arg0);
		ImageButton(android::content::Context arg0, __JniBaseClass arg1);
		ImageButton(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		ImageButton(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		jstring getAccessibilityClassName();
		QAndroidJniObject onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1);
	};
} // namespace android::widget

