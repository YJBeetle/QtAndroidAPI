#include "../../content/Context.hpp"
#include "../../graphics/Bitmap.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../net/Uri.hpp"
#include "./ImageSpan.hpp"

namespace android::text::style
{
	// Fields
	
	ImageSpan::ImageSpan(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ImageSpan::ImageSpan(android::graphics::Bitmap arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ImageSpan",
			"(Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object()
		);
	}
	ImageSpan::ImageSpan(android::graphics::drawable::Drawable arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ImageSpan",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	ImageSpan::ImageSpan(android::content::Context arg0, android::graphics::Bitmap arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ImageSpan",
			"(Landroid/content/Context;Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	ImageSpan::ImageSpan(android::content::Context arg0, android::net::Uri arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ImageSpan",
			"(Landroid/content/Context;Landroid/net/Uri;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	ImageSpan::ImageSpan(android::content::Context arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ImageSpan",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	ImageSpan::ImageSpan(android::graphics::Bitmap arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ImageSpan",
			"(Landroid/graphics/Bitmap;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	ImageSpan::ImageSpan(android::graphics::drawable::Drawable arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ImageSpan",
			"(Landroid/graphics/drawable/Drawable;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	ImageSpan::ImageSpan(android::graphics::drawable::Drawable arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ImageSpan",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	ImageSpan::ImageSpan(android::content::Context arg0, android::graphics::Bitmap arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ImageSpan",
			"(Landroid/content/Context;Landroid/graphics/Bitmap;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	ImageSpan::ImageSpan(android::content::Context arg0, android::net::Uri arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ImageSpan",
			"(Landroid/content/Context;Landroid/net/Uri;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	ImageSpan::ImageSpan(android::content::Context arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ImageSpan",
			"(Landroid/content/Context;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	ImageSpan::ImageSpan(android::graphics::drawable::Drawable arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ImageSpan",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/String;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject ImageSpan::getDrawable()
	{
		return __thiz.callObjectMethod(
			"getDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jstring ImageSpan::getSource()
	{
		return __thiz.callObjectMethod(
			"getSource",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::text::style

