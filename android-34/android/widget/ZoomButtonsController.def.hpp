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
		ZoomButtonsController(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ZoomButtonsController(android::view::View arg0);
		
		// Methods
		android::view::ViewGroup getContainer() const;
		android::view::View getZoomControls() const;
		jboolean isAutoDismissed() const;
		jboolean isVisible() const;
		jboolean onTouch(android::view::View arg0, android::view::MotionEvent arg1) const;
		void setAutoDismissed(jboolean arg0) const;
		void setFocusable(jboolean arg0) const;
		void setOnZoomListener(JObject arg0) const;
		void setVisible(jboolean arg0) const;
		void setZoomInEnabled(jboolean arg0) const;
		void setZoomOutEnabled(jboolean arg0) const;
		void setZoomSpeed(jlong arg0) const;
	};
} // namespace android::widget

