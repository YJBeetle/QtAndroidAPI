#include "./Typeface.hpp"
#include "./fonts/FontFamily.hpp"
#include "./fonts/FontStyle.hpp"
#include "./Typeface_CustomFallbackBuilder.hpp"

namespace android::graphics
{
	// Fields
	
	Typeface_CustomFallbackBuilder::Typeface_CustomFallbackBuilder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Typeface_CustomFallbackBuilder::Typeface_CustomFallbackBuilder(android::graphics::fonts::FontFamily &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Typeface$CustomFallbackBuilder",
			"(Landroid/graphics/fonts/FontFamily;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint Typeface_CustomFallbackBuilder::getMaxCustomFallbackCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Typeface$CustomFallbackBuilder",
			"getMaxCustomFallbackCount",
			"()I"
		);
	}
	QAndroidJniObject Typeface_CustomFallbackBuilder::addCustomFallback(android::graphics::fonts::FontFamily arg0)
	{
		return __thiz.callObjectMethod(
			"addCustomFallback",
			"(Landroid/graphics/fonts/FontFamily;)Landroid/graphics/Typeface$CustomFallbackBuilder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Typeface_CustomFallbackBuilder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/graphics/Typeface;"
		);
	}
	QAndroidJniObject Typeface_CustomFallbackBuilder::setStyle(android::graphics::fonts::FontStyle arg0)
	{
		return __thiz.callObjectMethod(
			"setStyle",
			"(Landroid/graphics/fonts/FontStyle;)Landroid/graphics/Typeface$CustomFallbackBuilder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Typeface_CustomFallbackBuilder::setSystemFallback(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setSystemFallback",
			"(Ljava/lang/String;)Landroid/graphics/Typeface$CustomFallbackBuilder;",
			arg0
		);
	}
	QAndroidJniObject Typeface_CustomFallbackBuilder::setSystemFallback(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setSystemFallback",
			"(Ljava/lang/String;)Landroid/graphics/Typeface$CustomFallbackBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace android::graphics

