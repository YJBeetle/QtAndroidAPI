#pragma once

#ifndef ANDROID_GRAPHICS_FONTS_FONTFAMILY
#define ANDROID_GRAPHICS_FONTS_FONTFAMILY

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics::fonts
{
	class Font;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}

namespace __jni_impl::android::graphics::fonts
{
	class FontFamily : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getFont(jint arg0);
		jint getSize();
	};
} // namespace __jni_impl::android::graphics::fonts

#include "Font.hpp"
#include "../../../java/util/ArrayList.hpp"

namespace __jni_impl::android::graphics::fonts
{
	// Fields
	
	// Constructors
	void FontFamily::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.fonts.FontFamily",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject FontFamily::getFont(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getFont",
			"(I)Landroid/graphics/fonts/Font;",
			arg0
		);
	}
	jint FontFamily::getSize()
	{
		return __thiz.callMethod<jint>(
			"getSize",
			"()I"
		);
	}
} // namespace __jni_impl::android::graphics::fonts

namespace android::graphics::fonts
{
	class FontFamily : public __jni_impl::android::graphics::fonts::FontFamily
	{
	public:
		FontFamily(QAndroidJniObject obj) { __thiz = obj; }
		FontFamily()
		{
			__constructor();
		}
	};
} // namespace android::graphics::fonts

#endif // ANDROID_GRAPHICS_FONTS_FONTFAMILY

