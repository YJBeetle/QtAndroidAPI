#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class ColorSpace_Model : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::ColorSpace_Model CMYK();
		static android::graphics::ColorSpace_Model LAB();
		static android::graphics::ColorSpace_Model RGB();
		static android::graphics::ColorSpace_Model XYZ();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ColorSpace_Model(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ColorSpace_Model(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::ColorSpace_Model valueOf(jstring arg0);
		static jarray values();
		jint getComponentCount();
	};
} // namespace android::graphics

