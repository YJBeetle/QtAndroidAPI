#pragma once

#include "./GLES20.def.hpp"

class JByteArray;
class JFloatArray;
class JIntArray;
class JLongArray;
class JArray;
class JString;
namespace java::nio
{
	class Buffer;
}
namespace java::nio
{
	class ByteBuffer;
}
namespace java::nio
{
	class FloatBuffer;
}
namespace java::nio
{
	class IntBuffer;
}
namespace java::nio
{
	class LongBuffer;
}

namespace android::opengl
{
	class GLES30 : public android::opengl::GLES20
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
		
		// QJniObject forward
		template<typename ...Ts> explicit GLES30(const char *className, const char *sig, Ts...agv) : android::opengl::GLES20(className, sig, std::forward<Ts>(agv)...) {}
		GLES30(QJniObject obj) : android::opengl::GLES20(obj) {}
		
		// Constructors
		GLES30();
		
		// Methods
		static void glBeginQuery(jint arg0, jint arg1);
		static void glBeginTransformFeedback(jint arg0);
		static void glBindBufferBase(jint arg0, jint arg1, jint arg2);
		static void glBindBufferRange(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glBindSampler(jint arg0, jint arg1);
		static void glBindTransformFeedback(jint arg0, jint arg1);
		static void glBindVertexArray(jint arg0);
		static void glBlitFramebuffer(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9);
		static void glClearBufferfi(jint arg0, jint arg1, jfloat arg2, jint arg3);
		static void glClearBufferfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2);
		static void glClearBufferfv(jint arg0, jint arg1, JFloatArray arg2, jint arg3);
		static void glClearBufferiv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glClearBufferiv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glClearBufferuiv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glClearBufferuiv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static jint glClientWaitSync(jlong arg0, jint arg1, jlong arg2);
		static void glCompressedTexImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8);
		static void glCompressedTexImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, java::nio::Buffer arg8);
		static void glCompressedTexSubImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10);
		static void glCompressedTexSubImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, java::nio::Buffer arg10);
		static void glCopyBufferSubData(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glCopyTexSubImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8);
		static void glDeleteQueries(jint arg0, java::nio::IntBuffer arg1);
		static void glDeleteQueries(jint arg0, JIntArray arg1, jint arg2);
		static void glDeleteSamplers(jint arg0, java::nio::IntBuffer arg1);
		static void glDeleteSamplers(jint arg0, JIntArray arg1, jint arg2);
		static void glDeleteSync(jlong arg0);
		static void glDeleteTransformFeedbacks(jint arg0, java::nio::IntBuffer arg1);
		static void glDeleteTransformFeedbacks(jint arg0, JIntArray arg1, jint arg2);
		static void glDeleteVertexArrays(jint arg0, java::nio::IntBuffer arg1);
		static void glDeleteVertexArrays(jint arg0, JIntArray arg1, jint arg2);
		static void glDrawArraysInstanced(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glDrawBuffers(jint arg0, java::nio::IntBuffer arg1);
		static void glDrawBuffers(jint arg0, JIntArray arg1, jint arg2);
		static void glDrawElementsInstanced(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glDrawElementsInstanced(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3, jint arg4);
		static void glDrawRangeElements(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		static void glDrawRangeElements(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, java::nio::Buffer arg5);
		static void glEndQuery(jint arg0);
		static void glEndTransformFeedback();
		static jlong glFenceSync(jint arg0, jint arg1);
		static void glFlushMappedBufferRange(jint arg0, jint arg1, jint arg2);
		static void glFramebufferTextureLayer(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glGenQueries(jint arg0, java::nio::IntBuffer arg1);
		static void glGenQueries(jint arg0, JIntArray arg1, jint arg2);
		static void glGenSamplers(jint arg0, java::nio::IntBuffer arg1);
		static void glGenSamplers(jint arg0, JIntArray arg1, jint arg2);
		static void glGenTransformFeedbacks(jint arg0, java::nio::IntBuffer arg1);
		static void glGenTransformFeedbacks(jint arg0, JIntArray arg1, jint arg2);
		static void glGenVertexArrays(jint arg0, java::nio::IntBuffer arg1);
		static void glGenVertexArrays(jint arg0, JIntArray arg1, jint arg2);
		static JString glGetActiveUniformBlockName(jint arg0, jint arg1);
		static void glGetActiveUniformBlockName(jint arg0, jint arg1, java::nio::Buffer arg2, java::nio::Buffer arg3);
		static void glGetActiveUniformBlockName(jint arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4, JByteArray arg5, jint arg6);
		static void glGetActiveUniformBlockiv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3);
		static void glGetActiveUniformBlockiv(jint arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4);
		static void glGetActiveUniformsiv(jint arg0, jint arg1, java::nio::IntBuffer arg2, jint arg3, java::nio::IntBuffer arg4);
		static void glGetActiveUniformsiv(jint arg0, jint arg1, JIntArray arg2, jint arg3, jint arg4, JIntArray arg5, jint arg6);
		static void glGetBufferParameteri64v(jint arg0, jint arg1, java::nio::LongBuffer arg2);
		static void glGetBufferParameteri64v(jint arg0, jint arg1, JLongArray arg2, jint arg3);
		static java::nio::Buffer glGetBufferPointerv(jint arg0, jint arg1);
		static jint glGetFragDataLocation(jint arg0, JString arg1);
		static void glGetInteger64i_v(jint arg0, jint arg1, java::nio::LongBuffer arg2);
		static void glGetInteger64i_v(jint arg0, jint arg1, JLongArray arg2, jint arg3);
		static void glGetInteger64v(jint arg0, java::nio::LongBuffer arg1);
		static void glGetInteger64v(jint arg0, JLongArray arg1, jint arg2);
		static void glGetIntegeri_v(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetIntegeri_v(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glGetInternalformativ(jint arg0, jint arg1, jint arg2, jint arg3, java::nio::IntBuffer arg4);
		static void glGetInternalformativ(jint arg0, jint arg1, jint arg2, jint arg3, JIntArray arg4, jint arg5);
		static void glGetProgramBinary(jint arg0, jint arg1, java::nio::IntBuffer arg2, java::nio::IntBuffer arg3, java::nio::Buffer arg4);
		static void glGetProgramBinary(jint arg0, jint arg1, JIntArray arg2, jint arg3, JIntArray arg4, jint arg5, java::nio::Buffer arg6);
		static void glGetQueryObjectuiv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetQueryObjectuiv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glGetQueryiv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetQueryiv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glGetSamplerParameterfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2);
		static void glGetSamplerParameterfv(jint arg0, jint arg1, JFloatArray arg2, jint arg3);
		static void glGetSamplerParameteriv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetSamplerParameteriv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static JString glGetStringi(jint arg0, jint arg1);
		static void glGetSynciv(jlong arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3, java::nio::IntBuffer arg4);
		static void glGetSynciv(jlong arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4, JIntArray arg5, jint arg6);
		static JString glGetTransformFeedbackVarying(jint arg0, jint arg1, java::nio::IntBuffer arg2, java::nio::IntBuffer arg3);
		static JString glGetTransformFeedbackVarying(jint arg0, jint arg1, JIntArray arg2, jint arg3, JIntArray arg4, jint arg5);
		static void glGetTransformFeedbackVarying(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3, java::nio::IntBuffer arg4, java::nio::IntBuffer arg5, jbyte arg6);
		static void glGetTransformFeedbackVarying(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3, java::nio::IntBuffer arg4, java::nio::IntBuffer arg5, java::nio::ByteBuffer arg6);
		static void glGetTransformFeedbackVarying(jint arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4, JIntArray arg5, jint arg6, JIntArray arg7, jint arg8, JByteArray arg9, jint arg10);
		static jint glGetUniformBlockIndex(jint arg0, JString arg1);
		static void glGetUniformIndices(jint arg0, JArray arg1, java::nio::IntBuffer arg2);
		static void glGetUniformIndices(jint arg0, JArray arg1, JIntArray arg2, jint arg3);
		static void glGetUniformuiv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetUniformuiv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glGetVertexAttribIiv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetVertexAttribIiv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glGetVertexAttribIuiv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetVertexAttribIuiv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glInvalidateFramebuffer(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glInvalidateFramebuffer(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glInvalidateSubFramebuffer(jint arg0, jint arg1, java::nio::IntBuffer arg2, jint arg3, jint arg4, jint arg5, jint arg6);
		static void glInvalidateSubFramebuffer(jint arg0, jint arg1, JIntArray arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7);
		static jboolean glIsQuery(jint arg0);
		static jboolean glIsSampler(jint arg0);
		static jboolean glIsSync(jlong arg0);
		static jboolean glIsTransformFeedback(jint arg0);
		static jboolean glIsVertexArray(jint arg0);
		static java::nio::Buffer glMapBufferRange(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glPauseTransformFeedback();
		static void glProgramBinary(jint arg0, jint arg1, java::nio::Buffer arg2, jint arg3);
		static void glProgramParameteri(jint arg0, jint arg1, jint arg2);
		static void glReadBuffer(jint arg0);
		static void glReadPixels(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6);
		static void glRenderbufferStorageMultisample(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glResumeTransformFeedback();
		static void glSamplerParameterf(jint arg0, jint arg1, jfloat arg2);
		static void glSamplerParameterfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2);
		static void glSamplerParameterfv(jint arg0, jint arg1, JFloatArray arg2, jint arg3);
		static void glSamplerParameteri(jint arg0, jint arg1, jint arg2);
		static void glSamplerParameteriv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glSamplerParameteriv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glTexImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9);
		static void glTexImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, java::nio::Buffer arg9);
		static void glTexStorage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glTexStorage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		static void glTexSubImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10);
		static void glTexSubImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, java::nio::Buffer arg10);
		static void glTransformFeedbackVaryings(jint arg0, JArray arg1, jint arg2);
		static void glUniform1ui(jint arg0, jint arg1);
		static void glUniform1uiv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glUniform1uiv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glUniform2ui(jint arg0, jint arg1, jint arg2);
		static void glUniform2uiv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glUniform2uiv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glUniform3ui(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glUniform3uiv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glUniform3uiv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glUniform4ui(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glUniform4uiv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glUniform4uiv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glUniformBlockBinding(jint arg0, jint arg1, jint arg2);
		static void glUniformMatrix2x3fv(jint arg0, jint arg1, jboolean arg2, java::nio::FloatBuffer arg3);
		static void glUniformMatrix2x3fv(jint arg0, jint arg1, jboolean arg2, JFloatArray arg3, jint arg4);
		static void glUniformMatrix2x4fv(jint arg0, jint arg1, jboolean arg2, java::nio::FloatBuffer arg3);
		static void glUniformMatrix2x4fv(jint arg0, jint arg1, jboolean arg2, JFloatArray arg3, jint arg4);
		static void glUniformMatrix3x2fv(jint arg0, jint arg1, jboolean arg2, java::nio::FloatBuffer arg3);
		static void glUniformMatrix3x2fv(jint arg0, jint arg1, jboolean arg2, JFloatArray arg3, jint arg4);
		static void glUniformMatrix3x4fv(jint arg0, jint arg1, jboolean arg2, java::nio::FloatBuffer arg3);
		static void glUniformMatrix3x4fv(jint arg0, jint arg1, jboolean arg2, JFloatArray arg3, jint arg4);
		static void glUniformMatrix4x2fv(jint arg0, jint arg1, jboolean arg2, java::nio::FloatBuffer arg3);
		static void glUniformMatrix4x2fv(jint arg0, jint arg1, jboolean arg2, JFloatArray arg3, jint arg4);
		static void glUniformMatrix4x3fv(jint arg0, jint arg1, jboolean arg2, java::nio::FloatBuffer arg3);
		static void glUniformMatrix4x3fv(jint arg0, jint arg1, jboolean arg2, JFloatArray arg3, jint arg4);
		static jboolean glUnmapBuffer(jint arg0);
		static void glVertexAttribDivisor(jint arg0, jint arg1);
		static void glVertexAttribI4i(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glVertexAttribI4iv(jint arg0, java::nio::IntBuffer arg1);
		static void glVertexAttribI4iv(jint arg0, JIntArray arg1, jint arg2);
		static void glVertexAttribI4ui(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glVertexAttribI4uiv(jint arg0, java::nio::IntBuffer arg1);
		static void glVertexAttribI4uiv(jint arg0, JIntArray arg1, jint arg2);
		static void glVertexAttribIPointer(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glVertexAttribIPointer(jint arg0, jint arg1, jint arg2, jint arg3, java::nio::Buffer arg4);
		static void glWaitSync(jlong arg0, jint arg1, jlong arg2);
	};
} // namespace android::opengl

