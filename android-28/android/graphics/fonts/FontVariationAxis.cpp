#include "./FontVariationAxis.hpp"

namespace android::graphics::fonts
{
	// Fields
	
	// QAndroidJniObject forward
	FontVariationAxis::FontVariationAxis(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	FontVariationAxis::FontVariationAxis(jstring arg0, jfloat arg1)
		: __JniBaseClass(
			"android.graphics.fonts.FontVariationAxis",
			"(Ljava/lang/String;F)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jarray FontVariationAxis::fromFontVariationSettings(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.fonts.FontVariationAxis",
			"fromFontVariationSettings",
			"(Ljava/lang/String;)[Landroid/graphics/fonts/FontVariationAxis;",
			arg0
		).object<jarray>();
	}
	jstring FontVariationAxis::toFontVariationSettings(jarray arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.fonts.FontVariationAxis",
			"toFontVariationSettings",
			"([Landroid/graphics/fonts/FontVariationAxis;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jfloat FontVariationAxis::getStyleValue()
	{
		return callMethod<jfloat>(
			"getStyleValue",
			"()F"
		);
	}
	jstring FontVariationAxis::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring FontVariationAxis::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::graphics::fonts

