#include "../../../JArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./FontVariationAxis.hpp"

namespace android::graphics::fonts
{
	// Fields
	
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
	jboolean FontVariationAxis::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jfloat FontVariationAxis::getStyleValue() const
	{
		return callMethod<jfloat>(
			"getStyleValue",
			"()F"
		);
	}
	JString FontVariationAxis::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		);
	}
	jint FontVariationAxis::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString FontVariationAxis::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::graphics::fonts

