#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Bitmap_CompressFormat : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject JPEG();
		static QAndroidJniObject PNG();
		static QAndroidJniObject WEBP();
		
		Bitmap_CompressFormat(QAndroidJniObject obj);
		// Constructors
		Bitmap_CompressFormat() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

