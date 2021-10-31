#include "./FontStyle.hpp"

namespace android::graphics::fonts
{
	// Fields
	jint FontStyle::FONT_SLANT_ITALIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_SLANT_ITALIC"
		);
	}
	jint FontStyle::FONT_SLANT_UPRIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_SLANT_UPRIGHT"
		);
	}
	jint FontStyle::FONT_WEIGHT_BLACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_BLACK"
		);
	}
	jint FontStyle::FONT_WEIGHT_BOLD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_BOLD"
		);
	}
	jint FontStyle::FONT_WEIGHT_EXTRA_BOLD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_EXTRA_BOLD"
		);
	}
	jint FontStyle::FONT_WEIGHT_EXTRA_LIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_EXTRA_LIGHT"
		);
	}
	jint FontStyle::FONT_WEIGHT_LIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_LIGHT"
		);
	}
	jint FontStyle::FONT_WEIGHT_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_MAX"
		);
	}
	jint FontStyle::FONT_WEIGHT_MEDIUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_MEDIUM"
		);
	}
	jint FontStyle::FONT_WEIGHT_MIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_MIN"
		);
	}
	jint FontStyle::FONT_WEIGHT_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_NORMAL"
		);
	}
	jint FontStyle::FONT_WEIGHT_SEMI_BOLD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_SEMI_BOLD"
		);
	}
	jint FontStyle::FONT_WEIGHT_THIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.fonts.FontStyle",
			"FONT_WEIGHT_THIN"
		);
	}
	
	FontStyle::FontStyle(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FontStyle::FontStyle()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.fonts.FontStyle",
			"()V"
		);
	}
	FontStyle::FontStyle(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.fonts.FontStyle",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jboolean FontStyle::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint FontStyle::getSlant()
	{
		return __thiz.callMethod<jint>(
			"getSlant",
			"()I"
		);
	}
	jint FontStyle::getWeight()
	{
		return __thiz.callMethod<jint>(
			"getWeight",
			"()I"
		);
	}
	jint FontStyle::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring FontStyle::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::graphics::fonts

