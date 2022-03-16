#pragma once

#include "../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::renderscript
{
	class Element_DataType : public java::lang::Enum
	{
	public:
		// Fields
		static android::renderscript::Element_DataType BOOLEAN();
		static android::renderscript::Element_DataType FLOAT_16();
		static android::renderscript::Element_DataType FLOAT_32();
		static android::renderscript::Element_DataType FLOAT_64();
		static android::renderscript::Element_DataType MATRIX_2X2();
		static android::renderscript::Element_DataType MATRIX_3X3();
		static android::renderscript::Element_DataType MATRIX_4X4();
		static android::renderscript::Element_DataType NONE();
		static android::renderscript::Element_DataType RS_ALLOCATION();
		static android::renderscript::Element_DataType RS_ELEMENT();
		static android::renderscript::Element_DataType RS_FONT();
		static android::renderscript::Element_DataType RS_MESH();
		static android::renderscript::Element_DataType RS_PROGRAM_FRAGMENT();
		static android::renderscript::Element_DataType RS_PROGRAM_RASTER();
		static android::renderscript::Element_DataType RS_PROGRAM_STORE();
		static android::renderscript::Element_DataType RS_PROGRAM_VERTEX();
		static android::renderscript::Element_DataType RS_SAMPLER();
		static android::renderscript::Element_DataType RS_SCRIPT();
		static android::renderscript::Element_DataType RS_TYPE();
		static android::renderscript::Element_DataType SIGNED_16();
		static android::renderscript::Element_DataType SIGNED_32();
		static android::renderscript::Element_DataType SIGNED_64();
		static android::renderscript::Element_DataType SIGNED_8();
		static android::renderscript::Element_DataType UNSIGNED_16();
		static android::renderscript::Element_DataType UNSIGNED_32();
		static android::renderscript::Element_DataType UNSIGNED_4_4_4_4();
		static android::renderscript::Element_DataType UNSIGNED_5_5_5_1();
		static android::renderscript::Element_DataType UNSIGNED_5_6_5();
		static android::renderscript::Element_DataType UNSIGNED_64();
		static android::renderscript::Element_DataType UNSIGNED_8();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Element_DataType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Element_DataType(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::renderscript::Element_DataType valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::renderscript

