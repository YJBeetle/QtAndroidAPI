#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class ColorSpace_Model : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CMYK();
		static QAndroidJniObject LAB();
		static QAndroidJniObject RGB();
		static QAndroidJniObject XYZ();
		
		ColorSpace_Model(QAndroidJniObject obj);
		// Constructors
		ColorSpace_Model() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
		jint getComponentCount();
	};
} // namespace android::graphics

