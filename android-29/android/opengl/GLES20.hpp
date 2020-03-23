#pragma once

#ifndef ANDROID_OPENGL_GLES20
#define ANDROID_OPENGL_GLES20

#include "../../__JniBaseClass.hpp"

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
	class GLES20 : public __JniBaseClass
	{
	public:
		// Fields
		static jint GL_ACTIVE_ATTRIBUTES();
		static jint GL_ACTIVE_ATTRIBUTE_MAX_LENGTH();
		static jint GL_ACTIVE_TEXTURE();
		static jint GL_ACTIVE_UNIFORMS();
		static jint GL_ACTIVE_UNIFORM_MAX_LENGTH();
		static jint GL_ALIASED_LINE_WIDTH_RANGE();
		static jint GL_ALIASED_POINT_SIZE_RANGE();
		static jint GL_ALPHA();
		static jint GL_ALPHA_BITS();
		static jint GL_ALWAYS();
		static jint GL_ARRAY_BUFFER();
		static jint GL_ARRAY_BUFFER_BINDING();
		static jint GL_ATTACHED_SHADERS();
		static jint GL_BACK();
		static jint GL_BLEND();
		static jint GL_BLEND_COLOR();
		static jint GL_BLEND_DST_ALPHA();
		static jint GL_BLEND_DST_RGB();
		static jint GL_BLEND_EQUATION();
		static jint GL_BLEND_EQUATION_ALPHA();
		static jint GL_BLEND_EQUATION_RGB();
		static jint GL_BLEND_SRC_ALPHA();
		static jint GL_BLEND_SRC_RGB();
		static jint GL_BLUE_BITS();
		static jint GL_BOOL();
		static jint GL_BOOL_VEC2();
		static jint GL_BOOL_VEC3();
		static jint GL_BOOL_VEC4();
		static jint GL_BUFFER_SIZE();
		static jint GL_BUFFER_USAGE();
		static jint GL_BYTE();
		static jint GL_CCW();
		static jint GL_CLAMP_TO_EDGE();
		static jint GL_COLOR_ATTACHMENT0();
		static jint GL_COLOR_BUFFER_BIT();
		static jint GL_COLOR_CLEAR_VALUE();
		static jint GL_COLOR_WRITEMASK();
		static jint GL_COMPILE_STATUS();
		static jint GL_COMPRESSED_TEXTURE_FORMATS();
		static jint GL_CONSTANT_ALPHA();
		static jint GL_CONSTANT_COLOR();
		static jint GL_CULL_FACE();
		static jint GL_CULL_FACE_MODE();
		static jint GL_CURRENT_PROGRAM();
		static jint GL_CURRENT_VERTEX_ATTRIB();
		static jint GL_CW();
		static jint GL_DECR();
		static jint GL_DECR_WRAP();
		static jint GL_DELETE_STATUS();
		static jint GL_DEPTH_ATTACHMENT();
		static jint GL_DEPTH_BITS();
		static jint GL_DEPTH_BUFFER_BIT();
		static jint GL_DEPTH_CLEAR_VALUE();
		static jint GL_DEPTH_COMPONENT();
		static jint GL_DEPTH_COMPONENT16();
		static jint GL_DEPTH_FUNC();
		static jint GL_DEPTH_RANGE();
		static jint GL_DEPTH_TEST();
		static jint GL_DEPTH_WRITEMASK();
		static jint GL_DITHER();
		static jint GL_DONT_CARE();
		static jint GL_DST_ALPHA();
		static jint GL_DST_COLOR();
		static jint GL_DYNAMIC_DRAW();
		static jint GL_ELEMENT_ARRAY_BUFFER();
		static jint GL_ELEMENT_ARRAY_BUFFER_BINDING();
		static jint GL_EQUAL();
		static jint GL_EXTENSIONS();
		static jint GL_FALSE();
		static jint GL_FASTEST();
		static jint GL_FIXED();
		static jint GL_FLOAT();
		static jint GL_FLOAT_MAT2();
		static jint GL_FLOAT_MAT3();
		static jint GL_FLOAT_MAT4();
		static jint GL_FLOAT_VEC2();
		static jint GL_FLOAT_VEC3();
		static jint GL_FLOAT_VEC4();
		static jint GL_FRAGMENT_SHADER();
		static jint GL_FRAMEBUFFER();
		static jint GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME();
		static jint GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE();
		static jint GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE();
		static jint GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL();
		static jint GL_FRAMEBUFFER_BINDING();
		static jint GL_FRAMEBUFFER_COMPLETE();
		static jint GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT();
		static jint GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS();
		static jint GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT();
		static jint GL_FRAMEBUFFER_UNSUPPORTED();
		static jint GL_FRONT();
		static jint GL_FRONT_AND_BACK();
		static jint GL_FRONT_FACE();
		static jint GL_FUNC_ADD();
		static jint GL_FUNC_REVERSE_SUBTRACT();
		static jint GL_FUNC_SUBTRACT();
		static jint GL_GENERATE_MIPMAP_HINT();
		static jint GL_GEQUAL();
		static jint GL_GREATER();
		static jint GL_GREEN_BITS();
		static jint GL_HIGH_FLOAT();
		static jint GL_HIGH_INT();
		static jint GL_IMPLEMENTATION_COLOR_READ_FORMAT();
		static jint GL_IMPLEMENTATION_COLOR_READ_TYPE();
		static jint GL_INCR();
		static jint GL_INCR_WRAP();
		static jint GL_INFO_LOG_LENGTH();
		static jint GL_INT();
		static jint GL_INT_VEC2();
		static jint GL_INT_VEC3();
		static jint GL_INT_VEC4();
		static jint GL_INVALID_ENUM();
		static jint GL_INVALID_FRAMEBUFFER_OPERATION();
		static jint GL_INVALID_OPERATION();
		static jint GL_INVALID_VALUE();
		static jint GL_INVERT();
		static jint GL_KEEP();
		static jint GL_LEQUAL();
		static jint GL_LESS();
		static jint GL_LINEAR();
		static jint GL_LINEAR_MIPMAP_LINEAR();
		static jint GL_LINEAR_MIPMAP_NEAREST();
		static jint GL_LINES();
		static jint GL_LINE_LOOP();
		static jint GL_LINE_STRIP();
		static jint GL_LINE_WIDTH();
		static jint GL_LINK_STATUS();
		static jint GL_LOW_FLOAT();
		static jint GL_LOW_INT();
		static jint GL_LUMINANCE();
		static jint GL_LUMINANCE_ALPHA();
		static jint GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS();
		static jint GL_MAX_CUBE_MAP_TEXTURE_SIZE();
		static jint GL_MAX_FRAGMENT_UNIFORM_VECTORS();
		static jint GL_MAX_RENDERBUFFER_SIZE();
		static jint GL_MAX_TEXTURE_IMAGE_UNITS();
		static jint GL_MAX_TEXTURE_SIZE();
		static jint GL_MAX_VARYING_VECTORS();
		static jint GL_MAX_VERTEX_ATTRIBS();
		static jint GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS();
		static jint GL_MAX_VERTEX_UNIFORM_VECTORS();
		static jint GL_MAX_VIEWPORT_DIMS();
		static jint GL_MEDIUM_FLOAT();
		static jint GL_MEDIUM_INT();
		static jint GL_MIRRORED_REPEAT();
		static jint GL_NEAREST();
		static jint GL_NEAREST_MIPMAP_LINEAR();
		static jint GL_NEAREST_MIPMAP_NEAREST();
		static jint GL_NEVER();
		static jint GL_NICEST();
		static jint GL_NONE();
		static jint GL_NOTEQUAL();
		static jint GL_NO_ERROR();
		static jint GL_NUM_COMPRESSED_TEXTURE_FORMATS();
		static jint GL_NUM_SHADER_BINARY_FORMATS();
		static jint GL_ONE();
		static jint GL_ONE_MINUS_CONSTANT_ALPHA();
		static jint GL_ONE_MINUS_CONSTANT_COLOR();
		static jint GL_ONE_MINUS_DST_ALPHA();
		static jint GL_ONE_MINUS_DST_COLOR();
		static jint GL_ONE_MINUS_SRC_ALPHA();
		static jint GL_ONE_MINUS_SRC_COLOR();
		static jint GL_OUT_OF_MEMORY();
		static jint GL_PACK_ALIGNMENT();
		static jint GL_POINTS();
		static jint GL_POLYGON_OFFSET_FACTOR();
		static jint GL_POLYGON_OFFSET_FILL();
		static jint GL_POLYGON_OFFSET_UNITS();
		static jint GL_RED_BITS();
		static jint GL_RENDERBUFFER();
		static jint GL_RENDERBUFFER_ALPHA_SIZE();
		static jint GL_RENDERBUFFER_BINDING();
		static jint GL_RENDERBUFFER_BLUE_SIZE();
		static jint GL_RENDERBUFFER_DEPTH_SIZE();
		static jint GL_RENDERBUFFER_GREEN_SIZE();
		static jint GL_RENDERBUFFER_HEIGHT();
		static jint GL_RENDERBUFFER_INTERNAL_FORMAT();
		static jint GL_RENDERBUFFER_RED_SIZE();
		static jint GL_RENDERBUFFER_STENCIL_SIZE();
		static jint GL_RENDERBUFFER_WIDTH();
		static jint GL_RENDERER();
		static jint GL_REPEAT();
		static jint GL_REPLACE();
		static jint GL_RGB();
		static jint GL_RGB565();
		static jint GL_RGB5_A1();
		static jint GL_RGBA();
		static jint GL_RGBA4();
		static jint GL_SAMPLER_2D();
		static jint GL_SAMPLER_CUBE();
		static jint GL_SAMPLES();
		static jint GL_SAMPLE_ALPHA_TO_COVERAGE();
		static jint GL_SAMPLE_BUFFERS();
		static jint GL_SAMPLE_COVERAGE();
		static jint GL_SAMPLE_COVERAGE_INVERT();
		static jint GL_SAMPLE_COVERAGE_VALUE();
		static jint GL_SCISSOR_BOX();
		static jint GL_SCISSOR_TEST();
		static jint GL_SHADER_BINARY_FORMATS();
		static jint GL_SHADER_COMPILER();
		static jint GL_SHADER_SOURCE_LENGTH();
		static jint GL_SHADER_TYPE();
		static jint GL_SHADING_LANGUAGE_VERSION();
		static jint GL_SHORT();
		static jint GL_SRC_ALPHA();
		static jint GL_SRC_ALPHA_SATURATE();
		static jint GL_SRC_COLOR();
		static jint GL_STATIC_DRAW();
		static jint GL_STENCIL_ATTACHMENT();
		static jint GL_STENCIL_BACK_FAIL();
		static jint GL_STENCIL_BACK_FUNC();
		static jint GL_STENCIL_BACK_PASS_DEPTH_FAIL();
		static jint GL_STENCIL_BACK_PASS_DEPTH_PASS();
		static jint GL_STENCIL_BACK_REF();
		static jint GL_STENCIL_BACK_VALUE_MASK();
		static jint GL_STENCIL_BACK_WRITEMASK();
		static jint GL_STENCIL_BITS();
		static jint GL_STENCIL_BUFFER_BIT();
		static jint GL_STENCIL_CLEAR_VALUE();
		static jint GL_STENCIL_FAIL();
		static jint GL_STENCIL_FUNC();
		static jint GL_STENCIL_INDEX();
		static jint GL_STENCIL_INDEX8();
		static jint GL_STENCIL_PASS_DEPTH_FAIL();
		static jint GL_STENCIL_PASS_DEPTH_PASS();
		static jint GL_STENCIL_REF();
		static jint GL_STENCIL_TEST();
		static jint GL_STENCIL_VALUE_MASK();
		static jint GL_STENCIL_WRITEMASK();
		static jint GL_STREAM_DRAW();
		static jint GL_SUBPIXEL_BITS();
		static jint GL_TEXTURE();
		static jint GL_TEXTURE0();
		static jint GL_TEXTURE1();
		static jint GL_TEXTURE10();
		static jint GL_TEXTURE11();
		static jint GL_TEXTURE12();
		static jint GL_TEXTURE13();
		static jint GL_TEXTURE14();
		static jint GL_TEXTURE15();
		static jint GL_TEXTURE16();
		static jint GL_TEXTURE17();
		static jint GL_TEXTURE18();
		static jint GL_TEXTURE19();
		static jint GL_TEXTURE2();
		static jint GL_TEXTURE20();
		static jint GL_TEXTURE21();
		static jint GL_TEXTURE22();
		static jint GL_TEXTURE23();
		static jint GL_TEXTURE24();
		static jint GL_TEXTURE25();
		static jint GL_TEXTURE26();
		static jint GL_TEXTURE27();
		static jint GL_TEXTURE28();
		static jint GL_TEXTURE29();
		static jint GL_TEXTURE3();
		static jint GL_TEXTURE30();
		static jint GL_TEXTURE31();
		static jint GL_TEXTURE4();
		static jint GL_TEXTURE5();
		static jint GL_TEXTURE6();
		static jint GL_TEXTURE7();
		static jint GL_TEXTURE8();
		static jint GL_TEXTURE9();
		static jint GL_TEXTURE_2D();
		static jint GL_TEXTURE_BINDING_2D();
		static jint GL_TEXTURE_BINDING_CUBE_MAP();
		static jint GL_TEXTURE_CUBE_MAP();
		static jint GL_TEXTURE_CUBE_MAP_NEGATIVE_X();
		static jint GL_TEXTURE_CUBE_MAP_NEGATIVE_Y();
		static jint GL_TEXTURE_CUBE_MAP_NEGATIVE_Z();
		static jint GL_TEXTURE_CUBE_MAP_POSITIVE_X();
		static jint GL_TEXTURE_CUBE_MAP_POSITIVE_Y();
		static jint GL_TEXTURE_CUBE_MAP_POSITIVE_Z();
		static jint GL_TEXTURE_MAG_FILTER();
		static jint GL_TEXTURE_MIN_FILTER();
		static jint GL_TEXTURE_WRAP_S();
		static jint GL_TEXTURE_WRAP_T();
		static jint GL_TRIANGLES();
		static jint GL_TRIANGLE_FAN();
		static jint GL_TRIANGLE_STRIP();
		static jint GL_TRUE();
		static jint GL_UNPACK_ALIGNMENT();
		static jint GL_UNSIGNED_BYTE();
		static jint GL_UNSIGNED_INT();
		static jint GL_UNSIGNED_SHORT();
		static jint GL_UNSIGNED_SHORT_4_4_4_4();
		static jint GL_UNSIGNED_SHORT_5_5_5_1();
		static jint GL_UNSIGNED_SHORT_5_6_5();
		static jint GL_VALIDATE_STATUS();
		static jint GL_VENDOR();
		static jint GL_VERSION();
		static jint GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING();
		static jint GL_VERTEX_ATTRIB_ARRAY_ENABLED();
		static jint GL_VERTEX_ATTRIB_ARRAY_NORMALIZED();
		static jint GL_VERTEX_ATTRIB_ARRAY_POINTER();
		static jint GL_VERTEX_ATTRIB_ARRAY_SIZE();
		static jint GL_VERTEX_ATTRIB_ARRAY_STRIDE();
		static jint GL_VERTEX_ATTRIB_ARRAY_TYPE();
		static jint GL_VERTEX_SHADER();
		static jint GL_VIEWPORT();
		static jint GL_ZERO();
		
		// Constructors
		void __constructor();
		
		// Methods
		static void glReadPixels(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, __jni_impl::java::nio::Buffer arg6);
		static void glActiveTexture(jint arg0);
		static void glAttachShader(jint arg0, jint arg1);
		static void glBindAttribLocation(jint arg0, jint arg1, jstring arg2);
		static void glBindBuffer(jint arg0, jint arg1);
		static void glBindFramebuffer(jint arg0, jint arg1);
		static void glBindRenderbuffer(jint arg0, jint arg1);
		static void glBindTexture(jint arg0, jint arg1);
		static void glBlendColor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		static void glBlendEquation(jint arg0);
		static void glBlendEquationSeparate(jint arg0, jint arg1);
		static void glBlendFunc(jint arg0, jint arg1);
		static void glBlendFuncSeparate(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glBufferData(jint arg0, jint arg1, __jni_impl::java::nio::Buffer arg2, jint arg3);
		static void glBufferSubData(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::Buffer arg3);
		static jint glCheckFramebufferStatus(jint arg0);
		static void glClear(jint arg0);
		static void glClearColor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		static void glClearDepthf(jfloat arg0);
		static void glClearStencil(jint arg0);
		static void glColorMask(jboolean arg0, jboolean arg1, jboolean arg2, jboolean arg3);
		static void glCompileShader(jint arg0);
		static void glCompressedTexImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, __jni_impl::java::nio::Buffer arg7);
		static void glCompressedTexSubImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, __jni_impl::java::nio::Buffer arg8);
		static void glCopyTexImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7);
		static void glCopyTexSubImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7);
		static jint glCreateProgram();
		static jint glCreateShader(jint arg0);
		static void glCullFace(jint arg0);
		static void glDeleteBuffers(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glDeleteBuffers(jint arg0, jintArray arg1, jint arg2);
		static void glDeleteFramebuffers(jint arg0, jintArray arg1, jint arg2);
		static void glDeleteFramebuffers(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glDeleteProgram(jint arg0);
		static void glDeleteRenderbuffers(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glDeleteRenderbuffers(jint arg0, jintArray arg1, jint arg2);
		static void glDeleteShader(jint arg0);
		static void glDeleteTextures(jint arg0, jintArray arg1, jint arg2);
		static void glDeleteTextures(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glDepthFunc(jint arg0);
		static void glDepthMask(jboolean arg0);
		static void glDepthRangef(jfloat arg0, jfloat arg1);
		static void glDetachShader(jint arg0, jint arg1);
		static void glDisable(jint arg0);
		static void glDisableVertexAttribArray(jint arg0);
		static void glDrawArrays(jint arg0, jint arg1, jint arg2);
		static void glDrawElements(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::Buffer arg3);
		static void glDrawElements(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glEnable(jint arg0);
		static void glEnableVertexAttribArray(jint arg0);
		static void glFinish();
		static void glFlush();
		static void glFramebufferRenderbuffer(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glFramebufferTexture2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glFrontFace(jint arg0);
		static void glGenBuffers(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glGenBuffers(jint arg0, jintArray arg1, jint arg2);
		static void glGenerateMipmap(jint arg0);
		static void glGenFramebuffers(jint arg0, jintArray arg1, jint arg2);
		static void glGenFramebuffers(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glGenRenderbuffers(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glGenRenderbuffers(jint arg0, jintArray arg1, jint arg2);
		static void glGenTextures(jint arg0, jintArray arg1, jint arg2);
		static void glGenTextures(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glGetActiveAttrib(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4, jintArray arg5, jint arg6, jintArray arg7, jint arg8, jbyteArray arg9, jint arg10);
		static QAndroidJniObject glGetActiveAttrib(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2, __jni_impl::java::nio::IntBuffer arg3);
		static QAndroidJniObject glGetActiveAttrib(jint arg0, jint arg1, jintArray arg2, jint arg3, jintArray arg4, jint arg5);
		static void glGetActiveUniform(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4, jintArray arg5, jint arg6, jintArray arg7, jint arg8, jbyteArray arg9, jint arg10);
		static QAndroidJniObject glGetActiveUniform(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2, __jni_impl::java::nio::IntBuffer arg3);
		static QAndroidJniObject glGetActiveUniform(jint arg0, jint arg1, jintArray arg2, jint arg3, jintArray arg4, jint arg5);
		static void glGetAttachedShaders(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2, __jni_impl::java::nio::IntBuffer arg3);
		static void glGetAttachedShaders(jint arg0, jint arg1, jintArray arg2, jint arg3, jintArray arg4, jint arg5);
		static jint glGetAttribLocation(jint arg0, jstring arg1);
		static void glGetBooleanv(jint arg0, jbooleanArray arg1, jint arg2);
		static void glGetBooleanv(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glGetBufferParameteriv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glGetBufferParameteriv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static jint glGetError();
		static void glGetFloatv(jint arg0, __jni_impl::java::nio::FloatBuffer arg1);
		static void glGetFloatv(jint arg0, jfloatArray arg1, jint arg2);
		static void glGetFramebufferAttachmentParameteriv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4);
		static void glGetFramebufferAttachmentParameteriv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3);
		static void glGetIntegerv(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glGetIntegerv(jint arg0, jintArray arg1, jint arg2);
		static void glGetProgramiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glGetProgramiv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static QAndroidJniObject glGetProgramInfoLog(jint arg0);
		static void glGetRenderbufferParameteriv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glGetRenderbufferParameteriv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glGetShaderiv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glGetShaderiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static QAndroidJniObject glGetShaderInfoLog(jint arg0);
		static void glGetShaderPrecisionFormat(jint arg0, jint arg1, jintArray arg2, jint arg3, jintArray arg4, jint arg5);
		static void glGetShaderPrecisionFormat(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2, __jni_impl::java::nio::IntBuffer arg3);
		static QAndroidJniObject glGetShaderSource(jint arg0);
		static void glGetShaderSource(jint arg0, jint arg1, jintArray arg2, jint arg3, jbyteArray arg4, jint arg5);
		static QAndroidJniObject glGetString(jint arg0);
		static void glGetTexParameterfv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2);
		static void glGetTexParameterfv(jint arg0, jint arg1, jfloatArray arg2, jint arg3);
		static void glGetTexParameteriv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glGetTexParameteriv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glGetUniformfv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2);
		static void glGetUniformfv(jint arg0, jint arg1, jfloatArray arg2, jint arg3);
		static void glGetUniformiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glGetUniformiv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static jint glGetUniformLocation(jint arg0, jstring arg1);
		static void glGetVertexAttribfv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2);
		static void glGetVertexAttribfv(jint arg0, jint arg1, jfloatArray arg2, jint arg3);
		static void glGetVertexAttribiv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glGetVertexAttribiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glHint(jint arg0, jint arg1);
		static jboolean glIsBuffer(jint arg0);
		static jboolean glIsEnabled(jint arg0);
		static jboolean glIsFramebuffer(jint arg0);
		static jboolean glIsProgram(jint arg0);
		static jboolean glIsRenderbuffer(jint arg0);
		static jboolean glIsShader(jint arg0);
		static jboolean glIsTexture(jint arg0);
		static void glLineWidth(jfloat arg0);
		static void glLinkProgram(jint arg0);
		static void glPixelStorei(jint arg0, jint arg1);
		static void glPolygonOffset(jfloat arg0, jfloat arg1);
		static void glReleaseShaderCompiler();
		static void glRenderbufferStorage(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glSampleCoverage(jfloat arg0, jboolean arg1);
		static void glScissor(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glShaderBinary(jint arg0, __jni_impl::java::nio::IntBuffer arg1, jint arg2, __jni_impl::java::nio::Buffer arg3, jint arg4);
		static void glShaderBinary(jint arg0, jintArray arg1, jint arg2, jint arg3, __jni_impl::java::nio::Buffer arg4, jint arg5);
		static void glShaderSource(jint arg0, jstring arg1);
		static void glStencilFunc(jint arg0, jint arg1, jint arg2);
		static void glStencilFuncSeparate(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glStencilMask(jint arg0);
		static void glStencilMaskSeparate(jint arg0, jint arg1);
		static void glStencilOp(jint arg0, jint arg1, jint arg2);
		static void glStencilOpSeparate(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glTexImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, __jni_impl::java::nio::Buffer arg8);
		static void glTexParameterf(jint arg0, jint arg1, jfloat arg2);
		static void glTexParameterfv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2);
		static void glTexParameterfv(jint arg0, jint arg1, jfloatArray arg2, jint arg3);
		static void glTexParameteri(jint arg0, jint arg1, jint arg2);
		static void glTexParameteriv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glTexParameteriv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glTexSubImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, __jni_impl::java::nio::Buffer arg8);
		static void glUniform1f(jint arg0, jfloat arg1);
		static void glUniform1fv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2);
		static void glUniform1fv(jint arg0, jint arg1, jfloatArray arg2, jint arg3);
		static void glUniform1i(jint arg0, jint arg1);
		static void glUniform1iv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glUniform1iv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glUniform2f(jint arg0, jfloat arg1, jfloat arg2);
		static void glUniform2fv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2);
		static void glUniform2fv(jint arg0, jint arg1, jfloatArray arg2, jint arg3);
		static void glUniform2i(jint arg0, jint arg1, jint arg2);
		static void glUniform2iv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glUniform2iv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glUniform3f(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		static void glUniform3fv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2);
		static void glUniform3fv(jint arg0, jint arg1, jfloatArray arg2, jint arg3);
		static void glUniform3i(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glUniform3iv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glUniform3iv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glUniform4f(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4);
		static void glUniform4fv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2);
		static void glUniform4fv(jint arg0, jint arg1, jfloatArray arg2, jint arg3);
		static void glUniform4i(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glUniform4iv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glUniform4iv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glUniformMatrix2fv(jint arg0, jint arg1, jboolean arg2, __jni_impl::java::nio::FloatBuffer arg3);
		static void glUniformMatrix2fv(jint arg0, jint arg1, jboolean arg2, jfloatArray arg3, jint arg4);
		static void glUniformMatrix3fv(jint arg0, jint arg1, jboolean arg2, __jni_impl::java::nio::FloatBuffer arg3);
		static void glUniformMatrix3fv(jint arg0, jint arg1, jboolean arg2, jfloatArray arg3, jint arg4);
		static void glUniformMatrix4fv(jint arg0, jint arg1, jboolean arg2, __jni_impl::java::nio::FloatBuffer arg3);
		static void glUniformMatrix4fv(jint arg0, jint arg1, jboolean arg2, jfloatArray arg3, jint arg4);
		static void glUseProgram(jint arg0);
		static void glValidateProgram(jint arg0);
		static void glVertexAttrib1f(jint arg0, jfloat arg1);
		static void glVertexAttrib1fv(jint arg0, jfloatArray arg1, jint arg2);
		static void glVertexAttrib1fv(jint arg0, __jni_impl::java::nio::FloatBuffer arg1);
		static void glVertexAttrib2f(jint arg0, jfloat arg1, jfloat arg2);
		static void glVertexAttrib2fv(jint arg0, jfloatArray arg1, jint arg2);
		static void glVertexAttrib2fv(jint arg0, __jni_impl::java::nio::FloatBuffer arg1);
		static void glVertexAttrib3f(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		static void glVertexAttrib3fv(jint arg0, __jni_impl::java::nio::FloatBuffer arg1);
		static void glVertexAttrib3fv(jint arg0, jfloatArray arg1, jint arg2);
		static void glVertexAttrib4f(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4);
		static void glVertexAttrib4fv(jint arg0, jfloatArray arg1, jint arg2);
		static void glVertexAttrib4fv(jint arg0, __jni_impl::java::nio::FloatBuffer arg1);
		static void glVertexAttribPointer(jint arg0, jint arg1, jint arg2, jboolean arg3, jint arg4, __jni_impl::java::nio::Buffer arg5);
		static void glVertexAttribPointer(jint arg0, jint arg1, jint arg2, jboolean arg3, jint arg4, jint arg5);
		static void glViewport(jint arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace __jni_impl::android::opengl

#include "../../java/nio/Buffer.hpp"
#include "../../java/nio/IntBuffer.hpp"
#include "../../java/nio/FloatBuffer.hpp"

namespace __jni_impl::android::opengl
{
	// Fields
	jint GLES20::GL_ACTIVE_ATTRIBUTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ACTIVE_ATTRIBUTES");
	}
	jint GLES20::GL_ACTIVE_ATTRIBUTE_MAX_LENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ACTIVE_ATTRIBUTE_MAX_LENGTH");
	}
	jint GLES20::GL_ACTIVE_TEXTURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ACTIVE_TEXTURE");
	}
	jint GLES20::GL_ACTIVE_UNIFORMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ACTIVE_UNIFORMS");
	}
	jint GLES20::GL_ACTIVE_UNIFORM_MAX_LENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ACTIVE_UNIFORM_MAX_LENGTH");
	}
	jint GLES20::GL_ALIASED_LINE_WIDTH_RANGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ALIASED_LINE_WIDTH_RANGE");
	}
	jint GLES20::GL_ALIASED_POINT_SIZE_RANGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ALIASED_POINT_SIZE_RANGE");
	}
	jint GLES20::GL_ALPHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ALPHA");
	}
	jint GLES20::GL_ALPHA_BITS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ALPHA_BITS");
	}
	jint GLES20::GL_ALWAYS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ALWAYS");
	}
	jint GLES20::GL_ARRAY_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ARRAY_BUFFER");
	}
	jint GLES20::GL_ARRAY_BUFFER_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ARRAY_BUFFER_BINDING");
	}
	jint GLES20::GL_ATTACHED_SHADERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ATTACHED_SHADERS");
	}
	jint GLES20::GL_BACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BACK");
	}
	jint GLES20::GL_BLEND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BLEND");
	}
	jint GLES20::GL_BLEND_COLOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BLEND_COLOR");
	}
	jint GLES20::GL_BLEND_DST_ALPHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BLEND_DST_ALPHA");
	}
	jint GLES20::GL_BLEND_DST_RGB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BLEND_DST_RGB");
	}
	jint GLES20::GL_BLEND_EQUATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BLEND_EQUATION");
	}
	jint GLES20::GL_BLEND_EQUATION_ALPHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BLEND_EQUATION_ALPHA");
	}
	jint GLES20::GL_BLEND_EQUATION_RGB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BLEND_EQUATION_RGB");
	}
	jint GLES20::GL_BLEND_SRC_ALPHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BLEND_SRC_ALPHA");
	}
	jint GLES20::GL_BLEND_SRC_RGB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BLEND_SRC_RGB");
	}
	jint GLES20::GL_BLUE_BITS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BLUE_BITS");
	}
	jint GLES20::GL_BOOL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BOOL");
	}
	jint GLES20::GL_BOOL_VEC2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BOOL_VEC2");
	}
	jint GLES20::GL_BOOL_VEC3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BOOL_VEC3");
	}
	jint GLES20::GL_BOOL_VEC4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BOOL_VEC4");
	}
	jint GLES20::GL_BUFFER_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BUFFER_SIZE");
	}
	jint GLES20::GL_BUFFER_USAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BUFFER_USAGE");
	}
	jint GLES20::GL_BYTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_BYTE");
	}
	jint GLES20::GL_CCW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_CCW");
	}
	jint GLES20::GL_CLAMP_TO_EDGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_CLAMP_TO_EDGE");
	}
	jint GLES20::GL_COLOR_ATTACHMENT0()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_COLOR_ATTACHMENT0");
	}
	jint GLES20::GL_COLOR_BUFFER_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_COLOR_BUFFER_BIT");
	}
	jint GLES20::GL_COLOR_CLEAR_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_COLOR_CLEAR_VALUE");
	}
	jint GLES20::GL_COLOR_WRITEMASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_COLOR_WRITEMASK");
	}
	jint GLES20::GL_COMPILE_STATUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_COMPILE_STATUS");
	}
	jint GLES20::GL_COMPRESSED_TEXTURE_FORMATS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_COMPRESSED_TEXTURE_FORMATS");
	}
	jint GLES20::GL_CONSTANT_ALPHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_CONSTANT_ALPHA");
	}
	jint GLES20::GL_CONSTANT_COLOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_CONSTANT_COLOR");
	}
	jint GLES20::GL_CULL_FACE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_CULL_FACE");
	}
	jint GLES20::GL_CULL_FACE_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_CULL_FACE_MODE");
	}
	jint GLES20::GL_CURRENT_PROGRAM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_CURRENT_PROGRAM");
	}
	jint GLES20::GL_CURRENT_VERTEX_ATTRIB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_CURRENT_VERTEX_ATTRIB");
	}
	jint GLES20::GL_CW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_CW");
	}
	jint GLES20::GL_DECR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DECR");
	}
	jint GLES20::GL_DECR_WRAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DECR_WRAP");
	}
	jint GLES20::GL_DELETE_STATUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DELETE_STATUS");
	}
	jint GLES20::GL_DEPTH_ATTACHMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DEPTH_ATTACHMENT");
	}
	jint GLES20::GL_DEPTH_BITS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DEPTH_BITS");
	}
	jint GLES20::GL_DEPTH_BUFFER_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DEPTH_BUFFER_BIT");
	}
	jint GLES20::GL_DEPTH_CLEAR_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DEPTH_CLEAR_VALUE");
	}
	jint GLES20::GL_DEPTH_COMPONENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DEPTH_COMPONENT");
	}
	jint GLES20::GL_DEPTH_COMPONENT16()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DEPTH_COMPONENT16");
	}
	jint GLES20::GL_DEPTH_FUNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DEPTH_FUNC");
	}
	jint GLES20::GL_DEPTH_RANGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DEPTH_RANGE");
	}
	jint GLES20::GL_DEPTH_TEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DEPTH_TEST");
	}
	jint GLES20::GL_DEPTH_WRITEMASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DEPTH_WRITEMASK");
	}
	jint GLES20::GL_DITHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DITHER");
	}
	jint GLES20::GL_DONT_CARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DONT_CARE");
	}
	jint GLES20::GL_DST_ALPHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DST_ALPHA");
	}
	jint GLES20::GL_DST_COLOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DST_COLOR");
	}
	jint GLES20::GL_DYNAMIC_DRAW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_DYNAMIC_DRAW");
	}
	jint GLES20::GL_ELEMENT_ARRAY_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ELEMENT_ARRAY_BUFFER");
	}
	jint GLES20::GL_ELEMENT_ARRAY_BUFFER_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ELEMENT_ARRAY_BUFFER_BINDING");
	}
	jint GLES20::GL_EQUAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_EQUAL");
	}
	jint GLES20::GL_EXTENSIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_EXTENSIONS");
	}
	jint GLES20::GL_FALSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FALSE");
	}
	jint GLES20::GL_FASTEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FASTEST");
	}
	jint GLES20::GL_FIXED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FIXED");
	}
	jint GLES20::GL_FLOAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FLOAT");
	}
	jint GLES20::GL_FLOAT_MAT2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FLOAT_MAT2");
	}
	jint GLES20::GL_FLOAT_MAT3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FLOAT_MAT3");
	}
	jint GLES20::GL_FLOAT_MAT4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FLOAT_MAT4");
	}
	jint GLES20::GL_FLOAT_VEC2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FLOAT_VEC2");
	}
	jint GLES20::GL_FLOAT_VEC3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FLOAT_VEC3");
	}
	jint GLES20::GL_FLOAT_VEC4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FLOAT_VEC4");
	}
	jint GLES20::GL_FRAGMENT_SHADER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRAGMENT_SHADER");
	}
	jint GLES20::GL_FRAMEBUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRAMEBUFFER");
	}
	jint GLES20::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME");
	}
	jint GLES20::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE");
	}
	jint GLES20::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE");
	}
	jint GLES20::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL");
	}
	jint GLES20::GL_FRAMEBUFFER_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRAMEBUFFER_BINDING");
	}
	jint GLES20::GL_FRAMEBUFFER_COMPLETE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRAMEBUFFER_COMPLETE");
	}
	jint GLES20::GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT");
	}
	jint GLES20::GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS");
	}
	jint GLES20::GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT");
	}
	jint GLES20::GL_FRAMEBUFFER_UNSUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRAMEBUFFER_UNSUPPORTED");
	}
	jint GLES20::GL_FRONT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRONT");
	}
	jint GLES20::GL_FRONT_AND_BACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRONT_AND_BACK");
	}
	jint GLES20::GL_FRONT_FACE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FRONT_FACE");
	}
	jint GLES20::GL_FUNC_ADD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FUNC_ADD");
	}
	jint GLES20::GL_FUNC_REVERSE_SUBTRACT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FUNC_REVERSE_SUBTRACT");
	}
	jint GLES20::GL_FUNC_SUBTRACT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_FUNC_SUBTRACT");
	}
	jint GLES20::GL_GENERATE_MIPMAP_HINT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_GENERATE_MIPMAP_HINT");
	}
	jint GLES20::GL_GEQUAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_GEQUAL");
	}
	jint GLES20::GL_GREATER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_GREATER");
	}
	jint GLES20::GL_GREEN_BITS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_GREEN_BITS");
	}
	jint GLES20::GL_HIGH_FLOAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_HIGH_FLOAT");
	}
	jint GLES20::GL_HIGH_INT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_HIGH_INT");
	}
	jint GLES20::GL_IMPLEMENTATION_COLOR_READ_FORMAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_IMPLEMENTATION_COLOR_READ_FORMAT");
	}
	jint GLES20::GL_IMPLEMENTATION_COLOR_READ_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_IMPLEMENTATION_COLOR_READ_TYPE");
	}
	jint GLES20::GL_INCR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_INCR");
	}
	jint GLES20::GL_INCR_WRAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_INCR_WRAP");
	}
	jint GLES20::GL_INFO_LOG_LENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_INFO_LOG_LENGTH");
	}
	jint GLES20::GL_INT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_INT");
	}
	jint GLES20::GL_INT_VEC2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_INT_VEC2");
	}
	jint GLES20::GL_INT_VEC3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_INT_VEC3");
	}
	jint GLES20::GL_INT_VEC4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_INT_VEC4");
	}
	jint GLES20::GL_INVALID_ENUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_INVALID_ENUM");
	}
	jint GLES20::GL_INVALID_FRAMEBUFFER_OPERATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_INVALID_FRAMEBUFFER_OPERATION");
	}
	jint GLES20::GL_INVALID_OPERATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_INVALID_OPERATION");
	}
	jint GLES20::GL_INVALID_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_INVALID_VALUE");
	}
	jint GLES20::GL_INVERT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_INVERT");
	}
	jint GLES20::GL_KEEP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_KEEP");
	}
	jint GLES20::GL_LEQUAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LEQUAL");
	}
	jint GLES20::GL_LESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LESS");
	}
	jint GLES20::GL_LINEAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LINEAR");
	}
	jint GLES20::GL_LINEAR_MIPMAP_LINEAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LINEAR_MIPMAP_LINEAR");
	}
	jint GLES20::GL_LINEAR_MIPMAP_NEAREST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LINEAR_MIPMAP_NEAREST");
	}
	jint GLES20::GL_LINES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LINES");
	}
	jint GLES20::GL_LINE_LOOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LINE_LOOP");
	}
	jint GLES20::GL_LINE_STRIP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LINE_STRIP");
	}
	jint GLES20::GL_LINE_WIDTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LINE_WIDTH");
	}
	jint GLES20::GL_LINK_STATUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LINK_STATUS");
	}
	jint GLES20::GL_LOW_FLOAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LOW_FLOAT");
	}
	jint GLES20::GL_LOW_INT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LOW_INT");
	}
	jint GLES20::GL_LUMINANCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LUMINANCE");
	}
	jint GLES20::GL_LUMINANCE_ALPHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_LUMINANCE_ALPHA");
	}
	jint GLES20::GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS");
	}
	jint GLES20::GL_MAX_CUBE_MAP_TEXTURE_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MAX_CUBE_MAP_TEXTURE_SIZE");
	}
	jint GLES20::GL_MAX_FRAGMENT_UNIFORM_VECTORS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MAX_FRAGMENT_UNIFORM_VECTORS");
	}
	jint GLES20::GL_MAX_RENDERBUFFER_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MAX_RENDERBUFFER_SIZE");
	}
	jint GLES20::GL_MAX_TEXTURE_IMAGE_UNITS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MAX_TEXTURE_IMAGE_UNITS");
	}
	jint GLES20::GL_MAX_TEXTURE_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MAX_TEXTURE_SIZE");
	}
	jint GLES20::GL_MAX_VARYING_VECTORS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MAX_VARYING_VECTORS");
	}
	jint GLES20::GL_MAX_VERTEX_ATTRIBS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MAX_VERTEX_ATTRIBS");
	}
	jint GLES20::GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS");
	}
	jint GLES20::GL_MAX_VERTEX_UNIFORM_VECTORS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MAX_VERTEX_UNIFORM_VECTORS");
	}
	jint GLES20::GL_MAX_VIEWPORT_DIMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MAX_VIEWPORT_DIMS");
	}
	jint GLES20::GL_MEDIUM_FLOAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MEDIUM_FLOAT");
	}
	jint GLES20::GL_MEDIUM_INT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MEDIUM_INT");
	}
	jint GLES20::GL_MIRRORED_REPEAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_MIRRORED_REPEAT");
	}
	jint GLES20::GL_NEAREST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_NEAREST");
	}
	jint GLES20::GL_NEAREST_MIPMAP_LINEAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_NEAREST_MIPMAP_LINEAR");
	}
	jint GLES20::GL_NEAREST_MIPMAP_NEAREST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_NEAREST_MIPMAP_NEAREST");
	}
	jint GLES20::GL_NEVER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_NEVER");
	}
	jint GLES20::GL_NICEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_NICEST");
	}
	jint GLES20::GL_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_NONE");
	}
	jint GLES20::GL_NOTEQUAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_NOTEQUAL");
	}
	jint GLES20::GL_NO_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_NO_ERROR");
	}
	jint GLES20::GL_NUM_COMPRESSED_TEXTURE_FORMATS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_NUM_COMPRESSED_TEXTURE_FORMATS");
	}
	jint GLES20::GL_NUM_SHADER_BINARY_FORMATS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_NUM_SHADER_BINARY_FORMATS");
	}
	jint GLES20::GL_ONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ONE");
	}
	jint GLES20::GL_ONE_MINUS_CONSTANT_ALPHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ONE_MINUS_CONSTANT_ALPHA");
	}
	jint GLES20::GL_ONE_MINUS_CONSTANT_COLOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ONE_MINUS_CONSTANT_COLOR");
	}
	jint GLES20::GL_ONE_MINUS_DST_ALPHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ONE_MINUS_DST_ALPHA");
	}
	jint GLES20::GL_ONE_MINUS_DST_COLOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ONE_MINUS_DST_COLOR");
	}
	jint GLES20::GL_ONE_MINUS_SRC_ALPHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ONE_MINUS_SRC_ALPHA");
	}
	jint GLES20::GL_ONE_MINUS_SRC_COLOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ONE_MINUS_SRC_COLOR");
	}
	jint GLES20::GL_OUT_OF_MEMORY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_OUT_OF_MEMORY");
	}
	jint GLES20::GL_PACK_ALIGNMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_PACK_ALIGNMENT");
	}
	jint GLES20::GL_POINTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_POINTS");
	}
	jint GLES20::GL_POLYGON_OFFSET_FACTOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_POLYGON_OFFSET_FACTOR");
	}
	jint GLES20::GL_POLYGON_OFFSET_FILL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_POLYGON_OFFSET_FILL");
	}
	jint GLES20::GL_POLYGON_OFFSET_UNITS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_POLYGON_OFFSET_UNITS");
	}
	jint GLES20::GL_RED_BITS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RED_BITS");
	}
	jint GLES20::GL_RENDERBUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RENDERBUFFER");
	}
	jint GLES20::GL_RENDERBUFFER_ALPHA_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RENDERBUFFER_ALPHA_SIZE");
	}
	jint GLES20::GL_RENDERBUFFER_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RENDERBUFFER_BINDING");
	}
	jint GLES20::GL_RENDERBUFFER_BLUE_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RENDERBUFFER_BLUE_SIZE");
	}
	jint GLES20::GL_RENDERBUFFER_DEPTH_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RENDERBUFFER_DEPTH_SIZE");
	}
	jint GLES20::GL_RENDERBUFFER_GREEN_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RENDERBUFFER_GREEN_SIZE");
	}
	jint GLES20::GL_RENDERBUFFER_HEIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RENDERBUFFER_HEIGHT");
	}
	jint GLES20::GL_RENDERBUFFER_INTERNAL_FORMAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RENDERBUFFER_INTERNAL_FORMAT");
	}
	jint GLES20::GL_RENDERBUFFER_RED_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RENDERBUFFER_RED_SIZE");
	}
	jint GLES20::GL_RENDERBUFFER_STENCIL_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RENDERBUFFER_STENCIL_SIZE");
	}
	jint GLES20::GL_RENDERBUFFER_WIDTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RENDERBUFFER_WIDTH");
	}
	jint GLES20::GL_RENDERER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RENDERER");
	}
	jint GLES20::GL_REPEAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_REPEAT");
	}
	jint GLES20::GL_REPLACE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_REPLACE");
	}
	jint GLES20::GL_RGB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RGB");
	}
	jint GLES20::GL_RGB565()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RGB565");
	}
	jint GLES20::GL_RGB5_A1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RGB5_A1");
	}
	jint GLES20::GL_RGBA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RGBA");
	}
	jint GLES20::GL_RGBA4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_RGBA4");
	}
	jint GLES20::GL_SAMPLER_2D()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SAMPLER_2D");
	}
	jint GLES20::GL_SAMPLER_CUBE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SAMPLER_CUBE");
	}
	jint GLES20::GL_SAMPLES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SAMPLES");
	}
	jint GLES20::GL_SAMPLE_ALPHA_TO_COVERAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SAMPLE_ALPHA_TO_COVERAGE");
	}
	jint GLES20::GL_SAMPLE_BUFFERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SAMPLE_BUFFERS");
	}
	jint GLES20::GL_SAMPLE_COVERAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SAMPLE_COVERAGE");
	}
	jint GLES20::GL_SAMPLE_COVERAGE_INVERT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SAMPLE_COVERAGE_INVERT");
	}
	jint GLES20::GL_SAMPLE_COVERAGE_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SAMPLE_COVERAGE_VALUE");
	}
	jint GLES20::GL_SCISSOR_BOX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SCISSOR_BOX");
	}
	jint GLES20::GL_SCISSOR_TEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SCISSOR_TEST");
	}
	jint GLES20::GL_SHADER_BINARY_FORMATS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SHADER_BINARY_FORMATS");
	}
	jint GLES20::GL_SHADER_COMPILER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SHADER_COMPILER");
	}
	jint GLES20::GL_SHADER_SOURCE_LENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SHADER_SOURCE_LENGTH");
	}
	jint GLES20::GL_SHADER_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SHADER_TYPE");
	}
	jint GLES20::GL_SHADING_LANGUAGE_VERSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SHADING_LANGUAGE_VERSION");
	}
	jint GLES20::GL_SHORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SHORT");
	}
	jint GLES20::GL_SRC_ALPHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SRC_ALPHA");
	}
	jint GLES20::GL_SRC_ALPHA_SATURATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SRC_ALPHA_SATURATE");
	}
	jint GLES20::GL_SRC_COLOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SRC_COLOR");
	}
	jint GLES20::GL_STATIC_DRAW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STATIC_DRAW");
	}
	jint GLES20::GL_STENCIL_ATTACHMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_ATTACHMENT");
	}
	jint GLES20::GL_STENCIL_BACK_FAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_BACK_FAIL");
	}
	jint GLES20::GL_STENCIL_BACK_FUNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_BACK_FUNC");
	}
	jint GLES20::GL_STENCIL_BACK_PASS_DEPTH_FAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_BACK_PASS_DEPTH_FAIL");
	}
	jint GLES20::GL_STENCIL_BACK_PASS_DEPTH_PASS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_BACK_PASS_DEPTH_PASS");
	}
	jint GLES20::GL_STENCIL_BACK_REF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_BACK_REF");
	}
	jint GLES20::GL_STENCIL_BACK_VALUE_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_BACK_VALUE_MASK");
	}
	jint GLES20::GL_STENCIL_BACK_WRITEMASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_BACK_WRITEMASK");
	}
	jint GLES20::GL_STENCIL_BITS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_BITS");
	}
	jint GLES20::GL_STENCIL_BUFFER_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_BUFFER_BIT");
	}
	jint GLES20::GL_STENCIL_CLEAR_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_CLEAR_VALUE");
	}
	jint GLES20::GL_STENCIL_FAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_FAIL");
	}
	jint GLES20::GL_STENCIL_FUNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_FUNC");
	}
	jint GLES20::GL_STENCIL_INDEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_INDEX");
	}
	jint GLES20::GL_STENCIL_INDEX8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_INDEX8");
	}
	jint GLES20::GL_STENCIL_PASS_DEPTH_FAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_PASS_DEPTH_FAIL");
	}
	jint GLES20::GL_STENCIL_PASS_DEPTH_PASS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_PASS_DEPTH_PASS");
	}
	jint GLES20::GL_STENCIL_REF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_REF");
	}
	jint GLES20::GL_STENCIL_TEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_TEST");
	}
	jint GLES20::GL_STENCIL_VALUE_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_VALUE_MASK");
	}
	jint GLES20::GL_STENCIL_WRITEMASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STENCIL_WRITEMASK");
	}
	jint GLES20::GL_STREAM_DRAW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_STREAM_DRAW");
	}
	jint GLES20::GL_SUBPIXEL_BITS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_SUBPIXEL_BITS");
	}
	jint GLES20::GL_TEXTURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE");
	}
	jint GLES20::GL_TEXTURE0()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE0");
	}
	jint GLES20::GL_TEXTURE1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE1");
	}
	jint GLES20::GL_TEXTURE10()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE10");
	}
	jint GLES20::GL_TEXTURE11()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE11");
	}
	jint GLES20::GL_TEXTURE12()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE12");
	}
	jint GLES20::GL_TEXTURE13()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE13");
	}
	jint GLES20::GL_TEXTURE14()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE14");
	}
	jint GLES20::GL_TEXTURE15()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE15");
	}
	jint GLES20::GL_TEXTURE16()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE16");
	}
	jint GLES20::GL_TEXTURE17()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE17");
	}
	jint GLES20::GL_TEXTURE18()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE18");
	}
	jint GLES20::GL_TEXTURE19()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE19");
	}
	jint GLES20::GL_TEXTURE2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE2");
	}
	jint GLES20::GL_TEXTURE20()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE20");
	}
	jint GLES20::GL_TEXTURE21()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE21");
	}
	jint GLES20::GL_TEXTURE22()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE22");
	}
	jint GLES20::GL_TEXTURE23()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE23");
	}
	jint GLES20::GL_TEXTURE24()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE24");
	}
	jint GLES20::GL_TEXTURE25()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE25");
	}
	jint GLES20::GL_TEXTURE26()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE26");
	}
	jint GLES20::GL_TEXTURE27()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE27");
	}
	jint GLES20::GL_TEXTURE28()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE28");
	}
	jint GLES20::GL_TEXTURE29()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE29");
	}
	jint GLES20::GL_TEXTURE3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE3");
	}
	jint GLES20::GL_TEXTURE30()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE30");
	}
	jint GLES20::GL_TEXTURE31()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE31");
	}
	jint GLES20::GL_TEXTURE4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE4");
	}
	jint GLES20::GL_TEXTURE5()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE5");
	}
	jint GLES20::GL_TEXTURE6()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE6");
	}
	jint GLES20::GL_TEXTURE7()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE7");
	}
	jint GLES20::GL_TEXTURE8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE8");
	}
	jint GLES20::GL_TEXTURE9()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE9");
	}
	jint GLES20::GL_TEXTURE_2D()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_2D");
	}
	jint GLES20::GL_TEXTURE_BINDING_2D()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_BINDING_2D");
	}
	jint GLES20::GL_TEXTURE_BINDING_CUBE_MAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_BINDING_CUBE_MAP");
	}
	jint GLES20::GL_TEXTURE_CUBE_MAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_CUBE_MAP");
	}
	jint GLES20::GL_TEXTURE_CUBE_MAP_NEGATIVE_X()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_CUBE_MAP_NEGATIVE_X");
	}
	jint GLES20::GL_TEXTURE_CUBE_MAP_NEGATIVE_Y()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_CUBE_MAP_NEGATIVE_Y");
	}
	jint GLES20::GL_TEXTURE_CUBE_MAP_NEGATIVE_Z()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_CUBE_MAP_NEGATIVE_Z");
	}
	jint GLES20::GL_TEXTURE_CUBE_MAP_POSITIVE_X()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_CUBE_MAP_POSITIVE_X");
	}
	jint GLES20::GL_TEXTURE_CUBE_MAP_POSITIVE_Y()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_CUBE_MAP_POSITIVE_Y");
	}
	jint GLES20::GL_TEXTURE_CUBE_MAP_POSITIVE_Z()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_CUBE_MAP_POSITIVE_Z");
	}
	jint GLES20::GL_TEXTURE_MAG_FILTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_MAG_FILTER");
	}
	jint GLES20::GL_TEXTURE_MIN_FILTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_MIN_FILTER");
	}
	jint GLES20::GL_TEXTURE_WRAP_S()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_WRAP_S");
	}
	jint GLES20::GL_TEXTURE_WRAP_T()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TEXTURE_WRAP_T");
	}
	jint GLES20::GL_TRIANGLES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TRIANGLES");
	}
	jint GLES20::GL_TRIANGLE_FAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TRIANGLE_FAN");
	}
	jint GLES20::GL_TRIANGLE_STRIP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TRIANGLE_STRIP");
	}
	jint GLES20::GL_TRUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_TRUE");
	}
	jint GLES20::GL_UNPACK_ALIGNMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_UNPACK_ALIGNMENT");
	}
	jint GLES20::GL_UNSIGNED_BYTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_UNSIGNED_BYTE");
	}
	jint GLES20::GL_UNSIGNED_INT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_UNSIGNED_INT");
	}
	jint GLES20::GL_UNSIGNED_SHORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_UNSIGNED_SHORT");
	}
	jint GLES20::GL_UNSIGNED_SHORT_4_4_4_4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_UNSIGNED_SHORT_4_4_4_4");
	}
	jint GLES20::GL_UNSIGNED_SHORT_5_5_5_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_UNSIGNED_SHORT_5_5_5_1");
	}
	jint GLES20::GL_UNSIGNED_SHORT_5_6_5()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_UNSIGNED_SHORT_5_6_5");
	}
	jint GLES20::GL_VALIDATE_STATUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_VALIDATE_STATUS");
	}
	jint GLES20::GL_VENDOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_VENDOR");
	}
	jint GLES20::GL_VERSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_VERSION");
	}
	jint GLES20::GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING");
	}
	jint GLES20::GL_VERTEX_ATTRIB_ARRAY_ENABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_VERTEX_ATTRIB_ARRAY_ENABLED");
	}
	jint GLES20::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_VERTEX_ATTRIB_ARRAY_NORMALIZED");
	}
	jint GLES20::GL_VERTEX_ATTRIB_ARRAY_POINTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_VERTEX_ATTRIB_ARRAY_POINTER");
	}
	jint GLES20::GL_VERTEX_ATTRIB_ARRAY_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_VERTEX_ATTRIB_ARRAY_SIZE");
	}
	jint GLES20::GL_VERTEX_ATTRIB_ARRAY_STRIDE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_VERTEX_ATTRIB_ARRAY_STRIDE");
	}
	jint GLES20::GL_VERTEX_ATTRIB_ARRAY_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_VERTEX_ATTRIB_ARRAY_TYPE");
	}
	jint GLES20::GL_VERTEX_SHADER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_VERTEX_SHADER");
	}
	jint GLES20::GL_VIEWPORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_VIEWPORT");
	}
	jint GLES20::GL_ZERO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES20",
			"GL_ZERO");
	}
	
	// Constructors
	void GLES20::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.opengl.GLES20",
			"()V");
	}
	
	// Methods
	void GLES20::glReadPixels(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, __jni_impl::java::nio::Buffer arg6)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glReadPixels",
			"(IIIIIILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object());
	}
	void GLES20::glActiveTexture(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glActiveTexture",
			"(I)V",
			arg0);
	}
	void GLES20::glAttachShader(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glAttachShader",
			"(II)V",
			arg0,
			arg1);
	}
	void GLES20::glBindAttribLocation(jint arg0, jint arg1, jstring arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glBindAttribLocation",
			"(IILjava/lang/String;)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES20::glBindBuffer(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glBindBuffer",
			"(II)V",
			arg0,
			arg1);
	}
	void GLES20::glBindFramebuffer(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glBindFramebuffer",
			"(II)V",
			arg0,
			arg1);
	}
	void GLES20::glBindRenderbuffer(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glBindRenderbuffer",
			"(II)V",
			arg0,
			arg1);
	}
	void GLES20::glBindTexture(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glBindTexture",
			"(II)V",
			arg0,
			arg1);
	}
	void GLES20::glBlendColor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glBlendColor",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glBlendEquation(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glBlendEquation",
			"(I)V",
			arg0);
	}
	void GLES20::glBlendEquationSeparate(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glBlendEquationSeparate",
			"(II)V",
			arg0,
			arg1);
	}
	void GLES20::glBlendFunc(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glBlendFunc",
			"(II)V",
			arg0,
			arg1);
	}
	void GLES20::glBlendFuncSeparate(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glBlendFuncSeparate",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glBufferData(jint arg0, jint arg1, __jni_impl::java::nio::Buffer arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glBufferData",
			"(IILjava/nio/Buffer;I)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	void GLES20::glBufferSubData(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::Buffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glBufferSubData",
			"(IIILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	jint GLES20::glCheckFramebufferStatus(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.GLES20",
			"glCheckFramebufferStatus",
			"(I)I",
			arg0);
	}
	void GLES20::glClear(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glClear",
			"(I)V",
			arg0);
	}
	void GLES20::glClearColor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glClearColor",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glClearDepthf(jfloat arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glClearDepthf",
			"(F)V",
			arg0);
	}
	void GLES20::glClearStencil(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glClearStencil",
			"(I)V",
			arg0);
	}
	void GLES20::glColorMask(jboolean arg0, jboolean arg1, jboolean arg2, jboolean arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glColorMask",
			"(ZZZZ)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glCompileShader(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glCompileShader",
			"(I)V",
			arg0);
	}
	void GLES20::glCompressedTexImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, __jni_impl::java::nio::Buffer arg7)
	{
		QAndroidJniObject::callStaticMethod<void>(
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
			arg7.__jniObject().object());
	}
	void GLES20::glCompressedTexSubImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, __jni_impl::java::nio::Buffer arg8)
	{
		QAndroidJniObject::callStaticMethod<void>(
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
			arg8.__jniObject().object());
	}
	void GLES20::glCopyTexImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7)
	{
		QAndroidJniObject::callStaticMethod<void>(
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
			arg7);
	}
	void GLES20::glCopyTexSubImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7)
	{
		QAndroidJniObject::callStaticMethod<void>(
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
			arg7);
	}
	jint GLES20::glCreateProgram()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.GLES20",
			"glCreateProgram",
			"()I");
	}
	jint GLES20::glCreateShader(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.GLES20",
			"glCreateShader",
			"(I)I",
			arg0);
	}
	void GLES20::glCullFace(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glCullFace",
			"(I)V",
			arg0);
	}
	void GLES20::glDeleteBuffers(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDeleteBuffers",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GLES20::glDeleteBuffers(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDeleteBuffers",
			"(I[II)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES20::glDeleteFramebuffers(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDeleteFramebuffers",
			"(I[II)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES20::glDeleteFramebuffers(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDeleteFramebuffers",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GLES20::glDeleteProgram(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDeleteProgram",
			"(I)V",
			arg0);
	}
	void GLES20::glDeleteRenderbuffers(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDeleteRenderbuffers",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GLES20::glDeleteRenderbuffers(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDeleteRenderbuffers",
			"(I[II)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES20::glDeleteShader(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDeleteShader",
			"(I)V",
			arg0);
	}
	void GLES20::glDeleteTextures(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDeleteTextures",
			"(I[II)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES20::glDeleteTextures(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDeleteTextures",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GLES20::glDepthFunc(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDepthFunc",
			"(I)V",
			arg0);
	}
	void GLES20::glDepthMask(jboolean arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDepthMask",
			"(Z)V",
			arg0);
	}
	void GLES20::glDepthRangef(jfloat arg0, jfloat arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDepthRangef",
			"(FF)V",
			arg0,
			arg1);
	}
	void GLES20::glDetachShader(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDetachShader",
			"(II)V",
			arg0,
			arg1);
	}
	void GLES20::glDisable(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDisable",
			"(I)V",
			arg0);
	}
	void GLES20::glDisableVertexAttribArray(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDisableVertexAttribArray",
			"(I)V",
			arg0);
	}
	void GLES20::glDrawArrays(jint arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDrawArrays",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES20::glDrawElements(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::Buffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDrawElements",
			"(IIILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void GLES20::glDrawElements(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glDrawElements",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glEnable(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glEnable",
			"(I)V",
			arg0);
	}
	void GLES20::glEnableVertexAttribArray(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glEnableVertexAttribArray",
			"(I)V",
			arg0);
	}
	void GLES20::glFinish()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glFinish",
			"()V");
	}
	void GLES20::glFlush()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glFlush",
			"()V");
	}
	void GLES20::glFramebufferRenderbuffer(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glFramebufferRenderbuffer",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glFramebufferTexture2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glFramebufferTexture2D",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void GLES20::glFrontFace(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glFrontFace",
			"(I)V",
			arg0);
	}
	void GLES20::glGenBuffers(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGenBuffers",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GLES20::glGenBuffers(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGenBuffers",
			"(I[II)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES20::glGenerateMipmap(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGenerateMipmap",
			"(I)V",
			arg0);
	}
	void GLES20::glGenFramebuffers(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGenFramebuffers",
			"(I[II)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES20::glGenFramebuffers(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGenFramebuffers",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GLES20::glGenRenderbuffers(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGenRenderbuffers",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GLES20::glGenRenderbuffers(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGenRenderbuffers",
			"(I[II)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES20::glGenTextures(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGenTextures",
			"(I[II)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES20::glGenTextures(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGenTextures",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GLES20::glGetActiveAttrib(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4, jintArray arg5, jint arg6, jintArray arg7, jint arg8, jbyteArray arg9, jint arg10)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetActiveAttrib",
			"(III[II[II[II[BI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg10);
	}
	QAndroidJniObject GLES20::glGetActiveAttrib(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2, __jni_impl::java::nio::IntBuffer arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.GLES20",
			"glGetActiveAttrib",
			"(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	QAndroidJniObject GLES20::glGetActiveAttrib(jint arg0, jint arg1, jintArray arg2, jint arg3, jintArray arg4, jint arg5)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.GLES20",
			"glGetActiveAttrib",
			"(II[II[II)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5);
	}
	void GLES20::glGetActiveUniform(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4, jintArray arg5, jint arg6, jintArray arg7, jint arg8, jbyteArray arg9, jint arg10)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetActiveUniform",
			"(III[II[II[II[BI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg10);
	}
	QAndroidJniObject GLES20::glGetActiveUniform(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2, __jni_impl::java::nio::IntBuffer arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.GLES20",
			"glGetActiveUniform",
			"(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	QAndroidJniObject GLES20::glGetActiveUniform(jint arg0, jint arg1, jintArray arg2, jint arg3, jintArray arg4, jint arg5)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.GLES20",
			"glGetActiveUniform",
			"(II[II[II)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5);
	}
	void GLES20::glGetAttachedShaders(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2, __jni_impl::java::nio::IntBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetAttachedShaders",
			"(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	void GLES20::glGetAttachedShaders(jint arg0, jint arg1, jintArray arg2, jint arg3, jintArray arg4, jint arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetAttachedShaders",
			"(II[II[II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5);
	}
	jint GLES20::glGetAttribLocation(jint arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.GLES20",
			"glGetAttribLocation",
			"(ILjava/lang/String;)I",
			arg0,
			arg1);
	}
	void GLES20::glGetBooleanv(jint arg0, jbooleanArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetBooleanv",
			"(I[ZI)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES20::glGetBooleanv(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetBooleanv",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GLES20::glGetBufferParameteriv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetBufferParameteriv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES20::glGetBufferParameteriv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetBufferParameteriv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	jint GLES20::glGetError()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.GLES20",
			"glGetError",
			"()I");
	}
	void GLES20::glGetFloatv(jint arg0, __jni_impl::java::nio::FloatBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetFloatv",
			"(ILjava/nio/FloatBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GLES20::glGetFloatv(jint arg0, jfloatArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetFloatv",
			"(I[FI)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES20::glGetFramebufferAttachmentParameteriv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetFramebufferAttachmentParameteriv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void GLES20::glGetFramebufferAttachmentParameteriv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetFramebufferAttachmentParameteriv",
			"(IIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void GLES20::glGetIntegerv(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetIntegerv",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GLES20::glGetIntegerv(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetIntegerv",
			"(I[II)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES20::glGetProgramiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetProgramiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES20::glGetProgramiv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetProgramiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject GLES20::glGetProgramInfoLog(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.GLES20",
			"glGetProgramInfoLog",
			"(I)Ljava/lang/String;",
			arg0);
	}
	void GLES20::glGetRenderbufferParameteriv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetRenderbufferParameteriv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES20::glGetRenderbufferParameteriv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetRenderbufferParameteriv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glGetShaderiv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetShaderiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glGetShaderiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetShaderiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject GLES20::glGetShaderInfoLog(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.GLES20",
			"glGetShaderInfoLog",
			"(I)Ljava/lang/String;",
			arg0);
	}
	void GLES20::glGetShaderPrecisionFormat(jint arg0, jint arg1, jintArray arg2, jint arg3, jintArray arg4, jint arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetShaderPrecisionFormat",
			"(II[II[II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5);
	}
	void GLES20::glGetShaderPrecisionFormat(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2, __jni_impl::java::nio::IntBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetShaderPrecisionFormat",
			"(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	QAndroidJniObject GLES20::glGetShaderSource(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.GLES20",
			"glGetShaderSource",
			"(I)Ljava/lang/String;",
			arg0);
	}
	void GLES20::glGetShaderSource(jint arg0, jint arg1, jintArray arg2, jint arg3, jbyteArray arg4, jint arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetShaderSource",
			"(II[II[BI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5);
	}
	QAndroidJniObject GLES20::glGetString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.GLES20",
			"glGetString",
			"(I)Ljava/lang/String;",
			arg0);
	}
	void GLES20::glGetTexParameterfv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetTexParameterfv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES20::glGetTexParameterfv(jint arg0, jint arg1, jfloatArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetTexParameterfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glGetTexParameteriv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetTexParameteriv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES20::glGetTexParameteriv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetTexParameteriv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glGetUniformfv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetUniformfv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES20::glGetUniformfv(jint arg0, jint arg1, jfloatArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetUniformfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glGetUniformiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetUniformiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES20::glGetUniformiv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetUniformiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	jint GLES20::glGetUniformLocation(jint arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.GLES20",
			"glGetUniformLocation",
			"(ILjava/lang/String;)I",
			arg0,
			arg1);
	}
	void GLES20::glGetVertexAttribfv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetVertexAttribfv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES20::glGetVertexAttribfv(jint arg0, jint arg1, jfloatArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetVertexAttribfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glGetVertexAttribiv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetVertexAttribiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glGetVertexAttribiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glGetVertexAttribiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES20::glHint(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glHint",
			"(II)V",
			arg0,
			arg1);
	}
	jboolean GLES20::glIsBuffer(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.GLES20",
			"glIsBuffer",
			"(I)Z",
			arg0);
	}
	jboolean GLES20::glIsEnabled(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.GLES20",
			"glIsEnabled",
			"(I)Z",
			arg0);
	}
	jboolean GLES20::glIsFramebuffer(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.GLES20",
			"glIsFramebuffer",
			"(I)Z",
			arg0);
	}
	jboolean GLES20::glIsProgram(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.GLES20",
			"glIsProgram",
			"(I)Z",
			arg0);
	}
	jboolean GLES20::glIsRenderbuffer(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.GLES20",
			"glIsRenderbuffer",
			"(I)Z",
			arg0);
	}
	jboolean GLES20::glIsShader(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.GLES20",
			"glIsShader",
			"(I)Z",
			arg0);
	}
	jboolean GLES20::glIsTexture(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.GLES20",
			"glIsTexture",
			"(I)Z",
			arg0);
	}
	void GLES20::glLineWidth(jfloat arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glLineWidth",
			"(F)V",
			arg0);
	}
	void GLES20::glLinkProgram(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glLinkProgram",
			"(I)V",
			arg0);
	}
	void GLES20::glPixelStorei(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glPixelStorei",
			"(II)V",
			arg0,
			arg1);
	}
	void GLES20::glPolygonOffset(jfloat arg0, jfloat arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glPolygonOffset",
			"(FF)V",
			arg0,
			arg1);
	}
	void GLES20::glReleaseShaderCompiler()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glReleaseShaderCompiler",
			"()V");
	}
	void GLES20::glRenderbufferStorage(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glRenderbufferStorage",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glSampleCoverage(jfloat arg0, jboolean arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glSampleCoverage",
			"(FZ)V",
			arg0,
			arg1);
	}
	void GLES20::glScissor(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glScissor",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glShaderBinary(jint arg0, __jni_impl::java::nio::IntBuffer arg1, jint arg2, __jni_impl::java::nio::Buffer arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glShaderBinary",
			"(ILjava/nio/IntBuffer;ILjava/nio/Buffer;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4);
	}
	void GLES20::glShaderBinary(jint arg0, jintArray arg1, jint arg2, jint arg3, __jni_impl::java::nio::Buffer arg4, jint arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glShaderBinary",
			"(I[IIILjava/nio/Buffer;I)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5);
	}
	void GLES20::glShaderSource(jint arg0, jstring arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glShaderSource",
			"(ILjava/lang/String;)V",
			arg0,
			arg1);
	}
	void GLES20::glStencilFunc(jint arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glStencilFunc",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES20::glStencilFuncSeparate(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glStencilFuncSeparate",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glStencilMask(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glStencilMask",
			"(I)V",
			arg0);
	}
	void GLES20::glStencilMaskSeparate(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glStencilMaskSeparate",
			"(II)V",
			arg0,
			arg1);
	}
	void GLES20::glStencilOp(jint arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glStencilOp",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES20::glStencilOpSeparate(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glStencilOpSeparate",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glTexImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, __jni_impl::java::nio::Buffer arg8)
	{
		QAndroidJniObject::callStaticMethod<void>(
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
			arg8.__jniObject().object());
	}
	void GLES20::glTexParameterf(jint arg0, jint arg1, jfloat arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glTexParameterf",
			"(IIF)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES20::glTexParameterfv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glTexParameterfv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES20::glTexParameterfv(jint arg0, jint arg1, jfloatArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glTexParameterfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glTexParameteri(jint arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glTexParameteri",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES20::glTexParameteriv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glTexParameteriv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES20::glTexParameteriv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glTexParameteriv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glTexSubImage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, __jni_impl::java::nio::Buffer arg8)
	{
		QAndroidJniObject::callStaticMethod<void>(
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
			arg8.__jniObject().object());
	}
	void GLES20::glUniform1f(jint arg0, jfloat arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform1f",
			"(IF)V",
			arg0,
			arg1);
	}
	void GLES20::glUniform1fv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform1fv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES20::glUniform1fv(jint arg0, jint arg1, jfloatArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform1fv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glUniform1i(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform1i",
			"(II)V",
			arg0,
			arg1);
	}
	void GLES20::glUniform1iv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform1iv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES20::glUniform1iv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform1iv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glUniform2f(jint arg0, jfloat arg1, jfloat arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform2f",
			"(IFF)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES20::glUniform2fv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform2fv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES20::glUniform2fv(jint arg0, jint arg1, jfloatArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform2fv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glUniform2i(jint arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform2i",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES20::glUniform2iv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform2iv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES20::glUniform2iv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform2iv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glUniform3f(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform3f",
			"(IFFF)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glUniform3fv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform3fv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES20::glUniform3fv(jint arg0, jint arg1, jfloatArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform3fv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glUniform3i(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform3i",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glUniform3iv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform3iv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES20::glUniform3iv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform3iv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glUniform4f(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform4f",
			"(IFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void GLES20::glUniform4fv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform4fv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES20::glUniform4fv(jint arg0, jint arg1, jfloatArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform4fv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glUniform4i(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform4i",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void GLES20::glUniform4iv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform4iv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES20::glUniform4iv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniform4iv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glUniformMatrix2fv(jint arg0, jint arg1, jboolean arg2, __jni_impl::java::nio::FloatBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniformMatrix2fv",
			"(IIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void GLES20::glUniformMatrix2fv(jint arg0, jint arg1, jboolean arg2, jfloatArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniformMatrix2fv",
			"(IIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void GLES20::glUniformMatrix3fv(jint arg0, jint arg1, jboolean arg2, __jni_impl::java::nio::FloatBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniformMatrix3fv",
			"(IIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void GLES20::glUniformMatrix3fv(jint arg0, jint arg1, jboolean arg2, jfloatArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniformMatrix3fv",
			"(IIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void GLES20::glUniformMatrix4fv(jint arg0, jint arg1, jboolean arg2, __jni_impl::java::nio::FloatBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniformMatrix4fv",
			"(IIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void GLES20::glUniformMatrix4fv(jint arg0, jint arg1, jboolean arg2, jfloatArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUniformMatrix4fv",
			"(IIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void GLES20::glUseProgram(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glUseProgram",
			"(I)V",
			arg0);
	}
	void GLES20::glValidateProgram(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glValidateProgram",
			"(I)V",
			arg0);
	}
	void GLES20::glVertexAttrib1f(jint arg0, jfloat arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttrib1f",
			"(IF)V",
			arg0,
			arg1);
	}
	void GLES20::glVertexAttrib1fv(jint arg0, jfloatArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttrib1fv",
			"(I[FI)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES20::glVertexAttrib1fv(jint arg0, __jni_impl::java::nio::FloatBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttrib1fv",
			"(ILjava/nio/FloatBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GLES20::glVertexAttrib2f(jint arg0, jfloat arg1, jfloat arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttrib2f",
			"(IFF)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES20::glVertexAttrib2fv(jint arg0, jfloatArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttrib2fv",
			"(I[FI)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES20::glVertexAttrib2fv(jint arg0, __jni_impl::java::nio::FloatBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttrib2fv",
			"(ILjava/nio/FloatBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GLES20::glVertexAttrib3f(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttrib3f",
			"(IFFF)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES20::glVertexAttrib3fv(jint arg0, __jni_impl::java::nio::FloatBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttrib3fv",
			"(ILjava/nio/FloatBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GLES20::glVertexAttrib3fv(jint arg0, jfloatArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttrib3fv",
			"(I[FI)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES20::glVertexAttrib4f(jint arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttrib4f",
			"(IFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void GLES20::glVertexAttrib4fv(jint arg0, jfloatArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttrib4fv",
			"(I[FI)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES20::glVertexAttrib4fv(jint arg0, __jni_impl::java::nio::FloatBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttrib4fv",
			"(ILjava/nio/FloatBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GLES20::glVertexAttribPointer(jint arg0, jint arg1, jint arg2, jboolean arg3, jint arg4, __jni_impl::java::nio::Buffer arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttribPointer",
			"(IIIZILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object());
	}
	void GLES20::glVertexAttribPointer(jint arg0, jint arg1, jint arg2, jboolean arg3, jint arg4, jint arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glVertexAttribPointer",
			"(IIIZII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5);
	}
	void GLES20::glViewport(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES20",
			"glViewport",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
} // namespace __jni_impl::android::opengl

namespace android::opengl
{
	class GLES20 : public __jni_impl::android::opengl::GLES20
	{
	public:
		GLES20(QAndroidJniObject obj) { __thiz = obj; }
		GLES20()
		{
			__constructor();
		}
	};
} // namespace android::opengl

#endif // ANDROID_OPENGL_GLES20

