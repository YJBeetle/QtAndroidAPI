#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./FontStyle.hpp"

namespace android::graphics::fonts
{
	// Fields
	jint FontStyle::FONT_SLANT_ITALIC()
	{
		return getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_SLANT_ITALIC"
		);
	}
	jint FontStyle::FONT_SLANT_UPRIGHT()
	{
		return getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_SLANT_UPRIGHT"
		);
	}
	jint FontStyle::FONT_WEIGHT_BLACK()
	{
		return getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_BLACK"
		);
	}
	jint FontStyle::FONT_WEIGHT_BOLD()
	{
		return getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_BOLD"
		);
	}
	jint FontStyle::FONT_WEIGHT_EXTRA_BOLD()
	{
		return getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_EXTRA_BOLD"
		);
	}
	jint FontStyle::FONT_WEIGHT_EXTRA_LIGHT()
	{
		return getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_EXTRA_LIGHT"
		);
	}
	jint FontStyle::FONT_WEIGHT_LIGHT()
	{
		return getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_LIGHT"
		);
	}
	jint FontStyle::FONT_WEIGHT_MAX()
	{
		return getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_MAX"
		);
	}
	jint FontStyle::FONT_WEIGHT_MEDIUM()
	{
		return getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_MEDIUM"
		);
	}
	jint FontStyle::FONT_WEIGHT_MIN()
	{
		return getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_MIN"
		);
	}
	jint FontStyle::FONT_WEIGHT_NORMAL()
	{
		return getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_NORMAL"
		);
	}
	jint FontStyle::FONT_WEIGHT_SEMI_BOLD()
	{
		return getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_SEMI_BOLD"
		);
	}
	jint FontStyle::FONT_WEIGHT_THIN()
	{
		return getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_THIN"
		);
	}
	
	// QAndroidJniObject forward
	FontStyle::FontStyle(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	FontStyle::FontStyle()
		: JObject(
			"android.graphics.fonts.FontStyle",
			"()V"
		) {}
	FontStyle::FontStyle(jint arg0, jint arg1)
		: JObject(
			"android.graphics.fonts.FontStyle",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean FontStyle::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint FontStyle::getSlant()
	{
		return callMethod<jint>(
			"getSlant",
			"()I"
		);
	}
	jint FontStyle::getWeight()
	{
		return callMethod<jint>(
			"getWeight",
			"()I"
		);
	}
	jint FontStyle::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString FontStyle::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::graphics::fonts

