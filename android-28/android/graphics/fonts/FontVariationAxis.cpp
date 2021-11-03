#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./FontVariationAxis.hpp"

namespace android::graphics::fonts
{
	// Fields
	
	// QJniObject forward
	FontVariationAxis::FontVariationAxis(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	FontVariationAxis::FontVariationAxis(JString arg0, jfloat arg1)
		: JObject(
			"android.graphics.fonts.FontVariationAxis",
			"(Ljava/lang/String;F)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	JArray FontVariationAxis::fromFontVariationSettings(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.fonts.FontVariationAxis",
			"fromFontVariationSettings",
			"(Ljava/lang/String;)[Landroid/graphics/fonts/FontVariationAxis;",
			arg0.object<jstring>()
		);
	}
	JString FontVariationAxis::toFontVariationSettings(JArray arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.fonts.FontVariationAxis",
			"toFontVariationSettings",
			"([Landroid/graphics/fonts/FontVariationAxis;)Ljava/lang/String;",
			arg0.object<jarray>()
		);
	}
	jfloat FontVariationAxis::getStyleValue()
	{
		return callMethod<jfloat>(
			"getStyleValue",
			"()F"
		);
	}
	JString FontVariationAxis::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		);
	}
	JString FontVariationAxis::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::graphics::fonts

