#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../net/Uri.hpp"
#include "./ImageSwitcher.hpp"

namespace android::widget
{
	// Fields
	
	ImageSwitcher::ImageSwitcher(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ImageSwitcher::ImageSwitcher(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ImageSwitcher",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	ImageSwitcher::ImageSwitcher(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ImageSwitcher",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jstring ImageSwitcher::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void ImageSwitcher::setImageDrawable(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setImageDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ImageSwitcher::setImageResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setImageResource",
			"(I)V",
			arg0
		);
	}
	void ImageSwitcher::setImageURI(android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"setImageURI",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::widget

