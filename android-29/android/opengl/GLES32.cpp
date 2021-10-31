#include "../../java/nio/Buffer.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "../../java/nio/FloatBuffer.hpp"
#include "../../java/nio/IntBuffer.hpp"
#include "./GLES32.hpp"

namespace android::opengl
{
	// Fields
	jint GLES32::GL_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_BUFFER"
		);
	}
	jint GLES32::GL_CLAMP_TO_BORDER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_CLAMP_TO_BORDER"
		);
	}
	jint GLES32::GL_COLORBURN()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COLORBURN"
		);
	}
	jint GLES32::GL_COLORDODGE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COLORDODGE"
		);
	}
	jint GLES32::GL_COMPRESSED_RGBA_ASTC_10x10()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_10x10"
		);
	}
	jint GLES32::GL_COMPRESSED_RGBA_ASTC_10x5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_10x5"
		);
	}
	jint GLES32::GL_COMPRESSED_RGBA_ASTC_10x6()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_10x6"
		);
	}
	jint GLES32::GL_COMPRESSED_RGBA_ASTC_10x8()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_10x8"
		);
	}
	jint GLES32::GL_COMPRESSED_RGBA_ASTC_12x10()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_12x10"
		);
	}
	jint GLES32::GL_COMPRESSED_RGBA_ASTC_12x12()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_12x12"
		);
	}
	jint GLES32::GL_COMPRESSED_RGBA_ASTC_4x4()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_4x4"
		);
	}
	jint GLES32::GL_COMPRESSED_RGBA_ASTC_5x4()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_5x4"
		);
	}
	jint GLES32::GL_COMPRESSED_RGBA_ASTC_5x5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_5x5"
		);
	}
	jint GLES32::GL_COMPRESSED_RGBA_ASTC_6x5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_6x5"
		);
	}
	jint GLES32::GL_COMPRESSED_RGBA_ASTC_6x6()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_6x6"
		);
	}
	jint GLES32::GL_COMPRESSED_RGBA_ASTC_8x5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_8x5"
		);
	}
	jint GLES32::GL_COMPRESSED_RGBA_ASTC_8x6()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_8x6"
		);
	}
	jint GLES32::GL_COMPRESSED_RGBA_ASTC_8x8()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_8x8"
		);
	}
	jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10"
		);
	}
	jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5"
		);
	}
	jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6"
		);
	}
	jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8"
		);
	}
	jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10"
		);
	}
	jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12"
		);
	}
	jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4"
		);
	}
	jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4"
		);
	}
	jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5"
		);
	}
	jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5"
		);
	}
	jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6"
		);
	}
	jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5"
		);
	}
	jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6"
		);
	}
	jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8"
		);
	}
	jint GLES32::GL_CONTEXT_FLAGS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_CONTEXT_FLAGS"
		);
	}
	jint GLES32::GL_CONTEXT_FLAG_DEBUG_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_CONTEXT_FLAG_DEBUG_BIT"
		);
	}
	jint GLES32::GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT"
		);
	}
	jint GLES32::GL_CONTEXT_LOST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_CONTEXT_LOST"
		);
	}
	jint GLES32::GL_DARKEN()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DARKEN"
		);
	}
	jint GLES32::GL_DEBUG_CALLBACK_FUNCTION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_CALLBACK_FUNCTION"
		);
	}
	jint GLES32::GL_DEBUG_CALLBACK_USER_PARAM()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_CALLBACK_USER_PARAM"
		);
	}
	jint GLES32::GL_DEBUG_GROUP_STACK_DEPTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_GROUP_STACK_DEPTH"
		);
	}
	jint GLES32::GL_DEBUG_LOGGED_MESSAGES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_LOGGED_MESSAGES"
		);
	}
	jint GLES32::GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH"
		);
	}
	jint GLES32::GL_DEBUG_OUTPUT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_OUTPUT"
		);
	}
	jint GLES32::GL_DEBUG_OUTPUT_SYNCHRONOUS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_OUTPUT_SYNCHRONOUS"
		);
	}
	jint GLES32::GL_DEBUG_SEVERITY_HIGH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_SEVERITY_HIGH"
		);
	}
	jint GLES32::GL_DEBUG_SEVERITY_LOW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_SEVERITY_LOW"
		);
	}
	jint GLES32::GL_DEBUG_SEVERITY_MEDIUM()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_SEVERITY_MEDIUM"
		);
	}
	jint GLES32::GL_DEBUG_SEVERITY_NOTIFICATION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_SEVERITY_NOTIFICATION"
		);
	}
	jint GLES32::GL_DEBUG_SOURCE_API()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_SOURCE_API"
		);
	}
	jint GLES32::GL_DEBUG_SOURCE_APPLICATION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_SOURCE_APPLICATION"
		);
	}
	jint GLES32::GL_DEBUG_SOURCE_OTHER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_SOURCE_OTHER"
		);
	}
	jint GLES32::GL_DEBUG_SOURCE_SHADER_COMPILER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_SOURCE_SHADER_COMPILER"
		);
	}
	jint GLES32::GL_DEBUG_SOURCE_THIRD_PARTY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_SOURCE_THIRD_PARTY"
		);
	}
	jint GLES32::GL_DEBUG_SOURCE_WINDOW_SYSTEM()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_SOURCE_WINDOW_SYSTEM"
		);
	}
	jint GLES32::GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR"
		);
	}
	jint GLES32::GL_DEBUG_TYPE_ERROR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_TYPE_ERROR"
		);
	}
	jint GLES32::GL_DEBUG_TYPE_MARKER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_TYPE_MARKER"
		);
	}
	jint GLES32::GL_DEBUG_TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_TYPE_OTHER"
		);
	}
	jint GLES32::GL_DEBUG_TYPE_PERFORMANCE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_TYPE_PERFORMANCE"
		);
	}
	jint GLES32::GL_DEBUG_TYPE_POP_GROUP()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_TYPE_POP_GROUP"
		);
	}
	jint GLES32::GL_DEBUG_TYPE_PORTABILITY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_TYPE_PORTABILITY"
		);
	}
	jint GLES32::GL_DEBUG_TYPE_PUSH_GROUP()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_TYPE_PUSH_GROUP"
		);
	}
	jint GLES32::GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR"
		);
	}
	jint GLES32::GL_DIFFERENCE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DIFFERENCE"
		);
	}
	jint GLES32::GL_EXCLUSION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_EXCLUSION"
		);
	}
	jint GLES32::GL_FIRST_VERTEX_CONVENTION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_FIRST_VERTEX_CONVENTION"
		);
	}
	jint GLES32::GL_FRACTIONAL_EVEN()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_FRACTIONAL_EVEN"
		);
	}
	jint GLES32::GL_FRACTIONAL_ODD()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_FRACTIONAL_ODD"
		);
	}
	jint GLES32::GL_FRAGMENT_INTERPOLATION_OFFSET_BITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_FRAGMENT_INTERPOLATION_OFFSET_BITS"
		);
	}
	jint GLES32::GL_FRAMEBUFFER_ATTACHMENT_LAYERED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_FRAMEBUFFER_ATTACHMENT_LAYERED"
		);
	}
	jint GLES32::GL_FRAMEBUFFER_DEFAULT_LAYERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_FRAMEBUFFER_DEFAULT_LAYERS"
		);
	}
	jint GLES32::GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS"
		);
	}
	jint GLES32::GL_GEOMETRY_INPUT_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_GEOMETRY_INPUT_TYPE"
		);
	}
	jint GLES32::GL_GEOMETRY_OUTPUT_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_GEOMETRY_OUTPUT_TYPE"
		);
	}
	jint GLES32::GL_GEOMETRY_SHADER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_GEOMETRY_SHADER"
		);
	}
	jint GLES32::GL_GEOMETRY_SHADER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_GEOMETRY_SHADER_BIT"
		);
	}
	jint GLES32::GL_GEOMETRY_SHADER_INVOCATIONS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_GEOMETRY_SHADER_INVOCATIONS"
		);
	}
	jint GLES32::GL_GEOMETRY_VERTICES_OUT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_GEOMETRY_VERTICES_OUT"
		);
	}
	jint GLES32::GL_GUILTY_CONTEXT_RESET()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_GUILTY_CONTEXT_RESET"
		);
	}
	jint GLES32::GL_HARDLIGHT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_HARDLIGHT"
		);
	}
	jint GLES32::GL_HSL_COLOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_HSL_COLOR"
		);
	}
	jint GLES32::GL_HSL_HUE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_HSL_HUE"
		);
	}
	jint GLES32::GL_HSL_LUMINOSITY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_HSL_LUMINOSITY"
		);
	}
	jint GLES32::GL_HSL_SATURATION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_HSL_SATURATION"
		);
	}
	jint GLES32::GL_IMAGE_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_IMAGE_BUFFER"
		);
	}
	jint GLES32::GL_IMAGE_CUBE_MAP_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_IMAGE_CUBE_MAP_ARRAY"
		);
	}
	jint GLES32::GL_INNOCENT_CONTEXT_RESET()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_INNOCENT_CONTEXT_RESET"
		);
	}
	jint GLES32::GL_INT_IMAGE_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_INT_IMAGE_BUFFER"
		);
	}
	jint GLES32::GL_INT_IMAGE_CUBE_MAP_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_INT_IMAGE_CUBE_MAP_ARRAY"
		);
	}
	jint GLES32::GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY"
		);
	}
	jint GLES32::GL_INT_SAMPLER_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_INT_SAMPLER_BUFFER"
		);
	}
	jint GLES32::GL_INT_SAMPLER_CUBE_MAP_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_INT_SAMPLER_CUBE_MAP_ARRAY"
		);
	}
	jint GLES32::GL_ISOLINES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_ISOLINES"
		);
	}
	jint GLES32::GL_IS_PER_PATCH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_IS_PER_PATCH"
		);
	}
	jint GLES32::GL_LAST_VERTEX_CONVENTION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_LAST_VERTEX_CONVENTION"
		);
	}
	jint GLES32::GL_LAYER_PROVOKING_VERTEX()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_LAYER_PROVOKING_VERTEX"
		);
	}
	jint GLES32::GL_LIGHTEN()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_LIGHTEN"
		);
	}
	jint GLES32::GL_LINES_ADJACENCY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_LINES_ADJACENCY"
		);
	}
	jint GLES32::GL_LINE_STRIP_ADJACENCY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_LINE_STRIP_ADJACENCY"
		);
	}
	jint GLES32::GL_LOSE_CONTEXT_ON_RESET()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_LOSE_CONTEXT_ON_RESET"
		);
	}
	jint GLES32::GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS"
		);
	}
	jint GLES32::GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS"
		);
	}
	jint GLES32::GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS"
		);
	}
	jint GLES32::GL_MAX_DEBUG_GROUP_STACK_DEPTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_DEBUG_GROUP_STACK_DEPTH"
		);
	}
	jint GLES32::GL_MAX_DEBUG_LOGGED_MESSAGES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_DEBUG_LOGGED_MESSAGES"
		);
	}
	jint GLES32::GL_MAX_DEBUG_MESSAGE_LENGTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_DEBUG_MESSAGE_LENGTH"
		);
	}
	jint GLES32::GL_MAX_FRAGMENT_INTERPOLATION_OFFSET()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_FRAGMENT_INTERPOLATION_OFFSET"
		);
	}
	jint GLES32::GL_MAX_FRAMEBUFFER_LAYERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_FRAMEBUFFER_LAYERS"
		);
	}
	jint GLES32::GL_MAX_GEOMETRY_ATOMIC_COUNTERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_GEOMETRY_ATOMIC_COUNTERS"
		);
	}
	jint GLES32::GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS"
		);
	}
	jint GLES32::GL_MAX_GEOMETRY_IMAGE_UNIFORMS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_GEOMETRY_IMAGE_UNIFORMS"
		);
	}
	jint GLES32::GL_MAX_GEOMETRY_INPUT_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_GEOMETRY_INPUT_COMPONENTS"
		);
	}
	jint GLES32::GL_MAX_GEOMETRY_OUTPUT_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_GEOMETRY_OUTPUT_COMPONENTS"
		);
	}
	jint GLES32::GL_MAX_GEOMETRY_OUTPUT_VERTICES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_GEOMETRY_OUTPUT_VERTICES"
		);
	}
	jint GLES32::GL_MAX_GEOMETRY_SHADER_INVOCATIONS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_GEOMETRY_SHADER_INVOCATIONS"
		);
	}
	jint GLES32::GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS"
		);
	}
	jint GLES32::GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS"
		);
	}
	jint GLES32::GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS"
		);
	}
	jint GLES32::GL_MAX_GEOMETRY_UNIFORM_BLOCKS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_GEOMETRY_UNIFORM_BLOCKS"
		);
	}
	jint GLES32::GL_MAX_GEOMETRY_UNIFORM_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_GEOMETRY_UNIFORM_COMPONENTS"
		);
	}
	jint GLES32::GL_MAX_LABEL_LENGTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_LABEL_LENGTH"
		);
	}
	jint GLES32::GL_MAX_PATCH_VERTICES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_PATCH_VERTICES"
		);
	}
	jint GLES32::GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS"
		);
	}
	jint GLES32::GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS"
		);
	}
	jint GLES32::GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS"
		);
	}
	jint GLES32::GL_MAX_TESS_CONTROL_INPUT_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_CONTROL_INPUT_COMPONENTS"
		);
	}
	jint GLES32::GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS"
		);
	}
	jint GLES32::GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS"
		);
	}
	jint GLES32::GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS"
		);
	}
	jint GLES32::GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS"
		);
	}
	jint GLES32::GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS"
		);
	}
	jint GLES32::GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS"
		);
	}
	jint GLES32::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS"
		);
	}
	jint GLES32::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS"
		);
	}
	jint GLES32::GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS"
		);
	}
	jint GLES32::GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS"
		);
	}
	jint GLES32::GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS"
		);
	}
	jint GLES32::GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS"
		);
	}
	jint GLES32::GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS"
		);
	}
	jint GLES32::GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS"
		);
	}
	jint GLES32::GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS"
		);
	}
	jint GLES32::GL_MAX_TESS_GEN_LEVEL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_GEN_LEVEL"
		);
	}
	jint GLES32::GL_MAX_TESS_PATCH_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_PATCH_COMPONENTS"
		);
	}
	jint GLES32::GL_MAX_TEXTURE_BUFFER_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TEXTURE_BUFFER_SIZE"
		);
	}
	jint GLES32::GL_MIN_FRAGMENT_INTERPOLATION_OFFSET()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MIN_FRAGMENT_INTERPOLATION_OFFSET"
		);
	}
	jint GLES32::GL_MIN_SAMPLE_SHADING_VALUE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MIN_SAMPLE_SHADING_VALUE"
		);
	}
	jint GLES32::GL_MULTIPLY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MULTIPLY"
		);
	}
	jint GLES32::GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY"
		);
	}
	jint GLES32::GL_MULTISAMPLE_LINE_WIDTH_RANGE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MULTISAMPLE_LINE_WIDTH_RANGE"
		);
	}
	jint GLES32::GL_NO_RESET_NOTIFICATION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_NO_RESET_NOTIFICATION"
		);
	}
	jint GLES32::GL_OVERLAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_OVERLAY"
		);
	}
	jint GLES32::GL_PATCHES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_PATCHES"
		);
	}
	jint GLES32::GL_PATCH_VERTICES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_PATCH_VERTICES"
		);
	}
	jint GLES32::GL_PRIMITIVES_GENERATED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_PRIMITIVES_GENERATED"
		);
	}
	jint GLES32::GL_PRIMITIVE_BOUNDING_BOX()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_PRIMITIVE_BOUNDING_BOX"
		);
	}
	jint GLES32::GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED"
		);
	}
	jint GLES32::GL_PROGRAM()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_PROGRAM"
		);
	}
	jint GLES32::GL_PROGRAM_PIPELINE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_PROGRAM_PIPELINE"
		);
	}
	jint GLES32::GL_QUADS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_QUADS"
		);
	}
	jint GLES32::GL_QUERY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_QUERY"
		);
	}
	jint GLES32::GL_REFERENCED_BY_GEOMETRY_SHADER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_REFERENCED_BY_GEOMETRY_SHADER"
		);
	}
	jint GLES32::GL_REFERENCED_BY_TESS_CONTROL_SHADER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_REFERENCED_BY_TESS_CONTROL_SHADER"
		);
	}
	jint GLES32::GL_REFERENCED_BY_TESS_EVALUATION_SHADER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_REFERENCED_BY_TESS_EVALUATION_SHADER"
		);
	}
	jint GLES32::GL_RESET_NOTIFICATION_STRATEGY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_RESET_NOTIFICATION_STRATEGY"
		);
	}
	jint GLES32::GL_SAMPLER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_SAMPLER"
		);
	}
	jint GLES32::GL_SAMPLER_2D_MULTISAMPLE_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_SAMPLER_2D_MULTISAMPLE_ARRAY"
		);
	}
	jint GLES32::GL_SAMPLER_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_SAMPLER_BUFFER"
		);
	}
	jint GLES32::GL_SAMPLER_CUBE_MAP_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_SAMPLER_CUBE_MAP_ARRAY"
		);
	}
	jint GLES32::GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW"
		);
	}
	jint GLES32::GL_SAMPLE_SHADING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_SAMPLE_SHADING"
		);
	}
	jint GLES32::GL_SCREEN()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_SCREEN"
		);
	}
	jint GLES32::GL_SHADER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_SHADER"
		);
	}
	jint GLES32::GL_SOFTLIGHT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_SOFTLIGHT"
		);
	}
	jint GLES32::GL_STACK_OVERFLOW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_STACK_OVERFLOW"
		);
	}
	jint GLES32::GL_STACK_UNDERFLOW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_STACK_UNDERFLOW"
		);
	}
	jint GLES32::GL_TESS_CONTROL_OUTPUT_VERTICES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TESS_CONTROL_OUTPUT_VERTICES"
		);
	}
	jint GLES32::GL_TESS_CONTROL_SHADER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TESS_CONTROL_SHADER"
		);
	}
	jint GLES32::GL_TESS_CONTROL_SHADER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TESS_CONTROL_SHADER_BIT"
		);
	}
	jint GLES32::GL_TESS_EVALUATION_SHADER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TESS_EVALUATION_SHADER"
		);
	}
	jint GLES32::GL_TESS_EVALUATION_SHADER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TESS_EVALUATION_SHADER_BIT"
		);
	}
	jint GLES32::GL_TESS_GEN_MODE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TESS_GEN_MODE"
		);
	}
	jint GLES32::GL_TESS_GEN_POINT_MODE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TESS_GEN_POINT_MODE"
		);
	}
	jint GLES32::GL_TESS_GEN_SPACING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TESS_GEN_SPACING"
		);
	}
	jint GLES32::GL_TESS_GEN_VERTEX_ORDER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TESS_GEN_VERTEX_ORDER"
		);
	}
	jint GLES32::GL_TEXTURE_2D_MULTISAMPLE_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TEXTURE_2D_MULTISAMPLE_ARRAY"
		);
	}
	jint GLES32::GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY"
		);
	}
	jint GLES32::GL_TEXTURE_BINDING_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TEXTURE_BINDING_BUFFER"
		);
	}
	jint GLES32::GL_TEXTURE_BINDING_CUBE_MAP_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TEXTURE_BINDING_CUBE_MAP_ARRAY"
		);
	}
	jint GLES32::GL_TEXTURE_BORDER_COLOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TEXTURE_BORDER_COLOR"
		);
	}
	jint GLES32::GL_TEXTURE_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TEXTURE_BUFFER"
		);
	}
	jint GLES32::GL_TEXTURE_BUFFER_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TEXTURE_BUFFER_BINDING"
		);
	}
	jint GLES32::GL_TEXTURE_BUFFER_DATA_STORE_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TEXTURE_BUFFER_DATA_STORE_BINDING"
		);
	}
	jint GLES32::GL_TEXTURE_BUFFER_OFFSET()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TEXTURE_BUFFER_OFFSET"
		);
	}
	jint GLES32::GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT"
		);
	}
	jint GLES32::GL_TEXTURE_BUFFER_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TEXTURE_BUFFER_SIZE"
		);
	}
	jint GLES32::GL_TEXTURE_CUBE_MAP_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TEXTURE_CUBE_MAP_ARRAY"
		);
	}
	jint GLES32::GL_TRIANGLES_ADJACENCY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TRIANGLES_ADJACENCY"
		);
	}
	jint GLES32::GL_TRIANGLE_STRIP_ADJACENCY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TRIANGLE_STRIP_ADJACENCY"
		);
	}
	jint GLES32::GL_UNDEFINED_VERTEX()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_UNDEFINED_VERTEX"
		);
	}
	jint GLES32::GL_UNKNOWN_CONTEXT_RESET()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_UNKNOWN_CONTEXT_RESET"
		);
	}
	jint GLES32::GL_UNSIGNED_INT_IMAGE_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_UNSIGNED_INT_IMAGE_BUFFER"
		);
	}
	jint GLES32::GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY"
		);
	}
	jint GLES32::GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY"
		);
	}
	jint GLES32::GL_UNSIGNED_INT_SAMPLER_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_UNSIGNED_INT_SAMPLER_BUFFER"
		);
	}
	jint GLES32::GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY"
		);
	}
	jint GLES32::GL_VERTEX_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_VERTEX_ARRAY"
		);
	}
	
	// QJniObject forward
	GLES32::GLES32(QJniObject obj) : android::opengl::GLES31(obj) {}
	
	// Constructors
	
	// Methods
	void GLES32::glBlendBarrier()
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glBlendBarrier",
			"()V"
		);
	}
	void GLES32::glBlendEquationSeparatei(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glBlendEquationSeparatei",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES32::glBlendEquationi(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glBlendEquationi",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES32::glBlendFuncSeparatei(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glBlendFuncSeparatei",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES32::glBlendFunci(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glBlendFunci",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES32::glColorMaski(jint arg0, jboolean arg1, jboolean arg2, jboolean arg3, jboolean arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glColorMaski",
			"(IZZZZ)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES32::glCopyImageSubData(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10, jint arg11, jint arg12, jint arg13, jint arg14)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glCopyImageSubData",
			"(IIIIIIIIIIIIIII)V",
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
			arg10,
			arg11,
			arg12,
			arg13,
			arg14
		);
	}
	void GLES32::glDebugMessageCallback(__JniBaseClass arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glDebugMessageCallback",
			"(Landroid/opengl/GLES32$DebugProc;)V",
			arg0.object()
		);
	}
	void GLES32::glDebugMessageControl(jint arg0, jint arg1, jint arg2, jint arg3, java::nio::IntBuffer arg4, jboolean arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glDebugMessageControl",
			"(IIIILjava/nio/IntBuffer;Z)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object(),
			arg5
		);
	}
	void GLES32::glDebugMessageControl(jint arg0, jint arg1, jint arg2, jint arg3, jintArray arg4, jint arg5, jboolean arg6)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glDebugMessageControl",
			"(IIII[IIZ)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	void GLES32::glDebugMessageInsert(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jstring arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glDebugMessageInsert",
			"(IIIIILjava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void GLES32::glDisablei(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glDisablei",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES32::glDrawElementsBaseVertex(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glDrawElementsBaseVertex",
			"(IIILjava/nio/Buffer;I)V",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4
		);
	}
	void GLES32::glDrawElementsInstancedBaseVertex(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glDrawElementsInstancedBaseVertex",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void GLES32::glDrawElementsInstancedBaseVertex(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3, jint arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glDrawElementsInstancedBaseVertex",
			"(IIILjava/nio/Buffer;II)V",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4,
			arg5
		);
	}
	void GLES32::glDrawRangeElementsBaseVertex(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, java::nio::Buffer arg5, jint arg6)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glDrawRangeElementsBaseVertex",
			"(IIIIILjava/nio/Buffer;I)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object(),
			arg6
		);
	}
	void GLES32::glEnablei(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glEnablei",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES32::glFramebufferTexture(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glFramebufferTexture",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jarray GLES32::glGetDebugMessageLog(jint arg0, java::nio::IntBuffer arg1, java::nio::IntBuffer arg2, java::nio::IntBuffer arg3, java::nio::IntBuffer arg4)
	{
		return callStaticObjectMethod(
			"android.opengl.GLES32",
			"glGetDebugMessageLog",
			"(ILjava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;)[Ljava/lang/String;",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		).object<jarray>();
	}
	jarray GLES32::glGetDebugMessageLog(jint arg0, jintArray arg1, jint arg2, jintArray arg3, jint arg4, jintArray arg5, jint arg6, jintArray arg7, jint arg8)
	{
		return callStaticObjectMethod(
			"android.opengl.GLES32",
			"glGetDebugMessageLog",
			"(I[II[II[II[II)[Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8
		).object<jarray>();
	}
	jint GLES32::glGetDebugMessageLog(jint arg0, java::nio::IntBuffer arg1, java::nio::IntBuffer arg2, java::nio::IntBuffer arg3, java::nio::IntBuffer arg4, java::nio::IntBuffer arg5, java::nio::ByteBuffer arg6)
	{
		return callStaticMethod<jint>(
			"android.opengl.GLES32",
			"glGetDebugMessageLog",
			"(ILjava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/ByteBuffer;)I",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5.object(),
			arg6.object()
		);
	}
	jint GLES32::glGetDebugMessageLog(jint arg0, jint arg1, jintArray arg2, jint arg3, jintArray arg4, jint arg5, jintArray arg6, jint arg7, jintArray arg8, jint arg9, jintArray arg10, jint arg11, jbyteArray arg12, jint arg13)
	{
		return callStaticMethod<jint>(
			"android.opengl.GLES32",
			"glGetDebugMessageLog",
			"(II[II[II[II[II[II[BI)I",
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
			arg10,
			arg11,
			arg12,
			arg13
		);
	}
	jint GLES32::glGetGraphicsResetStatus()
	{
		return callStaticMethod<jint>(
			"android.opengl.GLES32",
			"glGetGraphicsResetStatus",
			"()I"
		);
	}
	jstring GLES32::glGetObjectLabel(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.opengl.GLES32",
			"glGetObjectLabel",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring GLES32::glGetObjectPtrLabel(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.opengl.GLES32",
			"glGetObjectPtrLabel",
			"(J)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jlong GLES32::glGetPointerv(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.opengl.GLES32",
			"glGetPointerv",
			"(I)J",
			arg0
		);
	}
	void GLES32::glGetSamplerParameterIiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glGetSamplerParameterIiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES32::glGetSamplerParameterIiv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glGetSamplerParameterIiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES32::glGetSamplerParameterIuiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glGetSamplerParameterIuiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES32::glGetSamplerParameterIuiv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glGetSamplerParameterIuiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES32::glGetTexParameterIiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glGetTexParameterIiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES32::glGetTexParameterIiv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glGetTexParameterIiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES32::glGetTexParameterIuiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glGetTexParameterIuiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES32::glGetTexParameterIuiv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glGetTexParameterIuiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES32::glGetnUniformfv(jint arg0, jint arg1, jint arg2, java::nio::FloatBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glGetnUniformfv",
			"(IIILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void GLES32::glGetnUniformfv(jint arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glGetnUniformfv",
			"(III[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES32::glGetnUniformiv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glGetnUniformiv",
			"(IIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void GLES32::glGetnUniformiv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glGetnUniformiv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES32::glGetnUniformuiv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glGetnUniformuiv",
			"(IIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void GLES32::glGetnUniformuiv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glGetnUniformuiv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jboolean GLES32::glIsEnabledi(jint arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.GLES32",
			"glIsEnabledi",
			"(II)Z",
			arg0,
			arg1
		);
	}
	void GLES32::glMinSampleShading(jfloat arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glMinSampleShading",
			"(F)V",
			arg0
		);
	}
	void GLES32::glObjectLabel(jint arg0, jint arg1, jint arg2, jstring arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glObjectLabel",
			"(IIILjava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES32::glObjectPtrLabel(jlong arg0, jstring arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glObjectPtrLabel",
			"(JLjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void GLES32::glPatchParameteri(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glPatchParameteri",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES32::glPopDebugGroup()
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glPopDebugGroup",
			"()V"
		);
	}
	void GLES32::glPrimitiveBoundingBox(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glPrimitiveBoundingBox",
			"(FFFFFFFF)V",
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
	void GLES32::glPushDebugGroup(jint arg0, jint arg1, jint arg2, jstring arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glPushDebugGroup",
			"(IIILjava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES32::glReadnPixels(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, java::nio::Buffer arg7)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glReadnPixels",
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
	void GLES32::glSamplerParameterIiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glSamplerParameterIiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES32::glSamplerParameterIiv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glSamplerParameterIiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES32::glSamplerParameterIuiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glSamplerParameterIuiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES32::glSamplerParameterIuiv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glSamplerParameterIuiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES32::glTexBuffer(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glTexBuffer",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES32::glTexBufferRange(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glTexBufferRange",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES32::glTexParameterIiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glTexParameterIiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES32::glTexParameterIiv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glTexParameterIiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES32::glTexParameterIuiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glTexParameterIuiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES32::glTexParameterIuiv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glTexParameterIuiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES32::glTexStorage3DMultisample(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jboolean arg6)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glTexStorage3DMultisample",
			"(IIIIIIZ)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
} // namespace android::opengl

