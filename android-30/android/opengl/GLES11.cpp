#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JBooleanArray.hpp"
#include "../../java/nio/Buffer.hpp"
#include "../../java/nio/FloatBuffer.hpp"
#include "../../java/nio/IntBuffer.hpp"
#include "./GLES11.hpp"

namespace android::opengl
{
	// Fields
	jint GLES11::GL_ACTIVE_TEXTURE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_ACTIVE_TEXTURE"
		);
	}
	jint GLES11::GL_ADD_SIGNED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_ADD_SIGNED"
		);
	}
	jint GLES11::GL_ALPHA_SCALE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_ALPHA_SCALE"
		);
	}
	jint GLES11::GL_ALPHA_TEST_FUNC()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_ALPHA_TEST_FUNC"
		);
	}
	jint GLES11::GL_ALPHA_TEST_REF()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_ALPHA_TEST_REF"
		);
	}
	jint GLES11::GL_ARRAY_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_ARRAY_BUFFER"
		);
	}
	jint GLES11::GL_ARRAY_BUFFER_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_ARRAY_BUFFER_BINDING"
		);
	}
	jint GLES11::GL_BLEND_DST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_BLEND_DST"
		);
	}
	jint GLES11::GL_BLEND_SRC()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_BLEND_SRC"
		);
	}
	jint GLES11::GL_BUFFER_ACCESS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_BUFFER_ACCESS"
		);
	}
	jint GLES11::GL_BUFFER_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_BUFFER_SIZE"
		);
	}
	jint GLES11::GL_BUFFER_USAGE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_BUFFER_USAGE"
		);
	}
	jint GLES11::GL_CLIENT_ACTIVE_TEXTURE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_CLIENT_ACTIVE_TEXTURE"
		);
	}
	jint GLES11::GL_CLIP_PLANE0()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_CLIP_PLANE0"
		);
	}
	jint GLES11::GL_CLIP_PLANE1()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_CLIP_PLANE1"
		);
	}
	jint GLES11::GL_CLIP_PLANE2()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_CLIP_PLANE2"
		);
	}
	jint GLES11::GL_CLIP_PLANE3()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_CLIP_PLANE3"
		);
	}
	jint GLES11::GL_CLIP_PLANE4()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_CLIP_PLANE4"
		);
	}
	jint GLES11::GL_CLIP_PLANE5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_CLIP_PLANE5"
		);
	}
	jint GLES11::GL_COLOR_ARRAY_BUFFER_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_COLOR_ARRAY_BUFFER_BINDING"
		);
	}
	jint GLES11::GL_COLOR_ARRAY_POINTER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_COLOR_ARRAY_POINTER"
		);
	}
	jint GLES11::GL_COLOR_ARRAY_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_COLOR_ARRAY_SIZE"
		);
	}
	jint GLES11::GL_COLOR_ARRAY_STRIDE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_COLOR_ARRAY_STRIDE"
		);
	}
	jint GLES11::GL_COLOR_ARRAY_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_COLOR_ARRAY_TYPE"
		);
	}
	jint GLES11::GL_COLOR_CLEAR_VALUE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_COLOR_CLEAR_VALUE"
		);
	}
	jint GLES11::GL_COLOR_WRITEMASK()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_COLOR_WRITEMASK"
		);
	}
	jint GLES11::GL_COMBINE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_COMBINE"
		);
	}
	jint GLES11::GL_COMBINE_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_COMBINE_ALPHA"
		);
	}
	jint GLES11::GL_COMBINE_RGB()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_COMBINE_RGB"
		);
	}
	jint GLES11::GL_CONSTANT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_CONSTANT"
		);
	}
	jint GLES11::GL_COORD_REPLACE_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_COORD_REPLACE_OES"
		);
	}
	jint GLES11::GL_CULL_FACE_MODE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_CULL_FACE_MODE"
		);
	}
	jint GLES11::GL_CURRENT_COLOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_CURRENT_COLOR"
		);
	}
	jint GLES11::GL_CURRENT_NORMAL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_CURRENT_NORMAL"
		);
	}
	jint GLES11::GL_CURRENT_TEXTURE_COORDS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_CURRENT_TEXTURE_COORDS"
		);
	}
	jint GLES11::GL_DEPTH_CLEAR_VALUE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_DEPTH_CLEAR_VALUE"
		);
	}
	jint GLES11::GL_DEPTH_FUNC()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_DEPTH_FUNC"
		);
	}
	jint GLES11::GL_DEPTH_RANGE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_DEPTH_RANGE"
		);
	}
	jint GLES11::GL_DEPTH_WRITEMASK()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_DEPTH_WRITEMASK"
		);
	}
	jint GLES11::GL_DOT3_RGB()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_DOT3_RGB"
		);
	}
	jint GLES11::GL_DOT3_RGBA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_DOT3_RGBA"
		);
	}
	jint GLES11::GL_DYNAMIC_DRAW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_DYNAMIC_DRAW"
		);
	}
	jint GLES11::GL_ELEMENT_ARRAY_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_ELEMENT_ARRAY_BUFFER"
		);
	}
	jint GLES11::GL_ELEMENT_ARRAY_BUFFER_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_ELEMENT_ARRAY_BUFFER_BINDING"
		);
	}
	jint GLES11::GL_FRONT_FACE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_FRONT_FACE"
		);
	}
	jint GLES11::GL_GENERATE_MIPMAP()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_GENERATE_MIPMAP"
		);
	}
	jint GLES11::GL_GENERATE_MIPMAP_HINT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_GENERATE_MIPMAP_HINT"
		);
	}
	jint GLES11::GL_INTERPOLATE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_INTERPOLATE"
		);
	}
	jint GLES11::GL_LINE_WIDTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_LINE_WIDTH"
		);
	}
	jint GLES11::GL_LOGIC_OP_MODE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_LOGIC_OP_MODE"
		);
	}
	jint GLES11::GL_MATRIX_MODE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_MATRIX_MODE"
		);
	}
	jint GLES11::GL_MAX_CLIP_PLANES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_MAX_CLIP_PLANES"
		);
	}
	jint GLES11::GL_MODELVIEW_MATRIX()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_MODELVIEW_MATRIX"
		);
	}
	jint GLES11::GL_MODELVIEW_MATRIX_FLOAT_AS_INT_BITS_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_MODELVIEW_MATRIX_FLOAT_AS_INT_BITS_OES"
		);
	}
	jint GLES11::GL_MODELVIEW_STACK_DEPTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_MODELVIEW_STACK_DEPTH"
		);
	}
	jint GLES11::GL_NORMAL_ARRAY_BUFFER_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_NORMAL_ARRAY_BUFFER_BINDING"
		);
	}
	jint GLES11::GL_NORMAL_ARRAY_POINTER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_NORMAL_ARRAY_POINTER"
		);
	}
	jint GLES11::GL_NORMAL_ARRAY_STRIDE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_NORMAL_ARRAY_STRIDE"
		);
	}
	jint GLES11::GL_NORMAL_ARRAY_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_NORMAL_ARRAY_TYPE"
		);
	}
	jint GLES11::GL_OPERAND0_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_OPERAND0_ALPHA"
		);
	}
	jint GLES11::GL_OPERAND0_RGB()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_OPERAND0_RGB"
		);
	}
	jint GLES11::GL_OPERAND1_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_OPERAND1_ALPHA"
		);
	}
	jint GLES11::GL_OPERAND1_RGB()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_OPERAND1_RGB"
		);
	}
	jint GLES11::GL_OPERAND2_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_OPERAND2_ALPHA"
		);
	}
	jint GLES11::GL_OPERAND2_RGB()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_OPERAND2_RGB"
		);
	}
	jint GLES11::GL_POINT_DISTANCE_ATTENUATION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_POINT_DISTANCE_ATTENUATION"
		);
	}
	jint GLES11::GL_POINT_FADE_THRESHOLD_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_POINT_FADE_THRESHOLD_SIZE"
		);
	}
	jint GLES11::GL_POINT_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_POINT_SIZE"
		);
	}
	jint GLES11::GL_POINT_SIZE_ARRAY_BUFFER_BINDING_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_POINT_SIZE_ARRAY_BUFFER_BINDING_OES"
		);
	}
	jint GLES11::GL_POINT_SIZE_ARRAY_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_POINT_SIZE_ARRAY_OES"
		);
	}
	jint GLES11::GL_POINT_SIZE_ARRAY_POINTER_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_POINT_SIZE_ARRAY_POINTER_OES"
		);
	}
	jint GLES11::GL_POINT_SIZE_ARRAY_STRIDE_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_POINT_SIZE_ARRAY_STRIDE_OES"
		);
	}
	jint GLES11::GL_POINT_SIZE_ARRAY_TYPE_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_POINT_SIZE_ARRAY_TYPE_OES"
		);
	}
	jint GLES11::GL_POINT_SIZE_MAX()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_POINT_SIZE_MAX"
		);
	}
	jint GLES11::GL_POINT_SIZE_MIN()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_POINT_SIZE_MIN"
		);
	}
	jint GLES11::GL_POINT_SPRITE_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_POINT_SPRITE_OES"
		);
	}
	jint GLES11::GL_POLYGON_OFFSET_FACTOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_POLYGON_OFFSET_FACTOR"
		);
	}
	jint GLES11::GL_POLYGON_OFFSET_UNITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_POLYGON_OFFSET_UNITS"
		);
	}
	jint GLES11::GL_PREVIOUS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_PREVIOUS"
		);
	}
	jint GLES11::GL_PRIMARY_COLOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_PRIMARY_COLOR"
		);
	}
	jint GLES11::GL_PROJECTION_MATRIX()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_PROJECTION_MATRIX"
		);
	}
	jint GLES11::GL_PROJECTION_MATRIX_FLOAT_AS_INT_BITS_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_PROJECTION_MATRIX_FLOAT_AS_INT_BITS_OES"
		);
	}
	jint GLES11::GL_PROJECTION_STACK_DEPTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_PROJECTION_STACK_DEPTH"
		);
	}
	jint GLES11::GL_RGB_SCALE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_RGB_SCALE"
		);
	}
	jint GLES11::GL_SAMPLES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_SAMPLES"
		);
	}
	jint GLES11::GL_SAMPLE_BUFFERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_SAMPLE_BUFFERS"
		);
	}
	jint GLES11::GL_SAMPLE_COVERAGE_INVERT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_SAMPLE_COVERAGE_INVERT"
		);
	}
	jint GLES11::GL_SAMPLE_COVERAGE_VALUE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_SAMPLE_COVERAGE_VALUE"
		);
	}
	jint GLES11::GL_SCISSOR_BOX()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_SCISSOR_BOX"
		);
	}
	jint GLES11::GL_SHADE_MODEL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_SHADE_MODEL"
		);
	}
	jint GLES11::GL_SRC0_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_SRC0_ALPHA"
		);
	}
	jint GLES11::GL_SRC0_RGB()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_SRC0_RGB"
		);
	}
	jint GLES11::GL_SRC1_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_SRC1_ALPHA"
		);
	}
	jint GLES11::GL_SRC1_RGB()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_SRC1_RGB"
		);
	}
	jint GLES11::GL_SRC2_ALPHA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_SRC2_ALPHA"
		);
	}
	jint GLES11::GL_SRC2_RGB()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_SRC2_RGB"
		);
	}
	jint GLES11::GL_STATIC_DRAW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_STATIC_DRAW"
		);
	}
	jint GLES11::GL_STENCIL_CLEAR_VALUE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_STENCIL_CLEAR_VALUE"
		);
	}
	jint GLES11::GL_STENCIL_FAIL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_STENCIL_FAIL"
		);
	}
	jint GLES11::GL_STENCIL_FUNC()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_STENCIL_FUNC"
		);
	}
	jint GLES11::GL_STENCIL_PASS_DEPTH_FAIL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_STENCIL_PASS_DEPTH_FAIL"
		);
	}
	jint GLES11::GL_STENCIL_PASS_DEPTH_PASS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_STENCIL_PASS_DEPTH_PASS"
		);
	}
	jint GLES11::GL_STENCIL_REF()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_STENCIL_REF"
		);
	}
	jint GLES11::GL_STENCIL_VALUE_MASK()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_STENCIL_VALUE_MASK"
		);
	}
	jint GLES11::GL_STENCIL_WRITEMASK()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_STENCIL_WRITEMASK"
		);
	}
	jint GLES11::GL_SUBTRACT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_SUBTRACT"
		);
	}
	jint GLES11::GL_TEXTURE_BINDING_2D()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_TEXTURE_BINDING_2D"
		);
	}
	jint GLES11::GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING"
		);
	}
	jint GLES11::GL_TEXTURE_COORD_ARRAY_POINTER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_TEXTURE_COORD_ARRAY_POINTER"
		);
	}
	jint GLES11::GL_TEXTURE_COORD_ARRAY_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_TEXTURE_COORD_ARRAY_SIZE"
		);
	}
	jint GLES11::GL_TEXTURE_COORD_ARRAY_STRIDE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_TEXTURE_COORD_ARRAY_STRIDE"
		);
	}
	jint GLES11::GL_TEXTURE_COORD_ARRAY_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_TEXTURE_COORD_ARRAY_TYPE"
		);
	}
	jint GLES11::GL_TEXTURE_MATRIX()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_TEXTURE_MATRIX"
		);
	}
	jint GLES11::GL_TEXTURE_MATRIX_FLOAT_AS_INT_BITS_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_TEXTURE_MATRIX_FLOAT_AS_INT_BITS_OES"
		);
	}
	jint GLES11::GL_TEXTURE_STACK_DEPTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_TEXTURE_STACK_DEPTH"
		);
	}
	jint GLES11::GL_VERTEX_ARRAY_BUFFER_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_VERTEX_ARRAY_BUFFER_BINDING"
		);
	}
	jint GLES11::GL_VERTEX_ARRAY_POINTER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_VERTEX_ARRAY_POINTER"
		);
	}
	jint GLES11::GL_VERTEX_ARRAY_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_VERTEX_ARRAY_SIZE"
		);
	}
	jint GLES11::GL_VERTEX_ARRAY_STRIDE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_VERTEX_ARRAY_STRIDE"
		);
	}
	jint GLES11::GL_VERTEX_ARRAY_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_VERTEX_ARRAY_TYPE"
		);
	}
	jint GLES11::GL_VIEWPORT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_VIEWPORT"
		);
	}
	jint GLES11::GL_WRITE_ONLY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_WRITE_ONLY"
		);
	}
	
	// QJniObject forward
	GLES11::GLES11(QJniObject obj) : android::opengl::GLES10(obj) {}
	
	// Constructors
	GLES11::GLES11()
		: android::opengl::GLES10(
			"android.opengl.GLES11",
			"()V"
		) {}
	
	// Methods
	void GLES11::glBindBuffer(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glBindBuffer",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES11::glBufferData(jint arg0, jint arg1, java::nio::Buffer arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glBufferData",
			"(IILjava/nio/Buffer;I)V",
			arg0,
			arg1,
			arg2.object(),
			arg3
		);
	}
	void GLES11::glBufferSubData(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glBufferSubData",
			"(IIILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void GLES11::glClipPlanef(jint arg0, java::nio::FloatBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glClipPlanef",
			"(ILjava/nio/FloatBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES11::glClipPlanef(jint arg0, JFloatArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glClipPlanef",
			"(I[FI)V",
			arg0,
			arg1.object<jfloatArray>(),
			arg2
		);
	}
	void GLES11::glClipPlanex(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glClipPlanex",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES11::glClipPlanex(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glClipPlanex",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	void GLES11::glColor4ub(jbyte arg0, jbyte arg1, jbyte arg2, jbyte arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glColor4ub",
			"(BBBB)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11::glColorPointer(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glColorPointer",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11::glDeleteBuffers(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glDeleteBuffers",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES11::glDeleteBuffers(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glDeleteBuffers",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	void GLES11::glDrawElements(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glDrawElements",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11::glGenBuffers(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGenBuffers",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES11::glGenBuffers(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGenBuffers",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	void GLES11::glGetBooleanv(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetBooleanv",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES11::glGetBooleanv(jint arg0, JBooleanArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetBooleanv",
			"(I[ZI)V",
			arg0,
			arg1.object<jbooleanArray>(),
			arg2
		);
	}
	void GLES11::glGetBufferParameteriv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetBufferParameteriv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11::glGetBufferParameteriv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetBufferParameteriv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES11::glGetClipPlanef(jint arg0, java::nio::FloatBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetClipPlanef",
			"(ILjava/nio/FloatBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES11::glGetClipPlanef(jint arg0, JFloatArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetClipPlanef",
			"(I[FI)V",
			arg0,
			arg1.object<jfloatArray>(),
			arg2
		);
	}
	void GLES11::glGetClipPlanex(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetClipPlanex",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES11::glGetClipPlanex(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetClipPlanex",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	void GLES11::glGetFixedv(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetFixedv",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES11::glGetFixedv(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetFixedv",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	void GLES11::glGetFloatv(jint arg0, java::nio::FloatBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetFloatv",
			"(ILjava/nio/FloatBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES11::glGetFloatv(jint arg0, JFloatArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetFloatv",
			"(I[FI)V",
			arg0,
			arg1.object<jfloatArray>(),
			arg2
		);
	}
	void GLES11::glGetLightfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetLightfv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11::glGetLightfv(jint arg0, jint arg1, JFloatArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetLightfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>(),
			arg3
		);
	}
	void GLES11::glGetLightxv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetLightxv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11::glGetLightxv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetLightxv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES11::glGetMaterialfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetMaterialfv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11::glGetMaterialfv(jint arg0, jint arg1, JFloatArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetMaterialfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>(),
			arg3
		);
	}
	void GLES11::glGetMaterialxv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetMaterialxv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11::glGetMaterialxv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetMaterialxv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES11::glGetTexEnvfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetTexEnvfv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11::glGetTexEnvfv(jint arg0, jint arg1, JFloatArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetTexEnvfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>(),
			arg3
		);
	}
	void GLES11::glGetTexEnviv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetTexEnviv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11::glGetTexEnviv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetTexEnviv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES11::glGetTexEnvxv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetTexEnvxv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11::glGetTexEnvxv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetTexEnvxv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES11::glGetTexParameterfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetTexParameterfv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11::glGetTexParameterfv(jint arg0, jint arg1, JFloatArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetTexParameterfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>(),
			arg3
		);
	}
	void GLES11::glGetTexParameteriv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetTexParameteriv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11::glGetTexParameteriv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetTexParameteriv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES11::glGetTexParameterxv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetTexParameterxv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11::glGetTexParameterxv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetTexParameterxv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	jboolean GLES11::glIsBuffer(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.GLES11",
			"glIsBuffer",
			"(I)Z",
			arg0
		);
	}
	jboolean GLES11::glIsEnabled(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.GLES11",
			"glIsEnabled",
			"(I)Z",
			arg0
		);
	}
	jboolean GLES11::glIsTexture(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.GLES11",
			"glIsTexture",
			"(I)Z",
			arg0
		);
	}
	void GLES11::glNormalPointer(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glNormalPointer",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES11::glPointParameterf(jint arg0, jfloat arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glPointParameterf",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void GLES11::glPointParameterfv(jint arg0, java::nio::FloatBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glPointParameterfv",
			"(ILjava/nio/FloatBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES11::glPointParameterfv(jint arg0, JFloatArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glPointParameterfv",
			"(I[FI)V",
			arg0,
			arg1.object<jfloatArray>(),
			arg2
		);
	}
	void GLES11::glPointParameterx(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glPointParameterx",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES11::glPointParameterxv(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glPointParameterxv",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES11::glPointParameterxv(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glPointParameterxv",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	void GLES11::glPointSizePointerOES(jint arg0, jint arg1, java::nio::Buffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glPointSizePointerOES",
			"(IILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11::glTexCoordPointer(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glTexCoordPointer",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11::glTexEnvi(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glTexEnvi",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES11::glTexEnviv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glTexEnviv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11::glTexEnviv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glTexEnviv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES11::glTexParameterfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glTexParameterfv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11::glTexParameterfv(jint arg0, jint arg1, JFloatArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glTexParameterfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>(),
			arg3
		);
	}
	void GLES11::glTexParameteri(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glTexParameteri",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES11::glTexParameteriv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glTexParameteriv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11::glTexParameteriv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glTexParameteriv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES11::glTexParameterxv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glTexParameterxv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11::glTexParameterxv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glTexParameterxv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES11::glVertexPointer(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11",
			"glVertexPointer",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::opengl

