#include "./FontVariationAxis.hpp"

namespace android::graphics::fonts
{
	// Fields
	
	FontVariationAxis::FontVariationAxis(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FontVariationAxis::FontVariationAxis(jstring &arg0, jfloat &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.fonts.FontVariationAxis",
			"(Ljava/lang/String;F)V",
			arg0,
			arg1
		);
	}
	FontVariationAxis::FontVariationAxis(const QString &arg0, jfloat &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.fonts.FontVariationAxis",
			"(Ljava/lang/String;F)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
	jarray FontVariationAxis::fromFontVariationSettings(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.fonts.FontVariationAxis",
			"fromFontVariationSettings",
			"(Ljava/lang/String;)[Landroid/graphics/fonts/FontVariationAxis;",
			arg0
		).object<jarray>();
	}
	jarray FontVariationAxis::fromFontVariationSettings(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.fonts.FontVariationAxis",
			"fromFontVariationSettings",
			"(Ljava/lang/String;)[Landroid/graphics/fonts/FontVariationAxis;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jarray>();
	}
	jstring FontVariationAxis::toFontVariationSettings(jarray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.fonts.FontVariationAxis",
			"toFontVariationSettings",
			"([Landroid/graphics/fonts/FontVariationAxis;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jboolean FontVariationAxis::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloat FontVariationAxis::getStyleValue()
	{
		return __thiz.callMethod<jfloat>(
			"getStyleValue",
			"()F"
		);
	}
	jstring FontVariationAxis::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint FontVariationAxis::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring FontVariationAxis::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::graphics::fonts

