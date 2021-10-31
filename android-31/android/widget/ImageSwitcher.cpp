#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../net/Uri.hpp"
#include "./ImageSwitcher.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	ImageSwitcher::ImageSwitcher(QAndroidJniObject obj) : android::widget::ViewSwitcher(obj) {}
	
	// Constructors
	ImageSwitcher::ImageSwitcher(android::content::Context arg0)
		: android::widget::ViewSwitcher(
			"android.widget.ImageSwitcher",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	ImageSwitcher::ImageSwitcher(android::content::Context arg0, __JniBaseClass arg1)
		: android::widget::ViewSwitcher(
			"android.widget.ImageSwitcher",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jstring ImageSwitcher::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void ImageSwitcher::setImageDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setImageDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void ImageSwitcher::setImageResource(jint arg0)
	{
		callMethod<void>(
			"setImageResource",
			"(I)V",
			arg0
		);
	}
	void ImageSwitcher::setImageURI(android::net::Uri arg0)
	{
		callMethod<void>(
			"setImageURI",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
} // namespace android::widget

