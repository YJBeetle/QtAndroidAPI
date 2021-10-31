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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ColorSpace_Model(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ColorSpace_Model(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
		jint getComponentCount();
	};
} // namespace android::graphics

