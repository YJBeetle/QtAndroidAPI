#pragma once

#include "./GLES10.def.hpp"

class JFloatArray;
class JIntArray;
class JBooleanArray;
namespace java::nio
{
	class Buffer;
}
namespace java::nio
{
	class FloatBuffer;
}
namespace java::nio
{
	class IntBuffer;
}

namespace android::opengl
{
	class GLES11 : public android::opengl::GLES10
	{
	public:
		// Fields
		static jint GL_ACTIVE_TEXTURE();
		static jint GL_ADD_SIGNED();
		static jint GL_ALPHA_SCALE();
		static jint GL_ALPHA_TEST_FUNC();
		static jint GL_ALPHA_TEST_REF();
		static jint GL_ARRAY_BUFFER();
		static jint GL_ARRAY_BUFFER_BINDING();
		static jint GL_BLEND_DST();
		static jint GL_BLEND_SRC();
		static jint GL_BUFFER_ACCESS();
		static jint GL_BUFFER_SIZE();
		static jint GL_BUFFER_USAGE();
		static jint GL_CLIENT_ACTIVE_TEXTURE();
		static jint GL_CLIP_PLANE0();
		static jint GL_CLIP_PLANE1();
		static jint GL_CLIP_PLANE2();
		static jint GL_CLIP_PLANE3();
		static jint GL_CLIP_PLANE4();
		static jint GL_CLIP_PLANE5();
		static jint GL_COLOR_ARRAY_BUFFER_BINDING();
		static jint GL_COLOR_ARRAY_POINTER();
		static jint GL_COLOR_ARRAY_SIZE();
		static jint GL_COLOR_ARRAY_STRIDE();
		static jint GL_COLOR_ARRAY_TYPE();
		static jint GL_COLOR_CLEAR_VALUE();
		static jint GL_COLOR_WRITEMASK();
		static jint GL_COMBINE();
		static jint GL_COMBINE_ALPHA();
		static jint GL_COMBINE_RGB();
		static jint GL_CONSTANT();
		static jint GL_COORD_REPLACE_OES();
		static jint GL_CULL_FACE_MODE();
		static jint GL_CURRENT_COLOR();
		static jint GL_CURRENT_NORMAL();
		static jint GL_CURRENT_TEXTURE_COORDS();
		static jint GL_DEPTH_CLEAR_VALUE();
		static jint GL_DEPTH_FUNC();
		static jint GL_DEPTH_RANGE();
		static jint GL_DEPTH_WRITEMASK();
		static jint GL_DOT3_RGB();
		static jint GL_DOT3_RGBA();
		static jint GL_DYNAMIC_DRAW();
		static jint GL_ELEMENT_ARRAY_BUFFER();
		static jint GL_ELEMENT_ARRAY_BUFFER_BINDING();
		static jint GL_FRONT_FACE();
		static jint GL_GENERATE_MIPMAP();
		static jint GL_GENERATE_MIPMAP_HINT();
		static jint GL_INTERPOLATE();
		static jint GL_LINE_WIDTH();
		static jint GL_LOGIC_OP_MODE();
		static jint GL_MATRIX_MODE();
		static jint GL_MAX_CLIP_PLANES();
		static jint GL_MODELVIEW_MATRIX();
		static jint GL_MODELVIEW_MATRIX_FLOAT_AS_INT_BITS_OES();
		static jint GL_MODELVIEW_STACK_DEPTH();
		static jint GL_NORMAL_ARRAY_BUFFER_BINDING();
		static jint GL_NORMAL_ARRAY_POINTER();
		static jint GL_NORMAL_ARRAY_STRIDE();
		static jint GL_NORMAL_ARRAY_TYPE();
		static jint GL_OPERAND0_ALPHA();
		static jint GL_OPERAND0_RGB();
		static jint GL_OPERAND1_ALPHA();
		static jint GL_OPERAND1_RGB();
		static jint GL_OPERAND2_ALPHA();
		static jint GL_OPERAND2_RGB();
		static jint GL_POINT_DISTANCE_ATTENUATION();
		static jint GL_POINT_FADE_THRESHOLD_SIZE();
		static jint GL_POINT_SIZE();
		static jint GL_POINT_SIZE_ARRAY_BUFFER_BINDING_OES();
		static jint GL_POINT_SIZE_ARRAY_OES();
		static jint GL_POINT_SIZE_ARRAY_POINTER_OES();
		static jint GL_POINT_SIZE_ARRAY_STRIDE_OES();
		static jint GL_POINT_SIZE_ARRAY_TYPE_OES();
		static jint GL_POINT_SIZE_MAX();
		static jint GL_POINT_SIZE_MIN();
		static jint GL_POINT_SPRITE_OES();
		static jint GL_POLYGON_OFFSET_FACTOR();
		static jint GL_POLYGON_OFFSET_UNITS();
		static jint GL_PREVIOUS();
		static jint GL_PRIMARY_COLOR();
		static jint GL_PROJECTION_MATRIX();
		static jint GL_PROJECTION_MATRIX_FLOAT_AS_INT_BITS_OES();
		static jint GL_PROJECTION_STACK_DEPTH();
		static jint GL_RGB_SCALE();
		static jint GL_SAMPLES();
		static jint GL_SAMPLE_BUFFERS();
		static jint GL_SAMPLE_COVERAGE_INVERT();
		static jint GL_SAMPLE_COVERAGE_VALUE();
		static jint GL_SCISSOR_BOX();
		static jint GL_SHADE_MODEL();
		static jint GL_SRC0_ALPHA();
		static jint GL_SRC0_RGB();
		static jint GL_SRC1_ALPHA();
		static jint GL_SRC1_RGB();
		static jint GL_SRC2_ALPHA();
		static jint GL_SRC2_RGB();
		static jint GL_STATIC_DRAW();
		static jint GL_STENCIL_CLEAR_VALUE();
		static jint GL_STENCIL_FAIL();
		static jint GL_STENCIL_FUNC();
		static jint GL_STENCIL_PASS_DEPTH_FAIL();
		static jint GL_STENCIL_PASS_DEPTH_PASS();
		static jint GL_STENCIL_REF();
		static jint GL_STENCIL_VALUE_MASK();
		static jint GL_STENCIL_WRITEMASK();
		static jint GL_SUBTRACT();
		static jint GL_TEXTURE_BINDING_2D();
		static jint GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING();
		static jint GL_TEXTURE_COORD_ARRAY_POINTER();
		static jint GL_TEXTURE_COORD_ARRAY_SIZE();
		static jint GL_TEXTURE_COORD_ARRAY_STRIDE();
		static jint GL_TEXTURE_COORD_ARRAY_TYPE();
		static jint GL_TEXTURE_MATRIX();
		static jint GL_TEXTURE_MATRIX_FLOAT_AS_INT_BITS_OES();
		static jint GL_TEXTURE_STACK_DEPTH();
		static jint GL_VERTEX_ARRAY_BUFFER_BINDING();
		static jint GL_VERTEX_ARRAY_POINTER();
		static jint GL_VERTEX_ARRAY_SIZE();
		static jint GL_VERTEX_ARRAY_STRIDE();
		static jint GL_VERTEX_ARRAY_TYPE();
		static jint GL_VIEWPORT();
		static jint GL_WRITE_ONLY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GLES11(const char *className, const char *sig, Ts...agv) : android::opengl::GLES10(className, sig, std::forward<Ts>(agv)...) {}
		GLES11(QAndroidJniObject obj) : android::opengl::GLES10(obj) {}
		
