#pragma once

#include "../../../JArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./FontVariationAxis.def.hpp"

namespace android::graphics::fonts
{
	// Fields
	
	// Constructors
	inline FontVariationAxis::FontVariationAxis(JString arg0, jfloat arg1)
		: JObject(
			"android.graphics.fonts.FontVariationAxis",
			"(Ljava/lang/String;F)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	inline JArray FontVariationAxis::fromFontVariationSettings(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.fonts.FontVariationAxis",
			"fromFontVariationSettings",
			"(Ljava/lang/String;)[Landroid/graphics/fonts/FontVariationAxis;",
			arg0.object<jstring>()
		);
	}
	inline JString FontVariationAxis::toFontVariationSettings(JArray arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.fonts.FontVariationAxis",
			"toFontVariationSettings",
			"([Landroid/graphics/fonts/FontVariationAxis;)Ljava/lang/String;",
			arg0.object<jarray>()
		);
	}
	inline jboolean FontVariationAxis::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jfloat FontVariationAxis::getStyleValue() const
	{
		return callMethod<jfloat>(
			"getStyleValue",
			"()F"
		);
	}
	inline JString FontVariationAxis::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		);
	}
	inline jint FontVariationAxis::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString FontVariationAxis::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::graphics::fonts

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::fonts;
#endif
