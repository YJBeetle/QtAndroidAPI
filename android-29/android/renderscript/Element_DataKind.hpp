#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::renderscript
{
	class Element_DataKind : public java::lang::Enum
	{
	public:
		// Fields
		static android::renderscript::Element_DataKind PIXEL_A();
		static android::renderscript::Element_DataKind PIXEL_DEPTH();
		static android::renderscript::Element_DataKind PIXEL_L();
		static android::renderscript::Element_DataKind PIXEL_LA();
		static android::renderscript::Element_DataKind PIXEL_RGB();
		static android::renderscript::Element_DataKind PIXEL_RGBA();
		static android::renderscript::Element_DataKind PIXEL_YUV();
		static android::renderscript::Element_DataKind USER();
		
		// QJniObject forward
		template<typename ...Ts> explicit Element_DataKind(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Element_DataKind(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::renderscript::Element_DataKind valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::renderscript

