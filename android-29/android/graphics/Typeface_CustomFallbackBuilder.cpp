#include "./Typeface.hpp"
#include "./fonts/FontFamily.hpp"
#include "./fonts/FontStyle.hpp"
#include "./Typeface_CustomFallbackBuilder.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	Typeface_CustomFallbackBuilder::Typeface_CustomFallbackBuilder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Typeface_CustomFallbackBuilder::Typeface_CustomFallbackBuilder(android::graphics::fonts::FontFamily arg0)
		: __JniBaseClass(
			"android.graphics.Typeface$CustomFallbackBuilder",
			"(Landroid/graphics/fonts/FontFamily;)V",
			arg0.object()
		) {}
	
	// Methods
	jint Typeface_CustomFallbackBuilder::getMaxCustomFallbackCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Typeface$CustomFallbackBuilder",
			"getMaxCustomFallbackCount",
			"()I"
		);
	}
	android::graphics::Typeface_CustomFallbackBuilder Typeface_CustomFallbackBuilder::addCustomFallback(android::graphics::fonts::FontFamily arg0)
	{
		return callObjectMethod(
			"addCustomFallback",
			"(Landroid/graphics/fonts/FontFamily;)Landroid/graphics/Typeface$CustomFallbackBuilder;",
			arg0.object()
		);
	}
	android::graphics::Typeface Typeface_CustomFallbackBuilder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/graphics/Typeface;"
		);
	}
	android::graphics::Typeface_CustomFallbackBuilder Typeface_CustomFallbackBuilder::setStyle(android::graphics::fonts::FontStyle arg0)
	{
		return callObjectMethod(
			"setStyle",
			"(Landroid/graphics/fonts/FontStyle;)Landroid/graphics/Typeface$CustomFallbackBuilder;",
			arg0.object()
		);
	}
	android::graphics::Typeface_CustomFallbackBuilder Typeface_CustomFallbackBuilder::setSystemFallback(jstring arg0)
	{
		return callObjectMethod(
			"setSystemFallback",
			"(Ljava/lang/String;)Landroid/graphics/Typeface$CustomFallbackBuilder;",
			arg0
		);
	}
} // namespace android::graphics

