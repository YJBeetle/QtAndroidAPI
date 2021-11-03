#pragma once

#include "./GLES31.hpp"

class JByteArray;
class JFloatArray;
class JIntArray;
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

namespace android::opengl
{
	class GLES32 : public android::opengl::GLES31
	{
	public:
		// Fields
		static jint GL_BUFFER();
		static jint GL_CLAMP_TO_BORDER();
		static jint GL_COLORBURN();
		static jint GL_COLORDODGE();
		static jint GL_COMPRESSED_RGBA_ASTC_10x10();
		static jint GL_COMPRESSED_RGBA_ASTC_10x5();
		static jint GL_COMPRESSED_RGBA_ASTC_10x6();
		static jint GL_COMPRESSED_RGBA_ASTC_10x8();
		static jint GL_COMPRESSED_RGBA_ASTC_12x10();
		static jint GL_COMPRESSED_RGBA_ASTC_12x12();
		static jint GL_COMPRESSED_RGBA_ASTC_4x4();
		static jint GL_COMPRESSED_RGBA_ASTC_5x4();
		static jint GL_COMPRESSED_RGBA_ASTC_5x5();
		static jint GL_COMPRESSED_RGBA_ASTC_6x5();
		static jint GL_COMPRESSED_RGBA_ASTC_6x6();
		static jint GL_COMPRESSED_RGBA_ASTC_8x5();
		static jint GL_COMPRESSED_RGBA_ASTC_8x6();
		static jint GL_COMPRESSED_RGBA_ASTC_8x8();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6();
		static jint GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8();
		static jint GL_CONTEXT_FLAGS();
		static jint GL_CONTEXT_FLAG_DEBUG_BIT();
		static jint GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT();
		static jint GL_CONTEXT_LOST();
		static jint GL_DARKEN();
		static jint GL_DEBUG_CALLBACK_FUNCTION();
		static jint GL_DEBUG_CALLBACK_USER_PARAM();
		static jint GL_DEBUG_GROUP_STACK_DEPTH();
		static jint GL_DEBUG_LOGGED_MESSAGES();
		static jint GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH();
		static jint GL_DEBUG_OUTPUT();
		static jint GL_DEBUG_OUTPUT_SYNCHRONOUS();
		static jint GL_DEBUG_SEVERITY_HIGH();
		static jint GL_DEBUG_SEVERITY_LOW();
		static jint GL_DEBUG_SEVERITY_MEDIUM();
		static jint GL_DEBUG_SEVERITY_NOTIFICATION();
		static jint GL_DEBUG_SOURCE_API();
		static jint GL_DEBUG_SOURCE_APPLICATION();
		static jint GL_DEBUG_SOURCE_OTHER();
		static jint GL_DEBUG_SOURCE_SHADER_COMPILER();
		static jint GL_DEBUG_SOURCE_THIRD_PARTY();
		static jint GL_DEBUG_SOURCE_WINDOW_SYSTEM();
		static jint GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR();
		static jint GL_DEBUG_TYPE_ERROR();
		static jint GL_DEBUG_TYPE_MARKER();
		static jint GL_DEBUG_TYPE_OTHER();
		static jint GL_DEBUG_TYPE_PERFORMANCE();
		static jint GL_DEBUG_TYPE_POP_GROUP();
		static jint GL_DEBUG_TYPE_PORTABILITY();
		static jint GL_DEBUG_TYPE_PUSH_GROUP();
		static jint GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR();
		static jint GL_DIFFERENCE();
		static jint GL_EXCLUSION();
		static jint GL_FIRST_VERTEX_CONVENTION();
		static jint GL_FRACTIONAL_EVEN();
		static jint GL_FRACTIONAL_ODD();
		static jint GL_FRAGMENT_INTERPOLATION_OFFSET_BITS();
		static jint GL_FRAMEBUFFER_ATTACHMENT_LAYERED();
		static jint GL_FRAMEBUFFER_DEFAULT_LAYERS();
		static jint GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS();
		static jint GL_GEOMETRY_INPUT_TYPE();
		static jint GL_GEOMETRY_OUTPUT_TYPE();
		static jint GL_GEOMETRY_SHADER();
		static jint GL_GEOMETRY_SHADER_BIT();
		static jint GL_GEOMETRY_SHADER_INVOCATIONS();
		static jint GL_GEOMETRY_VERTICES_OUT();
		static jint GL_GUILTY_CONTEXT_RESET();
		static jint GL_HARDLIGHT();
		static jint GL_HSL_COLOR();
		static jint GL_HSL_HUE();
		static jint GL_HSL_LUMINOSITY();
		static jint GL_HSL_SATURATION();
		static jint GL_IMAGE_BUFFER();
		static jint GL_IMAGE_CUBE_MAP_ARRAY();
		static jint GL_INNOCENT_CONTEXT_RESET();
		static jint GL_INT_IMAGE_BUFFER();
		static jint GL_INT_IMAGE_CUBE_MAP_ARRAY();
		static jint GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY();
		static jint GL_INT_SAMPLER_BUFFER();
		static jint GL_INT_SAMPLER_CUBE_MAP_ARRAY();
		static jint GL_ISOLINES();
		static jint GL_IS_PER_PATCH();
		static jint GL_LAST_VERTEX_CONVENTION();
		static jint GL_LAYER_PROVOKING_VERTEX();
		static jint GL_LIGHTEN();
		static jint GL_LINES_ADJACENCY();
		static jint GL_LINE_STRIP_ADJACENCY();
		static jint GL_LOSE_CONTEXT_ON_RESET();
		static jint GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS();
		static jint GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS();
		static jint GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS();
		static jint GL_MAX_DEBUG_GROUP_STACK_DEPTH();
		static jint GL_MAX_DEBUG_LOGGED_MESSAGES();
		static jint GL_MAX_DEBUG_MESSAGE_LENGTH();
		static jint GL_MAX_FRAGMENT_INTERPOLATION_OFFSET();
		static jint GL_MAX_FRAMEBUFFER_LAYERS();
		static jint GL_MAX_GEOMETRY_ATOMIC_COUNTERS();
		static jint GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS();
		static jint GL_MAX_GEOMETRY_IMAGE_UNIFORMS();
		static jint GL_MAX_GEOMETRY_INPUT_COMPONENTS();
		static jint GL_MAX_GEOMETRY_OUTPUT_COMPONENTS();
		static jint GL_MAX_GEOMETRY_OUTPUT_VERTICES();
		static jint GL_MAX_GEOMETRY_SHADER_INVOCATIONS();
		static jint GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS();
		static jint GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS();
		static jint GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS();
		static jint GL_MAX_GEOMETRY_UNIFORM_BLOCKS();
		static jint GL_MAX_GEOMETRY_UNIFORM_COMPONENTS();
		static jint GL_MAX_LABEL_LENGTH();
		static jint GL_MAX_PATCH_VERTICES();
		static jint GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS();
		static jint GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS();
		static jint GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS();
		static jint GL_MAX_TESS_CONTROL_INPUT_COMPONENTS();
		static jint GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS();
		static jint GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS();
		static jint GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS();
		static jint GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS();
		static jint GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS();
		static jint GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS();
		static jint GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS();
		static jint GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS();
		static jint GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS();
		static jint GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS();
		static jint GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS();
		static jint GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS();
		static jint GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS();
		static jint GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS();
		static jint GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS();
		static jint GL_MAX_TESS_GEN_LEVEL();
		static jint GL_MAX_TESS_PATCH_COMPONENTS();
		static jint GL_MAX_TEXTURE_BUFFER_SIZE();
		static jint GL_MIN_FRAGMENT_INTERPOLATION_OFFSET();
		static jint GL_MIN_SAMPLE_SHADING_VALUE();
		static jint GL_MULTIPLY();
		static jint GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY();
		static jint GL_MULTISAMPLE_LINE_WIDTH_RANGE();
		static jint GL_NO_RESET_NOTIFICATION();
		static jint GL_OVERLAY();
		static jint GL_PATCHES();
		static jint GL_PATCH_VERTICES();
		static jint GL_PRIMITIVES_GENERATED();
		static jint GL_PRIMITIVE_BOUNDING_BOX();
		static jint GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED();
		static jint GL_PROGRAM();
		static jint GL_PROGRAM_PIPELINE();
		static jint GL_QUADS();
		static jint GL_QUERY();
		static jint GL_REFERENCED_BY_GEOMETRY_SHADER();
		static jint GL_REFERENCED_BY_TESS_CONTROL_SHADER();
		static jint GL_REFERENCED_BY_TESS_EVALUATION_SHADER();
		static jint GL_RESET_NOTIFICATION_STRATEGY();
		static jint GL_SAMPLER();
		static jint GL_SAMPLER_2D_MULTISAMPLE_ARRAY();
		static jint GL_SAMPLER_BUFFER();
		static jint GL_SAMPLER_CUBE_MAP_ARRAY();
		static jint GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW();
		static jint GL_SAMPLE_SHADING();
		static jint GL_SCREEN();
		static jint GL_SHADER();
		static jint GL_SOFTLIGHT();
		static jint GL_STACK_OVERFLOW();
		static jint GL_STACK_UNDERFLOW();
		static jint GL_TESS_CONTROL_OUTPUT_VERTICES();
		static jint GL_TESS_CONTROL_SHADER();
		static jint GL_TESS_CONTROL_SHADER_BIT();
		static jint GL_TESS_EVALUATION_SHADER();
		static jint GL_TESS_EVALUATION_SHADER_BIT();
		static jint GL_TESS_GEN_MODE();
		static jint GL_TESS_GEN_POINT_MODE();
		static jint GL_TESS_GEN_SPACING();
		static jint GL_TESS_GEN_VERTEX_ORDER();
		static jint GL_TEXTURE_2D_MULTISAMPLE_ARRAY();
		static jint GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY();
		static jint GL_TEXTURE_BINDING_BUFFER();
		static jint GL_TEXTURE_BINDING_CUBE_MAP_ARRAY();
		static jint GL_TEXTURE_BORDER_COLOR();
		static jint GL_TEXTURE_BUFFER();
		static jint GL_TEXTURE_BUFFER_BINDING();
		static jint GL_TEXTURE_BUFFER_DATA_STORE_BINDING();
		static jint GL_TEXTURE_BUFFER_OFFSET();
		static jint GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT();
		static jint GL_TEXTURE_BUFFER_SIZE();
		static jint GL_TEXTURE_CUBE_MAP_ARRAY();
		static jint GL_TRIANGLES_ADJACENCY();
		static jint GL_TRIANGLE_STRIP_ADJACENCY();
		static jint GL_UNDEFINED_VERTEX();
		static jint GL_UNKNOWN_CONTEXT_RESET();
		static jint GL_UNSIGNED_INT_IMAGE_BUFFER();
		static jint GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY();
		static jint GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY();
		static jint GL_UNSIGNED_INT_SAMPLER_BUFFER();
		static jint GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY();
		static jint GL_VERTEX_ARRAY();
		
