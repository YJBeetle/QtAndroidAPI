#pragma once

#ifndef ANDROID_GRAPHICS_FONTS_FONTFAMILY_BUILDER
#define ANDROID_GRAPHICS_FONTS_FONTFAMILY_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics::fonts
{
	class Font;
}
namespace __jni_impl::android::graphics::fonts
{
	class FontFamily;
}

namespace __jni_impl::android::graphics::fonts
{
	class FontFamily_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::fonts::Font arg0);
		
		// Methods
		QAndroidJniObject addFont(__jni_impl::android::graphics::fonts::Font arg0);
		QAndroidJniObject build();
	};
} // namespace __jni_impl::android::graphics::fonts

#include "Font.hpp"
#include "FontFamily.hpp"

namespace __jni_impl::android::graphics::fonts
{
	// Fields
	
	// Constructors
	void FontFamily_Builder::__constructor(__jni_impl::android::graphics::fonts::Font arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.fonts.FontFamily$Builder",
			"(Landroid/graphics/fonts/Font;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject FontFamily_Builder::addFont(__jni_impl::android::graphics::fonts::Font arg0)
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
} // namespace __jni_impl::android::graphics::fonts

namespace android::graphics::fonts
{
	class FontFamily_Builder : public __jni_impl::android::graphics::fonts::FontFamily_Builder
	{
	public:
		FontFamily_Builder(QAndroidJniObject obj) { __thiz = obj; }
		FontFamily_Builder(__jni_impl::android::graphics::fonts::Font arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::graphics::fonts

#endif // ANDROID_GRAPHICS_FONTS_FONTFAMILY_BUILDER

