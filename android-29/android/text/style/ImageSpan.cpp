#include "../../content/Context.hpp"
#include "../../graphics/Bitmap.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../net/Uri.hpp"
#include "../../../JString.hpp"
#include "./ImageSpan.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	ImageSpan::ImageSpan(QAndroidJniObject obj) : android::text::style::DynamicDrawableSpan(obj) {}
	
	// Constructors
	ImageSpan::ImageSpan(android::graphics::Bitmap arg0)
		: android::text::style::DynamicDrawableSpan(
			"android.text.style.ImageSpan",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		) {}
	ImageSpan::ImageSpan(android::graphics::drawable::Drawable arg0)
		: android::text::style::DynamicDrawableSpan(
			"android.text.style.ImageSpan",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		) {}
	ImageSpan::ImageSpan(android::content::Context arg0, android::graphics::Bitmap arg1)
		: android::text::style::DynamicDrawableSpan(
			"android.text.style.ImageSpan",
			"(Landroid/content/Context;Landroid/graphics/Bitmap;)V",
			arg0.object(),
			arg1.object()
		) {}
	ImageSpan::ImageSpan(android::content::Context arg0, android::net::Uri arg1)
		: android::text::style::DynamicDrawableSpan(
			"android.text.style.ImageSpan",
			"(Landroid/content/Context;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object()
		) {}
	ImageSpan::ImageSpan(android::content::Context arg0, jint arg1)
		: android::text::style::DynamicDrawableSpan(
			"android.text.style.ImageSpan",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	ImageSpan::ImageSpan(android::graphics::Bitmap arg0, jint arg1)
		: android::text::style::DynamicDrawableSpan(
			"android.text.style.ImageSpan",
			"(Landroid/graphics/Bitmap;I)V",
			arg0.object(),
			arg1
		) {}
	ImageSpan::ImageSpan(android::graphics::drawable::Drawable arg0, jint arg1)
		: android::text::style::DynamicDrawableSpan(
			"android.text.style.ImageSpan",
			"(Landroid/graphics/drawable/Drawable;I)V",
			arg0.object(),
			arg1
		) {}
	ImageSpan::ImageSpan(android::graphics::drawable::Drawable arg0, JString arg1)
		: android::text::style::DynamicDrawableSpan(
			"android.text.style.ImageSpan",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	ImageSpan::ImageSpan(android::content::Context arg0, android::graphics::Bitmap arg1, jint arg2)
		: android::text::style::DynamicDrawableSpan(
			"android.text.style.ImageSpan",
			"(Landroid/content/Context;Landroid/graphics/Bitmap;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	ImageSpan::ImageSpan(android::content::Context arg0, android::net::Uri arg1, jint arg2)
		: android::text::style::DynamicDrawableSpan(
			"android.text.style.ImageSpan",
			"(Landroid/content/Context;Landroid/net/Uri;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	ImageSpan::ImageSpan(android::content::Context arg0, jint arg1, jint arg2)
		: android::text::style::DynamicDrawableSpan(
			"android.text.style.ImageSpan",
			"(Landroid/content/Context;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	ImageSpan::ImageSpan(android::graphics::drawable::Drawable arg0, JString arg1, jint arg2)
		: android::text::style::DynamicDrawableSpan(
			"android.text.style.ImageSpan",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/String;I)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		) {}
	
	// Methods
	android::graphics::drawable::Drawable ImageSpan::getDrawable()
	{
		return callObjectMethod(
			"getDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	JString ImageSpan::getSource()
	{
		return callObjectMethod(
			"getSource",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::text::style

