#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::renderscript
{
	class Element_DataType : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BOOLEAN();
		static QAndroidJniObject FLOAT_16();
		static QAndroidJniObject FLOAT_32();
		static QAndroidJniObject FLOAT_64();
		static QAndroidJniObject MATRIX_2X2();
		static QAndroidJniObject MATRIX_3X3();
		static QAndroidJniObject MATRIX_4X4();
		static QAndroidJniObject NONE();
		static QAndroidJniObject RS_ALLOCATION();
		static QAndroidJniObject RS_ELEMENT();
		static QAndroidJniObject RS_FONT();
		static QAndroidJniObject RS_MESH();
		static QAndroidJniObject RS_PROGRAM_FRAGMENT();
		static QAndroidJniObject RS_PROGRAM_RASTER();
		static QAndroidJniObject RS_PROGRAM_STORE();
		static QAndroidJniObject RS_PROGRAM_VERTEX();
		static QAndroidJniObject RS_SAMPLER();
		static QAndroidJniObject RS_SCRIPT();
		static QAndroidJniObject RS_TYPE();
		static QAndroidJniObject SIGNED_16();
		static QAndroidJniObject SIGNED_32();
		static QAndroidJniObject SIGNED_64();
		static QAndroidJniObject SIGNED_8();
		static QAndroidJniObject UNSIGNED_16();
		static QAndroidJniObject UNSIGNED_32();
		static QAndroidJniObject UNSIGNED_4_4_4_4();
		static QAndroidJniObject UNSIGNED_5_5_5_1();
		static QAndroidJniObject UNSIGNED_5_6_5();
		static QAndroidJniObject UNSIGNED_64();
		static QAndroidJniObject UNSIGNED_8();
		
		Element_DataType(QAndroidJniObject obj);
		// Constructors
		Element_DataType() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::renderscript

