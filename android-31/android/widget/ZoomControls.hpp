#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./LinearLayout.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class MotionEvent;
}

namespace android::widget
{
	class ZoomControls : public android::widget::LinearLayout
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ZoomControls(const char *className, const char *sig, Ts...agv) : android::widget::LinearLayout(className, sig, std::forward<Ts>(agv)...) {}
		ZoomControls(QAndroidJniObject obj);
		
		// Constructors
		ZoomControls(android::content::Context arg0);
		ZoomControls(android::content::Context arg0, __JniBaseClass arg1);
		
		// Methods
		jstring getAccessibilityClassName();
		jboolean hasFocus();
		void hide();
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		void setIsZoomInEnabled(jboolean arg0);
		void setIsZoomOutEnabled(jboolean arg0);
		void setOnZoomInClickListener(__JniBaseClass arg0);
		void setOnZoomOutClickListener(__JniBaseClass arg0);
		void setZoomSpeed(jlong arg0);
		void show();
	};
} // namespace android::widget
