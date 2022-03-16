#pragma once

#include "../../JByteArray.hpp"
#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "../../java/nio/Buffer.def.hpp"
#include "../../java/nio/ByteBuffer.def.hpp"
#include "../../java/nio/FloatBuffer.def.hpp"
#include "../../java/nio/IntBuffer.def.hpp"
#include "./GLES32.def.hpp"

namespace android::opengl
{
	// Fields
	inline jint GLES32::GL_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_BUFFER"
		);
	}
	inline jint GLES32::GL_CLAMP_TO_BORDER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_CLAMP_TO_BORDER"
		);
	}
	inline jint GLES32::GL_COLORBURN()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COLORBURN"
		);
	}
	inline jint GLES32::GL_COLORDODGE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COLORDODGE"
		);
	}
	inline jint GLES32::GL_COMPRESSED_RGBA_ASTC_10x10()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_10x10"
		);
	}
	inline jint GLES32::GL_COMPRESSED_RGBA_ASTC_10x5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_10x5"
		);
	}
	inline jint GLES32::GL_COMPRESSED_RGBA_ASTC_10x6()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_10x6"
		);
	}
	inline jint GLES32::GL_COMPRESSED_RGBA_ASTC_10x8()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_10x8"
		);
	}
	inline jint GLES32::GL_COMPRESSED_RGBA_ASTC_12x10()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_12x10"
		);
	}
	inline jint GLES32::GL_COMPRESSED_RGBA_ASTC_12x12()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_12x12"
		);
	}
	inline jint GLES32::GL_COMPRESSED_RGBA_ASTC_4x4()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_4x4"
		);
	}
	inline jint GLES32::GL_COMPRESSED_RGBA_ASTC_5x4()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_5x4"
		);
	}
	inline jint GLES32::GL_COMPRESSED_RGBA_ASTC_5x5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_5x5"
		);
	}
	inline jint GLES32::GL_COMPRESSED_RGBA_ASTC_6x5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_6x5"
		);
	}
	inline jint GLES32::GL_COMPRESSED_RGBA_ASTC_6x6()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_6x6"
		);
	}
	inline jint GLES32::GL_COMPRESSED_RGBA_ASTC_8x5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_8x5"
		);
	}
	inline jint GLES32::GL_COMPRESSED_RGBA_ASTC_8x6()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_8x6"
		);
	}
	inline jint GLES32::GL_COMPRESSED_RGBA_ASTC_8x8()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_RGBA_ASTC_8x8"
		);
	}
	inline jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10"
		);
	}
	inline jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5"
		);
	}
	inline jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6"
		);
	}
	inline jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8"
		);
	}
	inline jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10"
		);
	}
	inline jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12"
		);
	}
	inline jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4"
		);
	}
	inline jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4"
		);
	}
	inline jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5"
		);
	}
	inline jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5"
		);
	}
	inline jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6"
		);
	}
	inline jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5"
		);
	}
	inline jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6"
		);
	}
	inline jint GLES32::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8"
		);
	}
	inline jint GLES32::GL_CONTEXT_FLAGS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_CONTEXT_FLAGS"
		);
	}
	inline jint GLES32::GL_CONTEXT_FLAG_DEBUG_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_CONTEXT_FLAG_DEBUG_BIT"
		);
	}
	inline jint GLES32::GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT"
		);
	}
	inline jint GLES32::GL_CONTEXT_LOST()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_CONTEXT_LOST"
		);
	}
	inline jint GLES32::GL_DARKEN()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DARKEN"
		);
	}
	inline jint GLES32::GL_DEBUG_CALLBACK_FUNCTION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_CALLBACK_FUNCTION"
		);
	}
	inline jint GLES32::GL_DEBUG_CALLBACK_USER_PARAM()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_CALLBACK_USER_PARAM"
		);
	}
	inline jint GLES32::GL_DEBUG_GROUP_STACK_DEPTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_GROUP_STACK_DEPTH"
		);
	}
	inline jint GLES32::GL_DEBUG_LOGGED_MESSAGES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_LOGGED_MESSAGES"
		);
	}
	inline jint GLES32::GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH"
		);
	}
	inline jint GLES32::GL_DEBUG_OUTPUT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_OUTPUT"
		);
	}
	inline jint GLES32::GL_DEBUG_OUTPUT_SYNCHRONOUS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_OUTPUT_SYNCHRONOUS"
		);
	}
	inline jint GLES32::GL_DEBUG_SEVERITY_HIGH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_SEVERITY_HIGH"
		);
	}
	inline jint GLES32::GL_DEBUG_SEVERITY_LOW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_SEVERITY_LOW"
		);
	}
	inline jint GLES32::GL_DEBUG_SEVERITY_MEDIUM()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_SEVERITY_MEDIUM"
		);
	}
	inline jint GLES32::GL_DEBUG_SEVERITY_NOTIFICATION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_SEVERITY_NOTIFICATION"
		);
	}
	inline jint GLES32::GL_DEBUG_SOURCE_API()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_SOURCE_API"
		);
	}
	inline jint GLES32::GL_DEBUG_SOURCE_APPLICATION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_SOURCE_APPLICATION"
		);
	}
	inline jint GLES32::GL_DEBUG_SOURCE_OTHER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_SOURCE_OTHER"
		);
	}
	inline jint GLES32::GL_DEBUG_SOURCE_SHADER_COMPILER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_SOURCE_SHADER_COMPILER"
		);
	}
	inline jint GLES32::GL_DEBUG_SOURCE_THIRD_PARTY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_SOURCE_THIRD_PARTY"
		);
	}
	inline jint GLES32::GL_DEBUG_SOURCE_WINDOW_SYSTEM()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_SOURCE_WINDOW_SYSTEM"
		);
	}
	inline jint GLES32::GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR"
		);
	}
	inline jint GLES32::GL_DEBUG_TYPE_ERROR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_TYPE_ERROR"
		);
	}
	inline jint GLES32::GL_DEBUG_TYPE_MARKER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_TYPE_MARKER"
		);
	}
	inline jint GLES32::GL_DEBUG_TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_TYPE_OTHER"
		);
	}
	inline jint GLES32::GL_DEBUG_TYPE_PERFORMANCE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_TYPE_PERFORMANCE"
		);
	}
	inline jint GLES32::GL_DEBUG_TYPE_POP_GROUP()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_TYPE_POP_GROUP"
		);
	}
	inline jint GLES32::GL_DEBUG_TYPE_PORTABILITY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_TYPE_PORTABILITY"
		);
	}
	inline jint GLES32::GL_DEBUG_TYPE_PUSH_GROUP()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_TYPE_PUSH_GROUP"
		);
	}
	inline jint GLES32::GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR"
		);
	}
	inline jint GLES32::GL_DIFFERENCE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_DIFFERENCE"
		);
	}
	inline jint GLES32::GL_EXCLUSION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_EXCLUSION"
		);
	}
	inline jint GLES32::GL_FIRST_VERTEX_CONVENTION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_FIRST_VERTEX_CONVENTION"
		);
	}
	inline jint GLES32::GL_FRACTIONAL_EVEN()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_FRACTIONAL_EVEN"
		);
	}
	inline jint GLES32::GL_FRACTIONAL_ODD()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_FRACTIONAL_ODD"
		);
	}
	inline jint GLES32::GL_FRAGMENT_INTERPOLATION_OFFSET_BITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_FRAGMENT_INTERPOLATION_OFFSET_BITS"
		);
	}
	inline jint GLES32::GL_FRAMEBUFFER_ATTACHMENT_LAYERED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_FRAMEBUFFER_ATTACHMENT_LAYERED"
		);
	}
	inline jint GLES32::GL_FRAMEBUFFER_DEFAULT_LAYERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_FRAMEBUFFER_DEFAULT_LAYERS"
		);
	}
	inline jint GLES32::GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS"
		);
	}
	inline jint GLES32::GL_GEOMETRY_INPUT_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_GEOMETRY_INPUT_TYPE"
		);
	}
	inline jint GLES32::GL_GEOMETRY_OUTPUT_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_GEOMETRY_OUTPUT_TYPE"
		);
	}
	inline jint GLES32::GL_GEOMETRY_SHADER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_GEOMETRY_SHADER"
		);
	}
	inline jint GLES32::GL_GEOMETRY_SHADER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_GEOMETRY_SHADER_BIT"
		);
	}
	inline jint GLES32::GL_GEOMETRY_SHADER_INVOCATIONS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_GEOMETRY_SHADER_INVOCATIONS"
		);
	}
	inline jint GLES32::GL_GEOMETRY_VERTICES_OUT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_GEOMETRY_VERTICES_OUT"
		);
	}
	inline jint GLES32::GL_GUILTY_CONTEXT_RESET()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_GUILTY_CONTEXT_RESET"
		);
	}
	inline jint GLES32::GL_HARDLIGHT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_HARDLIGHT"
		);
	}
	inline jint GLES32::GL_HSL_COLOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_HSL_COLOR"
		);
	}
	inline jint GLES32::GL_HSL_HUE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_HSL_HUE"
		);
	}
	inline jint GLES32::GL_HSL_LUMINOSITY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_HSL_LUMINOSITY"
		);
	}
	inline jint GLES32::GL_HSL_SATURATION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_HSL_SATURATION"
		);
	}
	inline jint GLES32::GL_IMAGE_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_IMAGE_BUFFER"
		);
	}
	inline jint GLES32::GL_IMAGE_CUBE_MAP_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_IMAGE_CUBE_MAP_ARRAY"
		);
	}
	inline jint GLES32::GL_INNOCENT_CONTEXT_RESET()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_INNOCENT_CONTEXT_RESET"
		);
	}
	inline jint GLES32::GL_INT_IMAGE_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_INT_IMAGE_BUFFER"
		);
	}
	inline jint GLES32::GL_INT_IMAGE_CUBE_MAP_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_INT_IMAGE_CUBE_MAP_ARRAY"
		);
	}
	inline jint GLES32::GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY"
		);
	}
	inline jint GLES32::GL_INT_SAMPLER_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_INT_SAMPLER_BUFFER"
		);
	}
	inline jint GLES32::GL_INT_SAMPLER_CUBE_MAP_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_INT_SAMPLER_CUBE_MAP_ARRAY"
		);
	}
	inline jint GLES32::GL_ISOLINES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_ISOLINES"
		);
	}
	inline jint GLES32::GL_IS_PER_PATCH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_IS_PER_PATCH"
		);
	}
	inline jint GLES32::GL_LAST_VERTEX_CONVENTION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_LAST_VERTEX_CONVENTION"
		);
	}
	inline jint GLES32::GL_LAYER_PROVOKING_VERTEX()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_LAYER_PROVOKING_VERTEX"
		);
	}
	inline jint GLES32::GL_LIGHTEN()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_LIGHTEN"
		);
	}
	inline jint GLES32::GL_LINES_ADJACENCY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_LINES_ADJACENCY"
		);
	}
	inline jint GLES32::GL_LINE_STRIP_ADJACENCY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_LINE_STRIP_ADJACENCY"
		);
	}
	inline jint GLES32::GL_LOSE_CONTEXT_ON_RESET()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_LOSE_CONTEXT_ON_RESET"
		);
	}
	inline jint GLES32::GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS"
		);
	}
	inline jint GLES32::GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS"
		);
	}
	inline jint GLES32::GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS"
		);
	}
	inline jint GLES32::GL_MAX_DEBUG_GROUP_STACK_DEPTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_DEBUG_GROUP_STACK_DEPTH"
		);
	}
	inline jint GLES32::GL_MAX_DEBUG_LOGGED_MESSAGES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_DEBUG_LOGGED_MESSAGES"
		);
	}
	inline jint GLES32::GL_MAX_DEBUG_MESSAGE_LENGTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_DEBUG_MESSAGE_LENGTH"
		);
	}
	inline jint GLES32::GL_MAX_FRAGMENT_INTERPOLATION_OFFSET()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_FRAGMENT_INTERPOLATION_OFFSET"
		);
	}
	inline jint GLES32::GL_MAX_FRAMEBUFFER_LAYERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_FRAMEBUFFER_LAYERS"
		);
	}
	inline jint GLES32::GL_MAX_GEOMETRY_ATOMIC_COUNTERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_GEOMETRY_ATOMIC_COUNTERS"
		);
	}
	inline jint GLES32::GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS"
		);
	}
	inline jint GLES32::GL_MAX_GEOMETRY_IMAGE_UNIFORMS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_GEOMETRY_IMAGE_UNIFORMS"
		);
	}
	inline jint GLES32::GL_MAX_GEOMETRY_INPUT_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_GEOMETRY_INPUT_COMPONENTS"
		);
	}
	inline jint GLES32::GL_MAX_GEOMETRY_OUTPUT_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_GEOMETRY_OUTPUT_COMPONENTS"
		);
	}
	inline jint GLES32::GL_MAX_GEOMETRY_OUTPUT_VERTICES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_GEOMETRY_OUTPUT_VERTICES"
		);
	}
	inline jint GLES32::GL_MAX_GEOMETRY_SHADER_INVOCATIONS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_GEOMETRY_SHADER_INVOCATIONS"
		);
	}
	inline jint GLES32::GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS"
		);
	}
	inline jint GLES32::GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS"
		);
	}
	inline jint GLES32::GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS"
		);
	}
	inline jint GLES32::GL_MAX_GEOMETRY_UNIFORM_BLOCKS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_GEOMETRY_UNIFORM_BLOCKS"
		);
	}
	inline jint GLES32::GL_MAX_GEOMETRY_UNIFORM_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_GEOMETRY_UNIFORM_COMPONENTS"
		);
	}
	inline jint GLES32::GL_MAX_LABEL_LENGTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_LABEL_LENGTH"
		);
	}
	inline jint GLES32::GL_MAX_PATCH_VERTICES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_PATCH_VERTICES"
		);
	}
	inline jint GLES32::GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS"
		);
	}
	inline jint GLES32::GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS"
		);
	}
	inline jint GLES32::GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS"
		);
	}
	inline jint GLES32::GL_MAX_TESS_CONTROL_INPUT_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_CONTROL_INPUT_COMPONENTS"
		);
	}
	inline jint GLES32::GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS"
		);
	}
	inline jint GLES32::GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS"
		);
	}
	inline jint GLES32::GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS"
		);
	}
	inline jint GLES32::GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS"
		);
	}
	inline jint GLES32::GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS"
		);
	}
	inline jint GLES32::GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS"
		);
	}
	inline jint GLES32::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS"
		);
	}
	inline jint GLES32::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS"
		);
	}
	inline jint GLES32::GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS"
		);
	}
	inline jint GLES32::GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS"
		);
	}
	inline jint GLES32::GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS"
		);
	}
	inline jint GLES32::GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS"
		);
	}
	inline jint GLES32::GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS"
		);
	}
	inline jint GLES32::GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS"
		);
	}
	inline jint GLES32::GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS"
		);
	}
	inline jint GLES32::GL_MAX_TESS_GEN_LEVEL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_GEN_LEVEL"
		);
	}
	inline jint GLES32::GL_MAX_TESS_PATCH_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TESS_PATCH_COMPONENTS"
		);
	}
	inline jint GLES32::GL_MAX_TEXTURE_BUFFER_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MAX_TEXTURE_BUFFER_SIZE"
		);
	}
	inline jint GLES32::GL_MIN_FRAGMENT_INTERPOLATION_OFFSET()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MIN_FRAGMENT_INTERPOLATION_OFFSET"
		);
	}
	inline jint GLES32::GL_MIN_SAMPLE_SHADING_VALUE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MIN_SAMPLE_SHADING_VALUE"
		);
	}
	inline jint GLES32::GL_MULTIPLY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MULTIPLY"
		);
	}
	inline jint GLES32::GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY"
		);
	}
	inline jint GLES32::GL_MULTISAMPLE_LINE_WIDTH_RANGE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_MULTISAMPLE_LINE_WIDTH_RANGE"
		);
	}
	inline jint GLES32::GL_NO_RESET_NOTIFICATION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_NO_RESET_NOTIFICATION"
		);
	}
	inline jint GLES32::GL_OVERLAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_OVERLAY"
		);
	}
	inline jint GLES32::GL_PATCHES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_PATCHES"
		);
	}
	inline jint GLES32::GL_PATCH_VERTICES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_PATCH_VERTICES"
		);
	}
	inline jint GLES32::GL_PRIMITIVES_GENERATED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_PRIMITIVES_GENERATED"
		);
	}
	inline jint GLES32::GL_PRIMITIVE_BOUNDING_BOX()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_PRIMITIVE_BOUNDING_BOX"
		);
	}
	inline jint GLES32::GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED"
		);
	}
	inline jint GLES32::GL_PROGRAM()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_PROGRAM"
		);
	}
	inline jint GLES32::GL_PROGRAM_PIPELINE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_PROGRAM_PIPELINE"
		);
	}
	inline jint GLES32::GL_QUADS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_QUADS"
		);
	}
	inline jint GLES32::GL_QUERY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_QUERY"
		);
	}
	inline jint GLES32::GL_REFERENCED_BY_GEOMETRY_SHADER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_REFERENCED_BY_GEOMETRY_SHADER"
		);
	}
	inline jint GLES32::GL_REFERENCED_BY_TESS_CONTROL_SHADER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_REFERENCED_BY_TESS_CONTROL_SHADER"
		);
	}
	inline jint GLES32::GL_REFERENCED_BY_TESS_EVALUATION_SHADER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_REFERENCED_BY_TESS_EVALUATION_SHADER"
		);
	}
	inline jint GLES32::GL_RESET_NOTIFICATION_STRATEGY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_RESET_NOTIFICATION_STRATEGY"
		);
	}
	inline jint GLES32::GL_SAMPLER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_SAMPLER"
		);
	}
	inline jint GLES32::GL_SAMPLER_2D_MULTISAMPLE_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_SAMPLER_2D_MULTISAMPLE_ARRAY"
		);
	}
	inline jint GLES32::GL_SAMPLER_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_SAMPLER_BUFFER"
		);
	}
	inline jint GLES32::GL_SAMPLER_CUBE_MAP_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_SAMPLER_CUBE_MAP_ARRAY"
		);
	}
	inline jint GLES32::GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW"
		);
	}
	inline jint GLES32::GL_SAMPLE_SHADING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_SAMPLE_SHADING"
		);
	}
	inline jint GLES32::GL_SCREEN()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_SCREEN"
		);
	}
	inline jint GLES32::GL_SHADER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_SHADER"
		);
	}
	inline jint GLES32::GL_SOFTLIGHT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_SOFTLIGHT"
		);
	}
	inline jint GLES32::GL_STACK_OVERFLOW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_STACK_OVERFLOW"
		);
	}
	inline jint GLES32::GL_STACK_UNDERFLOW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_STACK_UNDERFLOW"
		);
	}
	inline jint GLES32::GL_TESS_CONTROL_OUTPUT_VERTICES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TESS_CONTROL_OUTPUT_VERTICES"
		);
	}
	inline jint GLES32::GL_TESS_CONTROL_SHADER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TESS_CONTROL_SHADER"
		);
	}
	inline jint GLES32::GL_TESS_CONTROL_SHADER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TESS_CONTROL_SHADER_BIT"
		);
	}
	inline jint GLES32::GL_TESS_EVALUATION_SHADER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TESS_EVALUATION_SHADER"
		);
	}
	inline jint GLES32::GL_TESS_EVALUATION_SHADER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TESS_EVALUATION_SHADER_BIT"
		);
	}
	inline jint GLES32::GL_TESS_GEN_MODE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TESS_GEN_MODE"
		);
	}
	inline jint GLES32::GL_TESS_GEN_POINT_MODE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TESS_GEN_POINT_MODE"
		);
	}
	inline jint GLES32::GL_TESS_GEN_SPACING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TESS_GEN_SPACING"
		);
	}
	inline jint GLES32::GL_TESS_GEN_VERTEX_ORDER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TESS_GEN_VERTEX_ORDER"
		);
	}
	inline jint GLES32::GL_TEXTURE_2D_MULTISAMPLE_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TEXTURE_2D_MULTISAMPLE_ARRAY"
		);
	}
	inline jint GLES32::GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY"
		);
	}
	inline jint GLES32::GL_TEXTURE_BINDING_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TEXTURE_BINDING_BUFFER"
		);
	}
	inline jint GLES32::GL_TEXTURE_BINDING_CUBE_MAP_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TEXTURE_BINDING_CUBE_MAP_ARRAY"
		);
	}
	inline jint GLES32::GL_TEXTURE_BORDER_COLOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TEXTURE_BORDER_COLOR"
		);
	}
	inline jint GLES32::GL_TEXTURE_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TEXTURE_BUFFER"
		);
	}
	inline jint GLES32::GL_TEXTURE_BUFFER_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TEXTURE_BUFFER_BINDING"
		);
	}
	inline jint GLES32::GL_TEXTURE_BUFFER_DATA_STORE_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TEXTURE_BUFFER_DATA_STORE_BINDING"
		);
	}
	inline jint GLES32::GL_TEXTURE_BUFFER_OFFSET()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TEXTURE_BUFFER_OFFSET"
		);
	}
	inline jint GLES32::GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT"
		);
	}
	inline jint GLES32::GL_TEXTURE_BUFFER_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TEXTURE_BUFFER_SIZE"
		);
	}
	inline jint GLES32::GL_TEXTURE_CUBE_MAP_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TEXTURE_CUBE_MAP_ARRAY"
		);
	}
	inline jint GLES32::GL_TRIANGLES_ADJACENCY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TRIANGLES_ADJACENCY"
		);
	}
	inline jint GLES32::GL_TRIANGLE_STRIP_ADJACENCY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_TRIANGLE_STRIP_ADJACENCY"
		);
	}
	inline jint GLES32::GL_UNDEFINED_VERTEX()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_UNDEFINED_VERTEX"
		);
	}
	inline jint GLES32::GL_UNKNOWN_CONTEXT_RESET()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_UNKNOWN_CONTEXT_RESET"
		);
	}
	inline jint GLES32::GL_UNSIGNED_INT_IMAGE_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_UNSIGNED_INT_IMAGE_BUFFER"
		);
	}
	inline jint GLES32::GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY"
		);
	}
	inline jint GLES32::GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY"
		);
	}
	inline jint GLES32::GL_UNSIGNED_INT_SAMPLER_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_UNSIGNED_INT_SAMPLER_BUFFER"
		);
	}
	inline jint GLES32::GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY"
		);
	}
	inline jint GLES32::GL_VERTEX_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES32",
			"GL_VERTEX_ARRAY"
		);
	}
	
	// Constructors
	
	// Methods
	inline void GLES32::glBlendBarrier()
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glBlendBarrier",
			"()V"
		);
	}
	inline void GLES32::glBlendEquationSeparatei(jint arg0, jint arg1, jint arg2)
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
	inline void GLES32::glBlendEquationi(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glBlendEquationi",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void GLES32::glBlendFuncSeparatei(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
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
	inline void GLES32::glBlendFunci(jint arg0, jint arg1, jint arg2)
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
	inline void GLES32::glColorMaski(jint arg0, jboolean arg1, jboolean arg2, jboolean arg3, jboolean arg4)
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
	inline void GLES32::glCopyImageSubData(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10, jint arg11, jint arg12, jint arg13, jint arg14)
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
	inline void GLES32::glDebugMessageCallback(JObject arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glDebugMessageCallback",
			"(Landroid/opengl/GLES32$DebugProc;)V",
			arg0.object()
		);
	}
	inline void GLES32::glDebugMessageControl(jint arg0, jint arg1, jint arg2, jint arg3, java::nio::IntBuffer arg4, jboolean arg5)
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
	inline void GLES32::glDebugMessageControl(jint arg0, jint arg1, jint arg2, jint arg3, JIntArray arg4, jint arg5, jboolean arg6)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glDebugMessageControl",
			"(IIII[IIZ)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jintArray>(),
			arg5,
			arg6
		);
	}
	inline void GLES32::glDebugMessageInsert(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, JString arg5)
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
			arg5.object<jstring>()
		);
	}
	inline void GLES32::glDisablei(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glDisablei",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void GLES32::glDrawElementsBaseVertex(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3, jint arg4)
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
	inline void GLES32::glDrawElementsInstancedBaseVertex(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
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
	inline void GLES32::glDrawElementsInstancedBaseVertex(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3, jint arg4, jint arg5)
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
	inline void GLES32::glDrawRangeElementsBaseVertex(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, java::nio::Buffer arg5, jint arg6)
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
	inline void GLES32::glEnablei(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glEnablei",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void GLES32::glFramebufferTexture(jint arg0, jint arg1, jint arg2, jint arg3)
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
	inline JArray GLES32::glGetDebugMessageLog(jint arg0, java::nio::IntBuffer arg1, java::nio::IntBuffer arg2, java::nio::IntBuffer arg3, java::nio::IntBuffer arg4)
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
		);
	}
	inline JArray GLES32::glGetDebugMessageLog(jint arg0, JIntArray arg1, jint arg2, JIntArray arg3, jint arg4, JIntArray arg5, jint arg6, JIntArray arg7, jint arg8)
	{
		return callStaticObjectMethod(
			"android.opengl.GLES32",
			"glGetDebugMessageLog",
			"(I[II[II[II[II)[Ljava/lang/String;",
			arg0,
			arg1.object<jintArray>(),
			arg2,
			arg3.object<jintArray>(),
			arg4,
			arg5.object<jintArray>(),
			arg6,
			arg7.object<jintArray>(),
			arg8
		);
	}
	inline jint GLES32::glGetDebugMessageLog(jint arg0, java::nio::IntBuffer arg1, java::nio::IntBuffer arg2, java::nio::IntBuffer arg3, java::nio::IntBuffer arg4, java::nio::IntBuffer arg5, java::nio::ByteBuffer arg6)
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
	inline jint GLES32::glGetDebugMessageLog(jint arg0, jint arg1, JIntArray arg2, jint arg3, JIntArray arg4, jint arg5, JIntArray arg6, jint arg7, JIntArray arg8, jint arg9, JIntArray arg10, jint arg11, JByteArray arg12, jint arg13)
	{
		return callStaticMethod<jint>(
			"android.opengl.GLES32",
			"glGetDebugMessageLog",
			"(II[II[II[II[II[II[BI)I",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3,
			arg4.object<jintArray>(),
			arg5,
			arg6.object<jintArray>(),
			arg7,
			arg8.object<jintArray>(),
			arg9,
			arg10.object<jintArray>(),
			arg11,
			arg12.object<jbyteArray>(),
			arg13
		);
	}
	inline jint GLES32::glGetGraphicsResetStatus()
	{
		return callStaticMethod<jint>(
			"android.opengl.GLES32",
			"glGetGraphicsResetStatus",
			"()I"
		);
	}
	inline JString GLES32::glGetObjectLabel(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.opengl.GLES32",
			"glGetObjectLabel",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	inline JString GLES32::glGetObjectPtrLabel(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.opengl.GLES32",
			"glGetObjectPtrLabel",
			"(J)Ljava/lang/String;",
			arg0
		);
	}
	inline jlong GLES32::glGetPointerv(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.opengl.GLES32",
			"glGetPointerv",
			"(I)J",
			arg0
		);
	}
	inline void GLES32::glGetSamplerParameterIiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
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
	inline void GLES32::glGetSamplerParameterIiv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glGetSamplerParameterIiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline void GLES32::glGetSamplerParameterIuiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
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
	inline void GLES32::glGetSamplerParameterIuiv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glGetSamplerParameterIuiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline void GLES32::glGetTexParameterIiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
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
	inline void GLES32::glGetTexParameterIiv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glGetTexParameterIiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline void GLES32::glGetTexParameterIuiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
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
	inline void GLES32::glGetTexParameterIuiv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glGetTexParameterIuiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline void GLES32::glGetnUniformfv(jint arg0, jint arg1, jint arg2, java::nio::FloatBuffer arg3)
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
	inline void GLES32::glGetnUniformfv(jint arg0, jint arg1, jint arg2, JFloatArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glGetnUniformfv",
			"(III[FI)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jfloatArray>(),
			arg4
		);
	}
	inline void GLES32::glGetnUniformiv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3)
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
	inline void GLES32::glGetnUniformiv(jint arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glGetnUniformiv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jintArray>(),
			arg4
		);
	}
	inline void GLES32::glGetnUniformuiv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3)
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
	inline void GLES32::glGetnUniformuiv(jint arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glGetnUniformuiv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jintArray>(),
			arg4
		);
	}
	inline jboolean GLES32::glIsEnabledi(jint arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.GLES32",
			"glIsEnabledi",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline void GLES32::glMinSampleShading(jfloat arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glMinSampleShading",
			"(F)V",
			arg0
		);
	}
	inline void GLES32::glObjectLabel(jint arg0, jint arg1, jint arg2, JString arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glObjectLabel",
			"(IIILjava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jstring>()
		);
	}
	inline void GLES32::glObjectPtrLabel(jlong arg0, JString arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glObjectPtrLabel",
			"(JLjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void GLES32::glPatchParameteri(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glPatchParameteri",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void GLES32::glPopDebugGroup()
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glPopDebugGroup",
			"()V"
		);
	}
	inline void GLES32::glPrimitiveBoundingBox(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7)
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
	inline void GLES32::glPushDebugGroup(jint arg0, jint arg1, jint arg2, JString arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glPushDebugGroup",
			"(IIILjava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jstring>()
		);
	}
	inline void GLES32::glReadnPixels(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, java::nio::Buffer arg7)
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
	inline void GLES32::glSamplerParameterIiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
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
	inline void GLES32::glSamplerParameterIiv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glSamplerParameterIiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline void GLES32::glSamplerParameterIuiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
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
	inline void GLES32::glSamplerParameterIuiv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glSamplerParameterIuiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline void GLES32::glTexBuffer(jint arg0, jint arg1, jint arg2)
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
	inline void GLES32::glTexBufferRange(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
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
	inline void GLES32::glTexParameterIiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
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
	inline void GLES32::glTexParameterIiv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glTexParameterIiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline void GLES32::glTexParameterIuiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
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
	inline void GLES32::glTexParameterIuiv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES32",
			"glTexParameterIuiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline void GLES32::glTexStorage3DMultisample(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jboolean arg6)
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

// Base class headers
#include "./GLES20.hpp"
#include "./GLES30.hpp"
#include "./GLES31.hpp"