		// QJniObject forward
		template<typename ...Ts> explicit GLES32(const char *className, const char *sig, Ts...agv) : android::opengl::GLES31(className, sig, std::forward<Ts>(agv)...) {}
		GLES32(QJniObject obj);
		
		// Constructors
		
		// Methods
		static void glBlendBarrier();
		static void glBlendEquationSeparatei(jint arg0, jint arg1, jint arg2);
		static void glBlendEquationi(jint arg0, jint arg1);
		static void glBlendFuncSeparatei(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glBlendFunci(jint arg0, jint arg1, jint arg2);
		static void glColorMaski(jint arg0, jboolean arg1, jboolean arg2, jboolean arg3, jboolean arg4);
		static void glCopyImageSubData(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10, jint arg11, jint arg12, jint arg13, jint arg14);
		static void glDebugMessageCallback(JObject arg0);
		static void glDebugMessageControl(jint arg0, jint arg1, jint arg2, jint arg3, java::nio::IntBuffer arg4, jboolean arg5);
		static void glDebugMessageControl(jint arg0, jint arg1, jint arg2, jint arg3, JIntArray arg4, jint arg5, jboolean arg6);
		static void glDebugMessageInsert(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, JString arg5);
		static void glDisablei(jint arg0, jint arg1);
		static void glDrawElementsBaseVertex(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3, jint arg4);
		static void glDrawElementsInstancedBaseVertex(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		static void glDrawElementsInstancedBaseVertex(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3, jint arg4, jint arg5);
		static void glDrawRangeElementsBaseVertex(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, java::nio::Buffer arg5, jint arg6);
		static void glEnablei(jint arg0, jint arg1);
		static void glFramebufferTexture(jint arg0, jint arg1, jint arg2, jint arg3);
		static JArray glGetDebugMessageLog(jint arg0, java::nio::IntBuffer arg1, java::nio::IntBuffer arg2, java::nio::IntBuffer arg3, java::nio::IntBuffer arg4);
		static JArray glGetDebugMessageLog(jint arg0, JIntArray arg1, jint arg2, JIntArray arg3, jint arg4, JIntArray arg5, jint arg6, JIntArray arg7, jint arg8);
		static jint glGetDebugMessageLog(jint arg0, java::nio::IntBuffer arg1, java::nio::IntBuffer arg2, java::nio::IntBuffer arg3, java::nio::IntBuffer arg4, java::nio::IntBuffer arg5, java::nio::ByteBuffer arg6);
		static jint glGetDebugMessageLog(jint arg0, jint arg1, JIntArray arg2, jint arg3, JIntArray arg4, jint arg5, JIntArray arg6, jint arg7, JIntArray arg8, jint arg9, JIntArray arg10, jint arg11, JByteArray arg12, jint arg13);
		static jint glGetGraphicsResetStatus();
		static JString glGetObjectLabel(jint arg0, jint arg1);
		static JString glGetObjectPtrLabel(jlong arg0);
		static jlong glGetPointerv(jint arg0);
		static void glGetSamplerParameterIiv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetSamplerParameterIiv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glGetSamplerParameterIuiv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetSamplerParameterIuiv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glGetTexParameterIiv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetTexParameterIiv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glGetTexParameterIuiv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetTexParameterIuiv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glGetnUniformfv(jint arg0, jint arg1, jint arg2, java::nio::FloatBuffer arg3);
		static void glGetnUniformfv(jint arg0, jint arg1, jint arg2, JFloatArray arg3, jint arg4);
		static void glGetnUniformiv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3);
		static void glGetnUniformiv(jint arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4);
		static void glGetnUniformuiv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3);
		static void glGetnUniformuiv(jint arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4);
		static jboolean glIsEnabledi(jint arg0, jint arg1);
		static void glMinSampleShading(jfloat arg0);
		static void glObjectLabel(jint arg0, jint arg1, jint arg2, JString arg3);
		static void glObjectPtrLabel(jlong arg0, JString arg1);
		static void glPatchParameteri(jint arg0, jint arg1);
		static void glPopDebugGroup();
		static void glPrimitiveBoundingBox(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7);
		static void glPushDebugGroup(jint arg0, jint arg1, jint arg2, JString arg3);
		static void glReadnPixels(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, java::nio::Buffer arg7);
		static void glSamplerParameterIiv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glSamplerParameterIiv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glSamplerParameterIuiv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glSamplerParameterIuiv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glTexBuffer(jint arg0, jint arg1, jint arg2);
		static void glTexBufferRange(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glTexParameterIiv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glTexParameterIiv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glTexParameterIuiv(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glTexParameterIuiv(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glTexStorage3DMultisample(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jboolean arg6);
	};
} // namespace android::opengl

