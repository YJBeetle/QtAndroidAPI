#pragma once

#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JString.hpp"
#include "../../java/nio/Buffer.def.hpp"
#include "../../java/nio/FloatBuffer.def.hpp"
#include "../../java/nio/IntBuffer.def.hpp"
#include "./GLES10.def.hpp"

namespace android::opengl
{
	// Fields
	inline jint GLES10::GL_ADD()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_ADD"
		);
	}
	inline jint GLES10::GL_ALIASED_LINE_WIDTH_RANGE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_ALIASED_LINE_WIDTH_RANGE"
		);
	}
	inline jint GLES10::GL_ALIASED_POINT_SIZE_RANGE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_ALIASED_POINT_SIZE_RANGE"
		);
	}
	inline jint GLES10::GL_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_ALPHA"
		);
	}
	inline jint GLES10::GL_ALPHA_BITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_ALPHA_BITS"
		);
	}
	inline jint GLES10::GL_ALPHA_TEST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_ALPHA_TEST"
		);
	}
	inline jint GLES10::GL_ALWAYS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_ALWAYS"
		);
	}
	inline jint GLES10::GL_AMBIENT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_AMBIENT"
		);
	}
	inline jint GLES10::GL_AMBIENT_AND_DIFFUSE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_AMBIENT_AND_DIFFUSE"
		);
	}
	inline jint GLES10::GL_AND()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_AND"
		);
	}
	inline jint GLES10::GL_AND_INVERTED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_AND_INVERTED"
		);
	}
	inline jint GLES10::GL_AND_REVERSE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_AND_REVERSE"
		);
	}
	inline jint GLES10::GL_BACK()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_BACK"
		);
	}
	inline jint GLES10::GL_BLEND()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_BLEND"
		);
	}
	inline jint GLES10::GL_BLUE_BITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_BLUE_BITS"
		);
	}
	inline jint GLES10::GL_BYTE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_BYTE"
		);
	}
	inline jint GLES10::GL_CCW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_CCW"
		);
	}
	inline jint GLES10::GL_CLAMP_TO_EDGE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_CLAMP_TO_EDGE"
		);
	}
	inline jint GLES10::GL_CLEAR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_CLEAR"
		);
	}
	inline jint GLES10::GL_COLOR_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_COLOR_ARRAY"
		);
	}
	inline jint GLES10::GL_COLOR_BUFFER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_COLOR_BUFFER_BIT"
		);
	}
	inline jint GLES10::GL_COLOR_LOGIC_OP()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_COLOR_LOGIC_OP"
		);
	}
	inline jint GLES10::GL_COLOR_MATERIAL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_COLOR_MATERIAL"
		);
	}
	inline jint GLES10::GL_COMPRESSED_TEXTURE_FORMATS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_COMPRESSED_TEXTURE_FORMATS"
		);
	}
	inline jint GLES10::GL_CONSTANT_ATTENUATION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_CONSTANT_ATTENUATION"
		);
	}
	inline jint GLES10::GL_COPY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_COPY"
		);
	}
	inline jint GLES10::GL_COPY_INVERTED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_COPY_INVERTED"
		);
	}
	inline jint GLES10::GL_CULL_FACE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_CULL_FACE"
		);
	}
	inline jint GLES10::GL_CW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_CW"
		);
	}
	inline jint GLES10::GL_DECAL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_DECAL"
		);
	}
	inline jint GLES10::GL_DECR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_DECR"
		);
	}
	inline jint GLES10::GL_DEPTH_BITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_DEPTH_BITS"
		);
	}
	inline jint GLES10::GL_DEPTH_BUFFER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_DEPTH_BUFFER_BIT"
		);
	}
	inline jint GLES10::GL_DEPTH_TEST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_DEPTH_TEST"
		);
	}
	inline jint GLES10::GL_DIFFUSE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_DIFFUSE"
		);
	}
	inline jint GLES10::GL_DITHER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_DITHER"
		);
	}
	inline jint GLES10::GL_DONT_CARE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_DONT_CARE"
		);
	}
	inline jint GLES10::GL_DST_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_DST_ALPHA"
		);
	}
	inline jint GLES10::GL_DST_COLOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_DST_COLOR"
		);
	}
	inline jint GLES10::GL_EMISSION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_EMISSION"
		);
	}
	inline jint GLES10::GL_EQUAL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_EQUAL"
		);
	}
	inline jint GLES10::GL_EQUIV()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_EQUIV"
		);
	}
	inline jint GLES10::GL_EXP()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_EXP"
		);
	}
	inline jint GLES10::GL_EXP2()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_EXP2"
		);
	}
	inline jint GLES10::GL_EXTENSIONS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_EXTENSIONS"
		);
	}
	inline jint GLES10::GL_FALSE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FALSE"
		);
	}
	inline jint GLES10::GL_FASTEST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FASTEST"
		);
	}
	inline jint GLES10::GL_FIXED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FIXED"
		);
	}
	inline jint GLES10::GL_FLAT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FLAT"
		);
	}
	inline jint GLES10::GL_FLOAT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FLOAT"
		);
	}
	inline jint GLES10::GL_FOG()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FOG"
		);
	}
	inline jint GLES10::GL_FOG_COLOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FOG_COLOR"
		);
	}
	inline jint GLES10::GL_FOG_DENSITY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FOG_DENSITY"
		);
	}
	inline jint GLES10::GL_FOG_END()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FOG_END"
		);
	}
	inline jint GLES10::GL_FOG_HINT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FOG_HINT"
		);
	}
	inline jint GLES10::GL_FOG_MODE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FOG_MODE"
		);
	}
	inline jint GLES10::GL_FOG_START()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FOG_START"
		);
	}
	inline jint GLES10::GL_FRONT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FRONT"
		);
	}
	inline jint GLES10::GL_FRONT_AND_BACK()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FRONT_AND_BACK"
		);
	}
	inline jint GLES10::GL_GEQUAL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_GEQUAL"
		);
	}
	inline jint GLES10::GL_GREATER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_GREATER"
		);
	}
	inline jint GLES10::GL_GREEN_BITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_GREEN_BITS"
		);
	}
	inline jint GLES10::GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES"
		);
	}
	inline jint GLES10::GL_IMPLEMENTATION_COLOR_READ_TYPE_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_IMPLEMENTATION_COLOR_READ_TYPE_OES"
		);
	}
	inline jint GLES10::GL_INCR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_INCR"
		);
	}
	inline jint GLES10::GL_INVALID_ENUM()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_INVALID_ENUM"
		);
	}
	inline jint GLES10::GL_INVALID_OPERATION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_INVALID_OPERATION"
		);
	}
	inline jint GLES10::GL_INVALID_VALUE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_INVALID_VALUE"
		);
	}
	inline jint GLES10::GL_INVERT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_INVERT"
		);
	}
	inline jint GLES10::GL_KEEP()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_KEEP"
		);
	}
	inline jint GLES10::GL_LEQUAL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LEQUAL"
		);
	}
	inline jint GLES10::GL_LESS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LESS"
		);
	}
	inline jint GLES10::GL_LIGHT0()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LIGHT0"
		);
	}
	inline jint GLES10::GL_LIGHT1()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LIGHT1"
		);
	}
	inline jint GLES10::GL_LIGHT2()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LIGHT2"
		);
	}
	inline jint GLES10::GL_LIGHT3()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LIGHT3"
		);
	}
	inline jint GLES10::GL_LIGHT4()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LIGHT4"
		);
	}
	inline jint GLES10::GL_LIGHT5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LIGHT5"
		);
	}
	inline jint GLES10::GL_LIGHT6()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LIGHT6"
		);
	}
	inline jint GLES10::GL_LIGHT7()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LIGHT7"
		);
	}
	inline jint GLES10::GL_LIGHTING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LIGHTING"
		);
	}
	inline jint GLES10::GL_LIGHT_MODEL_AMBIENT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LIGHT_MODEL_AMBIENT"
		);
	}
	inline jint GLES10::GL_LIGHT_MODEL_TWO_SIDE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LIGHT_MODEL_TWO_SIDE"
		);
	}
	inline jint GLES10::GL_LINEAR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LINEAR"
		);
	}
	inline jint GLES10::GL_LINEAR_ATTENUATION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LINEAR_ATTENUATION"
		);
	}
	inline jint GLES10::GL_LINEAR_MIPMAP_LINEAR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LINEAR_MIPMAP_LINEAR"
		);
	}
	inline jint GLES10::GL_LINEAR_MIPMAP_NEAREST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LINEAR_MIPMAP_NEAREST"
		);
	}
	inline jint GLES10::GL_LINES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LINES"
		);
	}
	inline jint GLES10::GL_LINE_LOOP()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LINE_LOOP"
		);
	}
	inline jint GLES10::GL_LINE_SMOOTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LINE_SMOOTH"
		);
	}
	inline jint GLES10::GL_LINE_SMOOTH_HINT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LINE_SMOOTH_HINT"
		);
	}
	inline jint GLES10::GL_LINE_STRIP()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LINE_STRIP"
		);
	}
	inline jint GLES10::GL_LUMINANCE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LUMINANCE"
		);
	}
	inline jint GLES10::GL_LUMINANCE_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LUMINANCE_ALPHA"
		);
	}
	inline jint GLES10::GL_MAX_ELEMENTS_INDICES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_MAX_ELEMENTS_INDICES"
		);
	}
	inline jint GLES10::GL_MAX_ELEMENTS_VERTICES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_MAX_ELEMENTS_VERTICES"
		);
	}
	inline jint GLES10::GL_MAX_LIGHTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_MAX_LIGHTS"
		);
	}
	inline jint GLES10::GL_MAX_MODELVIEW_STACK_DEPTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_MAX_MODELVIEW_STACK_DEPTH"
		);
	}
	inline jint GLES10::GL_MAX_PROJECTION_STACK_DEPTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_MAX_PROJECTION_STACK_DEPTH"
		);
	}
	inline jint GLES10::GL_MAX_TEXTURE_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_MAX_TEXTURE_SIZE"
		);
	}
	inline jint GLES10::GL_MAX_TEXTURE_STACK_DEPTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_MAX_TEXTURE_STACK_DEPTH"
		);
	}
	inline jint GLES10::GL_MAX_TEXTURE_UNITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_MAX_TEXTURE_UNITS"
		);
	}
	inline jint GLES10::GL_MAX_VIEWPORT_DIMS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_MAX_VIEWPORT_DIMS"
		);
	}
	inline jint GLES10::GL_MODELVIEW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_MODELVIEW"
		);
	}
	inline jint GLES10::GL_MODULATE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_MODULATE"
		);
	}
	inline jint GLES10::GL_MULTISAMPLE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_MULTISAMPLE"
		);
	}
	inline jint GLES10::GL_NAND()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_NAND"
		);
	}
	inline jint GLES10::GL_NEAREST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_NEAREST"
		);
	}
	inline jint GLES10::GL_NEAREST_MIPMAP_LINEAR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_NEAREST_MIPMAP_LINEAR"
		);
	}
	inline jint GLES10::GL_NEAREST_MIPMAP_NEAREST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_NEAREST_MIPMAP_NEAREST"
		);
	}
	inline jint GLES10::GL_NEVER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_NEVER"
		);
	}
	inline jint GLES10::GL_NICEST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_NICEST"
		);
	}
	inline jint GLES10::GL_NOOP()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_NOOP"
		);
	}
	inline jint GLES10::GL_NOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_NOR"
		);
	}
	inline jint GLES10::GL_NORMALIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_NORMALIZE"
		);
	}
	inline jint GLES10::GL_NORMAL_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_NORMAL_ARRAY"
		);
	}
	inline jint GLES10::GL_NOTEQUAL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_NOTEQUAL"
		);
	}
	inline jint GLES10::GL_NO_ERROR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_NO_ERROR"
		);
	}
	inline jint GLES10::GL_NUM_COMPRESSED_TEXTURE_FORMATS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_NUM_COMPRESSED_TEXTURE_FORMATS"
		);
	}
	inline jint GLES10::GL_ONE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_ONE"
		);
	}
	inline jint GLES10::GL_ONE_MINUS_DST_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_ONE_MINUS_DST_ALPHA"
		);
	}
	inline jint GLES10::GL_ONE_MINUS_DST_COLOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_ONE_MINUS_DST_COLOR"
		);
	}
	inline jint GLES10::GL_ONE_MINUS_SRC_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_ONE_MINUS_SRC_ALPHA"
		);
	}
	inline jint GLES10::GL_ONE_MINUS_SRC_COLOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_ONE_MINUS_SRC_COLOR"
		);
	}
	inline jint GLES10::GL_OR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_OR"
		);
	}
	inline jint GLES10::GL_OR_INVERTED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_OR_INVERTED"
		);
	}
	inline jint GLES10::GL_OR_REVERSE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_OR_REVERSE"
		);
	}
	inline jint GLES10::GL_OUT_OF_MEMORY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_OUT_OF_MEMORY"
		);
	}
	inline jint GLES10::GL_PACK_ALIGNMENT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_PACK_ALIGNMENT"
		);
	}
	inline jint GLES10::GL_PALETTE4_R5_G6_B5_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_PALETTE4_R5_G6_B5_OES"
		);
	}
	inline jint GLES10::GL_PALETTE4_RGB5_A1_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_PALETTE4_RGB5_A1_OES"
		);
	}
	inline jint GLES10::GL_PALETTE4_RGB8_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_PALETTE4_RGB8_OES"
		);
	}
	inline jint GLES10::GL_PALETTE4_RGBA4_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_PALETTE4_RGBA4_OES"
		);
	}
	inline jint GLES10::GL_PALETTE4_RGBA8_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_PALETTE4_RGBA8_OES"
		);
	}
	inline jint GLES10::GL_PALETTE8_R5_G6_B5_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_PALETTE8_R5_G6_B5_OES"
		);
	}
	inline jint GLES10::GL_PALETTE8_RGB5_A1_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_PALETTE8_RGB5_A1_OES"
		);
	}
	inline jint GLES10::GL_PALETTE8_RGB8_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_PALETTE8_RGB8_OES"
		);
	}
	inline jint GLES10::GL_PALETTE8_RGBA4_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_PALETTE8_RGBA4_OES"
		);
	}
	inline jint GLES10::GL_PALETTE8_RGBA8_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_PALETTE8_RGBA8_OES"
		);
	}
	inline jint GLES10::GL_PERSPECTIVE_CORRECTION_HINT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_PERSPECTIVE_CORRECTION_HINT"
		);
	}
	inline jint GLES10::GL_POINTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_POINTS"
		);
	}
	inline jint GLES10::GL_POINT_FADE_THRESHOLD_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_POINT_FADE_THRESHOLD_SIZE"
		);
	}
	inline jint GLES10::GL_POINT_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_POINT_SIZE"
		);
	}
	inline jint GLES10::GL_POINT_SMOOTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_POINT_SMOOTH"
		);
	}
	inline jint GLES10::GL_POINT_SMOOTH_HINT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_POINT_SMOOTH_HINT"
		);
	}
	inline jint GLES10::GL_POLYGON_OFFSET_FILL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_POLYGON_OFFSET_FILL"
		);
	}
	inline jint GLES10::GL_POLYGON_SMOOTH_HINT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_POLYGON_SMOOTH_HINT"
		);
	}
	inline jint GLES10::GL_POSITION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_POSITION"
		);
	}
	inline jint GLES10::GL_PROJECTION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_PROJECTION"
		);
	}
	inline jint GLES10::GL_QUADRATIC_ATTENUATION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_QUADRATIC_ATTENUATION"
		);
	}
	inline jint GLES10::GL_RED_BITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_RED_BITS"
		);
	}
	inline jint GLES10::GL_RENDERER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_RENDERER"
		);
	}
	inline jint GLES10::GL_REPEAT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_REPEAT"
		);
	}
	inline jint GLES10::GL_REPLACE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_REPLACE"
		);
	}
	inline jint GLES10::GL_RESCALE_NORMAL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_RESCALE_NORMAL"
		);
	}
	inline jint GLES10::GL_RGB()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_RGB"
		);
	}
	inline jint GLES10::GL_RGBA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_RGBA"
		);
	}
	inline jint GLES10::GL_SAMPLE_ALPHA_TO_COVERAGE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SAMPLE_ALPHA_TO_COVERAGE"
		);
	}
	inline jint GLES10::GL_SAMPLE_ALPHA_TO_ONE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SAMPLE_ALPHA_TO_ONE"
		);
	}
	inline jint GLES10::GL_SAMPLE_COVERAGE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SAMPLE_COVERAGE"
		);
	}
	inline jint GLES10::GL_SCISSOR_TEST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SCISSOR_TEST"
		);
	}
	inline jint GLES10::GL_SET()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SET"
		);
	}
	inline jint GLES10::GL_SHININESS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SHININESS"
		);
	}
	inline jint GLES10::GL_SHORT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SHORT"
		);
	}
	inline jint GLES10::GL_SMOOTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SMOOTH"
		);
	}
	inline jint GLES10::GL_SMOOTH_LINE_WIDTH_RANGE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SMOOTH_LINE_WIDTH_RANGE"
		);
	}
	inline jint GLES10::GL_SMOOTH_POINT_SIZE_RANGE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SMOOTH_POINT_SIZE_RANGE"
		);
	}
	inline jint GLES10::GL_SPECULAR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SPECULAR"
		);
	}
	inline jint GLES10::GL_SPOT_CUTOFF()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SPOT_CUTOFF"
		);
	}
	inline jint GLES10::GL_SPOT_DIRECTION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SPOT_DIRECTION"
		);
	}
	inline jint GLES10::GL_SPOT_EXPONENT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SPOT_EXPONENT"
		);
	}
	inline jint GLES10::GL_SRC_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SRC_ALPHA"
		);
	}
	inline jint GLES10::GL_SRC_ALPHA_SATURATE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SRC_ALPHA_SATURATE"
		);
	}
	inline jint GLES10::GL_SRC_COLOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SRC_COLOR"
		);
	}
	inline jint GLES10::GL_STACK_OVERFLOW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_STACK_OVERFLOW"
		);
	}
	inline jint GLES10::GL_STACK_UNDERFLOW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_STACK_UNDERFLOW"
		);
	}
	inline jint GLES10::GL_STENCIL_BITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_STENCIL_BITS"
		);
	}
	inline jint GLES10::GL_STENCIL_BUFFER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_STENCIL_BUFFER_BIT"
		);
	}
	inline jint GLES10::GL_STENCIL_TEST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_STENCIL_TEST"
		);
	}
	inline jint GLES10::GL_SUBPIXEL_BITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SUBPIXEL_BITS"
		);
	}
	inline jint GLES10::GL_TEXTURE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE"
		);
	}
	inline jint GLES10::GL_TEXTURE0()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE0"
		);
	}
	inline jint GLES10::GL_TEXTURE1()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE1"
		);
	}
	inline jint GLES10::GL_TEXTURE10()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE10"
		);
	}
	inline jint GLES10::GL_TEXTURE11()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE11"
		);
	}
	inline jint GLES10::GL_TEXTURE12()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE12"
		);
	}
	inline jint GLES10::GL_TEXTURE13()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE13"
		);
	}
	inline jint GLES10::GL_TEXTURE14()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE14"
		);
	}
	inline jint GLES10::GL_TEXTURE15()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE15"
		);
	}
	inline jint GLES10::GL_TEXTURE16()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE16"
		);
	}
	inline jint GLES10::GL_TEXTURE17()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE17"
		);
	}
	inline jint GLES10::GL_TEXTURE18()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE18"
		);
	}
	inline jint GLES10::GL_TEXTURE19()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE19"
		);
	}
	inline jint GLES10::GL_TEXTURE2()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE2"
		);
	}
	inline jint GLES10::GL_TEXTURE20()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE20"
		);
	}
	inline jint GLES10::GL_TEXTURE21()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE21"
		);
	}
	inline jint GLES10::GL_TEXTURE22()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE22"
		);
	}
	inline jint GLES10::GL_TEXTURE23()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE23"
		);
	}
	inline jint GLES10::GL_TEXTURE24()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE24"
		);
	}
	inline jint GLES10::GL_TEXTURE25()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE25"
		);
	}
	inline jint GLES10::GL_TEXTURE26()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE26"
		);
	}
	inline jint GLES10::GL_TEXTURE27()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE27"
		);
	}
	inline jint GLES10::GL_TEXTURE28()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE28"
		);
	}
	inline jint GLES10::GL_TEXTURE29()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE29"
		);
	}
	inline jint GLES10::GL_TEXTURE3()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE3"
		);
	}
	inline jint GLES10::GL_TEXTURE30()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE30"
		);
	}
	inline jint GLES10::GL_TEXTURE31()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE31"
		);
	}
	inline jint GLES10::GL_TEXTURE4()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE4"
		);
	}
	inline jint GLES10::GL_TEXTURE5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE5"
		);
	}
	inline jint GLES10::GL_TEXTURE6()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE6"
		);
	}
	inline jint GLES10::GL_TEXTURE7()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE7"
		);
	}
	inline jint GLES10::GL_TEXTURE8()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE8"
		);
	}
	inline jint GLES10::GL_TEXTURE9()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE9"
		);
	}
	inline jint GLES10::GL_TEXTURE_2D()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE_2D"
		);
	}
	inline jint GLES10::GL_TEXTURE_COORD_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE_COORD_ARRAY"
		);
	}
	inline jint GLES10::GL_TEXTURE_ENV()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE_ENV"
		);
	}
	inline jint GLES10::GL_TEXTURE_ENV_COLOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE_ENV_COLOR"
		);
	}
	inline jint GLES10::GL_TEXTURE_ENV_MODE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE_ENV_MODE"
		);
	}
	inline jint GLES10::GL_TEXTURE_MAG_FILTER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE_MAG_FILTER"
		);
	}
	inline jint GLES10::GL_TEXTURE_MIN_FILTER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE_MIN_FILTER"
		);
	}
	inline jint GLES10::GL_TEXTURE_WRAP_S()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE_WRAP_S"
		);
	}
	inline jint GLES10::GL_TEXTURE_WRAP_T()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE_WRAP_T"
		);
	}
	inline jint GLES10::GL_TRIANGLES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TRIANGLES"
		);
	}
	inline jint GLES10::GL_TRIANGLE_FAN()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TRIANGLE_FAN"
		);
	}
	inline jint GLES10::GL_TRIANGLE_STRIP()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TRIANGLE_STRIP"
		);
	}
	inline jint GLES10::GL_TRUE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TRUE"
		);
	}
	inline jint GLES10::GL_UNPACK_ALIGNMENT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_UNPACK_ALIGNMENT"
		);
	}
	inline jint GLES10::GL_UNSIGNED_BYTE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_UNSIGNED_BYTE"
		);
	}
	inline jint GLES10::GL_UNSIGNED_SHORT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_UNSIGNED_SHORT"
		);
	}
	inline jint GLES10::GL_UNSIGNED_SHORT_4_4_4_4()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_UNSIGNED_SHORT_4_4_4_4"
		);
	}
	inline jint GLES10::GL_UNSIGNED_SHORT_5_5_5_1()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_UNSIGNED_SHORT_5_5_5_1"
		);
	}
	inline jint GLES10::GL_UNSIGNED_SHORT_5_6_5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_UNSIGNED_SHORT_5_6_5"
		);
	}
	inline jint GLES10::GL_VENDOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_VENDOR"
		);
	}
	inline jint GLES10::GL_VERSION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_VERSION"
		);
	}
	inline jint GLES10::GL_VERTEX_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_VERTEX_ARRAY"
		);
	}
	inline jint GLES10::GL_XOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_XOR"
		);
	}
	inline jint GLES10::GL_ZERO()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_ZERO"
		);
	}
	
	// Constructors
	inline GLES10::GLES10()
		: JObject(
			"android.opengl.GLES10",
			"()V"
		) {}
	
	// Methods
	inline void GLES10::glActiveTexture(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glActiveTexture",
			"(I)V",
			arg0
		);
	}
	inline void GLES10::glAlphaFunc(jint arg0, jfloat arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glAlphaFunc",
			"(IF)V",
			arg0,
			arg1
		);
	}
	inline void GLES10::glAlphaFuncx(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glAlphaFuncx",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void GLES10::glBindTexture(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glBindTexture",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void GLES10::glBlendFunc(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glBlendFunc",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void GLES10::glClear(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glClear",
			"(I)V",
			arg0
		);
	}
	inline void GLES10::glClearColor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glClearColor",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void GLES10::glClearColorx(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glClearColorx",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void GLES10::glClearDepthf(jfloat arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glClearDepthf",
			"(F)V",
			arg0
		);
	}
	inline void GLES10::glClearDepthx(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glClearDepthx",
			"(I)V",
			arg0
		);
	}
	inline void GLES10::glClearStencil(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glClearStencil",
			"(I)V",
			arg0
		);
	}
	inline void GLES10::glClientActiveTexture(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glClientActiveTexture",
			"(I)V",
			arg0
		);
	}
	inline void GLES10::glColor4f(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glColor4f",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void GLES10::glColor4x(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glColor4x",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void GLES10::glColorMask(jboolean arg0, jboolean arg1, jboolean arg2, jboolean arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glColorMask",
			"(ZZZZ)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void GLES10::glColorPointer(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glColorPointer",
			"(IIILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline void GLES10::glCompressedTexImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, java::nio::Buffer arg7)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glCompressedTexImage2D",
			"(IIIIIIILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7.object()
		);
	}
	inline void GLES10::glCompressedTexSubImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, java::nio::Buffer arg8)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glCompressedTexSubImage2D",
			"(IIIIIIIILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8.object()
		);
	}
	inline void GLES10::glCopyTexImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glCopyTexImage2D",
			"(IIIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		);
	}
	inline void GLES10::glCopyTexSubImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glCopyTexSubImage2D",
			"(IIIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		);
	}
	inline void GLES10::glCullFace(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glCullFace",
			"(I)V",
			arg0
		);
	}
	inline void GLES10::glDeleteTextures(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glDeleteTextures",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	inline void GLES10::glDeleteTextures(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glDeleteTextures",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	inline void GLES10::glDepthFunc(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glDepthFunc",
			"(I)V",
			arg0
		);
	}
	inline void GLES10::glDepthMask(jboolean arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glDepthMask",
			"(Z)V",
			arg0
		);
	}
	inline void GLES10::glDepthRangef(jfloat arg0, jfloat arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glDepthRangef",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void GLES10::glDepthRangex(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glDepthRangex",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void GLES10::glDisable(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glDisable",
			"(I)V",
			arg0
		);
	}
	inline void GLES10::glDisableClientState(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glDisableClientState",
			"(I)V",
			arg0
		);
	}
	inline void GLES10::glDrawArrays(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glDrawArrays",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void GLES10::glDrawElements(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glDrawElements",
			"(IIILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline void GLES10::glEnable(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glEnable",
			"(I)V",
			arg0
		);
	}
	inline void GLES10::glEnableClientState(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glEnableClientState",
			"(I)V",
			arg0
		);
	}
	inline void GLES10::glFinish()
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glFinish",
			"()V"
		);
	}
	inline void GLES10::glFlush()
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glFlush",
			"()V"
		);
	}
	inline void GLES10::glFogf(jint arg0, jfloat arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glFogf",
			"(IF)V",
			arg0,
			arg1
		);
	}
	inline void GLES10::glFogfv(jint arg0, java::nio::FloatBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glFogfv",
			"(ILjava/nio/FloatBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	inline void GLES10::glFogfv(jint arg0, JFloatArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glFogfv",
			"(I[FI)V",
			arg0,
			arg1.object<jfloatArray>(),
			arg2
		);
	}
	inline void GLES10::glFogx(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glFogx",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void GLES10::glFogxv(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glFogxv",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	inline void GLES10::glFogxv(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glFogxv",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	inline void GLES10::glFrontFace(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glFrontFace",
			"(I)V",
			arg0
		);
	}
	inline void GLES10::glFrustumf(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glFrustumf",
			"(FFFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	inline void GLES10::glFrustumx(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glFrustumx",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	inline void GLES10::glGenTextures(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glGenTextures",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	inline void GLES10::glGenTextures(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glGenTextures",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	inline jint GLES10::glGetError()
	{
		return callStaticMethod<jint>(
			"android.opengl.GLES10",
			"glGetError",
			"()I"
		);
	}
	inline void GLES10::glGetIntegerv(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glGetIntegerv",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	inline void GLES10::glGetIntegerv(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glGetIntegerv",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	inline JString GLES10::glGetString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.opengl.GLES10",
			"glGetString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline void GLES10::glHint(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glHint",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void GLES10::glLightModelf(jint arg0, jfloat arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLightModelf",
			"(IF)V",
			arg0,
			arg1
		);
	}
	inline void GLES10::glLightModelfv(jint arg0, java::nio::FloatBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLightModelfv",
			"(ILjava/nio/FloatBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	inline void GLES10::glLightModelfv(jint arg0, JFloatArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLightModelfv",
			"(I[FI)V",
			arg0,
			arg1.object<jfloatArray>(),
			arg2
		);
	}
	inline void GLES10::glLightModelx(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLightModelx",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void GLES10::glLightModelxv(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLightModelxv",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	inline void GLES10::glLightModelxv(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLightModelxv",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	inline void GLES10::glLightf(jint arg0, jint arg1, jfloat arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLightf",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void GLES10::glLightfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLightfv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void GLES10::glLightfv(jint arg0, jint arg1, JFloatArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLightfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>(),
			arg3
		);
	}
	inline void GLES10::glLightx(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLightx",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void GLES10::glLightxv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLightxv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void GLES10::glLightxv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLightxv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline void GLES10::glLineWidth(jfloat arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLineWidth",
			"(F)V",
			arg0
		);
	}
	inline void GLES10::glLineWidthx(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLineWidthx",
			"(I)V",
			arg0
		);
	}
	inline void GLES10::glLoadIdentity()
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLoadIdentity",
			"()V"
		);
	}
	inline void GLES10::glLoadMatrixf(java::nio::FloatBuffer arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLoadMatrixf",
			"(Ljava/nio/FloatBuffer;)V",
			arg0.object()
		);
	}
	inline void GLES10::glLoadMatrixf(JFloatArray arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLoadMatrixf",
			"([FI)V",
			arg0.object<jfloatArray>(),
			arg1
		);
	}
	inline void GLES10::glLoadMatrixx(java::nio::IntBuffer arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLoadMatrixx",
			"(Ljava/nio/IntBuffer;)V",
			arg0.object()
		);
	}
	inline void GLES10::glLoadMatrixx(JIntArray arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLoadMatrixx",
			"([II)V",
			arg0.object<jintArray>(),
			arg1
		);
	}
	inline void GLES10::glLogicOp(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLogicOp",
			"(I)V",
			arg0
		);
	}
	inline void GLES10::glMaterialf(jint arg0, jint arg1, jfloat arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glMaterialf",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void GLES10::glMaterialfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glMaterialfv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void GLES10::glMaterialfv(jint arg0, jint arg1, JFloatArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glMaterialfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>(),
			arg3
		);
	}
	inline void GLES10::glMaterialx(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glMaterialx",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void GLES10::glMaterialxv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glMaterialxv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void GLES10::glMaterialxv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glMaterialxv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline void GLES10::glMatrixMode(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glMatrixMode",
			"(I)V",
			arg0
		);
	}
	inline void GLES10::glMultMatrixf(java::nio::FloatBuffer arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glMultMatrixf",
			"(Ljava/nio/FloatBuffer;)V",
			arg0.object()
		);
	}
	inline void GLES10::glMultMatrixf(JFloatArray arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glMultMatrixf",
			"([FI)V",
			arg0.object<jfloatArray>(),
			arg1
		);
	}
	inline void GLES10::glMultMatrixx(java::nio::IntBuffer arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glMultMatrixx",
			"(Ljava/nio/IntBuffer;)V",
			arg0.object()
		);
	}
	inline void GLES10::glMultMatrixx(JIntArray arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glMultMatrixx",
			"([II)V",
			arg0.object<jintArray>(),
			arg1
		);
	}
	inline void GLES10::glMultiTexCoord4f(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glMultiTexCoord4f",
			"(IFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void GLES10::glMultiTexCoord4x(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glMultiTexCoord4x",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void GLES10::glNormal3f(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glNormal3f",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void GLES10::glNormal3x(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glNormal3x",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void GLES10::glNormalPointer(jint arg0, jint arg1, java::nio::Buffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glNormalPointer",
			"(IILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void GLES10::glOrthof(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glOrthof",
			"(FFFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	inline void GLES10::glOrthox(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glOrthox",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	inline void GLES10::glPixelStorei(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glPixelStorei",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void GLES10::glPointSize(jfloat arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glPointSize",
			"(F)V",
			arg0
		);
	}
	inline void GLES10::glPointSizex(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glPointSizex",
			"(I)V",
			arg0
		);
	}
	inline void GLES10::glPolygonOffset(jfloat arg0, jfloat arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glPolygonOffset",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void GLES10::glPolygonOffsetx(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glPolygonOffsetx",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void GLES10::glPopMatrix()
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glPopMatrix",
			"()V"
		);
	}
	inline void GLES10::glPushMatrix()
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glPushMatrix",
			"()V"
		);
	}
	inline void GLES10::glReadPixels(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, java::nio::Buffer arg6)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glReadPixels",
			"(IIIIIILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.object()
		);
	}
	inline void GLES10::glRotatef(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glRotatef",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void GLES10::glRotatex(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glRotatex",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void GLES10::glSampleCoverage(jfloat arg0, jboolean arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glSampleCoverage",
			"(FZ)V",
			arg0,
			arg1
		);
	}
	inline void GLES10::glSampleCoveragex(jint arg0, jboolean arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glSampleCoveragex",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	inline void GLES10::glScalef(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glScalef",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void GLES10::glScalex(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glScalex",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void GLES10::glScissor(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glScissor",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void GLES10::glShadeModel(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glShadeModel",
			"(I)V",
			arg0
		);
	}
	inline void GLES10::glStencilFunc(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glStencilFunc",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void GLES10::glStencilMask(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glStencilMask",
			"(I)V",
			arg0
		);
	}
	inline void GLES10::glStencilOp(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glStencilOp",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void GLES10::glTexCoordPointer(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glTexCoordPointer",
			"(IIILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline void GLES10::glTexEnvf(jint arg0, jint arg1, jfloat arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glTexEnvf",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void GLES10::glTexEnvfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glTexEnvfv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void GLES10::glTexEnvfv(jint arg0, jint arg1, JFloatArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glTexEnvfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>(),
			arg3
		);
	}
	inline void GLES10::glTexEnvx(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glTexEnvx",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void GLES10::glTexEnvxv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glTexEnvxv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void GLES10::glTexEnvxv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glTexEnvxv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline void GLES10::glTexImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, java::nio::Buffer arg8)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glTexImage2D",
			"(IIIIIIIILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8.object()
		);
	}
	inline void GLES10::glTexParameterf(jint arg0, jint arg1, jfloat arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glTexParameterf",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void GLES10::glTexParameterx(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glTexParameterx",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void GLES10::glTexSubImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, java::nio::Buffer arg8)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glTexSubImage2D",
			"(IIIIIIIILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8.object()
		);
	}
	inline void GLES10::glTranslatef(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glTranslatef",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void GLES10::glTranslatex(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glTranslatex",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void GLES10::glVertexPointer(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glVertexPointer",
			"(IIILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline void GLES10::glViewport(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glViewport",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::opengl

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::opengl;
#endif