		// Constructors
		GLES11();
		
		// Methods
		static void glBindBuffer(jint arg0, jint arg1);
		static void glBufferData(jint arg0, jint arg1, java::nio::Buffer arg2, jint arg3);
		static void glBufferSubData(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3);
		static void glClipPlanef(jint arg0, java::nio::FloatBuffer arg1);
		static void glClipPlanef(jint arg0, JFloatArray arg1, jint arg2);
		static void glClipPlanex(jint arg0, java::nio::IntBuffer arg1);
		static void glClipPlanex(jint arg0, JIntArray arg1, jint arg2);
		static void glColor4ub(jbyte arg0, jbyte arg1, jbyte arg2, jbyte arg3);
		static void glColorPointer(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glDeleteBuffers(jint arg0, java::nio::IntBuffer arg1);
		static void glDeleteBuffers(jint arg0, JIntArray arg1, jint arg2);
		static void glDrawElements(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glGenBuffers(jint arg0, java::nio::IntBuffer arg1);
		static void glGenBuffers(jint arg0, JIntArray arg1, jint arg2);
		static void glGetBooleanv(jint arg0, java::nio::IntBuffer arg1);
		static void glGetBooleanv(jint arg0, JBooleanArray arg1, jint arg2);
		static void glGetBufferParameteriv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetBufferParameteriv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glGetClipPlanef(jint arg0, java::nio::FloatBuffer arg1);
		static void glGetClipPlanef(jint arg0, JFloatArray arg1, jint arg2);
		static void glGetClipPlanex(jint arg0, java::nio::IntBuffer arg1);
		static void glGetClipPlanex(jint arg0, JIntArray arg1, jint arg2);
		static void glGetFixedv(jint arg0, java::nio::IntBuffer arg1);
		static void glGetFixedv(jint arg0, JIntArray arg1, jint arg2);
		static void glGetFloatv(jint arg0, java::nio::FloatBuffer arg1);
		static void glGetFloatv(jint arg0, JFloatArray arg1, jint arg2);
		static void glGetLightfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2);
		static void glGetLightfv(jint arg0, jint arg1, JFloatArray arg2, jint arg3);
		static void glGetLightxv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetLightxv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glGetMaterialfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2);
		static void glGetMaterialfv(jint arg0, jint arg1, JFloatArray arg2, jint arg3);
		static void glGetMaterialxv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetMaterialxv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glGetTexEnvfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2);
		static void glGetTexEnvfv(jint arg0, jint arg1, JFloatArray arg2, jint arg3);
		static void glGetTexEnviv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetTexEnviv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glGetTexEnvxv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetTexEnvxv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glGetTexParameterfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2);
		static void glGetTexParameterfv(jint arg0, jint arg1, JFloatArray arg2, jint arg3);
		static void glGetTexParameteriv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetTexParameteriv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glGetTexParameterxv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetTexParameterxv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static jboolean glIsBuffer(jint arg0);
		static jboolean glIsEnabled(jint arg0);
		static jboolean glIsTexture(jint arg0);
		static void glNormalPointer(jint arg0, jint arg1, jint arg2);
		static void glPointParameterf(jint arg0, jfloat arg1);
		static void glPointParameterfv(jint arg0, java::nio::FloatBuffer arg1);
		static void glPointParameterfv(jint arg0, JFloatArray arg1, jint arg2);
		static void glPointParameterx(jint arg0, jint arg1);
		static void glPointParameterxv(jint arg0, java::nio::IntBuffer arg1);
		static void glPointParameterxv(jint arg0, JIntArray arg1, jint arg2);
		static void glPointSizePointerOES(jint arg0, jint arg1, java::nio::Buffer arg2);
		static void glTexCoordPointer(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glTexEnvi(jint arg0, jint arg1, jint arg2);
		static void glTexEnviv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glTexEnviv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glTexParameterfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2);
		static void glTexParameterfv(jint arg0, jint arg1, JFloatArray arg2, jint arg3);
		static void glTexParameteri(jint arg0, jint arg1, jint arg2);
		static void glTexParameteriv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glTexParameteriv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glTexParameterxv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glTexParameterxv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glVertexPointer(jint arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace android::opengl

