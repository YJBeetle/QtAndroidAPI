#include "../graphics/Outline.hpp"
#include "../view/View.hpp"
#include "./RemoteViews_RemoteViewOutlineProvider.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	RemoteViews_RemoteViewOutlineProvider::RemoteViews_RemoteViewOutlineProvider(QAndroidJniObject obj) : android::view::ViewOutlineProvider(obj) {}
	
	// Constructors
	RemoteViews_RemoteViewOutlineProvider::RemoteViews_RemoteViewOutlineProvider(jfloat arg0)
		: android::view::ViewOutlineProvider(
			"android.widget.RemoteViews$RemoteViewOutlineProvider",
			"(F)V",
			arg0
		) {}
	
	// Methods
	void RemoteViews_RemoteViewOutlineProvider::getOutline(android::view::View arg0, android::graphics::Outline arg1)
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/view/View;Landroid/graphics/Outline;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jfloat RemoteViews_RemoteViewOutlineProvider::getRadius()
	{
		return callMethod<jfloat>(
			"getRadius",
			"()F"
		);
	}
} // namespace android::widget

