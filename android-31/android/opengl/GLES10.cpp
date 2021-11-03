#include "../../java/nio/Buffer.hpp"
#include "../../java/nio/FloatBuffer.hpp"
#include "../../java/nio/IntBuffer.hpp"
#include "./GLES10.hpp"

namespace android::opengl
{
	// Fields
	jint GLES10::GL_ADD()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_ADD"
		);
	}
	jint GLES10::GL_ALIASED_LINE_WIDTH_RANGE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_ALIASED_LINE_WIDTH_RANGE"
		);
	}
	jint GLES10::GL_ALIASED_POINT_SIZE_RANGE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_ALIASED_POINT_SIZE_RANGE"
		);
	}
	jint GLES10::GL_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_ALPHA"
		);
	}
	jint GLES10::GL_ALPHA_BITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_ALPHA_BITS"
		);
	}
	jint GLES10::GL_ALPHA_TEST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_ALPHA_TEST"
		);
	}
	jint GLES10::GL_ALWAYS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_ALWAYS"
		);
	}
	jint GLES10::GL_AMBIENT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_AMBIENT"
		);
	}
	jint GLES10::GL_AMBIENT_AND_DIFFUSE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_AMBIENT_AND_DIFFUSE"
		);
	}
	jint GLES10::GL_AND()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_AND"
		);
	}
	jint GLES10::GL_AND_INVERTED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_AND_INVERTED"
		);
	}
	jint GLES10::GL_AND_REVERSE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_AND_REVERSE"
		);
	}
	jint GLES10::GL_BACK()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_BACK"
		);
	}
	jint GLES10::GL_BLEND()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_BLEND"
		);
	}
	jint GLES10::GL_BLUE_BITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_BLUE_BITS"
		);
	}
	jint GLES10::GL_BYTE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_BYTE"
		);
	}
	jint GLES10::GL_CCW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_CCW"
		);
	}
	jint GLES10::GL_CLAMP_TO_EDGE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_CLAMP_TO_EDGE"
		);
	}
	jint GLES10::GL_CLEAR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_CLEAR"
		);
	}
	jint GLES10::GL_COLOR_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_COLOR_ARRAY"
		);
	}
	jint GLES10::GL_COLOR_BUFFER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_COLOR_BUFFER_BIT"
		);
	}
	jint GLES10::GL_COLOR_LOGIC_OP()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_COLOR_LOGIC_OP"
		);
	}
	jint GLES10::GL_COLOR_MATERIAL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_COLOR_MATERIAL"
		);
	}
	jint GLES10::GL_COMPRESSED_TEXTURE_FORMATS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_COMPRESSED_TEXTURE_FORMATS"
		);
	}
	jint GLES10::GL_CONSTANT_ATTENUATION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_CONSTANT_ATTENUATION"
		);
	}
	jint GLES10::GL_COPY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_COPY"
		);
	}
	jint GLES10::GL_COPY_INVERTED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_COPY_INVERTED"
		);
	}
	jint GLES10::GL_CULL_FACE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_CULL_FACE"
		);
	}
	jint GLES10::GL_CW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_CW"
		);
	}
	jint GLES10::GL_DECAL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_DECAL"
		);
	}
	jint GLES10::GL_DECR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_DECR"
		);
	}
	jint GLES10::GL_DEPTH_BITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_DEPTH_BITS"
		);
	}
	jint GLES10::GL_DEPTH_BUFFER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_DEPTH_BUFFER_BIT"
		);
	}
	jint GLES10::GL_DEPTH_TEST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_DEPTH_TEST"
		);
	}
	jint GLES10::GL_DIFFUSE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_DIFFUSE"
		);
	}
	jint GLES10::GL_DITHER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_DITHER"
		);
	}
	jint GLES10::GL_DONT_CARE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_DONT_CARE"
		);
	}
	jint GLES10::GL_DST_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_DST_ALPHA"
		);
	}
	jint GLES10::GL_DST_COLOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_DST_COLOR"
		);
	}
	jint GLES10::GL_EMISSION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_EMISSION"
		);
	}
	jint GLES10::GL_EQUAL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_EQUAL"
		);
	}
	jint GLES10::GL_EQUIV()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_EQUIV"
		);
	}
	jint GLES10::GL_EXP()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_EXP"
		);
	}
	jint GLES10::GL_EXP2()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_EXP2"
		);
	}
	jint GLES10::GL_EXTENSIONS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_EXTENSIONS"
		);
	}
	jint GLES10::GL_FALSE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FALSE"
		);
	}
	jint GLES10::GL_FASTEST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FASTEST"
		);
	}
	jint GLES10::GL_FIXED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FIXED"
		);
	}
	jint GLES10::GL_FLAT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FLAT"
		);
	}
	jint GLES10::GL_FLOAT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FLOAT"
		);
	}
	jint GLES10::GL_FOG()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FOG"
		);
	}
	jint GLES10::GL_FOG_COLOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FOG_COLOR"
		);
	}
	jint GLES10::GL_FOG_DENSITY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FOG_DENSITY"
		);
	}
	jint GLES10::GL_FOG_END()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FOG_END"
		);
	}
	jint GLES10::GL_FOG_HINT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FOG_HINT"
		);
	}
	jint GLES10::GL_FOG_MODE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FOG_MODE"
		);
	}
	jint GLES10::GL_FOG_START()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FOG_START"
		);
	}
	jint GLES10::GL_FRONT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FRONT"
		);
	}
	jint GLES10::GL_FRONT_AND_BACK()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_FRONT_AND_BACK"
		);
	}
	jint GLES10::GL_GEQUAL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_GEQUAL"
		);
	}
	jint GLES10::GL_GREATER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_GREATER"
		);
	}
	jint GLES10::GL_GREEN_BITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_GREEN_BITS"
		);
	}
	jint GLES10::GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES"
		);
	}
	jint GLES10::GL_IMPLEMENTATION_COLOR_READ_TYPE_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_IMPLEMENTATION_COLOR_READ_TYPE_OES"
		);
	}
	jint GLES10::GL_INCR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_INCR"
		);
	}
	jint GLES10::GL_INVALID_ENUM()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_INVALID_ENUM"
		);
	}
	jint GLES10::GL_INVALID_OPERATION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_INVALID_OPERATION"
		);
	}
	jint GLES10::GL_INVALID_VALUE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_INVALID_VALUE"
		);
	}
	jint GLES10::GL_INVERT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_INVERT"
		);
	}
	jint GLES10::GL_KEEP()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_KEEP"
		);
	}
	jint GLES10::GL_LEQUAL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LEQUAL"
		);
	}
	jint GLES10::GL_LESS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LESS"
		);
	}
	jint GLES10::GL_LIGHT0()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LIGHT0"
		);
	}
	jint GLES10::GL_LIGHT1()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LIGHT1"
		);
	}
	jint GLES10::GL_LIGHT2()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LIGHT2"
		);
	}
	jint GLES10::GL_LIGHT3()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LIGHT3"
		);
	}
	jint GLES10::GL_LIGHT4()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LIGHT4"
		);
	}
	jint GLES10::GL_LIGHT5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LIGHT5"
		);
	}
	jint GLES10::GL_LIGHT6()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LIGHT6"
		);
	}
	jint GLES10::GL_LIGHT7()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LIGHT7"
		);
	}
	jint GLES10::GL_LIGHTING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LIGHTING"
		);
	}
	jint GLES10::GL_LIGHT_MODEL_AMBIENT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LIGHT_MODEL_AMBIENT"
		);
	}
	jint GLES10::GL_LIGHT_MODEL_TWO_SIDE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LIGHT_MODEL_TWO_SIDE"
		);
	}
	jint GLES10::GL_LINEAR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LINEAR"
		);
	}
	jint GLES10::GL_LINEAR_ATTENUATION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LINEAR_ATTENUATION"
		);
	}
	jint GLES10::GL_LINEAR_MIPMAP_LINEAR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LINEAR_MIPMAP_LINEAR"
		);
	}
	jint GLES10::GL_LINEAR_MIPMAP_NEAREST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LINEAR_MIPMAP_NEAREST"
		);
	}
	jint GLES10::GL_LINES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LINES"
		);
	}
	jint GLES10::GL_LINE_LOOP()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LINE_LOOP"
		);
	}
	jint GLES10::GL_LINE_SMOOTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LINE_SMOOTH"
		);
	}
	jint GLES10::GL_LINE_SMOOTH_HINT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LINE_SMOOTH_HINT"
		);
	}
	jint GLES10::GL_LINE_STRIP()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LINE_STRIP"
		);
	}
	jint GLES10::GL_LUMINANCE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LUMINANCE"
		);
	}
	jint GLES10::GL_LUMINANCE_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_LUMINANCE_ALPHA"
		);
	}
	jint GLES10::GL_MAX_ELEMENTS_INDICES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_MAX_ELEMENTS_INDICES"
		);
	}
	jint GLES10::GL_MAX_ELEMENTS_VERTICES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_MAX_ELEMENTS_VERTICES"
		);
	}
	jint GLES10::GL_MAX_LIGHTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_MAX_LIGHTS"
		);
	}
	jint GLES10::GL_MAX_MODELVIEW_STACK_DEPTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_MAX_MODELVIEW_STACK_DEPTH"
		);
	}
	jint GLES10::GL_MAX_PROJECTION_STACK_DEPTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_MAX_PROJECTION_STACK_DEPTH"
		);
	}
	jint GLES10::GL_MAX_TEXTURE_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_MAX_TEXTURE_SIZE"
		);
	}
	jint GLES10::GL_MAX_TEXTURE_STACK_DEPTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_MAX_TEXTURE_STACK_DEPTH"
		);
	}
	jint GLES10::GL_MAX_TEXTURE_UNITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_MAX_TEXTURE_UNITS"
		);
	}
	jint GLES10::GL_MAX_VIEWPORT_DIMS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_MAX_VIEWPORT_DIMS"
		);
	}
	jint GLES10::GL_MODELVIEW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_MODELVIEW"
		);
	}
	jint GLES10::GL_MODULATE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_MODULATE"
		);
	}
	jint GLES10::GL_MULTISAMPLE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_MULTISAMPLE"
		);
	}
	jint GLES10::GL_NAND()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_NAND"
		);
	}
	jint GLES10::GL_NEAREST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_NEAREST"
		);
	}
	jint GLES10::GL_NEAREST_MIPMAP_LINEAR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_NEAREST_MIPMAP_LINEAR"
		);
	}
	jint GLES10::GL_NEAREST_MIPMAP_NEAREST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_NEAREST_MIPMAP_NEAREST"
		);
	}
	jint GLES10::GL_NEVER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_NEVER"
		);
	}
	jint GLES10::GL_NICEST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_NICEST"
		);
	}
	jint GLES10::GL_NOOP()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_NOOP"
		);
	}
	jint GLES10::GL_NOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_NOR"
		);
	}
	jint GLES10::GL_NORMALIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_NORMALIZE"
		);
	}
	jint GLES10::GL_NORMAL_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_NORMAL_ARRAY"
		);
	}
	jint GLES10::GL_NOTEQUAL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_NOTEQUAL"
		);
	}
	jint GLES10::GL_NO_ERROR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_NO_ERROR"
		);
	}
	jint GLES10::GL_NUM_COMPRESSED_TEXTURE_FORMATS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_NUM_COMPRESSED_TEXTURE_FORMATS"
		);
	}
	jint GLES10::GL_ONE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_ONE"
		);
	}
	jint GLES10::GL_ONE_MINUS_DST_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_ONE_MINUS_DST_ALPHA"
		);
	}
	jint GLES10::GL_ONE_MINUS_DST_COLOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_ONE_MINUS_DST_COLOR"
		);
	}
	jint GLES10::GL_ONE_MINUS_SRC_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_ONE_MINUS_SRC_ALPHA"
		);
	}
	jint GLES10::GL_ONE_MINUS_SRC_COLOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_ONE_MINUS_SRC_COLOR"
		);
	}
	jint GLES10::GL_OR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_OR"
		);
	}
	jint GLES10::GL_OR_INVERTED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_OR_INVERTED"
		);
	}
	jint GLES10::GL_OR_REVERSE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_OR_REVERSE"
		);
	}
	jint GLES10::GL_OUT_OF_MEMORY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_OUT_OF_MEMORY"
		);
	}
	jint GLES10::GL_PACK_ALIGNMENT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_PACK_ALIGNMENT"
		);
	}
	jint GLES10::GL_PALETTE4_R5_G6_B5_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_PALETTE4_R5_G6_B5_OES"
		);
	}
	jint GLES10::GL_PALETTE4_RGB5_A1_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_PALETTE4_RGB5_A1_OES"
		);
	}
	jint GLES10::GL_PALETTE4_RGB8_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_PALETTE4_RGB8_OES"
		);
	}
	jint GLES10::GL_PALETTE4_RGBA4_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_PALETTE4_RGBA4_OES"
		);
	}
	jint GLES10::GL_PALETTE4_RGBA8_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_PALETTE4_RGBA8_OES"
		);
	}
	jint GLES10::GL_PALETTE8_R5_G6_B5_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_PALETTE8_R5_G6_B5_OES"
		);
	}
	jint GLES10::GL_PALETTE8_RGB5_A1_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_PALETTE8_RGB5_A1_OES"
		);
	}
	jint GLES10::GL_PALETTE8_RGB8_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_PALETTE8_RGB8_OES"
		);
	}
	jint GLES10::GL_PALETTE8_RGBA4_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_PALETTE8_RGBA4_OES"
		);
	}
	jint GLES10::GL_PALETTE8_RGBA8_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_PALETTE8_RGBA8_OES"
		);
	}
	jint GLES10::GL_PERSPECTIVE_CORRECTION_HINT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_PERSPECTIVE_CORRECTION_HINT"
		);
	}
	jint GLES10::GL_POINTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_POINTS"
		);
	}
	jint GLES10::GL_POINT_FADE_THRESHOLD_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_POINT_FADE_THRESHOLD_SIZE"
		);
	}
	jint GLES10::GL_POINT_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_POINT_SIZE"
		);
	}
	jint GLES10::GL_POINT_SMOOTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_POINT_SMOOTH"
		);
	}
	jint GLES10::GL_POINT_SMOOTH_HINT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_POINT_SMOOTH_HINT"
		);
	}
	jint GLES10::GL_POLYGON_OFFSET_FILL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_POLYGON_OFFSET_FILL"
		);
	}
	jint GLES10::GL_POLYGON_SMOOTH_HINT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_POLYGON_SMOOTH_HINT"
		);
	}
	jint GLES10::GL_POSITION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_POSITION"
		);
	}
	jint GLES10::GL_PROJECTION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_PROJECTION"
		);
	}
	jint GLES10::GL_QUADRATIC_ATTENUATION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_QUADRATIC_ATTENUATION"
		);
	}
	jint GLES10::GL_RED_BITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_RED_BITS"
		);
	}
	jint GLES10::GL_RENDERER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_RENDERER"
		);
	}
	jint GLES10::GL_REPEAT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_REPEAT"
		);
	}
	jint GLES10::GL_REPLACE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_REPLACE"
		);
	}
	jint GLES10::GL_RESCALE_NORMAL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_RESCALE_NORMAL"
		);
	}
	jint GLES10::GL_RGB()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_RGB"
		);
	}
	jint GLES10::GL_RGBA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_RGBA"
		);
	}
	jint GLES10::GL_SAMPLE_ALPHA_TO_COVERAGE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SAMPLE_ALPHA_TO_COVERAGE"
		);
	}
	jint GLES10::GL_SAMPLE_ALPHA_TO_ONE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SAMPLE_ALPHA_TO_ONE"
		);
	}
	jint GLES10::GL_SAMPLE_COVERAGE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SAMPLE_COVERAGE"
		);
	}
	jint GLES10::GL_SCISSOR_TEST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SCISSOR_TEST"
		);
	}
	jint GLES10::GL_SET()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SET"
		);
	}
	jint GLES10::GL_SHININESS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SHININESS"
		);
	}
	jint GLES10::GL_SHORT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SHORT"
		);
	}
	jint GLES10::GL_SMOOTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SMOOTH"
		);
	}
	jint GLES10::GL_SMOOTH_LINE_WIDTH_RANGE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SMOOTH_LINE_WIDTH_RANGE"
		);
	}
	jint GLES10::GL_SMOOTH_POINT_SIZE_RANGE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SMOOTH_POINT_SIZE_RANGE"
		);
	}
	jint GLES10::GL_SPECULAR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SPECULAR"
		);
	}
	jint GLES10::GL_SPOT_CUTOFF()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SPOT_CUTOFF"
		);
	}
	jint GLES10::GL_SPOT_DIRECTION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SPOT_DIRECTION"
		);
	}
	jint GLES10::GL_SPOT_EXPONENT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SPOT_EXPONENT"
		);
	}
	jint GLES10::GL_SRC_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SRC_ALPHA"
		);
	}
	jint GLES10::GL_SRC_ALPHA_SATURATE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SRC_ALPHA_SATURATE"
		);
	}
	jint GLES10::GL_SRC_COLOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SRC_COLOR"
		);
	}
	jint GLES10::GL_STACK_OVERFLOW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_STACK_OVERFLOW"
		);
	}
	jint GLES10::GL_STACK_UNDERFLOW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_STACK_UNDERFLOW"
		);
	}
	jint GLES10::GL_STENCIL_BITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_STENCIL_BITS"
		);
	}
	jint GLES10::GL_STENCIL_BUFFER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_STENCIL_BUFFER_BIT"
		);
	}
	jint GLES10::GL_STENCIL_TEST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_STENCIL_TEST"
		);
	}
	jint GLES10::GL_SUBPIXEL_BITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_SUBPIXEL_BITS"
		);
	}
	jint GLES10::GL_TEXTURE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE"
		);
	}
	jint GLES10::GL_TEXTURE0()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE0"
		);
	}
	jint GLES10::GL_TEXTURE1()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE1"
		);
	}
	jint GLES10::GL_TEXTURE10()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE10"
		);
	}
	jint GLES10::GL_TEXTURE11()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE11"
		);
	}
	jint GLES10::GL_TEXTURE12()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE12"
		);
	}
	jint GLES10::GL_TEXTURE13()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE13"
		);
	}
	jint GLES10::GL_TEXTURE14()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE14"
		);
	}
	jint GLES10::GL_TEXTURE15()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE15"
		);
	}
	jint GLES10::GL_TEXTURE16()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE16"
		);
	}
	jint GLES10::GL_TEXTURE17()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE17"
		);
	}
	jint GLES10::GL_TEXTURE18()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE18"
		);
	}
	jint GLES10::GL_TEXTURE19()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE19"
		);
	}
	jint GLES10::GL_TEXTURE2()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE2"
		);
	}
	jint GLES10::GL_TEXTURE20()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE20"
		);
	}
	jint GLES10::GL_TEXTURE21()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE21"
		);
	}
	jint GLES10::GL_TEXTURE22()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE22"
		);
	}
	jint GLES10::GL_TEXTURE23()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE23"
		);
	}
	jint GLES10::GL_TEXTURE24()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE24"
		);
	}
	jint GLES10::GL_TEXTURE25()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE25"
		);
	}
	jint GLES10::GL_TEXTURE26()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE26"
		);
	}
	jint GLES10::GL_TEXTURE27()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE27"
		);
	}
	jint GLES10::GL_TEXTURE28()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE28"
		);
	}
	jint GLES10::GL_TEXTURE29()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE29"
		);
	}
	jint GLES10::GL_TEXTURE3()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE3"
		);
	}
	jint GLES10::GL_TEXTURE30()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE30"
		);
	}
	jint GLES10::GL_TEXTURE31()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE31"
		);
	}
	jint GLES10::GL_TEXTURE4()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE4"
		);
	}
	jint GLES10::GL_TEXTURE5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE5"
		);
	}
	jint GLES10::GL_TEXTURE6()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE6"
		);
	}
	jint GLES10::GL_TEXTURE7()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE7"
		);
	}
	jint GLES10::GL_TEXTURE8()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE8"
		);
	}
	jint GLES10::GL_TEXTURE9()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE9"
		);
	}
	jint GLES10::GL_TEXTURE_2D()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE_2D"
		);
	}
	jint GLES10::GL_TEXTURE_COORD_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE_COORD_ARRAY"
		);
	}
	jint GLES10::GL_TEXTURE_ENV()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE_ENV"
		);
	}
	jint GLES10::GL_TEXTURE_ENV_COLOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE_ENV_COLOR"
		);
	}
	jint GLES10::GL_TEXTURE_ENV_MODE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE_ENV_MODE"
		);
	}
	jint GLES10::GL_TEXTURE_MAG_FILTER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE_MAG_FILTER"
		);
	}
	jint GLES10::GL_TEXTURE_MIN_FILTER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE_MIN_FILTER"
		);
	}
	jint GLES10::GL_TEXTURE_WRAP_S()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE_WRAP_S"
		);
	}
	jint GLES10::GL_TEXTURE_WRAP_T()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TEXTURE_WRAP_T"
		);
	}
	jint GLES10::GL_TRIANGLES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TRIANGLES"
		);
	}
	jint GLES10::GL_TRIANGLE_FAN()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TRIANGLE_FAN"
		);
	}
	jint GLES10::GL_TRIANGLE_STRIP()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TRIANGLE_STRIP"
		);
	}
	jint GLES10::GL_TRUE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_TRUE"
		);
	}
	jint GLES10::GL_UNPACK_ALIGNMENT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_UNPACK_ALIGNMENT"
		);
	}
	jint GLES10::GL_UNSIGNED_BYTE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_UNSIGNED_BYTE"
		);
	}
	jint GLES10::GL_UNSIGNED_SHORT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_UNSIGNED_SHORT"
		);
	}
	jint GLES10::GL_UNSIGNED_SHORT_4_4_4_4()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_UNSIGNED_SHORT_4_4_4_4"
		);
	}
	jint GLES10::GL_UNSIGNED_SHORT_5_5_5_1()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_UNSIGNED_SHORT_5_5_5_1"
		);
	}
	jint GLES10::GL_UNSIGNED_SHORT_5_6_5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_UNSIGNED_SHORT_5_6_5"
		);
	}
	jint GLES10::GL_VENDOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_VENDOR"
		);
	}
	jint GLES10::GL_VERSION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_VERSION"
		);
	}
	jint GLES10::GL_VERTEX_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_VERTEX_ARRAY"
		);
	}
	jint GLES10::GL_XOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_XOR"
		);
	}
	jint GLES10::GL_ZERO()
	{
		return getStaticField<jint>(
			"android.opengl.GLES10",
			"GL_ZERO"
		);
	}
	
	// QAndroidJniObject forward
	GLES10::GLES10(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	GLES10::GLES10()
		: JObject(
			"android.opengl.GLES10",
			"()V"
		) {}
	
	// Methods
	void GLES10::glActiveTexture(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glActiveTexture",
			"(I)V",
			arg0
		);
	}
	void GLES10::glAlphaFunc(jint arg0, jfloat arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glAlphaFunc",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void GLES10::glAlphaFuncx(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glAlphaFuncx",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES10::glBindTexture(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glBindTexture",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES10::glBlendFunc(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glBlendFunc",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES10::glClear(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glClear",
			"(I)V",
			arg0
		);
	}
	void GLES10::glClearColor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
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
	void GLES10::glClearColorx(jint arg0, jint arg1, jint arg2, jint arg3)
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
	void GLES10::glClearDepthf(jfloat arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glClearDepthf",
			"(F)V",
			arg0
		);
	}
	void GLES10::glClearDepthx(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glClearDepthx",
			"(I)V",
			arg0
		);
	}
	void GLES10::glClearStencil(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glClearStencil",
			"(I)V",
			arg0
		);
	}
	void GLES10::glClientActiveTexture(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glClientActiveTexture",
			"(I)V",
			arg0
		);
	}
	void GLES10::glColor4f(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
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
	void GLES10::glColor4x(jint arg0, jint arg1, jint arg2, jint arg3)
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
	void GLES10::glColorMask(jboolean arg0, jboolean arg1, jboolean arg2, jboolean arg3)
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
	void GLES10::glColorPointer(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3)
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
	void GLES10::glCompressedTexImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, java::nio::Buffer arg7)
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
	void GLES10::glCompressedTexSubImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, java::nio::Buffer arg8)
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
	void GLES10::glCopyTexImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7)
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
	void GLES10::glCopyTexSubImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7)
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
	void GLES10::glCullFace(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glCullFace",
			"(I)V",
			arg0
		);
	}
	void GLES10::glDeleteTextures(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glDeleteTextures",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES10::glDeleteTextures(jint arg0, jintArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glDeleteTextures",
			"(I[II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES10::glDepthFunc(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glDepthFunc",
			"(I)V",
			arg0
		);
	}
	void GLES10::glDepthMask(jboolean arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glDepthMask",
			"(Z)V",
			arg0
		);
	}
	void GLES10::glDepthRangef(jfloat arg0, jfloat arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glDepthRangef",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void GLES10::glDepthRangex(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glDepthRangex",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES10::glDisable(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glDisable",
			"(I)V",
			arg0
		);
	}
	void GLES10::glDisableClientState(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glDisableClientState",
			"(I)V",
			arg0
		);
	}
	void GLES10::glDrawArrays(jint arg0, jint arg1, jint arg2)
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
	void GLES10::glDrawElements(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3)
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
	void GLES10::glEnable(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glEnable",
			"(I)V",
			arg0
		);
	}
	void GLES10::glEnableClientState(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glEnableClientState",
			"(I)V",
			arg0
		);
	}
	void GLES10::glFinish()
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glFinish",
			"()V"
		);
	}
	void GLES10::glFlush()
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glFlush",
			"()V"
		);
	}
	void GLES10::glFogf(jint arg0, jfloat arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glFogf",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void GLES10::glFogfv(jint arg0, java::nio::FloatBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glFogfv",
			"(ILjava/nio/FloatBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES10::glFogfv(jint arg0, jfloatArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glFogfv",
			"(I[FI)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES10::glFogx(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glFogx",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES10::glFogxv(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glFogxv",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES10::glFogxv(jint arg0, jintArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glFogxv",
			"(I[II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES10::glFrontFace(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glFrontFace",
			"(I)V",
			arg0
		);
	}
	void GLES10::glFrustumf(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5)
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
	void GLES10::glFrustumx(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
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
	void GLES10::glGenTextures(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glGenTextures",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES10::glGenTextures(jint arg0, jintArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glGenTextures",
			"(I[II)V",
			arg0,
			arg1,
			arg2
		);
	}
	jint GLES10::glGetError()
	{
		return callStaticMethod<jint>(
			"android.opengl.GLES10",
			"glGetError",
			"()I"
		);
	}
	void GLES10::glGetIntegerv(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glGetIntegerv",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES10::glGetIntegerv(jint arg0, jintArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glGetIntegerv",
			"(I[II)V",
			arg0,
			arg1,
			arg2
		);
	}
	jstring GLES10::glGetString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.opengl.GLES10",
			"glGetString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	void GLES10::glHint(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glHint",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES10::glLightModelf(jint arg0, jfloat arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLightModelf",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void GLES10::glLightModelfv(jint arg0, java::nio::FloatBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLightModelfv",
			"(ILjava/nio/FloatBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES10::glLightModelfv(jint arg0, jfloatArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLightModelfv",
			"(I[FI)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES10::glLightModelx(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLightModelx",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES10::glLightModelxv(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLightModelxv",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES10::glLightModelxv(jint arg0, jintArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLightModelxv",
			"(I[II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES10::glLightf(jint arg0, jint arg1, jfloat arg2)
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
	void GLES10::glLightfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2)
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
	void GLES10::glLightfv(jint arg0, jint arg1, jfloatArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLightfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES10::glLightx(jint arg0, jint arg1, jint arg2)
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
	void GLES10::glLightxv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
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
	void GLES10::glLightxv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLightxv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES10::glLineWidth(jfloat arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLineWidth",
			"(F)V",
			arg0
		);
	}
	void GLES10::glLineWidthx(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLineWidthx",
			"(I)V",
			arg0
		);
	}
	void GLES10::glLoadIdentity()
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLoadIdentity",
			"()V"
		);
	}
	void GLES10::glLoadMatrixf(java::nio::FloatBuffer arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLoadMatrixf",
			"(Ljava/nio/FloatBuffer;)V",
			arg0.object()
		);
	}
	void GLES10::glLoadMatrixf(jfloatArray arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLoadMatrixf",
			"([FI)V",
			arg0,
			arg1
		);
	}
	void GLES10::glLoadMatrixx(java::nio::IntBuffer arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLoadMatrixx",
			"(Ljava/nio/IntBuffer;)V",
			arg0.object()
		);
	}
	void GLES10::glLoadMatrixx(jintArray arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLoadMatrixx",
			"([II)V",
			arg0,
			arg1
		);
	}
	void GLES10::glLogicOp(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glLogicOp",
			"(I)V",
			arg0
		);
	}
	void GLES10::glMaterialf(jint arg0, jint arg1, jfloat arg2)
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
	void GLES10::glMaterialfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2)
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
	void GLES10::glMaterialfv(jint arg0, jint arg1, jfloatArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glMaterialfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES10::glMaterialx(jint arg0, jint arg1, jint arg2)
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
	void GLES10::glMaterialxv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
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
	void GLES10::glMaterialxv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glMaterialxv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES10::glMatrixMode(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glMatrixMode",
			"(I)V",
			arg0
		);
	}
	void GLES10::glMultMatrixf(java::nio::FloatBuffer arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glMultMatrixf",
			"(Ljava/nio/FloatBuffer;)V",
			arg0.object()
		);
	}
	void GLES10::glMultMatrixf(jfloatArray arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glMultMatrixf",
			"([FI)V",
			arg0,
			arg1
		);
	}
	void GLES10::glMultMatrixx(java::nio::IntBuffer arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glMultMatrixx",
			"(Ljava/nio/IntBuffer;)V",
			arg0.object()
		);
	}
	void GLES10::glMultMatrixx(jintArray arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glMultMatrixx",
			"([II)V",
			arg0,
			arg1
		);
	}
	void GLES10::glMultiTexCoord4f(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4)
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
	void GLES10::glMultiTexCoord4x(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
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
	void GLES10::glNormal3f(jfloat arg0, jfloat arg1, jfloat arg2)
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
	void GLES10::glNormal3x(jint arg0, jint arg1, jint arg2)
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
	void GLES10::glNormalPointer(jint arg0, jint arg1, java::nio::Buffer arg2)
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
	void GLES10::glOrthof(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5)
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
	void GLES10::glOrthox(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
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
	void GLES10::glPixelStorei(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glPixelStorei",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES10::glPointSize(jfloat arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glPointSize",
			"(F)V",
			arg0
		);
	}
	void GLES10::glPointSizex(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glPointSizex",
			"(I)V",
			arg0
		);
	}
	void GLES10::glPolygonOffset(jfloat arg0, jfloat arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glPolygonOffset",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void GLES10::glPolygonOffsetx(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glPolygonOffsetx",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES10::glPopMatrix()
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glPopMatrix",
			"()V"
		);
	}
	void GLES10::glPushMatrix()
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glPushMatrix",
			"()V"
		);
	}
	void GLES10::glReadPixels(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, java::nio::Buffer arg6)
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
	void GLES10::glRotatef(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
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
	void GLES10::glRotatex(jint arg0, jint arg1, jint arg2, jint arg3)
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
	void GLES10::glSampleCoverage(jfloat arg0, jboolean arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glSampleCoverage",
			"(FZ)V",
			arg0,
			arg1
		);
	}
	void GLES10::glSampleCoveragex(jint arg0, jboolean arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glSampleCoveragex",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void GLES10::glScalef(jfloat arg0, jfloat arg1, jfloat arg2)
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
	void GLES10::glScalex(jint arg0, jint arg1, jint arg2)
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
	void GLES10::glScissor(jint arg0, jint arg1, jint arg2, jint arg3)
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
	void GLES10::glShadeModel(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glShadeModel",
			"(I)V",
			arg0
		);
	}
	void GLES10::glStencilFunc(jint arg0, jint arg1, jint arg2)
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
	void GLES10::glStencilMask(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glStencilMask",
			"(I)V",
			arg0
		);
	}
	void GLES10::glStencilOp(jint arg0, jint arg1, jint arg2)
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
	void GLES10::glTexCoordPointer(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3)
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
	void GLES10::glTexEnvf(jint arg0, jint arg1, jfloat arg2)
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
	void GLES10::glTexEnvfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2)
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
	void GLES10::glTexEnvfv(jint arg0, jint arg1, jfloatArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glTexEnvfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES10::glTexEnvx(jint arg0, jint arg1, jint arg2)
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
	void GLES10::glTexEnvxv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
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
	void GLES10::glTexEnvxv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES10",
			"glTexEnvxv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES10::glTexImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, java::nio::Buffer arg8)
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
	void GLES10::glTexParameterf(jint arg0, jint arg1, jfloat arg2)
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
	void GLES10::glTexParameterx(jint arg0, jint arg1, jint arg2)
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
	void GLES10::glTexSubImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, java::nio::Buffer arg8)
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
	void GLES10::glTranslatef(jfloat arg0, jfloat arg1, jfloat arg2)
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
	void GLES10::glTranslatex(jint arg0, jint arg1, jint arg2)
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
	void GLES10::glVertexPointer(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3)
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
	void GLES10::glViewport(jint arg0, jint arg1, jint arg2, jint arg3)
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

