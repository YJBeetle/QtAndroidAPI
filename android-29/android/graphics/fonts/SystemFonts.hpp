#pragma once

#ifndef ANDROID_GRAPHICS_FONTS_SYSTEMFONTS
#define ANDROID_GRAPHICS_FONTS_SYSTEMFONTS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::graphics::fonts
{
	class SystemFonts : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getAvailableFonts();
	};
} // namespace __jni_impl::android::graphics::fonts


namespace __jni_impl::android::graphics::fonts
{
	// Fields
	
	// Constructors
	void SystemFonts::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.fonts.SystemFonts",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SystemFonts::getAvailableFonts()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.fonts.SystemFonts",
			"getAvailableFonts",
			"()Ljava/util/Set;"
		);
	}
} // namespace __jni_impl::android::graphics::fonts

namespace android::graphics::fonts
{
	class SystemFonts : public __jni_impl::android::graphics::fonts::SystemFonts
	{
	public:
		SystemFonts(QAndroidJniObject obj) { __thiz = obj; }
		SystemFonts()
		{
			__constructor();
		}
	};
} // namespace android::graphics::fonts

#endif // ANDROID_GRAPHICS_FONTS_SYSTEMFONTS

