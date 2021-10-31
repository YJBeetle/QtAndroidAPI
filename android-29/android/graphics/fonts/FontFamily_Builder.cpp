#include "./Font.hpp"
#include "./FontFamily.hpp"
#include "./FontFamily_Builder.hpp"

namespace android::graphics::fonts
{
	// Fields
	
	FontFamily_Builder::FontFamily_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FontFamily_Builder::FontFamily_Builder(android::graphics::fonts::Font arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.fonts.FontFamily$Builder",
			"(Landroid/graphics/fonts/Font;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject FontFamily_Builder::addFont(android::graphics::fonts::Font arg0)
	{
		return __thiz.callObjectMethod(
			"addFont",
			"(Landroid/graphics/fonts/Font;)Landroid/graphics/fonts/FontFamily$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FontFamily_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/graphics/fonts/FontFamily;"
		);
	}
} // namespace android::graphics::fonts

