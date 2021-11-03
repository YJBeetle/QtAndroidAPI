#include "../../JByteArray.hpp"
#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JBooleanArray.hpp"
#include "../../JString.hpp"
#include "../../java/nio/Buffer.hpp"
#include "../../java/nio/FloatBuffer.hpp"
#include "../../java/nio/IntBuffer.hpp"
#include "./GLES20.hpp"

namespace android::opengl
{
	// Fields
	jint GLES20::GL_ACTIVE_ATTRIBUTES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ACTIVE_ATTRIBUTES"
		);
	}
	jint GLES20::GL_ACTIVE_ATTRIBUTE_MAX_LENGTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ACTIVE_ATTRIBUTE_MAX_LENGTH"
		);
	}
	jint GLES20::GL_ACTIVE_TEXTURE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ACTIVE_TEXTURE"
		);
	}
	jint GLES20::GL_ACTIVE_UNIFORMS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ACTIVE_UNIFORMS"
		);
	}
	jint GLES20::GL_ACTIVE_UNIFORM_MAX_LENGTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ACTIVE_UNIFORM_MAX_LENGTH"
		);
	}
	jint GLES20::GL_ALIASED_LINE_WIDTH_RANGE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ALIASED_LINE_WIDTH_RANGE"
		);
	}
	jint GLES20::GL_ALIASED_POINT_SIZE_RANGE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ALIASED_POINT_SIZE_RANGE"
		);
	}
	jint GLES20::GL_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ALPHA"
		);
	}
	jint GLES20::GL_ALPHA_BITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ALPHA_BITS"
		);
	}
	jint GLES20::GL_ALWAYS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ALWAYS"
		);
	}
	jint GLES20::GL_ARRAY_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ARRAY_BUFFER"
		);
	}
	jint GLES20::GL_ARRAY_BUFFER_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ARRAY_BUFFER_BINDING"
		);
	}
	jint GLES20::GL_ATTACHED_SHADERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ATTACHED_SHADERS"
		);
	}
	jint GLES20::GL_BACK()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BACK"
		);
	}
	jint GLES20::GL_BLEND()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BLEND"
		);
	}
	jint GLES20::GL_BLEND_COLOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BLEND_COLOR"
		);
	}
	jint GLES20::GL_BLEND_DST_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BLEND_DST_ALPHA"
		);
	}
	jint GLES20::GL_BLEND_DST_RGB()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BLEND_DST_RGB"
		);
	}
	jint GLES20::GL_BLEND_EQUATION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BLEND_EQUATION"
		);
	}
	jint GLES20::GL_BLEND_EQUATION_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BLEND_EQUATION_ALPHA"
		);
	}
	jint GLES20::GL_BLEND_EQUATION_RGB()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BLEND_EQUATION_RGB"
		);
	}
	jint GLES20::GL_BLEND_SRC_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BLEND_SRC_ALPHA"
		);
	}
	jint GLES20::GL_BLEND_SRC_RGB()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BLEND_SRC_RGB"
		);
	}
	jint GLES20::GL_BLUE_BITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BLUE_BITS"
		);
	}
	jint GLES20::GL_BOOL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BOOL"
		);
	}
	jint GLES20::GL_BOOL_VEC2()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BOOL_VEC2"
		);
	}
	jint GLES20::GL_BOOL_VEC3()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BOOL_VEC3"
		);
	}
	jint GLES20::GL_BOOL_VEC4()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BOOL_VEC4"
		);
	}
	jint GLES20::GL_BUFFER_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BUFFER_SIZE"
		);
	}
	jint GLES20::GL_BUFFER_USAGE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BUFFER_USAGE"
		);
	}
	jint GLES20::GL_BYTE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BYTE"
		);
	}
	jint GLES20::GL_CCW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_CCW"
		);
	}
	jint GLES20::GL_CLAMP_TO_EDGE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_CLAMP_TO_EDGE"
		);
	}
	jint GLES20::GL_COLOR_ATTACHMENT0()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_COLOR_ATTACHMENT0"
		);
	}
	jint GLES20::GL_COLOR_BUFFER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_COLOR_BUFFER_BIT"
		);
	}
	jint GLES20::GL_COLOR_CLEAR_VALUE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_COLOR_CLEAR_VALUE"
		);
	}
	jint GLES20::GL_COLOR_WRITEMASK()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_COLOR_WRITEMASK"
		);
	}
	jint GLES20::GL_COMPILE_STATUS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_COMPILE_STATUS"
		);
	}
	jint GLES20::GL_COMPRESSED_TEXTURE_FORMATS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_COMPRESSED_TEXTURE_FORMATS"
		);
	}
	jint GLES20::GL_CONSTANT_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_CONSTANT_ALPHA"
		);
	}
	jint GLES20::GL_CONSTANT_COLOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_CONSTANT_COLOR"
		);
	}
	jint GLES20::GL_CULL_FACE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_CULL_FACE"
		);
	}
	jint GLES20::GL_CULL_FACE_MODE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_CULL_FACE_MODE"
		);
	}
	jint GLES20::GL_CURRENT_PROGRAM()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_CURRENT_PROGRAM"
		);
	}
	jint GLES20::GL_CURRENT_VERTEX_ATTRIB()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_CURRENT_VERTEX_ATTRIB"
		);
	}
	jint GLES20::GL_CW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_CW"
		);
	}
	jint GLES20::GL_DECR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DECR"
		);
	}
	jint GLES20::GL_DECR_WRAP()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DECR_WRAP"
		);
	}
	jint GLES20::GL_DELETE_STATUS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DELETE_STATUS"
		);
	}
	jint GLES20::GL_DEPTH_ATTACHMENT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DEPTH_ATTACHMENT"
		);
	}
	jint GLES20::GL_DEPTH_BITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DEPTH_BITS"
		);
	}
	jint GLES20::GL_DEPTH_BUFFER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DEPTH_BUFFER_BIT"
		);
	}
	jint GLES20::GL_DEPTH_CLEAR_VALUE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DEPTH_CLEAR_VALUE"
		);
	}
	jint GLES20::GL_DEPTH_COMPONENT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DEPTH_COMPONENT"
		);
	}
	jint GLES20::GL_DEPTH_COMPONENT16()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DEPTH_COMPONENT16"
		);
	}
	jint GLES20::GL_DEPTH_FUNC()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DEPTH_FUNC"
		);
	}
	jint GLES20::GL_DEPTH_RANGE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DEPTH_RANGE"
		);
	}
	jint GLES20::GL_DEPTH_TEST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DEPTH_TEST"
		);
	}
	jint GLES20::GL_DEPTH_WRITEMASK()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DEPTH_WRITEMASK"
		);
	}
	jint GLES20::GL_DITHER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DITHER"
		);
	}
	jint GLES20::GL_DONT_CARE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DONT_CARE"
		);
	}
	jint GLES20::GL_DST_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DST_ALPHA"
		);
	}
	jint GLES20::GL_DST_COLOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DST_COLOR"
		);
	}
	jint GLES20::GL_DYNAMIC_DRAW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DYNAMIC_DRAW"
		);
	}
	jint GLES20::GL_ELEMENT_ARRAY_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ELEMENT_ARRAY_BUFFER"
		);
	}
	jint GLES20::GL_ELEMENT_ARRAY_BUFFER_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ELEMENT_ARRAY_BUFFER_BINDING"
		);
	}
	jint GLES20::GL_EQUAL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_EQUAL"
		);
	}
	jint GLES20::GL_EXTENSIONS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_EXTENSIONS"
		);
	}
	jint GLES20::GL_FALSE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FALSE"
		);
	}
	jint GLES20::GL_FASTEST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FASTEST"
		);
	}
	jint GLES20::GL_FIXED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FIXED"
		);
	}
	jint GLES20::GL_FLOAT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FLOAT"
		);
	}
	jint GLES20::GL_FLOAT_MAT2()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FLOAT_MAT2"
		);
	}
	jint GLES20::GL_FLOAT_MAT3()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FLOAT_MAT3"
		);
	}
	jint GLES20::GL_FLOAT_MAT4()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FLOAT_MAT4"
		);
	}
	jint GLES20::GL_FLOAT_VEC2()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FLOAT_VEC2"
		);
	}
	jint GLES20::GL_FLOAT_VEC3()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FLOAT_VEC3"
		);
	}
	jint GLES20::GL_FLOAT_VEC4()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FLOAT_VEC4"
		);
	}
	jint GLES20::GL_FRAGMENT_SHADER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRAGMENT_SHADER"
		);
	}
	jint GLES20::GL_FRAMEBUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRAMEBUFFER"
		);
	}
	jint GLES20::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME"
		);
	}
	jint GLES20::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE"
		);
	}
	jint GLES20::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE"
		);
	}
	jint GLES20::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL"
		);
	}
	jint GLES20::GL_FRAMEBUFFER_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRAMEBUFFER_BINDING"
		);
	}
	jint GLES20::GL_FRAMEBUFFER_COMPLETE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRAMEBUFFER_COMPLETE"
		);
	}
	jint GLES20::GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT"
		);
	}
	jint GLES20::GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS"
		);
	}
	jint GLES20::GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT"
		);
	}
	jint GLES20::GL_FRAMEBUFFER_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRAMEBUFFER_UNSUPPORTED"
		);
	}
	jint GLES20::GL_FRONT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRONT"
		);
	}
	jint GLES20::GL_FRONT_AND_BACK()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRONT_AND_BACK"
		);
	}
	jint GLES20::GL_FRONT_FACE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRONT_FACE"
		);
	}
	jint GLES20::GL_FUNC_ADD()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FUNC_ADD"
		);
	}
	jint GLES20::GL_FUNC_REVERSE_SUBTRACT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FUNC_REVERSE_SUBTRACT"
		);
	}
	jint GLES20::GL_FUNC_SUBTRACT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FUNC_SUBTRACT"
		);
	}
	jint GLES20::GL_GENERATE_MIPMAP_HINT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_GENERATE_MIPMAP_HINT"
		);
	}
	jint GLES20::GL_GEQUAL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_GEQUAL"
		);
	}
	jint GLES20::GL_GREATER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_GREATER"
		);
	}
	jint GLES20::GL_GREEN_BITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_GREEN_BITS"
		);
	}
	jint GLES20::GL_HIGH_FLOAT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_HIGH_FLOAT"
		);
	}
	jint GLES20::GL_HIGH_INT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_HIGH_INT"
		);
	}
	jint GLES20::GL_IMPLEMENTATION_COLOR_READ_FORMAT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_IMPLEMENTATION_COLOR_READ_FORMAT"
		);
	}
	jint GLES20::GL_IMPLEMENTATION_COLOR_READ_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_IMPLEMENTATION_COLOR_READ_TYPE"
		);
	}
	jint GLES20::GL_INCR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_INCR"
		);
	}
	jint GLES20::GL_INCR_WRAP()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_INCR_WRAP"
		);
	}
	jint GLES20::GL_INFO_LOG_LENGTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_INFO_LOG_LENGTH"
		);
	}
	jint GLES20::GL_INT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_INT"
		);
	}
	jint GLES20::GL_INT_VEC2()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_INT_VEC2"
		);
	}
	jint GLES20::GL_INT_VEC3()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_INT_VEC3"
		);
	}
	jint GLES20::GL_INT_VEC4()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_INT_VEC4"
		);
	}
	jint GLES20::GL_INVALID_ENUM()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_INVALID_ENUM"
		);
	}
	jint GLES20::GL_INVALID_FRAMEBUFFER_OPERATION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_INVALID_FRAMEBUFFER_OPERATION"
		);
	}
	jint GLES20::GL_INVALID_OPERATION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_INVALID_OPERATION"
		);
	}
	jint GLES20::GL_INVALID_VALUE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_INVALID_VALUE"
		);
	}
	jint GLES20::GL_INVERT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_INVERT"
		);
	}
	jint GLES20::GL_KEEP()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_KEEP"
		);
	}
	jint GLES20::GL_LEQUAL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LEQUAL"
		);
	}
	jint GLES20::GL_LESS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LESS"
		);
	}
	jint GLES20::GL_LINEAR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LINEAR"
		);
	}
	jint GLES20::GL_LINEAR_MIPMAP_LINEAR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LINEAR_MIPMAP_LINEAR"
		);
	}
	jint GLES20::GL_LINEAR_MIPMAP_NEAREST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LINEAR_MIPMAP_NEAREST"
		);
	}
	jint GLES20::GL_LINES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LINES"
		);
	}
	jint GLES20::GL_LINE_LOOP()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LINE_LOOP"
		);
	}
	jint GLES20::GL_LINE_STRIP()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LINE_STRIP"
		);
	}
	jint GLES20::GL_LINE_WIDTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LINE_WIDTH"
		);
	}
	jint GLES20::GL_LINK_STATUS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LINK_STATUS"
		);
	}
	jint GLES20::GL_LOW_FLOAT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LOW_FLOAT"
		);
	}
	jint GLES20::GL_LOW_INT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LOW_INT"
		);
	}
	jint GLES20::GL_LUMINANCE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LUMINANCE"
		);
	}
	jint GLES20::GL_LUMINANCE_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LUMINANCE_ALPHA"
		);
	}
	jint GLES20::GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS"
		);
	}
	jint GLES20::GL_MAX_CUBE_MAP_TEXTURE_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MAX_CUBE_MAP_TEXTURE_SIZE"
		);
	}
	jint GLES20::GL_MAX_FRAGMENT_UNIFORM_VECTORS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MAX_FRAGMENT_UNIFORM_VECTORS"
		);
	}
	jint GLES20::GL_MAX_RENDERBUFFER_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MAX_RENDERBUFFER_SIZE"
		);
	}
	jint GLES20::GL_MAX_TEXTURE_IMAGE_UNITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MAX_TEXTURE_IMAGE_UNITS"
		);
	}
	jint GLES20::GL_MAX_TEXTURE_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MAX_TEXTURE_SIZE"
		);
	}
	jint GLES20::GL_MAX_VARYING_VECTORS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MAX_VARYING_VECTORS"
		);
	}
	jint GLES20::GL_MAX_VERTEX_ATTRIBS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MAX_VERTEX_ATTRIBS"
		);
	}
	jint GLES20::GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS"
		);
	}
	jint GLES20::GL_MAX_VERTEX_UNIFORM_VECTORS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MAX_VERTEX_UNIFORM_VECTORS"
		);
	}
	jint GLES20::GL_MAX_VIEWPORT_DIMS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MAX_VIEWPORT_DIMS"
		);
	}
	jint GLES20::GL_MEDIUM_FLOAT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MEDIUM_FLOAT"
		);
	}
	jint GLES20::GL_MEDIUM_INT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MEDIUM_INT"
		);
	}
	jint GLES20::GL_MIRRORED_REPEAT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MIRRORED_REPEAT"
		);
	}
	jint GLES20::GL_NEAREST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_NEAREST"
		);
	}
	jint GLES20::GL_NEAREST_MIPMAP_LINEAR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_NEAREST_MIPMAP_LINEAR"
		);
	}
	jint GLES20::GL_NEAREST_MIPMAP_NEAREST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_NEAREST_MIPMAP_NEAREST"
		);
	}
	jint GLES20::GL_NEVER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_NEVER"
		);
	}
	jint GLES20::GL_NICEST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_NICEST"
		);
	}
	jint GLES20::GL_NONE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_NONE"
		);
	}
	jint GLES20::GL_NOTEQUAL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_NOTEQUAL"
		);
	}
	jint GLES20::GL_NO_ERROR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_NO_ERROR"
		);
	}
	jint GLES20::GL_NUM_COMPRESSED_TEXTURE_FORMATS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_NUM_COMPRESSED_TEXTURE_FORMATS"
		);
	}
	jint GLES20::GL_NUM_SHADER_BINARY_FORMATS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_NUM_SHADER_BINARY_FORMATS"
		);
	}
	jint GLES20::GL_ONE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ONE"
		);
	}
	jint GLES20::GL_ONE_MINUS_CONSTANT_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ONE_MINUS_CONSTANT_ALPHA"
		);
	}
	jint GLES20::GL_ONE_MINUS_CONSTANT_COLOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ONE_MINUS_CONSTANT_COLOR"
		);
	}
	jint GLES20::GL_ONE_MINUS_DST_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ONE_MINUS_DST_ALPHA"
		);
	}
	jint GLES20::GL_ONE_MINUS_DST_COLOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ONE_MINUS_DST_COLOR"
		);
	}
	jint GLES20::GL_ONE_MINUS_SRC_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ONE_MINUS_SRC_ALPHA"
		);
	}
	jint GLES20::GL_ONE_MINUS_SRC_COLOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ONE_MINUS_SRC_COLOR"
		);
	}
	jint GLES20::GL_OUT_OF_MEMORY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_OUT_OF_MEMORY"
		);
	}
	jint GLES20::GL_PACK_ALIGNMENT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_PACK_ALIGNMENT"
		);
	}
	jint GLES20::GL_POINTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_POINTS"
		);
	}
	jint GLES20::GL_POLYGON_OFFSET_FACTOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_POLYGON_OFFSET_FACTOR"
		);
	}
	jint GLES20::GL_POLYGON_OFFSET_FILL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_POLYGON_OFFSET_FILL"
		);
	}
	jint GLES20::GL_POLYGON_OFFSET_UNITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_POLYGON_OFFSET_UNITS"
		);
	}
	jint GLES20::GL_RED_BITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RED_BITS"
		);
	}
	jint GLES20::GL_RENDERBUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RENDERBUFFER"
		);
	}
	jint GLES20::GL_RENDERBUFFER_ALPHA_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RENDERBUFFER_ALPHA_SIZE"
		);
	}
	jint GLES20::GL_RENDERBUFFER_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RENDERBUFFER_BINDING"
		);
	}
	jint GLES20::GL_RENDERBUFFER_BLUE_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RENDERBUFFER_BLUE_SIZE"
		);
	}
	jint GLES20::GL_RENDERBUFFER_DEPTH_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RENDERBUFFER_DEPTH_SIZE"
		);
	}
	jint GLES20::GL_RENDERBUFFER_GREEN_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RENDERBUFFER_GREEN_SIZE"
		);
	}
	jint GLES20::GL_RENDERBUFFER_HEIGHT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RENDERBUFFER_HEIGHT"
		);
	}
	jint GLES20::GL_RENDERBUFFER_INTERNAL_FORMAT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RENDERBUFFER_INTERNAL_FORMAT"
		);
	}
	jint GLES20::GL_RENDERBUFFER_RED_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RENDERBUFFER_RED_SIZE"
		);
	}
	jint GLES20::GL_RENDERBUFFER_STENCIL_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RENDERBUFFER_STENCIL_SIZE"
		);
	}
	jint GLES20::GL_RENDERBUFFER_WIDTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RENDERBUFFER_WIDTH"
		);
	}
	jint GLES20::GL_RENDERER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RENDERER"
		);
	}
	jint GLES20::GL_REPEAT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_REPEAT"
		);
	}
	jint GLES20::GL_REPLACE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_REPLACE"
		);
	}
	jint GLES20::GL_RGB()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RGB"
		);
	}
	jint GLES20::GL_RGB565()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RGB565"
		);
	}
	jint GLES20::GL_RGB5_A1()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RGB5_A1"
		);
	}
	jint GLES20::GL_RGBA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RGBA"
		);
	}
	jint GLES20::GL_RGBA4()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RGBA4"
		);
	}
	jint GLES20::GL_SAMPLER_2D()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SAMPLER_2D"
		);
	}
	jint GLES20::GL_SAMPLER_CUBE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SAMPLER_CUBE"
		);
	}
	jint GLES20::GL_SAMPLES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SAMPLES"
		);
	}
	jint GLES20::GL_SAMPLE_ALPHA_TO_COVERAGE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SAMPLE_ALPHA_TO_COVERAGE"
		);
	}
	jint GLES20::GL_SAMPLE_BUFFERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SAMPLE_BUFFERS"
		);
	}
	jint GLES20::GL_SAMPLE_COVERAGE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SAMPLE_COVERAGE"
		);
	}
	jint GLES20::GL_SAMPLE_COVERAGE_INVERT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SAMPLE_COVERAGE_INVERT"
		);
	}
	jint GLES20::GL_SAMPLE_COVERAGE_VALUE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SAMPLE_COVERAGE_VALUE"
		);
	}
	jint GLES20::GL_SCISSOR_BOX()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SCISSOR_BOX"
		);
	}
	jint GLES20::GL_SCISSOR_TEST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SCISSOR_TEST"
		);
	}
	jint GLES20::GL_SHADER_BINARY_FORMATS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SHADER_BINARY_FORMATS"
		);
	}
	jint GLES20::GL_SHADER_COMPILER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SHADER_COMPILER"
		);
	}
	jint GLES20::GL_SHADER_SOURCE_LENGTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SHADER_SOURCE_LENGTH"
		);
	}
	jint GLES20::GL_SHADER_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SHADER_TYPE"
		);
	}
	jint GLES20::GL_SHADING_LANGUAGE_VERSION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SHADING_LANGUAGE_VERSION"
		);
	}
	jint GLES20::GL_SHORT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SHORT"
		);
	}
	jint GLES20::GL_SRC_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SRC_ALPHA"
		);
	}
	jint GLES20::GL_SRC_ALPHA_SATURATE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SRC_ALPHA_SATURATE"
		);
	}
	jint GLES20::GL_SRC_COLOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SRC_COLOR"
		);
	}
	jint GLES20::GL_STATIC_DRAW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STATIC_DRAW"
		);
	}
	jint GLES20::GL_STENCIL_ATTACHMENT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_ATTACHMENT"
		);
	}
	jint GLES20::GL_STENCIL_BACK_FAIL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_BACK_FAIL"
		);
	}
	jint GLES20::GL_STENCIL_BACK_FUNC()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_BACK_FUNC"
		);
	}
	jint GLES20::GL_STENCIL_BACK_PASS_DEPTH_FAIL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_BACK_PASS_DEPTH_FAIL"
		);
	}
	jint GLES20::GL_STENCIL_BACK_PASS_DEPTH_PASS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_BACK_PASS_DEPTH_PASS"
		);
	}
	jint GLES20::GL_STENCIL_BACK_REF()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_BACK_REF"
		);
	}
	jint GLES20::GL_STENCIL_BACK_VALUE_MASK()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_BACK_VALUE_MASK"
		);
	}
	jint GLES20::GL_STENCIL_BACK_WRITEMASK()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_BACK_WRITEMASK"
		);
	}
	jint GLES20::GL_STENCIL_BITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_BITS"
		);
	}
	jint GLES20::GL_STENCIL_BUFFER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_BUFFER_BIT"
		);
	}
	jint GLES20::GL_STENCIL_CLEAR_VALUE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_CLEAR_VALUE"
		);
	}
	jint GLES20::GL_STENCIL_FAIL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_FAIL"
		);
	}
	jint GLES20::GL_STENCIL_FUNC()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_FUNC"
		);
	}
	jint GLES20::GL_STENCIL_INDEX()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_INDEX"
		);
	}
	jint GLES20::GL_STENCIL_INDEX8()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_INDEX8"
		);
	}
	jint GLES20::GL_STENCIL_PASS_DEPTH_FAIL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_PASS_DEPTH_FAIL"
		);
	}
	jint GLES20::GL_STENCIL_PASS_DEPTH_PASS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_PASS_DEPTH_PASS"
		);
	}
	jint GLES20::GL_STENCIL_REF()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_REF"
		);
	}
	jint GLES20::GL_STENCIL_TEST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_TEST"
		);
	}
	jint GLES20::GL_STENCIL_VALUE_MASK()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_VALUE_MASK"
		);
	}
	jint GLES20::GL_STENCIL_WRITEMASK()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_WRITEMASK"
		);
	}
	jint GLES20::GL_STREAM_DRAW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STREAM_DRAW"
		);
	}
	jint GLES20::GL_SUBPIXEL_BITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SUBPIXEL_BITS"
		);
	}
	jint GLES20::GL_TEXTURE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE"
		);
	}
	jint GLES20::GL_TEXTURE0()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE0"
		);
	}
	jint GLES20::GL_TEXTURE1()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE1"
		);
	}
	jint GLES20::GL_TEXTURE10()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE10"
		);
	}
	jint GLES20::GL_TEXTURE11()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE11"
		);
	}
	jint GLES20::GL_TEXTURE12()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE12"
		);
	}
	jint GLES20::GL_TEXTURE13()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE13"
		);
	}
	jint GLES20::GL_TEXTURE14()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE14"
		);
	}
	jint GLES20::GL_TEXTURE15()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE15"
		);
	}
	jint GLES20::GL_TEXTURE16()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE16"
		);
	}
	jint GLES20::GL_TEXTURE17()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE17"
		);
	}
	jint GLES20::GL_TEXTURE18()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE18"
		);
	}
	jint GLES20::GL_TEXTURE19()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE19"
		);
	}
	jint GLES20::GL_TEXTURE2()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE2"
		);
	}
	jint GLES20::GL_TEXTURE20()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE20"
		);
	}
	jint GLES20::GL_TEXTURE21()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE21"
		);
	}
	jint GLES20::GL_TEXTURE22()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE22"
		);
	}
	jint GLES20::GL_TEXTURE23()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE23"
		);
	}
	jint GLES20::GL_TEXTURE24()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE24"
		);
	}
	jint GLES20::GL_TEXTURE25()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE25"
		);
	}
	jint GLES20::GL_TEXTURE26()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE26"
		);
	}
	jint GLES20::GL_TEXTURE27()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE27"
		);
	}
	jint GLES20::GL_TEXTURE28()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE28"
		);
	}
	jint GLES20::GL_TEXTURE29()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE29"
		);
	}
	jint GLES20::GL_TEXTURE3()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE3"
		);
	}
	jint GLES20::GL_TEXTURE30()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE30"
		);
	}
	jint GLES20::GL_TEXTURE31()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE31"
		);
	}
	jint GLES20::GL_TEXTURE4()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE4"
		);
	}
	jint GLES20::GL_TEXTURE5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE5"
		);
	}
	jint GLES20::GL_TEXTURE6()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE6"
		);
	}
	jint GLES20::GL_TEXTURE7()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE7"
		);
	}
	jint GLES20::GL_TEXTURE8()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE8"
		);
	}
	jint GLES20::GL_TEXTURE9()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE9"
		);
	}
	jint GLES20::GL_TEXTURE_2D()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_2D"
		);
	}
	jint GLES20::GL_TEXTURE_BINDING_2D()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_BINDING_2D"
		);
	}
	jint GLES20::GL_TEXTURE_BINDING_CUBE_MAP()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_BINDING_CUBE_MAP"
		);
	}
	jint GLES20::GL_TEXTURE_CUBE_MAP()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_CUBE_MAP"
		);
	}
	jint GLES20::GL_TEXTURE_CUBE_MAP_NEGATIVE_X()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_CUBE_MAP_NEGATIVE_X"
		);
	}
	jint GLES20::GL_TEXTURE_CUBE_MAP_NEGATIVE_Y()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_CUBE_MAP_NEGATIVE_Y"
		);
	}
	jint GLES20::GL_TEXTURE_CUBE_MAP_NEGATIVE_Z()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_CUBE_MAP_NEGATIVE_Z"
		);
	}
	jint GLES20::GL_TEXTURE_CUBE_MAP_POSITIVE_X()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_CUBE_MAP_POSITIVE_X"
		);
	}
	jint GLES20::GL_TEXTURE_CUBE_MAP_POSITIVE_Y()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_CUBE_MAP_POSITIVE_Y"
		);
	}
	jint GLES20::GL_TEXTURE_CUBE_MAP_POSITIVE_Z()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_CUBE_MAP_POSITIVE_Z"
		);
	}
	jint GLES20::GL_TEXTURE_MAG_FILTER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_MAG_FILTER"
		);
	}
	jint GLES20::GL_TEXTURE_MIN_FILTER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_MIN_FILTER"
		);
	}
	jint GLES20::GL_TEXTURE_WRAP_S()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_WRAP_S"
		);
	}
	jint GLES20::GL_TEXTURE_WRAP_T()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_WRAP_T"
		);
	}
	jint GLES20::GL_TRIANGLES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TRIANGLES"
		);
	}
	jint GLES20::GL_TRIANGLE_FAN()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TRIANGLE_FAN"
		);
	}
	jint GLES20::GL_TRIANGLE_STRIP()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TRIANGLE_STRIP"
		);
	}
	jint GLES20::GL_TRUE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TRUE"
		);
	}
	jint GLES20::GL_UNPACK_ALIGNMENT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_UNPACK_ALIGNMENT"
		);
	}
	jint GLES20::GL_UNSIGNED_BYTE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_UNSIGNED_BYTE"
		);
	}
	jint GLES20::GL_UNSIGNED_INT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_UNSIGNED_INT"
		);
	}
	jint GLES20::GL_UNSIGNED_SHORT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_UNSIGNED_SHORT"
		);
	}
	jint GLES20::GL_UNSIGNED_SHORT_4_4_4_4()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_UNSIGNED_SHORT_4_4_4_4"
		);
	}
	jint GLES20::GL_UNSIGNED_SHORT_5_5_5_1()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_UNSIGNED_SHORT_5_5_5_1"
		);
	}
	jint GLES20::GL_UNSIGNED_SHORT_5_6_5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_UNSIGNED_SHORT_5_6_5"
		);
	}
	jint GLES20::GL_VALIDATE_STATUS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_VALIDATE_STATUS"
		);
	}
	jint GLES20::GL_VENDOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_VENDOR"
		);
	}
	jint GLES20::GL_VERSION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_VERSION"
		);
	}
	jint GLES20::GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING"
		);
	}
	jint GLES20::GL_VERTEX_ATTRIB_ARRAY_ENABLED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_VERTEX_ATTRIB_ARRAY_ENABLED"
		);
	}
	jint GLES20::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_VERTEX_ATTRIB_ARRAY_NORMALIZED"
		);
	}
	jint GLES20::GL_VERTEX_ATTRIB_ARRAY_POINTER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_VERTEX_ATTRIB_ARRAY_POINTER"
		);
	}
	jint GLES20::GL_VERTEX_ATTRIB_ARRAY_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_VERTEX_ATTRIB_ARRAY_SIZE"
		);
	}
	jint GLES20::GL_VERTEX_ATTRIB_ARRAY_STRIDE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_VERTEX_ATTRIB_ARRAY_STRIDE"
		);
	}
	jint GLES20::GL_VERTEX_ATTRIB_ARRAY_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_VERTEX_ATTRIB_ARRAY_TYPE"
		);
	}
	jint GLES20::GL_VERTEX_SHADER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_VERTEX_SHADER"
		);
	}
	jint GLES20::GL_VIEWPORT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_VIEWPORT"
		);
	}
	jint GLES20::GL_ZERO()
	{
		return getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ZERO"
		);
	}
	
	// QJniObject forward
	GLES20::GLES20(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	GLES20::GLES20()
		: JObject(
			"android.opengl.GLES20",
			"()V"
		) {}
	
	// Methods
	void GLES20::glActiveTexture(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glActiveTexture",
			"(I)V",
			arg0
		);
	}
	void GLES20::glAttachShader(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glAttachShader",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES20::glBindAttribLocation(jint arg0, jint arg1, JString arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glBindAttribLocation",
			"(IILjava/lang/String;)V",
			arg0,
			arg1,
			arg2.object<jstring>()
		);
	}
	void GLES20::glBindBuffer(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glBindBuffer",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES20::glBindFramebuffer(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glBindFramebuffer",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES20::glBindRenderbuffer(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glBindRenderbuffer",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES20::glBindTexture(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glBindTexture",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES20::glBlendColor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glBlendColor",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES20::glBlendEquation(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glBlendEquation",
			"(I)V",
			arg0
		);
	}
	void GLES20::glBlendEquationSeparate(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glBlendEquationSeparate",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES20::glBlendFunc(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glBlendFunc",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES20::glBlendFuncSeparate(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glBlendFuncSeparate",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES20::glBufferData(jint arg0, jint arg1, java::nio::Buffer arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glBufferData",
			"(IILjava/nio/Buffer;I)V",
			arg0,
			arg1,
			arg2.object(),
			arg3
		);
	}
	void GLES20::glBufferSubData(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glBufferSubData",
			"(IIILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	jint GLES20::glCheckFramebufferStatus(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.opengl.GLES20",
			"glCheckFramebufferStatus",
			"(I)I",
			arg0
		);
	}
	void GLES20::glClear(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glClear",
			"(I)V",
			arg0
		);
	}
	void GLES20::glClearColor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glClearColor",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES20::glClearDepthf(jfloat arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glClearDepthf",
			"(F)V",
			arg0
		);
	}
	void GLES20::glClearStencil(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glClearStencil",
			"(I)V",
			arg0
		);
	}
	void GLES20::glColorMask(jboolean arg0, jboolean arg1, jboolean arg2, jboolean arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glColorMask",
			"(ZZZZ)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES20::glCompileShader(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glCompileShader",
			"(I)V",
			arg0
		);
	}
	void GLES20::glCompressedTexImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, java::nio::Buffer arg7)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
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
	void GLES20::glCompressedTexSubImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, java::nio::Buffer arg8)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
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
	void GLES20::glCopyTexImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
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
	void GLES20::glCopyTexSubImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
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
	jint GLES20::glCreateProgram()
	{
		return callStaticMethod<jint>(
			"android.opengl.GLES20",
			"glCreateProgram",
			"()I"
		);
	}
	jint GLES20::glCreateShader(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.opengl.GLES20",
			"glCreateShader",
			"(I)I",
			arg0
		);
	}
	void GLES20::glCullFace(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glCullFace",
			"(I)V",
			arg0
		);
	}
	void GLES20::glDeleteBuffers(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDeleteBuffers",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES20::glDeleteBuffers(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDeleteBuffers",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	void GLES20::glDeleteFramebuffers(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDeleteFramebuffers",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES20::glDeleteFramebuffers(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDeleteFramebuffers",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	void GLES20::glDeleteProgram(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDeleteProgram",
			"(I)V",
			arg0
		);
	}
	void GLES20::glDeleteRenderbuffers(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDeleteRenderbuffers",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES20::glDeleteRenderbuffers(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDeleteRenderbuffers",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	void GLES20::glDeleteShader(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDeleteShader",
			"(I)V",
			arg0
		);
	}
	void GLES20::glDeleteTextures(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDeleteTextures",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES20::glDeleteTextures(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDeleteTextures",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	void GLES20::glDepthFunc(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDepthFunc",
			"(I)V",
			arg0
		);
	}
	void GLES20::glDepthMask(jboolean arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDepthMask",
			"(Z)V",
			arg0
		);
	}
	void GLES20::glDepthRangef(jfloat arg0, jfloat arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDepthRangef",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void GLES20::glDetachShader(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDetachShader",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES20::glDisable(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDisable",
			"(I)V",
			arg0
		);
	}
	void GLES20::glDisableVertexAttribArray(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDisableVertexAttribArray",
			"(I)V",
			arg0
		);
	}
	void GLES20::glDrawArrays(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDrawArrays",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES20::glDrawElements(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDrawElements",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES20::glDrawElements(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDrawElements",
			"(IIILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void GLES20::glEnable(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glEnable",
			"(I)V",
			arg0
		);
	}
	void GLES20::glEnableVertexAttribArray(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glEnableVertexAttribArray",
			"(I)V",
			arg0
		);
	}
	void GLES20::glFinish()
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glFinish",
			"()V"
		);
	}
	void GLES20::glFlush()
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glFlush",
			"()V"
		);
	}
	void GLES20::glFramebufferRenderbuffer(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glFramebufferRenderbuffer",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES20::glFramebufferTexture2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glFramebufferTexture2D",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES20::glFrontFace(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glFrontFace",
			"(I)V",
			arg0
		);
	}
	void GLES20::glGenBuffers(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGenBuffers",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES20::glGenBuffers(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGenBuffers",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	void GLES20::glGenFramebuffers(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGenFramebuffers",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES20::glGenFramebuffers(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGenFramebuffers",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	void GLES20::glGenRenderbuffers(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGenRenderbuffers",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES20::glGenRenderbuffers(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGenRenderbuffers",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	void GLES20::glGenTextures(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGenTextures",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES20::glGenTextures(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGenTextures",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	void GLES20::glGenerateMipmap(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGenerateMipmap",
			"(I)V",
			arg0
		);
	}
	JString GLES20::glGetActiveAttrib(jint arg0, jint arg1, java::nio::IntBuffer arg2, java::nio::IntBuffer arg3)
	{
		return callStaticObjectMethod(
			"android.opengl.GLES20",
			"glGetActiveAttrib",
			"(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	JString GLES20::glGetActiveAttrib(jint arg0, jint arg1, JIntArray arg2, jint arg3, JIntArray arg4, jint arg5)
	{
		return callStaticObjectMethod(
			"android.opengl.GLES20",
			"glGetActiveAttrib",
			"(II[II[II)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3,
			arg4.object<jintArray>(),
			arg5
		);
	}
	void GLES20::glGetActiveAttrib(jint arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4, JIntArray arg5, jint arg6, JIntArray arg7, jint arg8, JByteArray arg9, jint arg10)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetActiveAttrib",
			"(III[II[II[II[BI)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jintArray>(),
			arg4,
			arg5.object<jintArray>(),
			arg6,
			arg7.object<jintArray>(),
			arg8,
			arg9.object<jbyteArray>(),
			arg10
		);
	}
	JString GLES20::glGetActiveUniform(jint arg0, jint arg1, java::nio::IntBuffer arg2, java::nio::IntBuffer arg3)
	{
		return callStaticObjectMethod(
			"android.opengl.GLES20",
			"glGetActiveUniform",
			"(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	JString GLES20::glGetActiveUniform(jint arg0, jint arg1, JIntArray arg2, jint arg3, JIntArray arg4, jint arg5)
	{
		return callStaticObjectMethod(
			"android.opengl.GLES20",
			"glGetActiveUniform",
			"(II[II[II)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3,
			arg4.object<jintArray>(),
			arg5
		);
	}
	void GLES20::glGetActiveUniform(jint arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4, JIntArray arg5, jint arg6, JIntArray arg7, jint arg8, JByteArray arg9, jint arg10)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetActiveUniform",
			"(III[II[II[II[BI)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jintArray>(),
			arg4,
			arg5.object<jintArray>(),
			arg6,
			arg7.object<jintArray>(),
			arg8,
			arg9.object<jbyteArray>(),
			arg10
		);
	}
	void GLES20::glGetAttachedShaders(jint arg0, jint arg1, java::nio::IntBuffer arg2, java::nio::IntBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetAttachedShaders",
			"(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	void GLES20::glGetAttachedShaders(jint arg0, jint arg1, JIntArray arg2, jint arg3, JIntArray arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetAttachedShaders",
			"(II[II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3,
			arg4.object<jintArray>(),
			arg5
		);
	}
	jint GLES20::glGetAttribLocation(jint arg0, JString arg1)
	{
		return callStaticMethod<jint>(
			"android.opengl.GLES20",
			"glGetAttribLocation",
			"(ILjava/lang/String;)I",
			arg0,
			arg1.object<jstring>()
		);
	}
	void GLES20::glGetBooleanv(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetBooleanv",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES20::glGetBooleanv(jint arg0, JBooleanArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetBooleanv",
			"(I[ZI)V",
			arg0,
			arg1.object<jbooleanArray>(),
			arg2
		);
	}
	void GLES20::glGetBufferParameteriv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetBufferParameteriv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES20::glGetBufferParameteriv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetBufferParameteriv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	jint GLES20::glGetError()
	{
		return callStaticMethod<jint>(
			"android.opengl.GLES20",
			"glGetError",
			"()I"
		);
	}
	void GLES20::glGetFloatv(jint arg0, java::nio::FloatBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetFloatv",
			"(ILjava/nio/FloatBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES20::glGetFloatv(jint arg0, JFloatArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetFloatv",
			"(I[FI)V",
			arg0,
			arg1.object<jfloatArray>(),
			arg2
		);
	}
	void GLES20::glGetFramebufferAttachmentParameteriv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetFramebufferAttachmentParameteriv",
			"(IIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void GLES20::glGetFramebufferAttachmentParameteriv(jint arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetFramebufferAttachmentParameteriv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jintArray>(),
			arg4
		);
	}
	void GLES20::glGetIntegerv(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetIntegerv",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES20::glGetIntegerv(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetIntegerv",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	JString GLES20::glGetProgramInfoLog(jint arg0)
	{
		return callStaticObjectMethod(
			"android.opengl.GLES20",
			"glGetProgramInfoLog",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	void GLES20::glGetProgramiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetProgramiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES20::glGetProgramiv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetProgramiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES20::glGetRenderbufferParameteriv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetRenderbufferParameteriv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES20::glGetRenderbufferParameteriv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetRenderbufferParameteriv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	JString GLES20::glGetShaderInfoLog(jint arg0)
	{
		return callStaticObjectMethod(
			"android.opengl.GLES20",
			"glGetShaderInfoLog",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	void GLES20::glGetShaderPrecisionFormat(jint arg0, jint arg1, java::nio::IntBuffer arg2, java::nio::IntBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetShaderPrecisionFormat",
			"(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	void GLES20::glGetShaderPrecisionFormat(jint arg0, jint arg1, JIntArray arg2, jint arg3, JIntArray arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetShaderPrecisionFormat",
			"(II[II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3,
			arg4.object<jintArray>(),
			arg5
		);
	}
	JString GLES20::glGetShaderSource(jint arg0)
	{
		return callStaticObjectMethod(
			"android.opengl.GLES20",
			"glGetShaderSource",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	void GLES20::glGetShaderSource(jint arg0, jint arg1, JIntArray arg2, jint arg3, JByteArray arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetShaderSource",
			"(II[II[BI)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3,
			arg4.object<jbyteArray>(),
			arg5
		);
	}
	void GLES20::glGetShaderiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetShaderiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES20::glGetShaderiv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetShaderiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	JString GLES20::glGetString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.opengl.GLES20",
			"glGetString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	void GLES20::glGetTexParameterfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetTexParameterfv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES20::glGetTexParameterfv(jint arg0, jint arg1, JFloatArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetTexParameterfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>(),
			arg3
		);
	}
	void GLES20::glGetTexParameteriv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetTexParameteriv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES20::glGetTexParameteriv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetTexParameteriv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	jint GLES20::glGetUniformLocation(jint arg0, JString arg1)
	{
		return callStaticMethod<jint>(
			"android.opengl.GLES20",
			"glGetUniformLocation",
			"(ILjava/lang/String;)I",
			arg0,
			arg1.object<jstring>()
		);
	}
	void GLES20::glGetUniformfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetUniformfv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES20::glGetUniformfv(jint arg0, jint arg1, JFloatArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetUniformfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>(),
			arg3
		);
	}
	void GLES20::glGetUniformiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetUniformiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES20::glGetUniformiv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetUniformiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES20::glGetVertexAttribfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetVertexAttribfv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES20::glGetVertexAttribfv(jint arg0, jint arg1, JFloatArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetVertexAttribfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>(),
			arg3
		);
	}
	void GLES20::glGetVertexAttribiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetVertexAttribiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES20::glGetVertexAttribiv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetVertexAttribiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES20::glHint(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glHint",
			"(II)V",
			arg0,
			arg1
		);
	}
	jboolean GLES20::glIsBuffer(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.GLES20",
			"glIsBuffer",
			"(I)Z",
			arg0
		);
	}
	jboolean GLES20::glIsEnabled(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.GLES20",
			"glIsEnabled",
			"(I)Z",
			arg0
		);
	}
	jboolean GLES20::glIsFramebuffer(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.GLES20",
			"glIsFramebuffer",
			"(I)Z",
			arg0
		);
	}
	jboolean GLES20::glIsProgram(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.GLES20",
			"glIsProgram",
			"(I)Z",
			arg0
		);
	}
	jboolean GLES20::glIsRenderbuffer(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.GLES20",
			"glIsRenderbuffer",
			"(I)Z",
			arg0
		);
	}
	jboolean GLES20::glIsShader(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.GLES20",
			"glIsShader",
			"(I)Z",
			arg0
		);
	}
	jboolean GLES20::glIsTexture(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.GLES20",
			"glIsTexture",
			"(I)Z",
			arg0
		);
	}
	void GLES20::glLineWidth(jfloat arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glLineWidth",
			"(F)V",
			arg0
		);
	}
	void GLES20::glLinkProgram(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glLinkProgram",
			"(I)V",
			arg0
		);
	}
	void GLES20::glPixelStorei(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glPixelStorei",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES20::glPolygonOffset(jfloat arg0, jfloat arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glPolygonOffset",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void GLES20::glReadPixels(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, java::nio::Buffer arg6)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
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
	void GLES20::glReleaseShaderCompiler()
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glReleaseShaderCompiler",
			"()V"
		);
	}
	void GLES20::glRenderbufferStorage(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glRenderbufferStorage",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES20::glSampleCoverage(jfloat arg0, jboolean arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glSampleCoverage",
			"(FZ)V",
			arg0,
			arg1
		);
	}
	void GLES20::glScissor(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glScissor",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES20::glShaderBinary(jint arg0, java::nio::IntBuffer arg1, jint arg2, java::nio::Buffer arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glShaderBinary",
			"(ILjava/nio/IntBuffer;ILjava/nio/Buffer;I)V",
			arg0,
			arg1.object(),
			arg2,
			arg3.object(),
			arg4
		);
	}
	void GLES20::glShaderBinary(jint arg0, JIntArray arg1, jint arg2, jint arg3, java::nio::Buffer arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glShaderBinary",
			"(I[IIILjava/nio/Buffer;I)V",
			arg0,
			arg1.object<jintArray>(),
			arg2,
			arg3,
			arg4.object(),
			arg5
		);
	}
	void GLES20::glShaderSource(jint arg0, JString arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glShaderSource",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	void GLES20::glStencilFunc(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glStencilFunc",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES20::glStencilFuncSeparate(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glStencilFuncSeparate",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES20::glStencilMask(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glStencilMask",
			"(I)V",
			arg0
		);
	}
	void GLES20::glStencilMaskSeparate(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glStencilMaskSeparate",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES20::glStencilOp(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glStencilOp",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES20::glStencilOpSeparate(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glStencilOpSeparate",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES20::glTexImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, java::nio::Buffer arg8)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
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
	void GLES20::glTexParameterf(jint arg0, jint arg1, jfloat arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glTexParameterf",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES20::glTexParameterfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glTexParameterfv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES20::glTexParameterfv(jint arg0, jint arg1, JFloatArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glTexParameterfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>(),
			arg3
		);
	}
	void GLES20::glTexParameteri(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glTexParameteri",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES20::glTexParameteriv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glTexParameteriv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES20::glTexParameteriv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glTexParameteriv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES20::glTexSubImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, java::nio::Buffer arg8)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
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
	void GLES20::glUniform1f(jint arg0, jfloat arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform1f",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void GLES20::glUniform1fv(jint arg0, jint arg1, java::nio::FloatBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform1fv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES20::glUniform1fv(jint arg0, jint arg1, JFloatArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform1fv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>(),
			arg3
		);
	}
	void GLES20::glUniform1i(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform1i",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES20::glUniform1iv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform1iv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES20::glUniform1iv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform1iv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES20::glUniform2f(jint arg0, jfloat arg1, jfloat arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform2f",
			"(IFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES20::glUniform2fv(jint arg0, jint arg1, java::nio::FloatBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform2fv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES20::glUniform2fv(jint arg0, jint arg1, JFloatArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform2fv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>(),
			arg3
		);
	}
	void GLES20::glUniform2i(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform2i",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES20::glUniform2iv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform2iv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES20::glUniform2iv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform2iv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES20::glUniform3f(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform3f",
			"(IFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES20::glUniform3fv(jint arg0, jint arg1, java::nio::FloatBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform3fv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES20::glUniform3fv(jint arg0, jint arg1, JFloatArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform3fv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>(),
			arg3
		);
	}
	void GLES20::glUniform3i(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform3i",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES20::glUniform3iv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform3iv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES20::glUniform3iv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform3iv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES20::glUniform4f(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform4f",
			"(IFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES20::glUniform4fv(jint arg0, jint arg1, java::nio::FloatBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform4fv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES20::glUniform4fv(jint arg0, jint arg1, JFloatArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform4fv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>(),
			arg3
		);
	}
	void GLES20::glUniform4i(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform4i",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES20::glUniform4iv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform4iv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES20::glUniform4iv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform4iv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES20::glUniformMatrix2fv(jint arg0, jint arg1, jboolean arg2, java::nio::FloatBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniformMatrix2fv",
			"(IIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void GLES20::glUniformMatrix2fv(jint arg0, jint arg1, jboolean arg2, JFloatArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniformMatrix2fv",
			"(IIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jfloatArray>(),
			arg4
		);
	}
	void GLES20::glUniformMatrix3fv(jint arg0, jint arg1, jboolean arg2, java::nio::FloatBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniformMatrix3fv",
			"(IIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void GLES20::glUniformMatrix3fv(jint arg0, jint arg1, jboolean arg2, JFloatArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniformMatrix3fv",
			"(IIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jfloatArray>(),
			arg4
		);
	}
	void GLES20::glUniformMatrix4fv(jint arg0, jint arg1, jboolean arg2, java::nio::FloatBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniformMatrix4fv",
			"(IIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void GLES20::glUniformMatrix4fv(jint arg0, jint arg1, jboolean arg2, JFloatArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniformMatrix4fv",
			"(IIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jfloatArray>(),
			arg4
		);
	}
	void GLES20::glUseProgram(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUseProgram",
			"(I)V",
			arg0
		);
	}
	void GLES20::glValidateProgram(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glValidateProgram",
			"(I)V",
			arg0
		);
	}
	void GLES20::glVertexAttrib1f(jint arg0, jfloat arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttrib1f",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void GLES20::glVertexAttrib1fv(jint arg0, java::nio::FloatBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttrib1fv",
			"(ILjava/nio/FloatBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES20::glVertexAttrib1fv(jint arg0, JFloatArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttrib1fv",
			"(I[FI)V",
			arg0,
			arg1.object<jfloatArray>(),
			arg2
		);
	}
	void GLES20::glVertexAttrib2f(jint arg0, jfloat arg1, jfloat arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttrib2f",
			"(IFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES20::glVertexAttrib2fv(jint arg0, java::nio::FloatBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttrib2fv",
			"(ILjava/nio/FloatBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES20::glVertexAttrib2fv(jint arg0, JFloatArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttrib2fv",
			"(I[FI)V",
			arg0,
			arg1.object<jfloatArray>(),
			arg2
		);
	}
	void GLES20::glVertexAttrib3f(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttrib3f",
			"(IFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES20::glVertexAttrib3fv(jint arg0, java::nio::FloatBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttrib3fv",
			"(ILjava/nio/FloatBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES20::glVertexAttrib3fv(jint arg0, JFloatArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttrib3fv",
			"(I[FI)V",
			arg0,
			arg1.object<jfloatArray>(),
			arg2
		);
	}
	void GLES20::glVertexAttrib4f(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttrib4f",
			"(IFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES20::glVertexAttrib4fv(jint arg0, java::nio::FloatBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttrib4fv",
			"(ILjava/nio/FloatBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES20::glVertexAttrib4fv(jint arg0, JFloatArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttrib4fv",
			"(I[FI)V",
			arg0,
			arg1.object<jfloatArray>(),
			arg2
		);
	}
	void GLES20::glVertexAttribPointer(jint arg0, jint arg1, jint arg2, jboolean arg3, jint arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttribPointer",
			"(IIIZII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void GLES20::glVertexAttribPointer(jint arg0, jint arg1, jint arg2, jboolean arg3, jint arg4, java::nio::Buffer arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttribPointer",
			"(IIIZILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	void GLES20::glViewport(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES20",
			"glViewport",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::opengl

