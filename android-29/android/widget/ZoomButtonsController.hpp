#pragma once

#include "../../JObject.hpp"

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
	class ZoomButtonsController : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ZoomButtonsController(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ZoomButtonsController(QJniObject obj);
		
		// Constructors
		ZoomButtonsController(android::view::View arg0);
		
		// Methods
		android::view::ViewGroup getContainer();
		android::view::View getZoomControls();
		jboolean isAutoDismissed();
		jboolean isVisible();
		jboolean onTouch(android::view::View arg0, android::view::MotionEvent arg1);
		void setAutoDismissed(jboolean arg0);
		void setFocusable(jboolean arg0);
		void setOnZoomListener(JObject arg0);
		void setVisible(jboolean arg0);
		void setZoomInEnabled(jboolean arg0);
		void setZoomOutEnabled(jboolean arg0);
		void setZoomSpeed(jlong arg0);
	};
} // namespace android::widget

