#pragma once

#ifndef ANDROID_OPENGL_GLES30
#define ANDROID_OPENGL_GLES30

#include "../../__JniBaseClass.hpp"
#include "GLES20.hpp"

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
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}
namespace __jni_impl::java::nio
{
	class LongBuffer;
}

namespace __jni_impl::android::opengl
{
	class GLES30 : public __jni_impl::android::opengl::GLES20
	{
	public:
		// Fields
		static jint GL_ACTIVE_UNIFORM_BLOCKS();
		static jint GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH();
		static jint GL_ALREADY_SIGNALED();
		static jint GL_ANY_SAMPLES_PASSED();
		static jint GL_ANY_SAMPLES_PASSED_CONSERVATIVE();
		static jint GL_BLUE();
		static jint GL_BUFFER_ACCESS_FLAGS();
		static jint GL_BUFFER_MAPPED();
		static jint GL_BUFFER_MAP_LENGTH();
		static jint GL_BUFFER_MAP_OFFSET();
		static jint GL_BUFFER_MAP_POINTER();
		static jint GL_COLOR();
		static jint GL_COLOR_ATTACHMENT1();
		static jint GL_COLOR_ATTACHMENT10();
		static jint GL_COLOR_ATTACHMENT11();
		static jint GL_COLOR_ATTACHMENT12();
		static jint GL_COLOR_ATTACHMENT13();
		static jint GL_COLOR_ATTACHMENT14();
		static jint GL_COLOR_ATTACHMENT15();
		static jint GL_COLOR_ATTACHMENT2();
		static jint GL_COLOR_ATTACHMENT3();
		static jint GL_COLOR_ATTACHMENT4();
		static jint GL_COLOR_ATTACHMENT5();
		static jint GL_COLOR_ATTACHMENT6();
		static jint GL_COLOR_ATTACHMENT7();
		static jint GL_COLOR_ATTACHMENT8();
		static jint GL_COLOR_ATTACHMENT9();
		static jint GL_COMPARE_REF_TO_TEXTURE();
		static jint GL_COMPRESSED_R11_EAC();
		static jint GL_COMPRESSED_RG11_EAC();
		static jint GL_COMPRESSED_RGB8_ETC2();
		static jint GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2();
		static jint GL_COMPRESSED_RGBA8_ETC2_EAC();
		static jint GL_COMPRESSED_SIGNED_R11_EAC();
		static jint GL_COMPRESSED_SIGNED_RG11_EAC();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC();
		static jint GL_COMPRESSED_SRGB8_ETC2();
		static jint GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2();
		static jint GL_CONDITION_SATISFIED();
		static jint GL_COPY_READ_BUFFER();
		static jint GL_COPY_READ_BUFFER_BINDING();
		static jint GL_COPY_WRITE_BUFFER();
		static jint GL_COPY_WRITE_BUFFER_BINDING();
		static jint GL_CURRENT_QUERY();
		static jint GL_DEPTH();
		static jint GL_DEPTH24_STENCIL8();
		static jint GL_DEPTH32F_STENCIL8();
		static jint GL_DEPTH_COMPONENT24();
		static jint GL_DEPTH_COMPONENT32F();
		static jint GL_DEPTH_STENCIL();
		static jint GL_DEPTH_STENCIL_ATTACHMENT();
		static jint GL_DRAW_BUFFER0();
		static jint GL_DRAW_BUFFER1();
		static jint GL_DRAW_BUFFER10();
		static jint GL_DRAW_BUFFER11();
		static jint GL_DRAW_BUFFER12();
		static jint GL_DRAW_BUFFER13();
		static jint GL_DRAW_BUFFER14();
		static jint GL_DRAW_BUFFER15();
		static jint GL_DRAW_BUFFER2();
		static jint GL_DRAW_BUFFER3();
		static jint GL_DRAW_BUFFER4();
		static jint GL_DRAW_BUFFER5();
		static jint GL_DRAW_BUFFER6();
		static jint GL_DRAW_BUFFER7();
		static jint GL_DRAW_BUFFER8();
		static jint GL_DRAW_BUFFER9();
		static jint GL_DRAW_FRAMEBUFFER();
		static jint GL_DRAW_FRAMEBUFFER_BINDING();
		static jint GL_DYNAMIC_COPY();
		static jint GL_DYNAMIC_READ();
		static jint GL_FLOAT_32_UNSIGNED_INT_24_8_REV();
		static jint GL_FLOAT_MAT2x3();
		static jint GL_FLOAT_MAT2x4();
		static jint GL_FLOAT_MAT3x2();
		static jint GL_FLOAT_MAT3x4();
		static jint GL_FLOAT_MAT4x2();
		static jint GL_FLOAT_MAT4x3();
		static jint GL_FRAGMENT_SHADER_DERIVATIVE_HINT();
		static jint GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE();
		static jint GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE();
		static jint GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING();
		static jint GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE();
		static jint GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE();
		static jint GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE();
		static jint GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE();
		static jint GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE();
		static jint GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER();
		static jint GL_FRAMEBUFFER_DEFAULT();
		static jint GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE();
		static jint GL_FRAMEBUFFER_UNDEFINED();
		static jint GL_GREEN();
		static jint GL_HALF_FLOAT();
		static jint GL_INTERLEAVED_ATTRIBS();
		static jint GL_INT_2_10_10_10_REV();
		static jint GL_INT_SAMPLER_2D();
		static jint GL_INT_SAMPLER_2D_ARRAY();
		static jint GL_INT_SAMPLER_3D();
		static jint GL_INT_SAMPLER_CUBE();
		static jint GL_INVALID_INDEX();
		static jint GL_MAJOR_VERSION();
		static jint GL_MAP_FLUSH_EXPLICIT_BIT();
		static jint GL_MAP_INVALIDATE_BUFFER_BIT();
		static jint GL_MAP_INVALIDATE_RANGE_BIT();
		static jint GL_MAP_READ_BIT();
		static jint GL_MAP_UNSYNCHRONIZED_BIT();
		static jint GL_MAP_WRITE_BIT();
		static jint GL_MAX();
		static jint GL_MAX_3D_TEXTURE_SIZE();
		static jint GL_MAX_ARRAY_TEXTURE_LAYERS();
		static jint GL_MAX_COLOR_ATTACHMENTS();
		static jint GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS();
		static jint GL_MAX_COMBINED_UNIFORM_BLOCKS();
		static jint GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS();
		static jint GL_MAX_DRAW_BUFFERS();
		static jint GL_MAX_ELEMENTS_INDICES();
		static jint GL_MAX_ELEMENTS_VERTICES();
		static jint GL_MAX_ELEMENT_INDEX();
		static jint GL_MAX_FRAGMENT_INPUT_COMPONENTS();
		static jint GL_MAX_FRAGMENT_UNIFORM_BLOCKS();
		static jint GL_MAX_FRAGMENT_UNIFORM_COMPONENTS();
		static jint GL_MAX_PROGRAM_TEXEL_OFFSET();
		static jint GL_MAX_SAMPLES();
		static jint GL_MAX_SERVER_WAIT_TIMEOUT();
		static jint GL_MAX_TEXTURE_LOD_BIAS();
		static jint GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS();
		static jint GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS();
		static jint GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS();
		static jint GL_MAX_UNIFORM_BLOCK_SIZE();
		static jint GL_MAX_UNIFORM_BUFFER_BINDINGS();
		static jint GL_MAX_VARYING_COMPONENTS();
		static jint GL_MAX_VERTEX_OUTPUT_COMPONENTS();
		static jint GL_MAX_VERTEX_UNIFORM_BLOCKS();
		static jint GL_MAX_VERTEX_UNIFORM_COMPONENTS();
		static jint GL_MIN();
		static jint GL_MINOR_VERSION();
		static jint GL_MIN_PROGRAM_TEXEL_OFFSET();
		static jint GL_NUM_EXTENSIONS();
		static jint GL_NUM_PROGRAM_BINARY_FORMATS();
		static jint GL_NUM_SAMPLE_COUNTS();
		static jint GL_OBJECT_TYPE();
		static jint GL_PACK_ROW_LENGTH();
		static jint GL_PACK_SKIP_PIXELS();
		static jint GL_PACK_SKIP_ROWS();
		static jint GL_PIXEL_PACK_BUFFER();
		static jint GL_PIXEL_PACK_BUFFER_BINDING();
		static jint GL_PIXEL_UNPACK_BUFFER();
		static jint GL_PIXEL_UNPACK_BUFFER_BINDING();
		static jint GL_PRIMITIVE_RESTART_FIXED_INDEX();
		static jint GL_PROGRAM_BINARY_FORMATS();
		static jint GL_PROGRAM_BINARY_LENGTH();
		static jint GL_PROGRAM_BINARY_RETRIEVABLE_HINT();
		static jint GL_QUERY_RESULT();
		static jint GL_QUERY_RESULT_AVAILABLE();
		static jint GL_R11F_G11F_B10F();
		static jint GL_R16F();
		static jint GL_R16I();
		static jint GL_R16UI();
		static jint GL_R32F();
		static jint GL_R32I();
		static jint GL_R32UI();
		static jint GL_R8();
		static jint GL_R8I();
		static jint GL_R8UI();
		static jint GL_R8_SNORM();
		static jint GL_RASTERIZER_DISCARD();
		static jint GL_READ_BUFFER();
		static jint GL_READ_FRAMEBUFFER();
		static jint GL_READ_FRAMEBUFFER_BINDING();
		static jint GL_RED();
		static jint GL_RED_INTEGER();
		static jint GL_RENDERBUFFER_SAMPLES();
		static jint GL_RG();
		static jint GL_RG16F();
		static jint GL_RG16I();
		static jint GL_RG16UI();
		static jint GL_RG32F();
		static jint GL_RG32I();
		static jint GL_RG32UI();
		static jint GL_RG8();
		static jint GL_RG8I();
		static jint GL_RG8UI();
		static jint GL_RG8_SNORM();
		static jint GL_RGB10_A2();
		static jint GL_RGB10_A2UI();
		static jint GL_RGB16F();
		static jint GL_RGB16I();
		static jint GL_RGB16UI();
		static jint GL_RGB32F();
		static jint GL_RGB32I();
		static jint GL_RGB32UI();
		static jint GL_RGB8();
		static jint GL_RGB8I();
		static jint GL_RGB8UI();
		static jint GL_RGB8_SNORM();
		static jint GL_RGB9_E5();
		static jint GL_RGBA16F();
		static jint GL_RGBA16I();
		static jint GL_RGBA16UI();
		static jint GL_RGBA32F();
		static jint GL_RGBA32I();
		static jint GL_RGBA32UI();
		static jint GL_RGBA8();
		static jint GL_RGBA8I();
		static jint GL_RGBA8UI();
		static jint GL_RGBA8_SNORM();
		static jint GL_RGBA_INTEGER();
		static jint GL_RGB_INTEGER();
		static jint GL_RG_INTEGER();
		static jint GL_SAMPLER_2D_ARRAY();
		static jint GL_SAMPLER_2D_ARRAY_SHADOW();
		static jint GL_SAMPLER_2D_SHADOW();
		static jint GL_SAMPLER_3D();
		static jint GL_SAMPLER_BINDING();
		static jint GL_SAMPLER_CUBE_SHADOW();
		static jint GL_SEPARATE_ATTRIBS();
		static jint GL_SIGNALED();
		static jint GL_SIGNED_NORMALIZED();
		static jint GL_SRGB();
		static jint GL_SRGB8();
		static jint GL_SRGB8_ALPHA8();
		static jint GL_STATIC_COPY();
		static jint GL_STATIC_READ();
		static jint GL_STENCIL();
		static jint GL_STREAM_COPY();
		static jint GL_STREAM_READ();
		static jint GL_SYNC_CONDITION();
		static jint GL_SYNC_FENCE();
		static jint GL_SYNC_FLAGS();
		static jint GL_SYNC_FLUSH_COMMANDS_BIT();
		static jint GL_SYNC_GPU_COMMANDS_COMPLETE();
		static jint GL_SYNC_STATUS();
		static jint GL_TEXTURE_2D_ARRAY();
		static jint GL_TEXTURE_3D();
		static jint GL_TEXTURE_BASE_LEVEL();
		static jint GL_TEXTURE_BINDING_2D_ARRAY();
		static jint GL_TEXTURE_BINDING_3D();
		static jint GL_TEXTURE_COMPARE_FUNC();
		static jint GL_TEXTURE_COMPARE_MODE();
		static jint GL_TEXTURE_IMMUTABLE_FORMAT();
		static jint GL_TEXTURE_IMMUTABLE_LEVELS();
		static jint GL_TEXTURE_MAX_LEVEL();
		static jint GL_TEXTURE_MAX_LOD();
		static jint GL_TEXTURE_MIN_LOD();
		static jint GL_TEXTURE_SWIZZLE_A();
		static jint GL_TEXTURE_SWIZZLE_B();
		static jint GL_TEXTURE_SWIZZLE_G();
		static jint GL_TEXTURE_SWIZZLE_R();
		static jint GL_TEXTURE_WRAP_R();
		static jint GL_TIMEOUT_EXPIRED();
		static jlong GL_TIMEOUT_IGNORED();
		static jint GL_TRANSFORM_FEEDBACK();
		static jint GL_TRANSFORM_FEEDBACK_ACTIVE();
		static jint GL_TRANSFORM_FEEDBACK_BINDING();
		static jint GL_TRANSFORM_FEEDBACK_BUFFER();
		static jint GL_TRANSFORM_FEEDBACK_BUFFER_BINDING();
		static jint GL_TRANSFORM_FEEDBACK_BUFFER_MODE();
		static jint GL_TRANSFORM_FEEDBACK_BUFFER_SIZE();
		static jint GL_TRANSFORM_FEEDBACK_BUFFER_START();
		static jint GL_TRANSFORM_FEEDBACK_PAUSED();
		static jint GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN();
		static jint GL_TRANSFORM_FEEDBACK_VARYINGS();
		static jint GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH();
		static jint GL_UNIFORM_ARRAY_STRIDE();
		static jint GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS();
		static jint GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES();
		static jint GL_UNIFORM_BLOCK_BINDING();
		static jint GL_UNIFORM_BLOCK_DATA_SIZE();
		static jint GL_UNIFORM_BLOCK_INDEX();
		static jint GL_UNIFORM_BLOCK_NAME_LENGTH();
		static jint GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER();
		static jint GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER();
		static jint GL_UNIFORM_BUFFER();
		static jint GL_UNIFORM_BUFFER_BINDING();
		static jint GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT();
		static jint GL_UNIFORM_BUFFER_SIZE();
		static jint GL_UNIFORM_BUFFER_START();
		static jint GL_UNIFORM_IS_ROW_MAJOR();
		static jint GL_UNIFORM_MATRIX_STRIDE();
		static jint GL_UNIFORM_NAME_LENGTH();
		static jint GL_UNIFORM_OFFSET();
		static jint GL_UNIFORM_SIZE();
		static jint GL_UNIFORM_TYPE();
		static jint GL_UNPACK_IMAGE_HEIGHT();
		static jint GL_UNPACK_ROW_LENGTH();
		static jint GL_UNPACK_SKIP_IMAGES();
		static jint GL_UNPACK_SKIP_PIXELS();
		static jint GL_UNPACK_SKIP_ROWS();
		static jint GL_UNSIGNALED();
		static jint GL_UNSIGNED_INT_10F_11F_11F_REV();
		static jint GL_UNSIGNED_INT_24_8();
		static jint GL_UNSIGNED_INT_2_10_10_10_REV();
		static jint GL_UNSIGNED_INT_5_9_9_9_REV();
		static jint GL_UNSIGNED_INT_SAMPLER_2D();
		static jint GL_UNSIGNED_INT_SAMPLER_2D_ARRAY();
		static jint GL_UNSIGNED_INT_SAMPLER_3D();
		static jint GL_UNSIGNED_INT_SAMPLER_CUBE();
		static jint GL_UNSIGNED_INT_VEC2();
		static jint GL_UNSIGNED_INT_VEC3();
		static jint GL_UNSIGNED_INT_VEC4();
		static jint GL_UNSIGNED_NORMALIZED();
		static jint GL_VERTEX_ARRAY_BINDING();
		static jint GL_VERTEX_ATTRIB_ARRAY_DIVISOR();
		static jint GL_VERTEX_ATTRIB_ARRAY_INTEGER();
		static jint GL_WAIT_FAILED();
		
