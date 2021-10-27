#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::view
{
	class MotionEvent;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup;
}

namespace android::widget
{
	class ZoomButtonsController : public __JniBaseClass
	{
	public:
		// Fields
		
		ZoomButtonsController(QAndroidJniObject obj);
		// Constructors
		ZoomButtonsController(android::view::View &arg0);
		ZoomButtonsController() = default;
		
		// Methods
		QAndroidJniObject getContainer();
		QAndroidJniObject getZoomControls();
		jboolean isAutoDismissed();
		jboolean isVisible();
		jboolean onTouch(android::view::View arg0, android::view::MotionEvent arg1);
		void setAutoDismissed(jboolean arg0);
		void setFocusable(jboolean arg0);
		void setOnZoomListener(__JniBaseClass arg0);
		void setVisible(jboolean arg0);
		void setZoomInEnabled(jboolean arg0);
		void setZoomOutEnabled(jboolean arg0);
		void setZoomSpeed(jlong arg0);
	};
} // namespace android::widget

