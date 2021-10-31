#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::renderscript
{
	class Element_DataKind : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject PIXEL_A();
		static QAndroidJniObject PIXEL_DEPTH();
		static QAndroidJniObject PIXEL_L();
		static QAndroidJniObject PIXEL_LA();
		static QAndroidJniObject PIXEL_RGB();
		static QAndroidJniObject PIXEL_RGBA();
		static QAndroidJniObject PIXEL_YUV();
		static QAndroidJniObject USER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Element_DataKind(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Element_DataKind(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::renderscript