		// Constructors
		void __constructor();
		
		// Methods
		static void glReadBuffer(jint arg0);
		static void glDrawRangeElements(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		static void glDrawRangeElements(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, __jni_impl::java::nio::Buffer arg5);
		static void glTexImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9);
		static void glTexImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, __jni_impl::java::nio::Buffer arg9);
		static void glTexSubImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10);
		static void glTexSubImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, __jni_impl::java::nio::Buffer arg10);
		static void glCopyTexSubImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8);
		static void glCompressedTexImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8);
		static void glCompressedTexImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, __jni_impl::java::nio::Buffer arg8);
		static void glCompressedTexSubImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10);
		static void glCompressedTexSubImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, __jni_impl::java::nio::Buffer arg10);
		static void glGenQueries(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glGenQueries(jint arg0, jintArray arg1, jint arg2);
		static void glDeleteQueries(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glDeleteQueries(jint arg0, jintArray arg1, jint arg2);
		static jboolean glIsQuery(jint arg0);
		static void glBeginQuery(jint arg0, jint arg1);
		static void glEndQuery(jint arg0);
		static void glGetQueryiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glGetQueryiv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glGetQueryObjectuiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glGetQueryObjectuiv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static jboolean glUnmapBuffer(jint arg0);
		static QAndroidJniObject glGetBufferPointerv(jint arg0, jint arg1);
		static void glDrawBuffers(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glDrawBuffers(jint arg0, jintArray arg1, jint arg2);
		static void glUniformMatrix2x3fv(jint arg0, jint arg1, jboolean arg2, __jni_impl::java::nio::FloatBuffer arg3);
		static void glUniformMatrix2x3fv(jint arg0, jint arg1, jboolean arg2, jfloatArray arg3, jint arg4);
		static void glUniformMatrix3x2fv(jint arg0, jint arg1, jboolean arg2, __jni_impl::java::nio::FloatBuffer arg3);
		static void glUniformMatrix3x2fv(jint arg0, jint arg1, jboolean arg2, jfloatArray arg3, jint arg4);
		static void glUniformMatrix2x4fv(jint arg0, jint arg1, jboolean arg2, __jni_impl::java::nio::FloatBuffer arg3);
		static void glUniformMatrix2x4fv(jint arg0, jint arg1, jboolean arg2, jfloatArray arg3, jint arg4);
		static void glUniformMatrix4x2fv(jint arg0, jint arg1, jboolean arg2, __jni_impl::java::nio::FloatBuffer arg3);
		static void glUniformMatrix4x2fv(jint arg0, jint arg1, jboolean arg2, jfloatArray arg3, jint arg4);
		static void glUniformMatrix3x4fv(jint arg0, jint arg1, jboolean arg2, __jni_impl::java::nio::FloatBuffer arg3);
		static void glUniformMatrix3x4fv(jint arg0, jint arg1, jboolean arg2, jfloatArray arg3, jint arg4);
		static void glUniformMatrix4x3fv(jint arg0, jint arg1, jboolean arg2, __jni_impl::java::nio::FloatBuffer arg3);
		static void glUniformMatrix4x3fv(jint arg0, jint arg1, jboolean arg2, jfloatArray arg3, jint arg4);
		static void glBlitFramebuffer(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9);
		static void glRenderbufferStorageMultisample(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glFramebufferTextureLayer(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static QAndroidJniObject glMapBufferRange(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glFlushMappedBufferRange(jint arg0, jint arg1, jint arg2);
		static void glBindVertexArray(jint arg0);
		static void glDeleteVertexArrays(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glDeleteVertexArrays(jint arg0, jintArray arg1, jint arg2);
		static void glGenVertexArrays(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glGenVertexArrays(jint arg0, jintArray arg1, jint arg2);
		static jboolean glIsVertexArray(jint arg0);
		static void glGetIntegeri_v(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glGetIntegeri_v(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glBeginTransformFeedback(jint arg0);
		static void glEndTransformFeedback();
		static void glBindBufferRange(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glBindBufferBase(jint arg0, jint arg1, jint arg2);
		static void glTransformFeedbackVaryings(jint arg0, jarray arg1, jint arg2);
		static void glGetTransformFeedbackVarying(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3, __jni_impl::java::nio::IntBuffer arg4, __jni_impl::java::nio::IntBuffer arg5, __jni_impl::java::nio::ByteBuffer arg6);
		static QAndroidJniObject glGetTransformFeedbackVarying(jint arg0, jint arg1, jintArray arg2, jint arg3, jintArray arg4, jint arg5);
		static QAndroidJniObject glGetTransformFeedbackVarying(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2, __jni_impl::java::nio::IntBuffer arg3);
		static void glGetTransformFeedbackVarying(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3, __jni_impl::java::nio::IntBuffer arg4, __jni_impl::java::nio::IntBuffer arg5, jbyte arg6);
		static void glGetTransformFeedbackVarying(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4, jintArray arg5, jint arg6, jintArray arg7, jint arg8, jbyteArray arg9, jint arg10);
		static void glVertexAttribIPointer(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glVertexAttribIPointer(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::java::nio::Buffer arg4);
		static void glGetVertexAttribIiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glGetVertexAttribIiv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glGetVertexAttribIuiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glGetVertexAttribIuiv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glVertexAttribI4i(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glVertexAttribI4ui(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glVertexAttribI4iv(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glVertexAttribI4iv(jint arg0, jintArray arg1, jint arg2);
		static void glVertexAttribI4uiv(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glVertexAttribI4uiv(jint arg0, jintArray arg1, jint arg2);
		static void glGetUniformuiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glGetUniformuiv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static jint glGetFragDataLocation(jint arg0, jstring arg1);
		static void glUniform1ui(jint arg0, jint arg1);
		static void glUniform2ui(jint arg0, jint arg1, jint arg2);
		static void glUniform3ui(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glUniform4ui(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glUniform1uiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glUniform1uiv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glUniform2uiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glUniform2uiv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glUniform3uiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glUniform3uiv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glUniform4uiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glUniform4uiv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glClearBufferiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glClearBufferiv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glClearBufferuiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glClearBufferuiv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glClearBufferfv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2);
		static void glClearBufferfv(jint arg0, jint arg1, jfloatArray arg2, jint arg3);
		static void glClearBufferfi(jint arg0, jint arg1, jfloat arg2, jint arg3);
		static QAndroidJniObject glGetStringi(jint arg0, jint arg1);
		static void glCopyBufferSubData(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glGetUniformIndices(jint arg0, jarray arg1, jintArray arg2, jint arg3);
		static void glGetUniformIndices(jint arg0, jarray arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glGetActiveUniformsiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2, jint arg3, __jni_impl::java::nio::IntBuffer arg4);
		static void glGetActiveUniformsiv(jint arg0, jint arg1, jintArray arg2, jint arg3, jint arg4, jintArray arg5, jint arg6);
		static jint glGetUniformBlockIndex(jint arg0, jstring arg1);
		static void glGetActiveUniformBlockiv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4);
		static void glGetActiveUniformBlockiv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3);
		static void glGetActiveUniformBlockName(jint arg0, jint arg1, __jni_impl::java::nio::Buffer arg2, __jni_impl::java::nio::Buffer arg3);
		static QAndroidJniObject glGetActiveUniformBlockName(jint arg0, jint arg1);
		static void glGetActiveUniformBlockName(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4, jbyteArray arg5, jint arg6);
		static void glUniformBlockBinding(jint arg0, jint arg1, jint arg2);
		static void glDrawArraysInstanced(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glDrawElementsInstanced(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glDrawElementsInstanced(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::Buffer arg3, jint arg4);
		static jlong glFenceSync(jint arg0, jint arg1);
		static jboolean glIsSync(jlong arg0);
		static void glDeleteSync(jlong arg0);
		static jint glClientWaitSync(jlong arg0, jint arg1, jlong arg2);
		static void glWaitSync(jlong arg0, jint arg1, jlong arg2);
		static void glGetInteger64v(jint arg0, __jni_impl::java::nio::LongBuffer arg1);
		static void glGetInteger64v(jint arg0, jlongArray arg1, jint arg2);
		static void glGetSynciv(jlong arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3, __jni_impl::java::nio::IntBuffer arg4);
		static void glGetSynciv(jlong arg0, jint arg1, jint arg2, jintArray arg3, jint arg4, jintArray arg5, jint arg6);
		static void glGetInteger64i_v(jint arg0, jint arg1, __jni_impl::java::nio::LongBuffer arg2);
		static void glGetInteger64i_v(jint arg0, jint arg1, jlongArray arg2, jint arg3);
		static void glGetBufferParameteri64v(jint arg0, jint arg1, __jni_impl::java::nio::LongBuffer arg2);
		static void glGetBufferParameteri64v(jint arg0, jint arg1, jlongArray arg2, jint arg3);
		static void glGenSamplers(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glGenSamplers(jint arg0, jintArray arg1, jint arg2);
		static void glDeleteSamplers(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glDeleteSamplers(jint arg0, jintArray arg1, jint arg2);
		static jboolean glIsSampler(jint arg0);
		static void glBindSampler(jint arg0, jint arg1);
		static void glSamplerParameteri(jint arg0, jint arg1, jint arg2);
		static void glSamplerParameteriv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glSamplerParameteriv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glSamplerParameterf(jint arg0, jint arg1, jfloat arg2);
		static void glSamplerParameterfv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2);
		static void glSamplerParameterfv(jint arg0, jint arg1, jfloatArray arg2, jint arg3);
		static void glGetSamplerParameteriv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glGetSamplerParameteriv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glGetSamplerParameterfv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2);
		static void glGetSamplerParameterfv(jint arg0, jint arg1, jfloatArray arg2, jint arg3);
		static void glVertexAttribDivisor(jint arg0, jint arg1);
		static void glBindTransformFeedback(jint arg0, jint arg1);
		static void glDeleteTransformFeedbacks(jint arg0, jintArray arg1, jint arg2);
		static void glDeleteTransformFeedbacks(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glGenTransformFeedbacks(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glGenTransformFeedbacks(jint arg0, jintArray arg1, jint arg2);
		static jboolean glIsTransformFeedback(jint arg0);
		static void glPauseTransformFeedback();
		static void glResumeTransformFeedback();
		static void glGetProgramBinary(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2, __jni_impl::java::nio::IntBuffer arg3, __jni_impl::java::nio::Buffer arg4);
		static void glGetProgramBinary(jint arg0, jint arg1, jintArray arg2, jint arg3, jintArray arg4, jint arg5, __jni_impl::java::nio::Buffer arg6);
		static void glProgramBinary(jint arg0, jint arg1, __jni_impl::java::nio::Buffer arg2, jint arg3);
		static void glProgramParameteri(jint arg0, jint arg1, jint arg2);
		static void glInvalidateFramebuffer(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glInvalidateFramebuffer(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glInvalidateSubFramebuffer(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2, jint arg3, jint arg4, jint arg5, jint arg6);
		static void glInvalidateSubFramebuffer(jint arg0, jint arg1, jintArray arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7);
		static void glTexStorage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glTexStorage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		static void glGetInternalformativ(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::java::nio::IntBuffer arg4);
		static void glGetInternalformativ(jint arg0, jint arg1, jint arg2, jint arg3, jintArray arg4, jint arg5);
		static void glReadPixels(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6);
	};
} // namespace __jni_impl::android::opengl

#include "../../java/nio/Buffer.hpp"
#include "../../java/nio/IntBuffer.hpp"
#include "../../java/nio/FloatBuffer.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "../../java/nio/LongBuffer.hpp"

namespace __jni_impl::android::opengl
{
	// Fields
	jint GLES30::GL_ACTIVE_UNIFORM_BLOCKS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_ACTIVE_UNIFORM_BLOCKS");
	}
	jint GLES30::GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH");
	}
	jint GLES30::GL_ALREADY_SIGNALED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_ALREADY_SIGNALED");
	}
	jint GLES30::GL_ANY_SAMPLES_PASSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_ANY_SAMPLES_PASSED");
	}
	jint GLES30::GL_ANY_SAMPLES_PASSED_CONSERVATIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_ANY_SAMPLES_PASSED_CONSERVATIVE");
	}
	jint GLES30::GL_BLUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_BLUE");
	}
	jint GLES30::GL_BUFFER_ACCESS_FLAGS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_BUFFER_ACCESS_FLAGS");
	}
	jint GLES30::GL_BUFFER_MAPPED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_BUFFER_MAPPED");
	}
	jint GLES30::GL_BUFFER_MAP_LENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_BUFFER_MAP_LENGTH");
	}
	jint GLES30::GL_BUFFER_MAP_OFFSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_BUFFER_MAP_OFFSET");
	}
	jint GLES30::GL_BUFFER_MAP_POINTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_BUFFER_MAP_POINTER");
	}
	jint GLES30::GL_COLOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR");
	}
	jint GLES30::GL_COLOR_ATTACHMENT1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT1");
	}
	jint GLES30::GL_COLOR_ATTACHMENT10()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT10");
	}
	jint GLES30::GL_COLOR_ATTACHMENT11()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT11");
	}
	jint GLES30::GL_COLOR_ATTACHMENT12()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT12");
	}
	jint GLES30::GL_COLOR_ATTACHMENT13()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT13");
	}
	jint GLES30::GL_COLOR_ATTACHMENT14()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT14");
	}
	jint GLES30::GL_COLOR_ATTACHMENT15()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT15");
	}
	jint GLES30::GL_COLOR_ATTACHMENT2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT2");
	}
	jint GLES30::GL_COLOR_ATTACHMENT3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT3");
	}
	jint GLES30::GL_COLOR_ATTACHMENT4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT4");
	}
	jint GLES30::GL_COLOR_ATTACHMENT5()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT5");
	}
	jint GLES30::GL_COLOR_ATTACHMENT6()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT6");
	}
	jint GLES30::GL_COLOR_ATTACHMENT7()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT7");
	}
	jint GLES30::GL_COLOR_ATTACHMENT8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT8");
	}
	jint GLES30::GL_COLOR_ATTACHMENT9()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT9");
	}
	jint GLES30::GL_COMPARE_REF_TO_TEXTURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COMPARE_REF_TO_TEXTURE");
	}
	jint GLES30::GL_COMPRESSED_R11_EAC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COMPRESSED_R11_EAC");
	}
	jint GLES30::GL_COMPRESSED_RG11_EAC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COMPRESSED_RG11_EAC");
	}
	jint GLES30::GL_COMPRESSED_RGB8_ETC2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COMPRESSED_RGB8_ETC2");
	}
	jint GLES30::GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2");
	}
	jint GLES30::GL_COMPRESSED_RGBA8_ETC2_EAC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COMPRESSED_RGBA8_ETC2_EAC");
	}
	jint GLES30::GL_COMPRESSED_SIGNED_R11_EAC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COMPRESSED_SIGNED_R11_EAC");
	}
	jint GLES30::GL_COMPRESSED_SIGNED_RG11_EAC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COMPRESSED_SIGNED_RG11_EAC");
	}
	jint GLES30::GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC");
	}
	jint GLES30::GL_COMPRESSED_SRGB8_ETC2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COMPRESSED_SRGB8_ETC2");
	}
	jint GLES30::GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2");
	}
	jint GLES30::GL_CONDITION_SATISFIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_CONDITION_SATISFIED");
	}
	jint GLES30::GL_COPY_READ_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COPY_READ_BUFFER");
	}
	jint GLES30::GL_COPY_READ_BUFFER_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COPY_READ_BUFFER_BINDING");
	}
	jint GLES30::GL_COPY_WRITE_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COPY_WRITE_BUFFER");
	}
	jint GLES30::GL_COPY_WRITE_BUFFER_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COPY_WRITE_BUFFER_BINDING");
	}
	jint GLES30::GL_CURRENT_QUERY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_CURRENT_QUERY");
	}
	jint GLES30::GL_DEPTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DEPTH");
	}
	jint GLES30::GL_DEPTH24_STENCIL8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DEPTH24_STENCIL8");
	}
	jint GLES30::GL_DEPTH32F_STENCIL8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DEPTH32F_STENCIL8");
	}
	jint GLES30::GL_DEPTH_COMPONENT24()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DEPTH_COMPONENT24");
	}
	jint GLES30::GL_DEPTH_COMPONENT32F()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DEPTH_COMPONENT32F");
	}
	jint GLES30::GL_DEPTH_STENCIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DEPTH_STENCIL");
	}
	jint GLES30::GL_DEPTH_STENCIL_ATTACHMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DEPTH_STENCIL_ATTACHMENT");
	}
	jint GLES30::GL_DRAW_BUFFER0()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER0");
	}
	jint GLES30::GL_DRAW_BUFFER1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER1");
	}
	jint GLES30::GL_DRAW_BUFFER10()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER10");
	}
	jint GLES30::GL_DRAW_BUFFER11()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER11");
	}
	jint GLES30::GL_DRAW_BUFFER12()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER12");
	}
	jint GLES30::GL_DRAW_BUFFER13()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER13");
	}
	jint GLES30::GL_DRAW_BUFFER14()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER14");
	}
	jint GLES30::GL_DRAW_BUFFER15()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER15");
	}
	jint GLES30::GL_DRAW_BUFFER2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER2");
	}
	jint GLES30::GL_DRAW_BUFFER3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER3");
	}
	jint GLES30::GL_DRAW_BUFFER4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER4");
	}
	jint GLES30::GL_DRAW_BUFFER5()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER5");
	}
	jint GLES30::GL_DRAW_BUFFER6()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER6");
	}
	jint GLES30::GL_DRAW_BUFFER7()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER7");
	}
	jint GLES30::GL_DRAW_BUFFER8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER8");
	}
	jint GLES30::GL_DRAW_BUFFER9()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER9");
	}
	jint GLES30::GL_DRAW_FRAMEBUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_FRAMEBUFFER");
	}
	jint GLES30::GL_DRAW_FRAMEBUFFER_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_FRAMEBUFFER_BINDING");
	}
	jint GLES30::GL_DYNAMIC_COPY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DYNAMIC_COPY");
	}
	jint GLES30::GL_DYNAMIC_READ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DYNAMIC_READ");
	}
	jint GLES30::GL_FLOAT_32_UNSIGNED_INT_24_8_REV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FLOAT_32_UNSIGNED_INT_24_8_REV");
	}
	jint GLES30::GL_FLOAT_MAT2x3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FLOAT_MAT2x3");
	}
	jint GLES30::GL_FLOAT_MAT2x4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FLOAT_MAT2x4");
	}
	jint GLES30::GL_FLOAT_MAT3x2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FLOAT_MAT3x2");
	}
	jint GLES30::GL_FLOAT_MAT3x4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FLOAT_MAT3x4");
	}
	jint GLES30::GL_FLOAT_MAT4x2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FLOAT_MAT4x2");
	}
	jint GLES30::GL_FLOAT_MAT4x3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FLOAT_MAT4x3");
	}
	jint GLES30::GL_FRAGMENT_SHADER_DERIVATIVE_HINT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FRAGMENT_SHADER_DERIVATIVE_HINT");
	}
	jint GLES30::GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE");
	}
	jint GLES30::GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE");
	}
	jint GLES30::GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING");
	}
	jint GLES30::GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE");
	}
	jint GLES30::GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE");
	}
	jint GLES30::GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE");
	}
	jint GLES30::GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE");
	}
	jint GLES30::GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE");
	}
	jint GLES30::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER");
	}
	jint GLES30::GL_FRAMEBUFFER_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FRAMEBUFFER_DEFAULT");
	}
	jint GLES30::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE");
	}
	jint GLES30::GL_FRAMEBUFFER_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FRAMEBUFFER_UNDEFINED");
	}
	jint GLES30::GL_GREEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_GREEN");
	}
	jint GLES30::GL_HALF_FLOAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_HALF_FLOAT");
	}
	jint GLES30::GL_INTERLEAVED_ATTRIBS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_INTERLEAVED_ATTRIBS");
	}
	jint GLES30::GL_INT_2_10_10_10_REV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_INT_2_10_10_10_REV");
	}
	jint GLES30::GL_INT_SAMPLER_2D()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_INT_SAMPLER_2D");
	}
	jint GLES30::GL_INT_SAMPLER_2D_ARRAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_INT_SAMPLER_2D_ARRAY");
	}
	jint GLES30::GL_INT_SAMPLER_3D()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_INT_SAMPLER_3D");
	}
	jint GLES30::GL_INT_SAMPLER_CUBE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_INT_SAMPLER_CUBE");
	}
	jint GLES30::GL_INVALID_INDEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_INVALID_INDEX");
	}
	jint GLES30::GL_MAJOR_VERSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAJOR_VERSION");
	}
	jint GLES30::GL_MAP_FLUSH_EXPLICIT_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAP_FLUSH_EXPLICIT_BIT");
	}
	jint GLES30::GL_MAP_INVALIDATE_BUFFER_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAP_INVALIDATE_BUFFER_BIT");
	}
	jint GLES30::GL_MAP_INVALIDATE_RANGE_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAP_INVALIDATE_RANGE_BIT");
	}
	jint GLES30::GL_MAP_READ_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAP_READ_BIT");
	}
	jint GLES30::GL_MAP_UNSYNCHRONIZED_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAP_UNSYNCHRONIZED_BIT");
	}
	jint GLES30::GL_MAP_WRITE_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAP_WRITE_BIT");
	}
	jint GLES30::GL_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX");
	}
	jint GLES30::GL_MAX_3D_TEXTURE_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_3D_TEXTURE_SIZE");
	}
	jint GLES30::GL_MAX_ARRAY_TEXTURE_LAYERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_ARRAY_TEXTURE_LAYERS");
	}
	jint GLES30::GL_MAX_COLOR_ATTACHMENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_COLOR_ATTACHMENTS");
	}
	jint GLES30::GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS");
	}
	jint GLES30::GL_MAX_COMBINED_UNIFORM_BLOCKS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_COMBINED_UNIFORM_BLOCKS");
	}
	jint GLES30::GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS");
	}
	jint GLES30::GL_MAX_DRAW_BUFFERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_DRAW_BUFFERS");
	}
	jint GLES30::GL_MAX_ELEMENTS_INDICES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_ELEMENTS_INDICES");
	}
	jint GLES30::GL_MAX_ELEMENTS_VERTICES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_ELEMENTS_VERTICES");
	}
	jint GLES30::GL_MAX_ELEMENT_INDEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_ELEMENT_INDEX");
	}
	jint GLES30::GL_MAX_FRAGMENT_INPUT_COMPONENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_FRAGMENT_INPUT_COMPONENTS");
	}
	jint GLES30::GL_MAX_FRAGMENT_UNIFORM_BLOCKS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_FRAGMENT_UNIFORM_BLOCKS");
	}
	jint GLES30::GL_MAX_FRAGMENT_UNIFORM_COMPONENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_FRAGMENT_UNIFORM_COMPONENTS");
	}
	jint GLES30::GL_MAX_PROGRAM_TEXEL_OFFSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_PROGRAM_TEXEL_OFFSET");
	}
	jint GLES30::GL_MAX_SAMPLES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_SAMPLES");
	}
	jint GLES30::GL_MAX_SERVER_WAIT_TIMEOUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_SERVER_WAIT_TIMEOUT");
	}
	jint GLES30::GL_MAX_TEXTURE_LOD_BIAS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_TEXTURE_LOD_BIAS");
	}
	jint GLES30::GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS");
	}
	jint GLES30::GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS");
	}
	jint GLES30::GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS");
	}
	jint GLES30::GL_MAX_UNIFORM_BLOCK_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_UNIFORM_BLOCK_SIZE");
	}
	jint GLES30::GL_MAX_UNIFORM_BUFFER_BINDINGS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_UNIFORM_BUFFER_BINDINGS");
	}
	jint GLES30::GL_MAX_VARYING_COMPONENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_VARYING_COMPONENTS");
	}
	jint GLES30::GL_MAX_VERTEX_OUTPUT_COMPONENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_VERTEX_OUTPUT_COMPONENTS");
	}
	jint GLES30::GL_MAX_VERTEX_UNIFORM_BLOCKS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_VERTEX_UNIFORM_BLOCKS");
	}
	jint GLES30::GL_MAX_VERTEX_UNIFORM_COMPONENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_VERTEX_UNIFORM_COMPONENTS");
	}
	jint GLES30::GL_MIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MIN");
	}
	jint GLES30::GL_MINOR_VERSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MINOR_VERSION");
	}
	jint GLES30::GL_MIN_PROGRAM_TEXEL_OFFSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MIN_PROGRAM_TEXEL_OFFSET");
	}
	jint GLES30::GL_NUM_EXTENSIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_NUM_EXTENSIONS");
	}
	jint GLES30::GL_NUM_PROGRAM_BINARY_FORMATS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_NUM_PROGRAM_BINARY_FORMATS");
	}
	jint GLES30::GL_NUM_SAMPLE_COUNTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_NUM_SAMPLE_COUNTS");
	}
	jint GLES30::GL_OBJECT_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_OBJECT_TYPE");
	}
	jint GLES30::GL_PACK_ROW_LENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_PACK_ROW_LENGTH");
	}
	jint GLES30::GL_PACK_SKIP_PIXELS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_PACK_SKIP_PIXELS");
	}
	jint GLES30::GL_PACK_SKIP_ROWS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_PACK_SKIP_ROWS");
	}
	jint GLES30::GL_PIXEL_PACK_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_PIXEL_PACK_BUFFER");
	}
	jint GLES30::GL_PIXEL_PACK_BUFFER_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_PIXEL_PACK_BUFFER_BINDING");
	}
	jint GLES30::GL_PIXEL_UNPACK_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_PIXEL_UNPACK_BUFFER");
	}
	jint GLES30::GL_PIXEL_UNPACK_BUFFER_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_PIXEL_UNPACK_BUFFER_BINDING");
	}
	jint GLES30::GL_PRIMITIVE_RESTART_FIXED_INDEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_PRIMITIVE_RESTART_FIXED_INDEX");
	}
	jint GLES30::GL_PROGRAM_BINARY_FORMATS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_PROGRAM_BINARY_FORMATS");
	}
	jint GLES30::GL_PROGRAM_BINARY_LENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_PROGRAM_BINARY_LENGTH");
	}
	jint GLES30::GL_PROGRAM_BINARY_RETRIEVABLE_HINT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_PROGRAM_BINARY_RETRIEVABLE_HINT");
	}
	jint GLES30::GL_QUERY_RESULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_QUERY_RESULT");
	}
	jint GLES30::GL_QUERY_RESULT_AVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_QUERY_RESULT_AVAILABLE");
	}
	jint GLES30::GL_R11F_G11F_B10F()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_R11F_G11F_B10F");
	}
	jint GLES30::GL_R16F()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_R16F");
	}
	jint GLES30::GL_R16I()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_R16I");
	}
	jint GLES30::GL_R16UI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_R16UI");
	}
	jint GLES30::GL_R32F()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_R32F");
	}
	jint GLES30::GL_R32I()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_R32I");
	}
	jint GLES30::GL_R32UI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_R32UI");
	}
	jint GLES30::GL_R8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_R8");
	}
	jint GLES30::GL_R8I()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_R8I");
	}
	jint GLES30::GL_R8UI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_R8UI");
	}
	jint GLES30::GL_R8_SNORM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_R8_SNORM");
	}
	jint GLES30::GL_RASTERIZER_DISCARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RASTERIZER_DISCARD");
	}
	jint GLES30::GL_READ_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_READ_BUFFER");
	}
	jint GLES30::GL_READ_FRAMEBUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_READ_FRAMEBUFFER");
	}
	jint GLES30::GL_READ_FRAMEBUFFER_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_READ_FRAMEBUFFER_BINDING");
	}
	jint GLES30::GL_RED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RED");
	}
	jint GLES30::GL_RED_INTEGER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RED_INTEGER");
	}
	jint GLES30::GL_RENDERBUFFER_SAMPLES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RENDERBUFFER_SAMPLES");
	}
	jint GLES30::GL_RG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RG");
	}
	jint GLES30::GL_RG16F()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RG16F");
	}
	jint GLES30::GL_RG16I()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RG16I");
	}
	jint GLES30::GL_RG16UI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RG16UI");
	}
	jint GLES30::GL_RG32F()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RG32F");
	}
	jint GLES30::GL_RG32I()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RG32I");
	}
	jint GLES30::GL_RG32UI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RG32UI");
	}
	jint GLES30::GL_RG8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RG8");
	}
	jint GLES30::GL_RG8I()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RG8I");
	}
	jint GLES30::GL_RG8UI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RG8UI");
	}
	jint GLES30::GL_RG8_SNORM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RG8_SNORM");
	}
	jint GLES30::GL_RGB10_A2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB10_A2");
	}
	jint GLES30::GL_RGB10_A2UI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB10_A2UI");
	}
	jint GLES30::GL_RGB16F()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB16F");
	}
	jint GLES30::GL_RGB16I()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB16I");
	}
	jint GLES30::GL_RGB16UI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB16UI");
	}
	jint GLES30::GL_RGB32F()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB32F");
	}
	jint GLES30::GL_RGB32I()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB32I");
	}
	jint GLES30::GL_RGB32UI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB32UI");
	}
	jint GLES30::GL_RGB8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB8");
	}
	jint GLES30::GL_RGB8I()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB8I");
	}
	jint GLES30::GL_RGB8UI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB8UI");
	}
	jint GLES30::GL_RGB8_SNORM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB8_SNORM");
	}
	jint GLES30::GL_RGB9_E5()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB9_E5");
	}
	jint GLES30::GL_RGBA16F()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGBA16F");
	}
	jint GLES30::GL_RGBA16I()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGBA16I");
	}
	jint GLES30::GL_RGBA16UI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGBA16UI");
	}
	jint GLES30::GL_RGBA32F()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGBA32F");
	}
	jint GLES30::GL_RGBA32I()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGBA32I");
	}
	jint GLES30::GL_RGBA32UI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGBA32UI");
	}
	jint GLES30::GL_RGBA8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGBA8");
	}
	jint GLES30::GL_RGBA8I()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGBA8I");
	}
	jint GLES30::GL_RGBA8UI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGBA8UI");
	}
	jint GLES30::GL_RGBA8_SNORM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGBA8_SNORM");
	}
	jint GLES30::GL_RGBA_INTEGER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGBA_INTEGER");
	}
	jint GLES30::GL_RGB_INTEGER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB_INTEGER");
	}
	jint GLES30::GL_RG_INTEGER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RG_INTEGER");
	}
	jint GLES30::GL_SAMPLER_2D_ARRAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SAMPLER_2D_ARRAY");
	}
	jint GLES30::GL_SAMPLER_2D_ARRAY_SHADOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SAMPLER_2D_ARRAY_SHADOW");
	}
	jint GLES30::GL_SAMPLER_2D_SHADOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SAMPLER_2D_SHADOW");
	}
	jint GLES30::GL_SAMPLER_3D()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SAMPLER_3D");
	}
	jint GLES30::GL_SAMPLER_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SAMPLER_BINDING");
	}
	jint GLES30::GL_SAMPLER_CUBE_SHADOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SAMPLER_CUBE_SHADOW");
	}
	jint GLES30::GL_SEPARATE_ATTRIBS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SEPARATE_ATTRIBS");
	}
	jint GLES30::GL_SIGNALED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SIGNALED");
	}
	jint GLES30::GL_SIGNED_NORMALIZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SIGNED_NORMALIZED");
	}
	jint GLES30::GL_SRGB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SRGB");
	}
	jint GLES30::GL_SRGB8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SRGB8");
	}
	jint GLES30::GL_SRGB8_ALPHA8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SRGB8_ALPHA8");
	}
	jint GLES30::GL_STATIC_COPY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_STATIC_COPY");
	}
	jint GLES30::GL_STATIC_READ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_STATIC_READ");
	}
	jint GLES30::GL_STENCIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_STENCIL");
	}
	jint GLES30::GL_STREAM_COPY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_STREAM_COPY");
	}
	jint GLES30::GL_STREAM_READ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_STREAM_READ");
	}
	jint GLES30::GL_SYNC_CONDITION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SYNC_CONDITION");
	}
	jint GLES30::GL_SYNC_FENCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SYNC_FENCE");
	}
	jint GLES30::GL_SYNC_FLAGS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SYNC_FLAGS");
	}
	jint GLES30::GL_SYNC_FLUSH_COMMANDS_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SYNC_FLUSH_COMMANDS_BIT");
	}
	jint GLES30::GL_SYNC_GPU_COMMANDS_COMPLETE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SYNC_GPU_COMMANDS_COMPLETE");
	}
	jint GLES30::GL_SYNC_STATUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SYNC_STATUS");
	}
	jint GLES30::GL_TEXTURE_2D_ARRAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_2D_ARRAY");
	}
	jint GLES30::GL_TEXTURE_3D()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_3D");
	}
	jint GLES30::GL_TEXTURE_BASE_LEVEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_BASE_LEVEL");
	}
	jint GLES30::GL_TEXTURE_BINDING_2D_ARRAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_BINDING_2D_ARRAY");
	}
	jint GLES30::GL_TEXTURE_BINDING_3D()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_BINDING_3D");
	}
	jint GLES30::GL_TEXTURE_COMPARE_FUNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_COMPARE_FUNC");
	}
	jint GLES30::GL_TEXTURE_COMPARE_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_COMPARE_MODE");
	}
	jint GLES30::GL_TEXTURE_IMMUTABLE_FORMAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_IMMUTABLE_FORMAT");
	}
	jint GLES30::GL_TEXTURE_IMMUTABLE_LEVELS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_IMMUTABLE_LEVELS");
	}
	jint GLES30::GL_TEXTURE_MAX_LEVEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_MAX_LEVEL");
	}
	jint GLES30::GL_TEXTURE_MAX_LOD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_MAX_LOD");
	}
	jint GLES30::GL_TEXTURE_MIN_LOD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_MIN_LOD");
	}
	jint GLES30::GL_TEXTURE_SWIZZLE_A()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_SWIZZLE_A");
	}
	jint GLES30::GL_TEXTURE_SWIZZLE_B()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_SWIZZLE_B");
	}
	jint GLES30::GL_TEXTURE_SWIZZLE_G()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_SWIZZLE_G");
	}
	jint GLES30::GL_TEXTURE_SWIZZLE_R()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_SWIZZLE_R");
	}
	jint GLES30::GL_TEXTURE_WRAP_R()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_WRAP_R");
	}
	jint GLES30::GL_TIMEOUT_EXPIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TIMEOUT_EXPIRED");
	}
	jlong GLES30::GL_TIMEOUT_IGNORED()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.opengl.GLES30",
			"GL_TIMEOUT_IGNORED");
	}
	jint GLES30::GL_TRANSFORM_FEEDBACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TRANSFORM_FEEDBACK");
	}
	jint GLES30::GL_TRANSFORM_FEEDBACK_ACTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TRANSFORM_FEEDBACK_ACTIVE");
	}
	jint GLES30::GL_TRANSFORM_FEEDBACK_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TRANSFORM_FEEDBACK_BINDING");
	}
	jint GLES30::GL_TRANSFORM_FEEDBACK_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TRANSFORM_FEEDBACK_BUFFER");
	}
	jint GLES30::GL_TRANSFORM_FEEDBACK_BUFFER_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TRANSFORM_FEEDBACK_BUFFER_BINDING");
	}
	jint GLES30::GL_TRANSFORM_FEEDBACK_BUFFER_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TRANSFORM_FEEDBACK_BUFFER_MODE");
	}
	jint GLES30::GL_TRANSFORM_FEEDBACK_BUFFER_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TRANSFORM_FEEDBACK_BUFFER_SIZE");
	}
	jint GLES30::GL_TRANSFORM_FEEDBACK_BUFFER_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TRANSFORM_FEEDBACK_BUFFER_START");
	}
	jint GLES30::GL_TRANSFORM_FEEDBACK_PAUSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TRANSFORM_FEEDBACK_PAUSED");
	}
	jint GLES30::GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN");
	}
	jint GLES30::GL_TRANSFORM_FEEDBACK_VARYINGS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TRANSFORM_FEEDBACK_VARYINGS");
	}
	jint GLES30::GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH");
	}
	jint GLES30::GL_UNIFORM_ARRAY_STRIDE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_ARRAY_STRIDE");
	}
	jint GLES30::GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS");
	}
	jint GLES30::GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES");
	}
	jint GLES30::GL_UNIFORM_BLOCK_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_BLOCK_BINDING");
	}
	jint GLES30::GL_UNIFORM_BLOCK_DATA_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_BLOCK_DATA_SIZE");
	}
	jint GLES30::GL_UNIFORM_BLOCK_INDEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_BLOCK_INDEX");
	}
	jint GLES30::GL_UNIFORM_BLOCK_NAME_LENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_BLOCK_NAME_LENGTH");
	}
	jint GLES30::GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER");
	}
	jint GLES30::GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER");
	}
	jint GLES30::GL_UNIFORM_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_BUFFER");
	}
	jint GLES30::GL_UNIFORM_BUFFER_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_BUFFER_BINDING");
	}
	jint GLES30::GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT");
	}
	jint GLES30::GL_UNIFORM_BUFFER_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_BUFFER_SIZE");
	}
	jint GLES30::GL_UNIFORM_BUFFER_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_BUFFER_START");
	}
	jint GLES30::GL_UNIFORM_IS_ROW_MAJOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_IS_ROW_MAJOR");
	}
	jint GLES30::GL_UNIFORM_MATRIX_STRIDE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_MATRIX_STRIDE");
	}
	jint GLES30::GL_UNIFORM_NAME_LENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_NAME_LENGTH");
	}
	jint GLES30::GL_UNIFORM_OFFSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_OFFSET");
	}
	jint GLES30::GL_UNIFORM_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_SIZE");
	}
	jint GLES30::GL_UNIFORM_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_TYPE");
	}
	jint GLES30::GL_UNPACK_IMAGE_HEIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNPACK_IMAGE_HEIGHT");
	}
	jint GLES30::GL_UNPACK_ROW_LENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNPACK_ROW_LENGTH");
	}
	jint GLES30::GL_UNPACK_SKIP_IMAGES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNPACK_SKIP_IMAGES");
	}
	jint GLES30::GL_UNPACK_SKIP_PIXELS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNPACK_SKIP_PIXELS");
	}
	jint GLES30::GL_UNPACK_SKIP_ROWS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNPACK_SKIP_ROWS");
	}
	jint GLES30::GL_UNSIGNALED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNSIGNALED");
	}
	jint GLES30::GL_UNSIGNED_INT_10F_11F_11F_REV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNSIGNED_INT_10F_11F_11F_REV");
	}
	jint GLES30::GL_UNSIGNED_INT_24_8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNSIGNED_INT_24_8");
	}
	jint GLES30::GL_UNSIGNED_INT_2_10_10_10_REV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNSIGNED_INT_2_10_10_10_REV");
	}
	jint GLES30::GL_UNSIGNED_INT_5_9_9_9_REV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNSIGNED_INT_5_9_9_9_REV");
	}
	jint GLES30::GL_UNSIGNED_INT_SAMPLER_2D()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNSIGNED_INT_SAMPLER_2D");
	}
	jint GLES30::GL_UNSIGNED_INT_SAMPLER_2D_ARRAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNSIGNED_INT_SAMPLER_2D_ARRAY");
	}
	jint GLES30::GL_UNSIGNED_INT_SAMPLER_3D()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNSIGNED_INT_SAMPLER_3D");
	}
	jint GLES30::GL_UNSIGNED_INT_SAMPLER_CUBE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNSIGNED_INT_SAMPLER_CUBE");
	}
	jint GLES30::GL_UNSIGNED_INT_VEC2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNSIGNED_INT_VEC2");
	}
	jint GLES30::GL_UNSIGNED_INT_VEC3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNSIGNED_INT_VEC3");
	}
	jint GLES30::GL_UNSIGNED_INT_VEC4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNSIGNED_INT_VEC4");
	}
	jint GLES30::GL_UNSIGNED_NORMALIZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNSIGNED_NORMALIZED");
	}
	jint GLES30::GL_VERTEX_ARRAY_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_VERTEX_ARRAY_BINDING");
	}
	jint GLES30::GL_VERTEX_ATTRIB_ARRAY_DIVISOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_VERTEX_ATTRIB_ARRAY_DIVISOR");
	}
	jint GLES30::GL_VERTEX_ATTRIB_ARRAY_INTEGER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_VERTEX_ATTRIB_ARRAY_INTEGER");
	}
	jint GLES30::GL_WAIT_FAILED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_WAIT_FAILED");
	}
	
	// Constructors
	void GLES30::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.opengl.GLES30",
			"()V");
	}
	
	// Methods
	void GLES30::glReadBuffer(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glReadBuffer",
			"(I)V",
			arg0);
	}
	void GLES30::glDrawRangeElements(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDrawRangeElements",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5);
	}
	void GLES30::glDrawRangeElements(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, __jni_impl::java::nio::Buffer arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDrawRangeElements",
			"(IIIIILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object());
	}
	void GLES30::glTexImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glTexImage3D",
			"(IIIIIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9);
	}
	void GLES30::glTexImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, __jni_impl::java::nio::Buffer arg9)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glTexImage3D",
			"(IIIIIIIIILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9.__jniObject().object());
	}
	void GLES30::glTexSubImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glTexSubImage3D",
			"(IIIIIIIIIII)V",
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
	void GLES30::glTexSubImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, __jni_impl::java::nio::Buffer arg10)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glTexSubImage3D",
			"(IIIIIIIIIILjava/nio/Buffer;)V",
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
			arg10.__jniObject().object());
	}
	void GLES30::glCopyTexSubImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glCopyTexSubImage3D",
			"(IIIIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8);
	}
	void GLES30::glCompressedTexImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glCompressedTexImage3D",
			"(IIIIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8);
	}
	void GLES30::glCompressedTexImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, __jni_impl::java::nio::Buffer arg8)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glCompressedTexImage3D",
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
	void GLES30::glCompressedTexSubImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glCompressedTexSubImage3D",
			"(IIIIIIIIIII)V",
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
	void GLES30::glCompressedTexSubImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, __jni_impl::java::nio::Buffer arg10)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glCompressedTexSubImage3D",
			"(IIIIIIIIIILjava/nio/Buffer;)V",
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
			arg10.__jniObject().object());
	}
	void GLES30::glGenQueries(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGenQueries",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GLES30::glGenQueries(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGenQueries",
			"(I[II)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES30::glDeleteQueries(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDeleteQueries",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GLES30::glDeleteQueries(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDeleteQueries",
			"(I[II)V",
			arg0,
			arg1,
			arg2);
	}
	jboolean GLES30::glIsQuery(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.GLES30",
			"glIsQuery",
			"(I)Z",
			arg0);
	}
	void GLES30::glBeginQuery(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glBeginQuery",
			"(II)V",
			arg0,
			arg1);
	}
	void GLES30::glEndQuery(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glEndQuery",
			"(I)V",
			arg0);
	}
	void GLES30::glGetQueryiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetQueryiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES30::glGetQueryiv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetQueryiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES30::glGetQueryObjectuiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetQueryObjectuiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES30::glGetQueryObjectuiv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetQueryObjectuiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	jboolean GLES30::glUnmapBuffer(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.GLES30",
			"glUnmapBuffer",
			"(I)Z",
			arg0);
	}
	QAndroidJniObject GLES30::glGetBufferPointerv(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.GLES30",
			"glGetBufferPointerv",
			"(II)Ljava/nio/Buffer;",
			arg0,
			arg1);
	}
	void GLES30::glDrawBuffers(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDrawBuffers",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GLES30::glDrawBuffers(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDrawBuffers",
			"(I[II)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES30::glUniformMatrix2x3fv(jint arg0, jint arg1, jboolean arg2, __jni_impl::java::nio::FloatBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniformMatrix2x3fv",
			"(IIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void GLES30::glUniformMatrix2x3fv(jint arg0, jint arg1, jboolean arg2, jfloatArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniformMatrix2x3fv",
			"(IIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void GLES30::glUniformMatrix3x2fv(jint arg0, jint arg1, jboolean arg2, __jni_impl::java::nio::FloatBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniformMatrix3x2fv",
			"(IIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void GLES30::glUniformMatrix3x2fv(jint arg0, jint arg1, jboolean arg2, jfloatArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniformMatrix3x2fv",
			"(IIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void GLES30::glUniformMatrix2x4fv(jint arg0, jint arg1, jboolean arg2, __jni_impl::java::nio::FloatBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniformMatrix2x4fv",
			"(IIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void GLES30::glUniformMatrix2x4fv(jint arg0, jint arg1, jboolean arg2, jfloatArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniformMatrix2x4fv",
			"(IIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void GLES30::glUniformMatrix4x2fv(jint arg0, jint arg1, jboolean arg2, __jni_impl::java::nio::FloatBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniformMatrix4x2fv",
			"(IIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void GLES30::glUniformMatrix4x2fv(jint arg0, jint arg1, jboolean arg2, jfloatArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniformMatrix4x2fv",
			"(IIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void GLES30::glUniformMatrix3x4fv(jint arg0, jint arg1, jboolean arg2, __jni_impl::java::nio::FloatBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniformMatrix3x4fv",
			"(IIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void GLES30::glUniformMatrix3x4fv(jint arg0, jint arg1, jboolean arg2, jfloatArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniformMatrix3x4fv",
			"(IIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void GLES30::glUniformMatrix4x3fv(jint arg0, jint arg1, jboolean arg2, __jni_impl::java::nio::FloatBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniformMatrix4x3fv",
			"(IIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void GLES30::glUniformMatrix4x3fv(jint arg0, jint arg1, jboolean arg2, jfloatArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniformMatrix4x3fv",
			"(IIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void GLES30::glBlitFramebuffer(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glBlitFramebuffer",
			"(IIIIIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9);
	}
	void GLES30::glRenderbufferStorageMultisample(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glRenderbufferStorageMultisample",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void GLES30::glFramebufferTextureLayer(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glFramebufferTextureLayer",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	QAndroidJniObject GLES30::glMapBufferRange(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.GLES30",
			"glMapBufferRange",
			"(IIII)Ljava/nio/Buffer;",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES30::glFlushMappedBufferRange(jint arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glFlushMappedBufferRange",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES30::glBindVertexArray(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glBindVertexArray",
			"(I)V",
			arg0);
	}
	void GLES30::glDeleteVertexArrays(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDeleteVertexArrays",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GLES30::glDeleteVertexArrays(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDeleteVertexArrays",
			"(I[II)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES30::glGenVertexArrays(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGenVertexArrays",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GLES30::glGenVertexArrays(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGenVertexArrays",
			"(I[II)V",
			arg0,
			arg1,
			arg2);
	}
	jboolean GLES30::glIsVertexArray(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.GLES30",
			"glIsVertexArray",
			"(I)Z",
			arg0);
	}
	void GLES30::glGetIntegeri_v(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetIntegeri_v",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES30::glGetIntegeri_v(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetIntegeri_v",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES30::glBeginTransformFeedback(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glBeginTransformFeedback",
			"(I)V",
			arg0);
	}
	void GLES30::glEndTransformFeedback()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glEndTransformFeedback",
			"()V");
	}
	void GLES30::glBindBufferRange(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glBindBufferRange",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void GLES30::glBindBufferBase(jint arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glBindBufferBase",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES30::glTransformFeedbackVaryings(jint arg0, jarray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glTransformFeedbackVaryings",
			"(I[Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES30::glGetTransformFeedbackVarying(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3, __jni_impl::java::nio::IntBuffer arg4, __jni_impl::java::nio::IntBuffer arg5, __jni_impl::java::nio::ByteBuffer arg6)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetTransformFeedbackVarying",
			"(IIILjava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/ByteBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object());
	}
	QAndroidJniObject GLES30::glGetTransformFeedbackVarying(jint arg0, jint arg1, jintArray arg2, jint arg3, jintArray arg4, jint arg5)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.GLES30",
			"glGetTransformFeedbackVarying",
			"(II[II[II)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5);
	}
	QAndroidJniObject GLES30::glGetTransformFeedbackVarying(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2, __jni_impl::java::nio::IntBuffer arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.GLES30",
			"glGetTransformFeedbackVarying",
			"(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	void GLES30::glGetTransformFeedbackVarying(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3, __jni_impl::java::nio::IntBuffer arg4, __jni_impl::java::nio::IntBuffer arg5, jbyte arg6)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetTransformFeedbackVarying",
			"(IIILjava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;B)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6);
	}
	void GLES30::glGetTransformFeedbackVarying(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4, jintArray arg5, jint arg6, jintArray arg7, jint arg8, jbyteArray arg9, jint arg10)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetTransformFeedbackVarying",
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
	void GLES30::glVertexAttribIPointer(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glVertexAttribIPointer",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void GLES30::glVertexAttribIPointer(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::java::nio::Buffer arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glVertexAttribIPointer",
			"(IIIILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object());
	}
	void GLES30::glGetVertexAttribIiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetVertexAttribIiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES30::glGetVertexAttribIiv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetVertexAttribIiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES30::glGetVertexAttribIuiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetVertexAttribIuiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES30::glGetVertexAttribIuiv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetVertexAttribIuiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES30::glVertexAttribI4i(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glVertexAttribI4i",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void GLES30::glVertexAttribI4ui(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glVertexAttribI4ui",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void GLES30::glVertexAttribI4iv(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glVertexAttribI4iv",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GLES30::glVertexAttribI4iv(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glVertexAttribI4iv",
			"(I[II)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES30::glVertexAttribI4uiv(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glVertexAttribI4uiv",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GLES30::glVertexAttribI4uiv(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glVertexAttribI4uiv",
			"(I[II)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES30::glGetUniformuiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetUniformuiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES30::glGetUniformuiv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetUniformuiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	jint GLES30::glGetFragDataLocation(jint arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.GLES30",
			"glGetFragDataLocation",
			"(ILjava/lang/String;)I",
			arg0,
			arg1);
	}
	void GLES30::glUniform1ui(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniform1ui",
			"(II)V",
			arg0,
			arg1);
	}
	void GLES30::glUniform2ui(jint arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniform2ui",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES30::glUniform3ui(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniform3ui",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES30::glUniform4ui(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniform4ui",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void GLES30::glUniform1uiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniform1uiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES30::glUniform1uiv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniform1uiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES30::glUniform2uiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniform2uiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES30::glUniform2uiv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniform2uiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES30::glUniform3uiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniform3uiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES30::glUniform3uiv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniform3uiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES30::glUniform4uiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniform4uiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES30::glUniform4uiv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniform4uiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES30::glClearBufferiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glClearBufferiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES30::glClearBufferiv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glClearBufferiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES30::glClearBufferuiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glClearBufferuiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES30::glClearBufferuiv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glClearBufferuiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES30::glClearBufferfv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glClearBufferfv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES30::glClearBufferfv(jint arg0, jint arg1, jfloatArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glClearBufferfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES30::glClearBufferfi(jint arg0, jint arg1, jfloat arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glClearBufferfi",
			"(IIFI)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject GLES30::glGetStringi(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.GLES30",
			"glGetStringi",
			"(II)Ljava/lang/String;",
			arg0,
			arg1);
	}
	void GLES30::glCopyBufferSubData(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glCopyBufferSubData",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void GLES30::glGetUniformIndices(jint arg0, jarray arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetUniformIndices",
			"(I[Ljava/lang/String;[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES30::glGetUniformIndices(jint arg0, jarray arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetUniformIndices",
			"(I[Ljava/lang/String;Ljava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES30::glGetActiveUniformsiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2, jint arg3, __jni_impl::java::nio::IntBuffer arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetActiveUniformsiv",
			"(IILjava/nio/IntBuffer;ILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object());
	}
	void GLES30::glGetActiveUniformsiv(jint arg0, jint arg1, jintArray arg2, jint arg3, jint arg4, jintArray arg5, jint arg6)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetActiveUniformsiv",
			"(II[III[II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6);
	}
	jint GLES30::glGetUniformBlockIndex(jint arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.GLES30",
			"glGetUniformBlockIndex",
			"(ILjava/lang/String;)I",
			arg0,
			arg1);
	}
	void GLES30::glGetActiveUniformBlockiv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetActiveUniformBlockiv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void GLES30::glGetActiveUniformBlockiv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetActiveUniformBlockiv",
			"(IIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void GLES30::glGetActiveUniformBlockName(jint arg0, jint arg1, __jni_impl::java::nio::Buffer arg2, __jni_impl::java::nio::Buffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetActiveUniformBlockName",
			"(IILjava/nio/Buffer;Ljava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	QAndroidJniObject GLES30::glGetActiveUniformBlockName(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.GLES30",
			"glGetActiveUniformBlockName",
			"(II)Ljava/lang/String;",
			arg0,
			arg1);
	}
	void GLES30::glGetActiveUniformBlockName(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4, jbyteArray arg5, jint arg6)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetActiveUniformBlockName",
			"(III[II[BI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6);
	}
	void GLES30::glUniformBlockBinding(jint arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniformBlockBinding",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES30::glDrawArraysInstanced(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDrawArraysInstanced",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES30::glDrawElementsInstanced(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDrawElementsInstanced",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void GLES30::glDrawElementsInstanced(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::Buffer arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDrawElementsInstanced",
			"(IIILjava/nio/Buffer;I)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4);
	}
	jlong GLES30::glFenceSync(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.opengl.GLES30",
			"glFenceSync",
			"(II)J",
			arg0,
			arg1);
	}
	jboolean GLES30::glIsSync(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.GLES30",
			"glIsSync",
			"(J)Z",
			arg0);
	}
	void GLES30::glDeleteSync(jlong arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDeleteSync",
			"(J)V",
			arg0);
	}
	jint GLES30::glClientWaitSync(jlong arg0, jint arg1, jlong arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.GLES30",
			"glClientWaitSync",
			"(JIJ)I",
			arg0,
			arg1,
			arg2);
	}
	void GLES30::glWaitSync(jlong arg0, jint arg1, jlong arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glWaitSync",
			"(JIJ)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES30::glGetInteger64v(jint arg0, __jni_impl::java::nio::LongBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetInteger64v",
			"(ILjava/nio/LongBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GLES30::glGetInteger64v(jint arg0, jlongArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetInteger64v",
			"(I[JI)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES30::glGetSynciv(jlong arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3, __jni_impl::java::nio::IntBuffer arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetSynciv",
			"(JIILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object());
	}
	void GLES30::glGetSynciv(jlong arg0, jint arg1, jint arg2, jintArray arg3, jint arg4, jintArray arg5, jint arg6)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetSynciv",
			"(JII[II[II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6);
	}
	void GLES30::glGetInteger64i_v(jint arg0, jint arg1, __jni_impl::java::nio::LongBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetInteger64i_v",
			"(IILjava/nio/LongBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES30::glGetInteger64i_v(jint arg0, jint arg1, jlongArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetInteger64i_v",
			"(II[JI)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES30::glGetBufferParameteri64v(jint arg0, jint arg1, __jni_impl::java::nio::LongBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetBufferParameteri64v",
			"(IILjava/nio/LongBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES30::glGetBufferParameteri64v(jint arg0, jint arg1, jlongArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetBufferParameteri64v",
			"(II[JI)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES30::glGenSamplers(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGenSamplers",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GLES30::glGenSamplers(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGenSamplers",
			"(I[II)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES30::glDeleteSamplers(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDeleteSamplers",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GLES30::glDeleteSamplers(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDeleteSamplers",
			"(I[II)V",
			arg0,
			arg1,
			arg2);
	}
	jboolean GLES30::glIsSampler(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.GLES30",
			"glIsSampler",
			"(I)Z",
			arg0);
	}
	void GLES30::glBindSampler(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glBindSampler",
			"(II)V",
			arg0,
			arg1);
	}
	void GLES30::glSamplerParameteri(jint arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glSamplerParameteri",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES30::glSamplerParameteriv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glSamplerParameteriv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES30::glSamplerParameteriv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glSamplerParameteriv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES30::glSamplerParameterf(jint arg0, jint arg1, jfloat arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glSamplerParameterf",
			"(IIF)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES30::glSamplerParameterfv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glSamplerParameterfv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES30::glSamplerParameterfv(jint arg0, jint arg1, jfloatArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glSamplerParameterfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES30::glGetSamplerParameteriv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetSamplerParameteriv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES30::glGetSamplerParameteriv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetSamplerParameteriv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES30::glGetSamplerParameterfv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetSamplerParameterfv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES30::glGetSamplerParameterfv(jint arg0, jint arg1, jfloatArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetSamplerParameterfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES30::glVertexAttribDivisor(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glVertexAttribDivisor",
			"(II)V",
			arg0,
			arg1);
	}
	void GLES30::glBindTransformFeedback(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glBindTransformFeedback",
			"(II)V",
			arg0,
			arg1);
	}
	void GLES30::glDeleteTransformFeedbacks(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDeleteTransformFeedbacks",
			"(I[II)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES30::glDeleteTransformFeedbacks(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDeleteTransformFeedbacks",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GLES30::glGenTransformFeedbacks(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGenTransformFeedbacks",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void GLES30::glGenTransformFeedbacks(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGenTransformFeedbacks",
			"(I[II)V",
			arg0,
			arg1,
			arg2);
	}
	jboolean GLES30::glIsTransformFeedback(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.GLES30",
			"glIsTransformFeedback",
			"(I)Z",
			arg0);
	}
	void GLES30::glPauseTransformFeedback()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glPauseTransformFeedback",
			"()V");
	}
	void GLES30::glResumeTransformFeedback()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glResumeTransformFeedback",
			"()V");
	}
	void GLES30::glGetProgramBinary(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2, __jni_impl::java::nio::IntBuffer arg3, __jni_impl::java::nio::Buffer arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetProgramBinary",
			"(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object());
	}
	void GLES30::glGetProgramBinary(jint arg0, jint arg1, jintArray arg2, jint arg3, jintArray arg4, jint arg5, __jni_impl::java::nio::Buffer arg6)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetProgramBinary",
			"(II[II[IILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object());
	}
	void GLES30::glProgramBinary(jint arg0, jint arg1, __jni_impl::java::nio::Buffer arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glProgramBinary",
			"(IILjava/nio/Buffer;I)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	void GLES30::glProgramParameteri(jint arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glProgramParameteri",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void GLES30::glInvalidateFramebuffer(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glInvalidateFramebuffer",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void GLES30::glInvalidateFramebuffer(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glInvalidateFramebuffer",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void GLES30::glInvalidateSubFramebuffer(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2, jint arg3, jint arg4, jint arg5, jint arg6)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glInvalidateSubFramebuffer",
			"(IILjava/nio/IntBuffer;IIII)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4,
			arg5,
			arg6);
	}
	void GLES30::glInvalidateSubFramebuffer(jint arg0, jint arg1, jintArray arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glInvalidateSubFramebuffer",
			"(II[IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7);
	}
	void GLES30::glTexStorage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glTexStorage2D",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void GLES30::glTexStorage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glTexStorage3D",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5);
	}
	void GLES30::glGetInternalformativ(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::java::nio::IntBuffer arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetInternalformativ",
			"(IIIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object());
	}
	void GLES30::glGetInternalformativ(jint arg0, jint arg1, jint arg2, jint arg3, jintArray arg4, jint arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetInternalformativ",
			"(IIII[II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5);
	}
	void GLES30::glReadPixels(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES30",
			"glReadPixels",
			"(IIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6);
	}
} // namespace __jni_impl::android::opengl

namespace android::opengl
{
	class GLES30 : public __jni_impl::android::opengl::GLES30
	{
	public:
		GLES30(QAndroidJniObject obj) { __thiz = obj; }
		GLES30()
		{
			__constructor();
		}
	};
} // namespace android::opengl

#endif // ANDROID_OPENGL_GLES30

