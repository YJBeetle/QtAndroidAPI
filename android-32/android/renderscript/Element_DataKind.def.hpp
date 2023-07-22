#pragma once

#include "../../java/lang/Enum.def.hpp"

class JArray;
class JString;

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Element_DataKind(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Element_DataKind(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::renderscript::Element_DataKind valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::renderscript

