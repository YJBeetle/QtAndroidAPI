#include "../../java/nio/ByteBuffer.hpp"
#include "../../java/nio/IntBuffer.hpp"
#include "./GLES31Ext.hpp"

namespace android::opengl
{
	// Fields
	jint GLES31Ext::GL_BLEND_ADVANCED_COHERENT_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_BLEND_ADVANCED_COHERENT_KHR"
		);
	}
	jint GLES31Ext::GL_BUFFER_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_BUFFER_KHR"
		);
	}
	jint GLES31Ext::GL_CLAMP_TO_BORDER_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_CLAMP_TO_BORDER_EXT"
		);
	}
	jint GLES31Ext::GL_COLORBURN_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COLORBURN_KHR"
		);
	}
	jint GLES31Ext::GL_COLORDODGE_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COLORDODGE_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_RGBA_ASTC_10x10_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_RGBA_ASTC_10x10_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_RGBA_ASTC_10x5_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_RGBA_ASTC_10x5_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_RGBA_ASTC_10x6_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_RGBA_ASTC_10x6_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_RGBA_ASTC_10x8_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_RGBA_ASTC_10x8_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_RGBA_ASTC_12x10_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_RGBA_ASTC_12x10_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_RGBA_ASTC_12x12_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_RGBA_ASTC_12x12_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_RGBA_ASTC_4x4_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_RGBA_ASTC_4x4_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_RGBA_ASTC_5x4_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_RGBA_ASTC_5x4_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_RGBA_ASTC_5x5_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_RGBA_ASTC_5x5_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_RGBA_ASTC_6x5_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_RGBA_ASTC_6x5_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_RGBA_ASTC_6x6_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_RGBA_ASTC_6x6_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_RGBA_ASTC_8x5_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_RGBA_ASTC_8x5_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_RGBA_ASTC_8x6_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_RGBA_ASTC_8x6_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_RGBA_ASTC_8x8_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_RGBA_ASTC_8x8_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR"
		);
	}
	jint GLES31Ext::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR"
		);
	}
	jint GLES31Ext::GL_CONTEXT_FLAG_DEBUG_BIT_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_CONTEXT_FLAG_DEBUG_BIT_KHR"
		);
	}
	jint GLES31Ext::GL_DARKEN_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DARKEN_KHR"
		);
	}
	jint GLES31Ext::GL_DEBUG_CALLBACK_FUNCTION_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DEBUG_CALLBACK_FUNCTION_KHR"
		);
	}
	jint GLES31Ext::GL_DEBUG_CALLBACK_USER_PARAM_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DEBUG_CALLBACK_USER_PARAM_KHR"
		);
	}
	jint GLES31Ext::GL_DEBUG_GROUP_STACK_DEPTH_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DEBUG_GROUP_STACK_DEPTH_KHR"
		);
	}
	jint GLES31Ext::GL_DEBUG_LOGGED_MESSAGES_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DEBUG_LOGGED_MESSAGES_KHR"
		);
	}
	jint GLES31Ext::GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_KHR"
		);
	}
	jint GLES31Ext::GL_DEBUG_OUTPUT_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DEBUG_OUTPUT_KHR"
		);
	}
	jint GLES31Ext::GL_DEBUG_OUTPUT_SYNCHRONOUS_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DEBUG_OUTPUT_SYNCHRONOUS_KHR"
		);
	}
	jint GLES31Ext::GL_DEBUG_SEVERITY_HIGH_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DEBUG_SEVERITY_HIGH_KHR"
		);
	}
	jint GLES31Ext::GL_DEBUG_SEVERITY_LOW_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DEBUG_SEVERITY_LOW_KHR"
		);
	}
	jint GLES31Ext::GL_DEBUG_SEVERITY_MEDIUM_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DEBUG_SEVERITY_MEDIUM_KHR"
		);
	}
	jint GLES31Ext::GL_DEBUG_SEVERITY_NOTIFICATION_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DEBUG_SEVERITY_NOTIFICATION_KHR"
		);
	}
	jint GLES31Ext::GL_DEBUG_SOURCE_API_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DEBUG_SOURCE_API_KHR"
		);
	}
	jint GLES31Ext::GL_DEBUG_SOURCE_APPLICATION_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DEBUG_SOURCE_APPLICATION_KHR"
		);
	}
	jint GLES31Ext::GL_DEBUG_SOURCE_OTHER_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DEBUG_SOURCE_OTHER_KHR"
		);
	}
	jint GLES31Ext::GL_DEBUG_SOURCE_SHADER_COMPILER_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DEBUG_SOURCE_SHADER_COMPILER_KHR"
		);
	}
	jint GLES31Ext::GL_DEBUG_SOURCE_THIRD_PARTY_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DEBUG_SOURCE_THIRD_PARTY_KHR"
		);
	}
	jint GLES31Ext::GL_DEBUG_SOURCE_WINDOW_SYSTEM_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DEBUG_SOURCE_WINDOW_SYSTEM_KHR"
		);
	}
	jint GLES31Ext::GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_KHR"
		);
	}
	jint GLES31Ext::GL_DEBUG_TYPE_ERROR_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DEBUG_TYPE_ERROR_KHR"
		);
	}
	jint GLES31Ext::GL_DEBUG_TYPE_MARKER_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DEBUG_TYPE_MARKER_KHR"
		);
	}
	jint GLES31Ext::GL_DEBUG_TYPE_OTHER_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DEBUG_TYPE_OTHER_KHR"
		);
	}
	jint GLES31Ext::GL_DEBUG_TYPE_PERFORMANCE_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DEBUG_TYPE_PERFORMANCE_KHR"
		);
	}
	jint GLES31Ext::GL_DEBUG_TYPE_POP_GROUP_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DEBUG_TYPE_POP_GROUP_KHR"
		);
	}
	jint GLES31Ext::GL_DEBUG_TYPE_PORTABILITY_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DEBUG_TYPE_PORTABILITY_KHR"
		);
	}
	jint GLES31Ext::GL_DEBUG_TYPE_PUSH_GROUP_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DEBUG_TYPE_PUSH_GROUP_KHR"
		);
	}
	jint GLES31Ext::GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_KHR"
		);
	}
	jint GLES31Ext::GL_DECODE_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DECODE_EXT"
		);
	}
	jint GLES31Ext::GL_DIFFERENCE_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_DIFFERENCE_KHR"
		);
	}
	jint GLES31Ext::GL_EXCLUSION_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_EXCLUSION_KHR"
		);
	}
	jint GLES31Ext::GL_FIRST_VERTEX_CONVENTION_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_FIRST_VERTEX_CONVENTION_EXT"
		);
	}
	jint GLES31Ext::GL_FRACTIONAL_EVEN_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_FRACTIONAL_EVEN_EXT"
		);
	}
	jint GLES31Ext::GL_FRACTIONAL_ODD_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_FRACTIONAL_ODD_EXT"
		);
	}
	jint GLES31Ext::GL_FRAGMENT_INTERPOLATION_OFFSET_BITS_OES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_FRAGMENT_INTERPOLATION_OFFSET_BITS_OES"
		);
	}
	jint GLES31Ext::GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT"
		);
	}
	jint GLES31Ext::GL_FRAMEBUFFER_DEFAULT_LAYERS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_FRAMEBUFFER_DEFAULT_LAYERS_EXT"
		);
	}
	jint GLES31Ext::GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT"
		);
	}
	jint GLES31Ext::GL_GEOMETRY_LINKED_INPUT_TYPE_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_GEOMETRY_LINKED_INPUT_TYPE_EXT"
		);
	}
	jint GLES31Ext::GL_GEOMETRY_LINKED_OUTPUT_TYPE_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_GEOMETRY_LINKED_OUTPUT_TYPE_EXT"
		);
	}
	jint GLES31Ext::GL_GEOMETRY_LINKED_VERTICES_OUT_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_GEOMETRY_LINKED_VERTICES_OUT_EXT"
		);
	}
	jint GLES31Ext::GL_GEOMETRY_SHADER_BIT_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_GEOMETRY_SHADER_BIT_EXT"
		);
	}
	jint GLES31Ext::GL_GEOMETRY_SHADER_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_GEOMETRY_SHADER_EXT"
		);
	}
	jint GLES31Ext::GL_GEOMETRY_SHADER_INVOCATIONS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_GEOMETRY_SHADER_INVOCATIONS_EXT"
		);
	}
	jint GLES31Ext::GL_HARDLIGHT_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_HARDLIGHT_KHR"
		);
	}
	jint GLES31Ext::GL_HSL_COLOR_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_HSL_COLOR_KHR"
		);
	}
	jint GLES31Ext::GL_HSL_HUE_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_HSL_HUE_KHR"
		);
	}
	jint GLES31Ext::GL_HSL_LUMINOSITY_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_HSL_LUMINOSITY_KHR"
		);
	}
	jint GLES31Ext::GL_HSL_SATURATION_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_HSL_SATURATION_KHR"
		);
	}
	jint GLES31Ext::GL_IMAGE_BUFFER_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_IMAGE_BUFFER_EXT"
		);
	}
	jint GLES31Ext::GL_IMAGE_CUBE_MAP_ARRAY_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_IMAGE_CUBE_MAP_ARRAY_EXT"
		);
	}
	jint GLES31Ext::GL_INT_IMAGE_BUFFER_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_INT_IMAGE_BUFFER_EXT"
		);
	}
	jint GLES31Ext::GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT"
		);
	}
	jint GLES31Ext::GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES"
		);
	}
	jint GLES31Ext::GL_INT_SAMPLER_BUFFER_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_INT_SAMPLER_BUFFER_EXT"
		);
	}
	jint GLES31Ext::GL_INT_SAMPLER_CUBE_MAP_ARRAY_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_INT_SAMPLER_CUBE_MAP_ARRAY_EXT"
		);
	}
	jint GLES31Ext::GL_ISOLINES_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_ISOLINES_EXT"
		);
	}
	jint GLES31Ext::GL_IS_PER_PATCH_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_IS_PER_PATCH_EXT"
		);
	}
	jint GLES31Ext::GL_LAST_VERTEX_CONVENTION_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_LAST_VERTEX_CONVENTION_EXT"
		);
	}
	jint GLES31Ext::GL_LAYER_PROVOKING_VERTEX_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_LAYER_PROVOKING_VERTEX_EXT"
		);
	}
	jint GLES31Ext::GL_LIGHTEN_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_LIGHTEN_KHR"
		);
	}
	jint GLES31Ext::GL_LINES_ADJACENCY_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_LINES_ADJACENCY_EXT"
		);
	}
	jint GLES31Ext::GL_LINE_STRIP_ADJACENCY_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_LINE_STRIP_ADJACENCY_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_DEBUG_GROUP_STACK_DEPTH_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_DEBUG_GROUP_STACK_DEPTH_KHR"
		);
	}
	jint GLES31Ext::GL_MAX_DEBUG_LOGGED_MESSAGES_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_DEBUG_LOGGED_MESSAGES_KHR"
		);
	}
	jint GLES31Ext::GL_MAX_DEBUG_MESSAGE_LENGTH_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_DEBUG_MESSAGE_LENGTH_KHR"
		);
	}
	jint GLES31Ext::GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_OES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_OES"
		);
	}
	jint GLES31Ext::GL_MAX_FRAMEBUFFER_LAYERS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_FRAMEBUFFER_LAYERS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_GEOMETRY_ATOMIC_COUNTERS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_GEOMETRY_ATOMIC_COUNTERS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_GEOMETRY_IMAGE_UNIFORMS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_GEOMETRY_IMAGE_UNIFORMS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_GEOMETRY_INPUT_COMPONENTS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_GEOMETRY_INPUT_COMPONENTS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_GEOMETRY_SHADER_INVOCATIONS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_GEOMETRY_SHADER_INVOCATIONS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_GEOMETRY_UNIFORM_BLOCKS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_GEOMETRY_UNIFORM_BLOCKS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_LABEL_LENGTH_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_LABEL_LENGTH_KHR"
		);
	}
	jint GLES31Ext::GL_MAX_PATCH_VERTICES_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_PATCH_VERTICES_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_TESS_GEN_LEVEL_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_TESS_GEN_LEVEL_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_TESS_PATCH_COMPONENTS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_TESS_PATCH_COMPONENTS_EXT"
		);
	}
	jint GLES31Ext::GL_MAX_TEXTURE_BUFFER_SIZE_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MAX_TEXTURE_BUFFER_SIZE_EXT"
		);
	}
	jint GLES31Ext::GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_OES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_OES"
		);
	}
	jint GLES31Ext::GL_MIN_SAMPLE_SHADING_VALUE_OES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MIN_SAMPLE_SHADING_VALUE_OES"
		);
	}
	jint GLES31Ext::GL_MULTIPLY_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_MULTIPLY_KHR"
		);
	}
	jint GLES31Ext::GL_OVERLAY_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_OVERLAY_KHR"
		);
	}
	jint GLES31Ext::GL_PATCHES_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_PATCHES_EXT"
		);
	}
	jint GLES31Ext::GL_PATCH_VERTICES_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_PATCH_VERTICES_EXT"
		);
	}
	jint GLES31Ext::GL_PRIMITIVES_GENERATED_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_PRIMITIVES_GENERATED_EXT"
		);
	}
	jint GLES31Ext::GL_PRIMITIVE_BOUNDING_BOX_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_PRIMITIVE_BOUNDING_BOX_EXT"
		);
	}
	jint GLES31Ext::GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED"
		);
	}
	jint GLES31Ext::GL_PROGRAM_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_PROGRAM_KHR"
		);
	}
	jint GLES31Ext::GL_QUADS_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_QUADS_EXT"
		);
	}
	jint GLES31Ext::GL_QUERY_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_QUERY_KHR"
		);
	}
	jint GLES31Ext::GL_REFERENCED_BY_GEOMETRY_SHADER_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_REFERENCED_BY_GEOMETRY_SHADER_EXT"
		);
	}
	jint GLES31Ext::GL_REFERENCED_BY_TESS_CONTROL_SHADER_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_REFERENCED_BY_TESS_CONTROL_SHADER_EXT"
		);
	}
	jint GLES31Ext::GL_REFERENCED_BY_TESS_EVALUATION_SHADER_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_REFERENCED_BY_TESS_EVALUATION_SHADER_EXT"
		);
	}
	jint GLES31Ext::GL_SAMPLER_2D_MULTISAMPLE_ARRAY_OES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_SAMPLER_2D_MULTISAMPLE_ARRAY_OES"
		);
	}
	jint GLES31Ext::GL_SAMPLER_BUFFER_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_SAMPLER_BUFFER_EXT"
		);
	}
	jint GLES31Ext::GL_SAMPLER_CUBE_MAP_ARRAY_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_SAMPLER_CUBE_MAP_ARRAY_EXT"
		);
	}
	jint GLES31Ext::GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_EXT"
		);
	}
	jint GLES31Ext::GL_SAMPLER_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_SAMPLER_KHR"
		);
	}
	jint GLES31Ext::GL_SAMPLE_SHADING_OES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_SAMPLE_SHADING_OES"
		);
	}
	jint GLES31Ext::GL_SCREEN_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_SCREEN_KHR"
		);
	}
	jint GLES31Ext::GL_SHADER_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_SHADER_KHR"
		);
	}
	jint GLES31Ext::GL_SKIP_DECODE_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_SKIP_DECODE_EXT"
		);
	}
	jint GLES31Ext::GL_SOFTLIGHT_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_SOFTLIGHT_KHR"
		);
	}
	jint GLES31Ext::GL_STACK_OVERFLOW_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_STACK_OVERFLOW_KHR"
		);
	}
	jint GLES31Ext::GL_STACK_UNDERFLOW_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_STACK_UNDERFLOW_KHR"
		);
	}
	jint GLES31Ext::GL_STENCIL_INDEX8_OES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_STENCIL_INDEX8_OES"
		);
	}
	jint GLES31Ext::GL_STENCIL_INDEX_OES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_STENCIL_INDEX_OES"
		);
	}
	jint GLES31Ext::GL_TESS_CONTROL_OUTPUT_VERTICES_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_TESS_CONTROL_OUTPUT_VERTICES_EXT"
		);
	}
	jint GLES31Ext::GL_TESS_CONTROL_SHADER_BIT_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_TESS_CONTROL_SHADER_BIT_EXT"
		);
	}
	jint GLES31Ext::GL_TESS_CONTROL_SHADER_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_TESS_CONTROL_SHADER_EXT"
		);
	}
	jint GLES31Ext::GL_TESS_EVALUATION_SHADER_BIT_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_TESS_EVALUATION_SHADER_BIT_EXT"
		);
	}
	jint GLES31Ext::GL_TESS_EVALUATION_SHADER_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_TESS_EVALUATION_SHADER_EXT"
		);
	}
	jint GLES31Ext::GL_TESS_GEN_MODE_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_TESS_GEN_MODE_EXT"
		);
	}
	jint GLES31Ext::GL_TESS_GEN_POINT_MODE_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_TESS_GEN_POINT_MODE_EXT"
		);
	}
	jint GLES31Ext::GL_TESS_GEN_SPACING_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_TESS_GEN_SPACING_EXT"
		);
	}
	jint GLES31Ext::GL_TESS_GEN_VERTEX_ORDER_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_TESS_GEN_VERTEX_ORDER_EXT"
		);
	}
	jint GLES31Ext::GL_TEXTURE_2D_MULTISAMPLE_ARRAY_OES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_TEXTURE_2D_MULTISAMPLE_ARRAY_OES"
		);
	}
	jint GLES31Ext::GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY_OES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY_OES"
		);
	}
	jint GLES31Ext::GL_TEXTURE_BINDING_BUFFER_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_TEXTURE_BINDING_BUFFER_EXT"
		);
	}
	jint GLES31Ext::GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_EXT"
		);
	}
	jint GLES31Ext::GL_TEXTURE_BORDER_COLOR_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_TEXTURE_BORDER_COLOR_EXT"
		);
	}
	jint GLES31Ext::GL_TEXTURE_BUFFER_BINDING_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_TEXTURE_BUFFER_BINDING_EXT"
		);
	}
	jint GLES31Ext::GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT"
		);
	}
	jint GLES31Ext::GL_TEXTURE_BUFFER_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_TEXTURE_BUFFER_EXT"
		);
	}
	jint GLES31Ext::GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_EXT"
		);
	}
	jint GLES31Ext::GL_TEXTURE_BUFFER_OFFSET_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_TEXTURE_BUFFER_OFFSET_EXT"
		);
	}
	jint GLES31Ext::GL_TEXTURE_BUFFER_SIZE_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_TEXTURE_BUFFER_SIZE_EXT"
		);
	}
	jint GLES31Ext::GL_TEXTURE_CUBE_MAP_ARRAY_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_TEXTURE_CUBE_MAP_ARRAY_EXT"
		);
	}
	jint GLES31Ext::GL_TEXTURE_SRGB_DECODE_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_TEXTURE_SRGB_DECODE_EXT"
		);
	}
	jint GLES31Ext::GL_TRIANGLES_ADJACENCY_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_TRIANGLES_ADJACENCY_EXT"
		);
	}
	jint GLES31Ext::GL_TRIANGLE_STRIP_ADJACENCY_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_TRIANGLE_STRIP_ADJACENCY_EXT"
		);
	}
	jint GLES31Ext::GL_UNDEFINED_VERTEX_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_UNDEFINED_VERTEX_EXT"
		);
	}
	jint GLES31Ext::GL_UNSIGNED_INT_IMAGE_BUFFER_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_UNSIGNED_INT_IMAGE_BUFFER_EXT"
		);
	}
	jint GLES31Ext::GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT"
		);
	}
	jint GLES31Ext::GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES"
		);
	}
	jint GLES31Ext::GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT"
		);
	}
	jint GLES31Ext::GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_EXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_EXT"
		);
	}
	jint GLES31Ext::GL_VERTEX_ARRAY_KHR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31Ext",
			"GL_VERTEX_ARRAY_KHR"
		);
	}
	
	GLES31Ext::GLES31Ext(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void GLES31Ext::glBlendBarrierKHR()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glBlendBarrierKHR",
			"()V"
		);
	}
	void GLES31Ext::glBlendEquationSeparateiEXT(jint arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glBlendEquationSeparateiEXT",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES31Ext::glBlendEquationiEXT(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glBlendEquationiEXT",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES31Ext::glBlendFuncSeparateiEXT(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glBlendFuncSeparateiEXT",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES31Ext::glBlendFunciEXT(jint arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glBlendFunciEXT",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES31Ext::glColorMaskiEXT(jint arg0, jboolean arg1, jboolean arg2, jboolean arg3, jboolean arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glColorMaskiEXT",
			"(IZZZZ)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES31Ext::glCopyImageSubDataEXT(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10, jint arg11, jint arg12, jint arg13, jint arg14)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glCopyImageSubDataEXT",
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
	void GLES31Ext::glDebugMessageCallbackKHR(__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glDebugMessageCallbackKHR",
			"(Landroid/opengl/GLES31Ext$DebugProcKHR;)V",
			arg0.__jniObject().object()
		);
	}
	void GLES31Ext::glDebugMessageControlKHR(jint arg0, jint arg1, jint arg2, jint arg3, java::nio::IntBuffer arg4, jboolean arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glDebugMessageControlKHR",
			"(IIIILjava/nio/IntBuffer;Z)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5
		);
	}
	void GLES31Ext::glDebugMessageControlKHR(jint arg0, jint arg1, jint arg2, jint arg3, jintArray arg4, jint arg5, jboolean arg6)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glDebugMessageControlKHR",
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
	void GLES31Ext::glDebugMessageInsertKHR(jint arg0, jint arg1, jint arg2, jint arg3, jstring arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glDebugMessageInsertKHR",
			"(IIIILjava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES31Ext::glDebugMessageInsertKHR(jint arg0, jint arg1, jint arg2, jint arg3, const QString &arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glDebugMessageInsertKHR",
			"(IIIILjava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			QAndroidJniObject::fromString(arg4).object<jstring>()
		);
	}
	void GLES31Ext::glDisableiEXT(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glDisableiEXT",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES31Ext::glEnableiEXT(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glEnableiEXT",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES31Ext::glFramebufferTextureEXT(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glFramebufferTextureEXT",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject GLES31Ext::glGetDebugMessageCallbackKHR()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.GLES31Ext",
			"glGetDebugMessageCallbackKHR",
			"()Landroid/opengl/GLES31Ext$DebugProcKHR;"
		);
	}
	jarray GLES31Ext::glGetDebugMessageLogKHR(jint arg0, java::nio::IntBuffer arg1, java::nio::IntBuffer arg2, java::nio::IntBuffer arg3, java::nio::IntBuffer arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.GLES31Ext",
			"glGetDebugMessageLogKHR",
			"(ILjava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;)[Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		).object<jarray>();
	}
	jarray GLES31Ext::glGetDebugMessageLogKHR(jint arg0, jintArray arg1, jint arg2, jintArray arg3, jint arg4, jintArray arg5, jint arg6, jintArray arg7, jint arg8)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.GLES31Ext",
			"glGetDebugMessageLogKHR",
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
	jint GLES31Ext::glGetDebugMessageLogKHR(jint arg0, java::nio::IntBuffer arg1, java::nio::IntBuffer arg2, java::nio::IntBuffer arg3, java::nio::IntBuffer arg4, java::nio::IntBuffer arg5, java::nio::ByteBuffer arg6)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.GLES31Ext",
			"glGetDebugMessageLogKHR",
			"(ILjava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/ByteBuffer;)I",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object()
		);
	}
	jint GLES31Ext::glGetDebugMessageLogKHR(jint arg0, jint arg1, jintArray arg2, jint arg3, jintArray arg4, jint arg5, jintArray arg6, jint arg7, jintArray arg8, jint arg9, jintArray arg10, jint arg11, jbyteArray arg12, jint arg13)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.GLES31Ext",
			"glGetDebugMessageLogKHR",
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
	jstring GLES31Ext::glGetObjectLabelKHR(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.GLES31Ext",
			"glGetObjectLabelKHR",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring GLES31Ext::glGetObjectPtrLabelKHR(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.GLES31Ext",
			"glGetObjectPtrLabelKHR",
			"(J)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	void GLES31Ext::glGetSamplerParameterIivEXT(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glGetSamplerParameterIivEXT",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GLES31Ext::glGetSamplerParameterIivEXT(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glGetSamplerParameterIivEXT",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES31Ext::glGetSamplerParameterIuivEXT(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glGetSamplerParameterIuivEXT",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GLES31Ext::glGetSamplerParameterIuivEXT(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glGetSamplerParameterIuivEXT",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES31Ext::glGetTexParameterIivEXT(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glGetTexParameterIivEXT",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GLES31Ext::glGetTexParameterIivEXT(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glGetTexParameterIivEXT",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES31Ext::glGetTexParameterIuivEXT(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glGetTexParameterIuivEXT",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GLES31Ext::glGetTexParameterIuivEXT(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glGetTexParameterIuivEXT",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean GLES31Ext::glIsEnablediEXT(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.GLES31Ext",
			"glIsEnablediEXT",
			"(II)Z",
			arg0,
			arg1
		);
	}
	void GLES31Ext::glMinSampleShadingOES(jfloat arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glMinSampleShadingOES",
			"(F)V",
			arg0
		);
	}
	void GLES31Ext::glObjectLabelKHR(jint arg0, jint arg1, jint arg2, jstring arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glObjectLabelKHR",
			"(IIILjava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES31Ext::glObjectLabelKHR(jint arg0, jint arg1, jint arg2, const QString &arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glObjectLabelKHR",
			"(IIILjava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	void GLES31Ext::glObjectPtrLabelKHR(jlong arg0, jstring arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glObjectPtrLabelKHR",
			"(JLjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void GLES31Ext::glObjectPtrLabelKHR(jlong arg0, const QString &arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glObjectPtrLabelKHR",
			"(JLjava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void GLES31Ext::glPatchParameteriEXT(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glPatchParameteriEXT",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES31Ext::glPopDebugGroupKHR()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glPopDebugGroupKHR",
			"()V"
		);
	}
	void GLES31Ext::glPrimitiveBoundingBoxEXT(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glPrimitiveBoundingBoxEXT",
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
	void GLES31Ext::glPushDebugGroupKHR(jint arg0, jint arg1, jint arg2, jstring arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glPushDebugGroupKHR",
			"(IIILjava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES31Ext::glPushDebugGroupKHR(jint arg0, jint arg1, jint arg2, const QString &arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glPushDebugGroupKHR",
			"(IIILjava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	void GLES31Ext::glSamplerParameterIivEXT(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glSamplerParameterIivEXT",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GLES31Ext::glSamplerParameterIivEXT(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glSamplerParameterIivEXT",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES31Ext::glSamplerParameterIuivEXT(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glSamplerParameterIuivEXT",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GLES31Ext::glSamplerParameterIuivEXT(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glSamplerParameterIuivEXT",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES31Ext::glTexBufferEXT(jint arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glTexBufferEXT",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES31Ext::glTexBufferRangeEXT(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glTexBufferRangeEXT",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES31Ext::glTexParameterIivEXT(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glTexParameterIivEXT",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GLES31Ext::glTexParameterIivEXT(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glTexParameterIivEXT",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES31Ext::glTexParameterIuivEXT(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glTexParameterIuivEXT",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GLES31Ext::glTexParameterIuivEXT(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glTexParameterIuivEXT",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES31Ext::glTexStorage3DMultisampleOES(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jboolean arg6)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31Ext",
			"glTexStorage3DMultisampleOES",
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

