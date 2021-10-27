#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Bitmap_Config : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ALPHA_8();
		static QAndroidJniObject ARGB_4444();
		static QAndroidJniObject ARGB_8888();
		static QAndroidJniObject HARDWARE();
		static QAndroidJniObject RGBA_F16();
		static QAndroidJniObject RGB_565();
		
		Bitmap_Config(QAndroidJniObject obj);
		// Constructors
		Bitmap_Config() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::graphics

