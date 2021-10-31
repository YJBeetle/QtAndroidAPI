#include "../graphics/Outline.hpp"
#include "./View.hpp"
#include "./ViewOutlineProvider.hpp"

namespace android::view
{
	// Fields
	QAndroidJniObject ViewOutlineProvider::BACKGROUND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewOutlineProvider",
			"BACKGROUND",
			"Landroid/view/ViewOutlineProvider;"
		);
	}
	QAndroidJniObject ViewOutlineProvider::BOUNDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewOutlineProvider",
			"BOUNDS",
			"Landroid/view/ViewOutlineProvider;"
		);
	}
	QAndroidJniObject ViewOutlineProvider::PADDED_BOUNDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewOutlineProvider",
			"PADDED_BOUNDS",
			"Landroid/view/ViewOutlineProvider;"
		);
	}
	
	// QAndroidJniObject forward
	ViewOutlineProvider::ViewOutlineProvider(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ViewOutlineProvider::ViewOutlineProvider()
		: __JniBaseClass(
			"android.view.ViewOutlineProvider",
			"()V"
		) {}
	
	// Methods
	void ViewOutlineProvider::getOutline(android::view::View arg0, android::graphics::Outline arg1)
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/view/View;Landroid/graphics/Outline;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::view

