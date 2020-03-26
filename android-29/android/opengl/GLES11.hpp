#pragma once

#ifndef ANDROID_OPENGL_GLES11
#define ANDROID_OPENGL_GLES11

#include "../../__JniBaseClass.hpp"
#include "GLES10.hpp"

namespace __jni_impl::java::nio
{
	class Buffer;
}
namespace __jni_impl::java::nio
{
	class IntBuffer;
}
namespace __jni_impl::java::nio
{
	class FloatBuffer;
}

namespace __jni_impl::android::opengl
{
	class GLES11 : public __jni_impl::android::opengl::GLES10
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
		
		// Constructors
		void __constructor();
		
		// Methods
		static void glBindBuffer(jint arg0, jint arg1);
		static void glBufferData(jint arg0, jint arg1, __jni_impl::java::nio::Buffer arg2, jint arg3);
		static void glBufferSubData(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::Buffer arg3);
		static void glDeleteBuffers(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glDeleteBuffers(jint arg0, jintArray arg1, jint arg2);
		static void glDrawElements(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glGenBuffers(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glGenBuffers(jint arg0, jintArray arg1, jint arg2);
		static void glGetBooleanv(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glGetBooleanv(jint arg0, jbooleanArray arg1, jint arg2);
		static void glGetBufferParameteriv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glGetBufferParameteriv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glGetFloatv(jint arg0, jfloatArray arg1, jint arg2);
		static void glGetFloatv(jint arg0, __jni_impl::java::nio::FloatBuffer arg1);
		static void glGetTexParameterfv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2);
		static void glGetTexParameterfv(jint arg0, jint arg1, jfloatArray arg2, jint arg3);
		static void glGetTexParameteriv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glGetTexParameteriv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static jboolean glIsBuffer(jint arg0);
		static jboolean glIsEnabled(jint arg0);
		static jboolean glIsTexture(jint arg0);
		static void glTexParameterfv(jint arg0, jint arg1, jfloatArray arg2, jint arg3);
		static void glTexParameterfv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2);
		static void glTexParameteri(jint arg0, jint arg1, jint arg2);
		static void glTexParameteriv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glTexParameteriv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glClipPlanef(jint arg0, jfloatArray arg1, jint arg2);
		static void glClipPlanef(jint arg0, __jni_impl::java::nio::FloatBuffer arg1);
		static void glClipPlanex(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glClipPlanex(jint arg0, jintArray arg1, jint arg2);
		static void glColor4ub(jbyte arg0, jbyte arg1, jbyte arg2, jbyte arg3);
		static void glGetClipPlanef(jint arg0, __jni_impl::java::nio::FloatBuffer arg1);
		static void glGetClipPlanef(jint arg0, jfloatArray arg1, jint arg2);
		static void glGetClipPlanex(jint arg0, jintArray arg1, jint arg2);
		static void glGetClipPlanex(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glGetFixedv(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glGetFixedv(jint arg0, jintArray arg1, jint arg2);
		static void glGetLightfv(jint arg0, jint arg1, jfloatArray arg2, jint arg3);
		static void glGetLightfv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2);
		static void glGetLightxv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glGetLightxv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glGetMaterialfv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2);
		static void glGetMaterialfv(jint arg0, jint arg1, jfloatArray arg2, jint arg3);
		static void glGetMaterialxv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glGetMaterialxv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glGetTexEnvfv(jint arg0, jint arg1, jfloatArray arg2, jint arg3);
		static void glGetTexEnvfv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2);
		static void glGetTexEnviv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glGetTexEnviv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glGetTexEnvxv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glGetTexEnvxv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glGetTexParameterxv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glGetTexParameterxv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glPointParameterf(jint arg0, jfloat arg1);
		static void glPointParameterfv(jint arg0, __jni_impl::java::nio::FloatBuffer arg1);
		static void glPointParameterfv(jint arg0, jfloatArray arg1, jint arg2);
		static void glPointParameterx(jint arg0, jint arg1);
		static void glPointParameterxv(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glPointParameterxv(jint arg0, jintArray arg1, jint arg2);
		static void glPointSizePointerOES(jint arg0, jint arg1, __jni_impl::java::nio::Buffer arg2);
		static void glTexEnvi(jint arg0, jint arg1, jint arg2);
		static void glTexEnviv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glTexEnviv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glTexParameterxv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glTexParameterxv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glColorPointer(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glNormalPointer(jint arg0, jint arg1, jint arg2);
		static void glTexCoordPointer(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glVertexPointer(jint arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace __jni_impl::android::opengl

#include "../../java/nio/Buffer.hpp"
#include "../../java/nio/IntBuffer.hpp"
#include "../../java/nio/FloatBuffer.hpp"

namespace __jni_impl::android::opengl
{
	// Fields
	jint GLES11::GL_ACTIVE_TEXTURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_ACTIVE_TEXTURE"
		);
	}
	jint GLES11::GL_ADD_SIGNED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_ADD_SIGNED"
		);
	}
	jint GLES11::GL_ALPHA_SCALE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_ALPHA_SCALE"
		);
	}
	jint GLES11::GL_ALPHA_TEST_FUNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_ALPHA_TEST_FUNC"
		);
	}
	jint GLES11::GL_ALPHA_TEST_REF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_ALPHA_TEST_REF"
		);
	}
	jint GLES11::GL_ARRAY_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_ARRAY_BUFFER"
		);
	}
	jint GLES11::GL_ARRAY_BUFFER_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_ARRAY_BUFFER_BINDING"
		);
	}
	jint GLES11::GL_BLEND_DST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_BLEND_DST"
		);
	}
	jint GLES11::GL_BLEND_SRC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_BLEND_SRC"
		);
	}
	jint GLES11::GL_BUFFER_ACCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_BUFFER_ACCESS"
		);
	}
	jint GLES11::GL_BUFFER_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_BUFFER_SIZE"
		);
	}
	jint GLES11::GL_BUFFER_USAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_BUFFER_USAGE"
		);
	}
	jint GLES11::GL_CLIENT_ACTIVE_TEXTURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_CLIENT_ACTIVE_TEXTURE"
		);
	}
	jint GLES11::GL_CLIP_PLANE0()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_CLIP_PLANE0"
		);
	}
	jint GLES11::GL_CLIP_PLANE1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_CLIP_PLANE1"
		);
	}
	jint GLES11::GL_CLIP_PLANE2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_CLIP_PLANE2"
		);
	}
	jint GLES11::GL_CLIP_PLANE3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_CLIP_PLANE3"
		);
	}
	jint GLES11::GL_CLIP_PLANE4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_CLIP_PLANE4"
		);
	}
	jint GLES11::GL_CLIP_PLANE5()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_CLIP_PLANE5"
		);
	}
	jint GLES11::GL_COLOR_ARRAY_BUFFER_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_COLOR_ARRAY_BUFFER_BINDING"
		);
	}
	jint GLES11::GL_COLOR_ARRAY_POINTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_COLOR_ARRAY_POINTER"
		);
	}
	jint GLES11::GL_COLOR_ARRAY_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_COLOR_ARRAY_SIZE"
		);
	}
	jint GLES11::GL_COLOR_ARRAY_STRIDE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_COLOR_ARRAY_STRIDE"
		);
	}
	jint GLES11::GL_COLOR_ARRAY_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_COLOR_ARRAY_TYPE"
		);
	}
	jint GLES11::GL_COLOR_CLEAR_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_COLOR_CLEAR_VALUE"
		);
	}
	jint GLES11::GL_COLOR_WRITEMASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_COLOR_WRITEMASK"
		);
	}
	jint GLES11::GL_COMBINE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_COMBINE"
		);
	}
	jint GLES11::GL_COMBINE_ALPHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_COMBINE_ALPHA"
		);
	}
	jint GLES11::GL_COMBINE_RGB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_COMBINE_RGB"
		);
	}
	jint GLES11::GL_CONSTANT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_CONSTANT"
		);
	}
	jint GLES11::GL_COORD_REPLACE_OES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_COORD_REPLACE_OES"
		);
	}
	jint GLES11::GL_CULL_FACE_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_CULL_FACE_MODE"
		);
	}
	jint GLES11::GL_CURRENT_COLOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_CURRENT_COLOR"
		);
	}
	jint GLES11::GL_CURRENT_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_CURRENT_NORMAL"
		);
	}
	jint GLES11::GL_CURRENT_TEXTURE_COORDS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_CURRENT_TEXTURE_COORDS"
		);
	}
	jint GLES11::GL_DEPTH_CLEAR_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_DEPTH_CLEAR_VALUE"
		);
	}
	jint GLES11::GL_DEPTH_FUNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_DEPTH_FUNC"
		);
	}
	jint GLES11::GL_DEPTH_RANGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_DEPTH_RANGE"
		);
	}
	jint GLES11::GL_DEPTH_WRITEMASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_DEPTH_WRITEMASK"
		);
	}
	jint GLES11::GL_DOT3_RGB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_DOT3_RGB"
		);
	}
	jint GLES11::GL_DOT3_RGBA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_DOT3_RGBA"
		);
	}
	jint GLES11::GL_DYNAMIC_DRAW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_DYNAMIC_DRAW"
		);
	}
	jint GLES11::GL_ELEMENT_ARRAY_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_ELEMENT_ARRAY_BUFFER"
		);
	}
	jint GLES11::GL_ELEMENT_ARRAY_BUFFER_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_ELEMENT_ARRAY_BUFFER_BINDING"
		);
	}
	jint GLES11::GL_FRONT_FACE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_FRONT_FACE"
		);
	}
	jint GLES11::GL_GENERATE_MIPMAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_GENERATE_MIPMAP"
		);
	}
	jint GLES11::GL_GENERATE_MIPMAP_HINT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_GENERATE_MIPMAP_HINT"
		);
	}
	jint GLES11::GL_INTERPOLATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_INTERPOLATE"
		);
	}
	jint GLES11::GL_LINE_WIDTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_LINE_WIDTH"
		);
	}
	jint GLES11::GL_LOGIC_OP_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_LOGIC_OP_MODE"
		);
	}
	jint GLES11::GL_MATRIX_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_MATRIX_MODE"
		);
	}
	jint GLES11::GL_MAX_CLIP_PLANES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_MAX_CLIP_PLANES"
		);
	}
	jint GLES11::GL_MODELVIEW_MATRIX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_MODELVIEW_MATRIX"
		);
	}
	jint GLES11::GL_MODELVIEW_MATRIX_FLOAT_AS_INT_BITS_OES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_MODELVIEW_MATRIX_FLOAT_AS_INT_BITS_OES"
		);
	}
	jint GLES11::GL_MODELVIEW_STACK_DEPTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_MODELVIEW_STACK_DEPTH"
		);
	}
	jint GLES11::GL_NORMAL_ARRAY_BUFFER_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_NORMAL_ARRAY_BUFFER_BINDING"
		);
	}
	jint GLES11::GL_NORMAL_ARRAY_POINTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_NORMAL_ARRAY_POINTER"
		);
	}
	jint GLES11::GL_NORMAL_ARRAY_STRIDE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_NORMAL_ARRAY_STRIDE"
		);
	}
	jint GLES11::GL_NORMAL_ARRAY_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_NORMAL_ARRAY_TYPE"
		);
	}
	jint GLES11::GL_OPERAND0_ALPHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_OPERAND0_ALPHA"
		);
	}
	jint GLES11::GL_OPERAND0_RGB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_OPERAND0_RGB"
		);
	}
	jint GLES11::GL_OPERAND1_ALPHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_OPERAND1_ALPHA"
		);
	}
	jint GLES11::GL_OPERAND1_RGB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_OPERAND1_RGB"
		);
	}
	jint GLES11::GL_OPERAND2_ALPHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_OPERAND2_ALPHA"
		);
	}
	jint GLES11::GL_OPERAND2_RGB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_OPERAND2_RGB"
		);
	}
	jint GLES11::GL_POINT_DISTANCE_ATTENUATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_POINT_DISTANCE_ATTENUATION"
		);
	}
	jint GLES11::GL_POINT_FADE_THRESHOLD_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_POINT_FADE_THRESHOLD_SIZE"
		);
	}
	jint GLES11::GL_POINT_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_POINT_SIZE"
		);
	}
	jint GLES11::GL_POINT_SIZE_ARRAY_BUFFER_BINDING_OES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_POINT_SIZE_ARRAY_BUFFER_BINDING_OES"
		);
	}
	jint GLES11::GL_POINT_SIZE_ARRAY_OES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_POINT_SIZE_ARRAY_OES"
		);
	}
	jint GLES11::GL_POINT_SIZE_ARRAY_POINTER_OES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_POINT_SIZE_ARRAY_POINTER_OES"
		);
	}
	jint GLES11::GL_POINT_SIZE_ARRAY_STRIDE_OES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_POINT_SIZE_ARRAY_STRIDE_OES"
		);
	}
	jint GLES11::GL_POINT_SIZE_ARRAY_TYPE_OES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_POINT_SIZE_ARRAY_TYPE_OES"
		);
	}
	jint GLES11::GL_POINT_SIZE_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_POINT_SIZE_MAX"
		);
	}
	jint GLES11::GL_POINT_SIZE_MIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_POINT_SIZE_MIN"
		);
	}
	jint GLES11::GL_POINT_SPRITE_OES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_POINT_SPRITE_OES"
		);
	}
	jint GLES11::GL_POLYGON_OFFSET_FACTOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_POLYGON_OFFSET_FACTOR"
		);
	}
	jint GLES11::GL_POLYGON_OFFSET_UNITS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_POLYGON_OFFSET_UNITS"
		);
	}
	jint GLES11::GL_PREVIOUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_PREVIOUS"
		);
	}
	jint GLES11::GL_PRIMARY_COLOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_PRIMARY_COLOR"
		);
	}
	jint GLES11::GL_PROJECTION_MATRIX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_PROJECTION_MATRIX"
		);
	}
	jint GLES11::GL_PROJECTION_MATRIX_FLOAT_AS_INT_BITS_OES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_PROJECTION_MATRIX_FLOAT_AS_INT_BITS_OES"
		);
	}
	jint GLES11::GL_PROJECTION_STACK_DEPTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_PROJECTION_STACK_DEPTH"
		);
	}
	jint GLES11::GL_RGB_SCALE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_RGB_SCALE"
		);
	}
	jint GLES11::GL_SAMPLES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_SAMPLES"
		);
	}
	jint GLES11::GL_SAMPLE_BUFFERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_SAMPLE_BUFFERS"
		);
	}
	jint GLES11::GL_SAMPLE_COVERAGE_INVERT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_SAMPLE_COVERAGE_INVERT"
		);
	}
	jint GLES11::GL_SAMPLE_COVERAGE_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_SAMPLE_COVERAGE_VALUE"
		);
	}
	jint GLES11::GL_SCISSOR_BOX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_SCISSOR_BOX"
		);
	}
	jint GLES11::GL_SHADE_MODEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_SHADE_MODEL"
		);
	}
	jint GLES11::GL_SRC0_ALPHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_SRC0_ALPHA"
		);
	}
	jint GLES11::GL_SRC0_RGB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_SRC0_RGB"
		);
	}
	jint GLES11::GL_SRC1_ALPHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_SRC1_ALPHA"
		);
	}
	jint GLES11::GL_SRC1_RGB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_SRC1_RGB"
		);
	}
	jint GLES11::GL_SRC2_ALPHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_SRC2_ALPHA"
		);
	}
	jint GLES11::GL_SRC2_RGB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_SRC2_RGB"
		);
	}
	jint GLES11::GL_STATIC_DRAW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_STATIC_DRAW"
		);
	}
	jint GLES11::GL_STENCIL_CLEAR_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_STENCIL_CLEAR_VALUE"
		);
	}
	jint GLES11::GL_STENCIL_FAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_STENCIL_FAIL"
		);
	}
	jint GLES11::GL_STENCIL_FUNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_STENCIL_FUNC"
		);
	}
	jint GLES11::GL_STENCIL_PASS_DEPTH_FAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_STENCIL_PASS_DEPTH_FAIL"
		);
	}
	jint GLES11::GL_STENCIL_PASS_DEPTH_PASS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_STENCIL_PASS_DEPTH_PASS"
		);
	}
	jint GLES11::GL_STENCIL_REF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_STENCIL_REF"
		);
	}
	jint GLES11::GL_STENCIL_VALUE_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_STENCIL_VALUE_MASK"
		);
	}
	jint GLES11::GL_STENCIL_WRITEMASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_STENCIL_WRITEMASK"
		);
	}
	jint GLES11::GL_SUBTRACT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_SUBTRACT"
		);
	}
	jint GLES11::GL_TEXTURE_BINDING_2D()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_TEXTURE_BINDING_2D"
		);
	}
	jint GLES11::GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING"
		);
	}
	jint GLES11::GL_TEXTURE_COORD_ARRAY_POINTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_TEXTURE_COORD_ARRAY_POINTER"
		);
	}
	jint GLES11::GL_TEXTURE_COORD_ARRAY_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_TEXTURE_COORD_ARRAY_SIZE"
		);
	}
	jint GLES11::GL_TEXTURE_COORD_ARRAY_STRIDE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_TEXTURE_COORD_ARRAY_STRIDE"
		);
	}
	jint GLES11::GL_TEXTURE_COORD_ARRAY_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_TEXTURE_COORD_ARRAY_TYPE"
		);
	}
	jint GLES11::GL_TEXTURE_MATRIX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_TEXTURE_MATRIX"
		);
	}
	jint GLES11::GL_TEXTURE_MATRIX_FLOAT_AS_INT_BITS_OES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_TEXTURE_MATRIX_FLOAT_AS_INT_BITS_OES"
		);
	}
	jint GLES11::GL_TEXTURE_STACK_DEPTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_TEXTURE_STACK_DEPTH"
		);
	}
	jint GLES11::GL_VERTEX_ARRAY_BUFFER_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_VERTEX_ARRAY_BUFFER_BINDING"
		);
	}
	jint GLES11::GL_VERTEX_ARRAY_POINTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_VERTEX_ARRAY_POINTER"
		);
	}
	jint GLES11::GL_VERTEX_ARRAY_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_VERTEX_ARRAY_SIZE"
		);
	}
	jint GLES11::GL_VERTEX_ARRAY_STRIDE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_VERTEX_ARRAY_STRIDE"
		);
	}
	jint GLES11::GL_VERTEX_ARRAY_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_VERTEX_ARRAY_TYPE"
		);
	}
	jint GLES11::GL_VIEWPORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_VIEWPORT"
		);
	}
	jint GLES11::GL_WRITE_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES11",
			"GL_WRITE_ONLY"
		);
	}
	
	// Constructors
	void GLES11::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.opengl.GLES11",
			"()V");
	}
	
	// Methods
	void GLES11::glBindBuffer(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glBindBuffer",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES11::glBufferData(jint arg0, jint arg1, __jni_impl::java::nio::Buffer arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glBufferData",
			"(IILjava/nio/Buffer;I)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	void GLES11::glBufferSubData(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::Buffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glBufferSubData",
			"(IIILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void GLES11::glDeleteBuffers(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glDeleteBuffers",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void GLES11::glDeleteBuffers(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glDeleteBuffers",
			"(I[II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES11::glDrawElements(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glDrawElements",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11::glGenBuffers(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGenBuffers",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void GLES11::glGenBuffers(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGenBuffers",
			"(I[II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES11::glGetBooleanv(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetBooleanv",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void GLES11::glGetBooleanv(jint arg0, jbooleanArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetBooleanv",
			"(I[ZI)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES11::glGetBufferParameteriv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetBufferParameteriv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11::glGetBufferParameteriv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetBufferParameteriv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GLES11::glGetFloatv(jint arg0, jfloatArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetFloatv",
			"(I[FI)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES11::glGetFloatv(jint arg0, __jni_impl::java::nio::FloatBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetFloatv",
			"(ILjava/nio/FloatBuffer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void GLES11::glGetTexParameterfv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetTexParameterfv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GLES11::glGetTexParameterfv(jint arg0, jint arg1, jfloatArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetTexParameterfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11::glGetTexParameteriv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetTexParameteriv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11::glGetTexParameteriv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetTexParameteriv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean GLES11::glIsBuffer(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.GLES11",
			"glIsBuffer",
			"(I)Z",
			arg0
		);
	}
	jboolean GLES11::glIsEnabled(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.GLES11",
			"glIsEnabled",
			"(I)Z",
			arg0
		);
	}
	jboolean GLES11::glIsTexture(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.GLES11",
			"glIsTexture",
			"(I)Z",
			arg0
		);
	}
	void GLES11::glTexParameterfv(jint arg0, jint arg1, jfloatArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glTexParameterfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11::glTexParameterfv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glTexParameterfv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GLES11::glTexParameteri(jint arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glTexParameteri",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES11::glTexParameteriv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glTexParameteriv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GLES11::glTexParameteriv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glTexParameteriv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11::glClipPlanef(jint arg0, jfloatArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glClipPlanef",
			"(I[FI)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES11::glClipPlanef(jint arg0, __jni_impl::java::nio::FloatBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glClipPlanef",
			"(ILjava/nio/FloatBuffer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void GLES11::glClipPlanex(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glClipPlanex",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void GLES11::glClipPlanex(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glClipPlanex",
			"(I[II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES11::glColor4ub(jbyte arg0, jbyte arg1, jbyte arg2, jbyte arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glColor4ub",
			"(BBBB)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11::glGetClipPlanef(jint arg0, __jni_impl::java::nio::FloatBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetClipPlanef",
			"(ILjava/nio/FloatBuffer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void GLES11::glGetClipPlanef(jint arg0, jfloatArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetClipPlanef",
			"(I[FI)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES11::glGetClipPlanex(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetClipPlanex",
			"(I[II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES11::glGetClipPlanex(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetClipPlanex",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void GLES11::glGetFixedv(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetFixedv",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void GLES11::glGetFixedv(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetFixedv",
			"(I[II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES11::glGetLightfv(jint arg0, jint arg1, jfloatArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetLightfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11::glGetLightfv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetLightfv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GLES11::glGetLightxv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetLightxv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11::glGetLightxv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetLightxv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GLES11::glGetMaterialfv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetMaterialfv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GLES11::glGetMaterialfv(jint arg0, jint arg1, jfloatArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetMaterialfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11::glGetMaterialxv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetMaterialxv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11::glGetMaterialxv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetMaterialxv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GLES11::glGetTexEnvfv(jint arg0, jint arg1, jfloatArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetTexEnvfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11::glGetTexEnvfv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetTexEnvfv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GLES11::glGetTexEnviv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetTexEnviv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11::glGetTexEnviv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetTexEnviv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GLES11::glGetTexEnvxv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetTexEnvxv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11::glGetTexEnvxv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetTexEnvxv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GLES11::glGetTexParameterxv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetTexParameterxv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GLES11::glGetTexParameterxv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glGetTexParameterxv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11::glPointParameterf(jint arg0, jfloat arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glPointParameterf",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void GLES11::glPointParameterfv(jint arg0, __jni_impl::java::nio::FloatBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glPointParameterfv",
			"(ILjava/nio/FloatBuffer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void GLES11::glPointParameterfv(jint arg0, jfloatArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glPointParameterfv",
			"(I[FI)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES11::glPointParameterx(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glPointParameterx",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES11::glPointParameterxv(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glPointParameterxv",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void GLES11::glPointParameterxv(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glPointParameterxv",
			"(I[II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES11::glPointSizePointerOES(jint arg0, jint arg1, __jni_impl::java::nio::Buffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glPointSizePointerOES",
			"(IILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GLES11::glTexEnvi(jint arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glTexEnvi",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES11::glTexEnviv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glTexEnviv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11::glTexEnviv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glTexEnviv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GLES11::glTexParameterxv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glTexParameterxv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11::glTexParameterxv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glTexParameterxv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GLES11::glColorPointer(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glColorPointer",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11::glNormalPointer(jint arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glNormalPointer",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES11::glTexCoordPointer(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glTexCoordPointer",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11::glVertexPointer(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES11",
			"glVertexPointer",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace __jni_impl::android::opengl

namespace android::opengl
{
	class GLES11 : public __jni_impl::android::opengl::GLES11
	{
	public:
		GLES11(QAndroidJniObject obj) { __thiz = obj; }
		GLES11()
		{
			__constructor();
		}
	};
} // namespace android::opengl

#endif // ANDROID_OPENGL_GLES11

