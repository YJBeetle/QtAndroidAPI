#pragma once

#include "../../JByteArray.hpp"
#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JLongArray.hpp"
#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "../../java/nio/Buffer.def.hpp"
#include "../../java/nio/ByteBuffer.def.hpp"
#include "../../java/nio/FloatBuffer.def.hpp"
#include "../../java/nio/IntBuffer.def.hpp"
#include "../../java/nio/LongBuffer.def.hpp"
#include "./GLES30.def.hpp"

namespace android::opengl
{
	// Fields
	inline jint GLES30::GL_ACTIVE_UNIFORM_BLOCKS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_ACTIVE_UNIFORM_BLOCKS"
		);
	}
	inline jint GLES30::GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH"
		);
	}
	inline jint GLES30::GL_ALREADY_SIGNALED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_ALREADY_SIGNALED"
		);
	}
	inline jint GLES30::GL_ANY_SAMPLES_PASSED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_ANY_SAMPLES_PASSED"
		);
	}
	inline jint GLES30::GL_ANY_SAMPLES_PASSED_CONSERVATIVE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_ANY_SAMPLES_PASSED_CONSERVATIVE"
		);
	}
	inline jint GLES30::GL_BLUE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_BLUE"
		);
	}
	inline jint GLES30::GL_BUFFER_ACCESS_FLAGS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_BUFFER_ACCESS_FLAGS"
		);
	}
	inline jint GLES30::GL_BUFFER_MAPPED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_BUFFER_MAPPED"
		);
	}
	inline jint GLES30::GL_BUFFER_MAP_LENGTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_BUFFER_MAP_LENGTH"
		);
	}
	inline jint GLES30::GL_BUFFER_MAP_OFFSET()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_BUFFER_MAP_OFFSET"
		);
	}
	inline jint GLES30::GL_BUFFER_MAP_POINTER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_BUFFER_MAP_POINTER"
		);
	}
	inline jint GLES30::GL_COLOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR"
		);
	}
	inline jint GLES30::GL_COLOR_ATTACHMENT1()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT1"
		);
	}
	inline jint GLES30::GL_COLOR_ATTACHMENT10()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT10"
		);
	}
	inline jint GLES30::GL_COLOR_ATTACHMENT11()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT11"
		);
	}
	inline jint GLES30::GL_COLOR_ATTACHMENT12()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT12"
		);
	}
	inline jint GLES30::GL_COLOR_ATTACHMENT13()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT13"
		);
	}
	inline jint GLES30::GL_COLOR_ATTACHMENT14()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT14"
		);
	}
	inline jint GLES30::GL_COLOR_ATTACHMENT15()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT15"
		);
	}
	inline jint GLES30::GL_COLOR_ATTACHMENT2()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT2"
		);
	}
	inline jint GLES30::GL_COLOR_ATTACHMENT3()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT3"
		);
	}
	inline jint GLES30::GL_COLOR_ATTACHMENT4()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT4"
		);
	}
	inline jint GLES30::GL_COLOR_ATTACHMENT5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT5"
		);
	}
	inline jint GLES30::GL_COLOR_ATTACHMENT6()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT6"
		);
	}
	inline jint GLES30::GL_COLOR_ATTACHMENT7()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT7"
		);
	}
	inline jint GLES30::GL_COLOR_ATTACHMENT8()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT8"
		);
	}
	inline jint GLES30::GL_COLOR_ATTACHMENT9()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COLOR_ATTACHMENT9"
		);
	}
	inline jint GLES30::GL_COMPARE_REF_TO_TEXTURE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COMPARE_REF_TO_TEXTURE"
		);
	}
	inline jint GLES30::GL_COMPRESSED_R11_EAC()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COMPRESSED_R11_EAC"
		);
	}
	inline jint GLES30::GL_COMPRESSED_RG11_EAC()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COMPRESSED_RG11_EAC"
		);
	}
	inline jint GLES30::GL_COMPRESSED_RGB8_ETC2()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COMPRESSED_RGB8_ETC2"
		);
	}
	inline jint GLES30::GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2"
		);
	}
	inline jint GLES30::GL_COMPRESSED_RGBA8_ETC2_EAC()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COMPRESSED_RGBA8_ETC2_EAC"
		);
	}
	inline jint GLES30::GL_COMPRESSED_SIGNED_R11_EAC()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COMPRESSED_SIGNED_R11_EAC"
		);
	}
	inline jint GLES30::GL_COMPRESSED_SIGNED_RG11_EAC()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COMPRESSED_SIGNED_RG11_EAC"
		);
	}
	inline jint GLES30::GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC"
		);
	}
	inline jint GLES30::GL_COMPRESSED_SRGB8_ETC2()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COMPRESSED_SRGB8_ETC2"
		);
	}
	inline jint GLES30::GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2"
		);
	}
	inline jint GLES30::GL_CONDITION_SATISFIED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_CONDITION_SATISFIED"
		);
	}
	inline jint GLES30::GL_COPY_READ_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COPY_READ_BUFFER"
		);
	}
	inline jint GLES30::GL_COPY_READ_BUFFER_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COPY_READ_BUFFER_BINDING"
		);
	}
	inline jint GLES30::GL_COPY_WRITE_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COPY_WRITE_BUFFER"
		);
	}
	inline jint GLES30::GL_COPY_WRITE_BUFFER_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_COPY_WRITE_BUFFER_BINDING"
		);
	}
	inline jint GLES30::GL_CURRENT_QUERY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_CURRENT_QUERY"
		);
	}
	inline jint GLES30::GL_DEPTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DEPTH"
		);
	}
	inline jint GLES30::GL_DEPTH24_STENCIL8()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DEPTH24_STENCIL8"
		);
	}
	inline jint GLES30::GL_DEPTH32F_STENCIL8()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DEPTH32F_STENCIL8"
		);
	}
	inline jint GLES30::GL_DEPTH_COMPONENT24()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DEPTH_COMPONENT24"
		);
	}
	inline jint GLES30::GL_DEPTH_COMPONENT32F()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DEPTH_COMPONENT32F"
		);
	}
	inline jint GLES30::GL_DEPTH_STENCIL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DEPTH_STENCIL"
		);
	}
	inline jint GLES30::GL_DEPTH_STENCIL_ATTACHMENT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DEPTH_STENCIL_ATTACHMENT"
		);
	}
	inline jint GLES30::GL_DRAW_BUFFER0()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER0"
		);
	}
	inline jint GLES30::GL_DRAW_BUFFER1()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER1"
		);
	}
	inline jint GLES30::GL_DRAW_BUFFER10()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER10"
		);
	}
	inline jint GLES30::GL_DRAW_BUFFER11()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER11"
		);
	}
	inline jint GLES30::GL_DRAW_BUFFER12()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER12"
		);
	}
	inline jint GLES30::GL_DRAW_BUFFER13()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER13"
		);
	}
	inline jint GLES30::GL_DRAW_BUFFER14()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER14"
		);
	}
	inline jint GLES30::GL_DRAW_BUFFER15()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER15"
		);
	}
	inline jint GLES30::GL_DRAW_BUFFER2()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER2"
		);
	}
	inline jint GLES30::GL_DRAW_BUFFER3()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER3"
		);
	}
	inline jint GLES30::GL_DRAW_BUFFER4()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER4"
		);
	}
	inline jint GLES30::GL_DRAW_BUFFER5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER5"
		);
	}
	inline jint GLES30::GL_DRAW_BUFFER6()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER6"
		);
	}
	inline jint GLES30::GL_DRAW_BUFFER7()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER7"
		);
	}
	inline jint GLES30::GL_DRAW_BUFFER8()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER8"
		);
	}
	inline jint GLES30::GL_DRAW_BUFFER9()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_BUFFER9"
		);
	}
	inline jint GLES30::GL_DRAW_FRAMEBUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_FRAMEBUFFER"
		);
	}
	inline jint GLES30::GL_DRAW_FRAMEBUFFER_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DRAW_FRAMEBUFFER_BINDING"
		);
	}
	inline jint GLES30::GL_DYNAMIC_COPY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DYNAMIC_COPY"
		);
	}
	inline jint GLES30::GL_DYNAMIC_READ()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_DYNAMIC_READ"
		);
	}
	inline jint GLES30::GL_FLOAT_32_UNSIGNED_INT_24_8_REV()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FLOAT_32_UNSIGNED_INT_24_8_REV"
		);
	}
	inline jint GLES30::GL_FLOAT_MAT2x3()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FLOAT_MAT2x3"
		);
	}
	inline jint GLES30::GL_FLOAT_MAT2x4()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FLOAT_MAT2x4"
		);
	}
	inline jint GLES30::GL_FLOAT_MAT3x2()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FLOAT_MAT3x2"
		);
	}
	inline jint GLES30::GL_FLOAT_MAT3x4()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FLOAT_MAT3x4"
		);
	}
	inline jint GLES30::GL_FLOAT_MAT4x2()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FLOAT_MAT4x2"
		);
	}
	inline jint GLES30::GL_FLOAT_MAT4x3()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FLOAT_MAT4x3"
		);
	}
	inline jint GLES30::GL_FRAGMENT_SHADER_DERIVATIVE_HINT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FRAGMENT_SHADER_DERIVATIVE_HINT"
		);
	}
	inline jint GLES30::GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE"
		);
	}
	inline jint GLES30::GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE"
		);
	}
	inline jint GLES30::GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING"
		);
	}
	inline jint GLES30::GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE"
		);
	}
	inline jint GLES30::GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE"
		);
	}
	inline jint GLES30::GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE"
		);
	}
	inline jint GLES30::GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE"
		);
	}
	inline jint GLES30::GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE"
		);
	}
	inline jint GLES30::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER"
		);
	}
	inline jint GLES30::GL_FRAMEBUFFER_DEFAULT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FRAMEBUFFER_DEFAULT"
		);
	}
	inline jint GLES30::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE"
		);
	}
	inline jint GLES30::GL_FRAMEBUFFER_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_FRAMEBUFFER_UNDEFINED"
		);
	}
	inline jint GLES30::GL_GREEN()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_GREEN"
		);
	}
	inline jint GLES30::GL_HALF_FLOAT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_HALF_FLOAT"
		);
	}
	inline jint GLES30::GL_INTERLEAVED_ATTRIBS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_INTERLEAVED_ATTRIBS"
		);
	}
	inline jint GLES30::GL_INT_2_10_10_10_REV()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_INT_2_10_10_10_REV"
		);
	}
	inline jint GLES30::GL_INT_SAMPLER_2D()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_INT_SAMPLER_2D"
		);
	}
	inline jint GLES30::GL_INT_SAMPLER_2D_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_INT_SAMPLER_2D_ARRAY"
		);
	}
	inline jint GLES30::GL_INT_SAMPLER_3D()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_INT_SAMPLER_3D"
		);
	}
	inline jint GLES30::GL_INT_SAMPLER_CUBE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_INT_SAMPLER_CUBE"
		);
	}
	inline jint GLES30::GL_INVALID_INDEX()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_INVALID_INDEX"
		);
	}
	inline jint GLES30::GL_MAJOR_VERSION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAJOR_VERSION"
		);
	}
	inline jint GLES30::GL_MAP_FLUSH_EXPLICIT_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAP_FLUSH_EXPLICIT_BIT"
		);
	}
	inline jint GLES30::GL_MAP_INVALIDATE_BUFFER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAP_INVALIDATE_BUFFER_BIT"
		);
	}
	inline jint GLES30::GL_MAP_INVALIDATE_RANGE_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAP_INVALIDATE_RANGE_BIT"
		);
	}
	inline jint GLES30::GL_MAP_READ_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAP_READ_BIT"
		);
	}
	inline jint GLES30::GL_MAP_UNSYNCHRONIZED_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAP_UNSYNCHRONIZED_BIT"
		);
	}
	inline jint GLES30::GL_MAP_WRITE_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAP_WRITE_BIT"
		);
	}
	inline jint GLES30::GL_MAX()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX"
		);
	}
	inline jint GLES30::GL_MAX_3D_TEXTURE_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_3D_TEXTURE_SIZE"
		);
	}
	inline jint GLES30::GL_MAX_ARRAY_TEXTURE_LAYERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_ARRAY_TEXTURE_LAYERS"
		);
	}
	inline jint GLES30::GL_MAX_COLOR_ATTACHMENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_COLOR_ATTACHMENTS"
		);
	}
	inline jint GLES30::GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS"
		);
	}
	inline jint GLES30::GL_MAX_COMBINED_UNIFORM_BLOCKS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_COMBINED_UNIFORM_BLOCKS"
		);
	}
	inline jint GLES30::GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS"
		);
	}
	inline jint GLES30::GL_MAX_DRAW_BUFFERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_DRAW_BUFFERS"
		);
	}
	inline jint GLES30::GL_MAX_ELEMENTS_INDICES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_ELEMENTS_INDICES"
		);
	}
	inline jint GLES30::GL_MAX_ELEMENTS_VERTICES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_ELEMENTS_VERTICES"
		);
	}
	inline jint GLES30::GL_MAX_ELEMENT_INDEX()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_ELEMENT_INDEX"
		);
	}
	inline jint GLES30::GL_MAX_FRAGMENT_INPUT_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_FRAGMENT_INPUT_COMPONENTS"
		);
	}
	inline jint GLES30::GL_MAX_FRAGMENT_UNIFORM_BLOCKS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_FRAGMENT_UNIFORM_BLOCKS"
		);
	}
	inline jint GLES30::GL_MAX_FRAGMENT_UNIFORM_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_FRAGMENT_UNIFORM_COMPONENTS"
		);
	}
	inline jint GLES30::GL_MAX_PROGRAM_TEXEL_OFFSET()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_PROGRAM_TEXEL_OFFSET"
		);
	}
	inline jint GLES30::GL_MAX_SAMPLES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_SAMPLES"
		);
	}
	inline jint GLES30::GL_MAX_SERVER_WAIT_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_SERVER_WAIT_TIMEOUT"
		);
	}
	inline jint GLES30::GL_MAX_TEXTURE_LOD_BIAS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_TEXTURE_LOD_BIAS"
		);
	}
	inline jint GLES30::GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS"
		);
	}
	inline jint GLES30::GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS"
		);
	}
	inline jint GLES30::GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS"
		);
	}
	inline jint GLES30::GL_MAX_UNIFORM_BLOCK_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_UNIFORM_BLOCK_SIZE"
		);
	}
	inline jint GLES30::GL_MAX_UNIFORM_BUFFER_BINDINGS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_UNIFORM_BUFFER_BINDINGS"
		);
	}
	inline jint GLES30::GL_MAX_VARYING_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_VARYING_COMPONENTS"
		);
	}
	inline jint GLES30::GL_MAX_VERTEX_OUTPUT_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_VERTEX_OUTPUT_COMPONENTS"
		);
	}
	inline jint GLES30::GL_MAX_VERTEX_UNIFORM_BLOCKS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_VERTEX_UNIFORM_BLOCKS"
		);
	}
	inline jint GLES30::GL_MAX_VERTEX_UNIFORM_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MAX_VERTEX_UNIFORM_COMPONENTS"
		);
	}
	inline jint GLES30::GL_MIN()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MIN"
		);
	}
	inline jint GLES30::GL_MINOR_VERSION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MINOR_VERSION"
		);
	}
	inline jint GLES30::GL_MIN_PROGRAM_TEXEL_OFFSET()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_MIN_PROGRAM_TEXEL_OFFSET"
		);
	}
	inline jint GLES30::GL_NUM_EXTENSIONS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_NUM_EXTENSIONS"
		);
	}
	inline jint GLES30::GL_NUM_PROGRAM_BINARY_FORMATS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_NUM_PROGRAM_BINARY_FORMATS"
		);
	}
	inline jint GLES30::GL_NUM_SAMPLE_COUNTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_NUM_SAMPLE_COUNTS"
		);
	}
	inline jint GLES30::GL_OBJECT_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_OBJECT_TYPE"
		);
	}
	inline jint GLES30::GL_PACK_ROW_LENGTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_PACK_ROW_LENGTH"
		);
	}
	inline jint GLES30::GL_PACK_SKIP_PIXELS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_PACK_SKIP_PIXELS"
		);
	}
	inline jint GLES30::GL_PACK_SKIP_ROWS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_PACK_SKIP_ROWS"
		);
	}
	inline jint GLES30::GL_PIXEL_PACK_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_PIXEL_PACK_BUFFER"
		);
	}
	inline jint GLES30::GL_PIXEL_PACK_BUFFER_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_PIXEL_PACK_BUFFER_BINDING"
		);
	}
	inline jint GLES30::GL_PIXEL_UNPACK_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_PIXEL_UNPACK_BUFFER"
		);
	}
	inline jint GLES30::GL_PIXEL_UNPACK_BUFFER_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_PIXEL_UNPACK_BUFFER_BINDING"
		);
	}
	inline jint GLES30::GL_PRIMITIVE_RESTART_FIXED_INDEX()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_PRIMITIVE_RESTART_FIXED_INDEX"
		);
	}
	inline jint GLES30::GL_PROGRAM_BINARY_FORMATS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_PROGRAM_BINARY_FORMATS"
		);
	}
	inline jint GLES30::GL_PROGRAM_BINARY_LENGTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_PROGRAM_BINARY_LENGTH"
		);
	}
	inline jint GLES30::GL_PROGRAM_BINARY_RETRIEVABLE_HINT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_PROGRAM_BINARY_RETRIEVABLE_HINT"
		);
	}
	inline jint GLES30::GL_QUERY_RESULT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_QUERY_RESULT"
		);
	}
	inline jint GLES30::GL_QUERY_RESULT_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_QUERY_RESULT_AVAILABLE"
		);
	}
	inline jint GLES30::GL_R11F_G11F_B10F()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_R11F_G11F_B10F"
		);
	}
	inline jint GLES30::GL_R16F()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_R16F"
		);
	}
	inline jint GLES30::GL_R16I()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_R16I"
		);
	}
	inline jint GLES30::GL_R16UI()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_R16UI"
		);
	}
	inline jint GLES30::GL_R32F()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_R32F"
		);
	}
	inline jint GLES30::GL_R32I()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_R32I"
		);
	}
	inline jint GLES30::GL_R32UI()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_R32UI"
		);
	}
	inline jint GLES30::GL_R8()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_R8"
		);
	}
	inline jint GLES30::GL_R8I()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_R8I"
		);
	}
	inline jint GLES30::GL_R8UI()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_R8UI"
		);
	}
	inline jint GLES30::GL_R8_SNORM()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_R8_SNORM"
		);
	}
	inline jint GLES30::GL_RASTERIZER_DISCARD()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RASTERIZER_DISCARD"
		);
	}
	inline jint GLES30::GL_READ_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_READ_BUFFER"
		);
	}
	inline jint GLES30::GL_READ_FRAMEBUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_READ_FRAMEBUFFER"
		);
	}
	inline jint GLES30::GL_READ_FRAMEBUFFER_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_READ_FRAMEBUFFER_BINDING"
		);
	}
	inline jint GLES30::GL_RED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RED"
		);
	}
	inline jint GLES30::GL_RED_INTEGER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RED_INTEGER"
		);
	}
	inline jint GLES30::GL_RENDERBUFFER_SAMPLES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RENDERBUFFER_SAMPLES"
		);
	}
	inline jint GLES30::GL_RG()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RG"
		);
	}
	inline jint GLES30::GL_RG16F()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RG16F"
		);
	}
	inline jint GLES30::GL_RG16I()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RG16I"
		);
	}
	inline jint GLES30::GL_RG16UI()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RG16UI"
		);
	}
	inline jint GLES30::GL_RG32F()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RG32F"
		);
	}
	inline jint GLES30::GL_RG32I()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RG32I"
		);
	}
	inline jint GLES30::GL_RG32UI()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RG32UI"
		);
	}
	inline jint GLES30::GL_RG8()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RG8"
		);
	}
	inline jint GLES30::GL_RG8I()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RG8I"
		);
	}
	inline jint GLES30::GL_RG8UI()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RG8UI"
		);
	}
	inline jint GLES30::GL_RG8_SNORM()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RG8_SNORM"
		);
	}
	inline jint GLES30::GL_RGB10_A2()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB10_A2"
		);
	}
	inline jint GLES30::GL_RGB10_A2UI()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB10_A2UI"
		);
	}
	inline jint GLES30::GL_RGB16F()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB16F"
		);
	}
	inline jint GLES30::GL_RGB16I()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB16I"
		);
	}
	inline jint GLES30::GL_RGB16UI()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB16UI"
		);
	}
	inline jint GLES30::GL_RGB32F()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB32F"
		);
	}
	inline jint GLES30::GL_RGB32I()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB32I"
		);
	}
	inline jint GLES30::GL_RGB32UI()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB32UI"
		);
	}
	inline jint GLES30::GL_RGB8()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB8"
		);
	}
	inline jint GLES30::GL_RGB8I()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB8I"
		);
	}
	inline jint GLES30::GL_RGB8UI()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB8UI"
		);
	}
	inline jint GLES30::GL_RGB8_SNORM()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB8_SNORM"
		);
	}
	inline jint GLES30::GL_RGB9_E5()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB9_E5"
		);
	}
	inline jint GLES30::GL_RGBA16F()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGBA16F"
		);
	}
	inline jint GLES30::GL_RGBA16I()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGBA16I"
		);
	}
	inline jint GLES30::GL_RGBA16UI()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGBA16UI"
		);
	}
	inline jint GLES30::GL_RGBA32F()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGBA32F"
		);
	}
	inline jint GLES30::GL_RGBA32I()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGBA32I"
		);
	}
	inline jint GLES30::GL_RGBA32UI()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGBA32UI"
		);
	}
	inline jint GLES30::GL_RGBA8()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGBA8"
		);
	}
	inline jint GLES30::GL_RGBA8I()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGBA8I"
		);
	}
	inline jint GLES30::GL_RGBA8UI()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGBA8UI"
		);
	}
	inline jint GLES30::GL_RGBA8_SNORM()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGBA8_SNORM"
		);
	}
	inline jint GLES30::GL_RGBA_INTEGER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGBA_INTEGER"
		);
	}
	inline jint GLES30::GL_RGB_INTEGER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RGB_INTEGER"
		);
	}
	inline jint GLES30::GL_RG_INTEGER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_RG_INTEGER"
		);
	}
	inline jint GLES30::GL_SAMPLER_2D_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SAMPLER_2D_ARRAY"
		);
	}
	inline jint GLES30::GL_SAMPLER_2D_ARRAY_SHADOW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SAMPLER_2D_ARRAY_SHADOW"
		);
	}
	inline jint GLES30::GL_SAMPLER_2D_SHADOW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SAMPLER_2D_SHADOW"
		);
	}
	inline jint GLES30::GL_SAMPLER_3D()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SAMPLER_3D"
		);
	}
	inline jint GLES30::GL_SAMPLER_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SAMPLER_BINDING"
		);
	}
	inline jint GLES30::GL_SAMPLER_CUBE_SHADOW()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SAMPLER_CUBE_SHADOW"
		);
	}
	inline jint GLES30::GL_SEPARATE_ATTRIBS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SEPARATE_ATTRIBS"
		);
	}
	inline jint GLES30::GL_SIGNALED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SIGNALED"
		);
	}
	inline jint GLES30::GL_SIGNED_NORMALIZED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SIGNED_NORMALIZED"
		);
	}
	inline jint GLES30::GL_SRGB()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SRGB"
		);
	}
	inline jint GLES30::GL_SRGB8()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SRGB8"
		);
	}
	inline jint GLES30::GL_SRGB8_ALPHA8()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SRGB8_ALPHA8"
		);
	}
	inline jint GLES30::GL_STATIC_COPY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_STATIC_COPY"
		);
	}
	inline jint GLES30::GL_STATIC_READ()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_STATIC_READ"
		);
	}
	inline jint GLES30::GL_STENCIL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_STENCIL"
		);
	}
	inline jint GLES30::GL_STREAM_COPY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_STREAM_COPY"
		);
	}
	inline jint GLES30::GL_STREAM_READ()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_STREAM_READ"
		);
	}
	inline jint GLES30::GL_SYNC_CONDITION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SYNC_CONDITION"
		);
	}
	inline jint GLES30::GL_SYNC_FENCE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SYNC_FENCE"
		);
	}
	inline jint GLES30::GL_SYNC_FLAGS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SYNC_FLAGS"
		);
	}
	inline jint GLES30::GL_SYNC_FLUSH_COMMANDS_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SYNC_FLUSH_COMMANDS_BIT"
		);
	}
	inline jint GLES30::GL_SYNC_GPU_COMMANDS_COMPLETE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SYNC_GPU_COMMANDS_COMPLETE"
		);
	}
	inline jint GLES30::GL_SYNC_STATUS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_SYNC_STATUS"
		);
	}
	inline jint GLES30::GL_TEXTURE_2D_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_2D_ARRAY"
		);
	}
	inline jint GLES30::GL_TEXTURE_3D()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_3D"
		);
	}
	inline jint GLES30::GL_TEXTURE_BASE_LEVEL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_BASE_LEVEL"
		);
	}
	inline jint GLES30::GL_TEXTURE_BINDING_2D_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_BINDING_2D_ARRAY"
		);
	}
	inline jint GLES30::GL_TEXTURE_BINDING_3D()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_BINDING_3D"
		);
	}
	inline jint GLES30::GL_TEXTURE_COMPARE_FUNC()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_COMPARE_FUNC"
		);
	}
	inline jint GLES30::GL_TEXTURE_COMPARE_MODE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_COMPARE_MODE"
		);
	}
	inline jint GLES30::GL_TEXTURE_IMMUTABLE_FORMAT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_IMMUTABLE_FORMAT"
		);
	}
	inline jint GLES30::GL_TEXTURE_IMMUTABLE_LEVELS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_IMMUTABLE_LEVELS"
		);
	}
	inline jint GLES30::GL_TEXTURE_MAX_LEVEL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_MAX_LEVEL"
		);
	}
	inline jint GLES30::GL_TEXTURE_MAX_LOD()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_MAX_LOD"
		);
	}
	inline jint GLES30::GL_TEXTURE_MIN_LOD()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_MIN_LOD"
		);
	}
	inline jint GLES30::GL_TEXTURE_SWIZZLE_A()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_SWIZZLE_A"
		);
	}
	inline jint GLES30::GL_TEXTURE_SWIZZLE_B()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_SWIZZLE_B"
		);
	}
	inline jint GLES30::GL_TEXTURE_SWIZZLE_G()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_SWIZZLE_G"
		);
	}
	inline jint GLES30::GL_TEXTURE_SWIZZLE_R()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_SWIZZLE_R"
		);
	}
	inline jint GLES30::GL_TEXTURE_WRAP_R()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TEXTURE_WRAP_R"
		);
	}
	inline jint GLES30::GL_TIMEOUT_EXPIRED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TIMEOUT_EXPIRED"
		);
	}
	inline jlong GLES30::GL_TIMEOUT_IGNORED()
	{
		return getStaticField<jlong>(
			"android.opengl.GLES30",
			"GL_TIMEOUT_IGNORED"
		);
	}
	inline jint GLES30::GL_TRANSFORM_FEEDBACK()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TRANSFORM_FEEDBACK"
		);
	}
	inline jint GLES30::GL_TRANSFORM_FEEDBACK_ACTIVE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TRANSFORM_FEEDBACK_ACTIVE"
		);
	}
	inline jint GLES30::GL_TRANSFORM_FEEDBACK_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TRANSFORM_FEEDBACK_BINDING"
		);
	}
	inline jint GLES30::GL_TRANSFORM_FEEDBACK_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TRANSFORM_FEEDBACK_BUFFER"
		);
	}
	inline jint GLES30::GL_TRANSFORM_FEEDBACK_BUFFER_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TRANSFORM_FEEDBACK_BUFFER_BINDING"
		);
	}
	inline jint GLES30::GL_TRANSFORM_FEEDBACK_BUFFER_MODE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TRANSFORM_FEEDBACK_BUFFER_MODE"
		);
	}
	inline jint GLES30::GL_TRANSFORM_FEEDBACK_BUFFER_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TRANSFORM_FEEDBACK_BUFFER_SIZE"
		);
	}
	inline jint GLES30::GL_TRANSFORM_FEEDBACK_BUFFER_START()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TRANSFORM_FEEDBACK_BUFFER_START"
		);
	}
	inline jint GLES30::GL_TRANSFORM_FEEDBACK_PAUSED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TRANSFORM_FEEDBACK_PAUSED"
		);
	}
	inline jint GLES30::GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN"
		);
	}
	inline jint GLES30::GL_TRANSFORM_FEEDBACK_VARYINGS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TRANSFORM_FEEDBACK_VARYINGS"
		);
	}
	inline jint GLES30::GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH"
		);
	}
	inline jint GLES30::GL_UNIFORM_ARRAY_STRIDE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_ARRAY_STRIDE"
		);
	}
	inline jint GLES30::GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS"
		);
	}
	inline jint GLES30::GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES"
		);
	}
	inline jint GLES30::GL_UNIFORM_BLOCK_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_BLOCK_BINDING"
		);
	}
	inline jint GLES30::GL_UNIFORM_BLOCK_DATA_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_BLOCK_DATA_SIZE"
		);
	}
	inline jint GLES30::GL_UNIFORM_BLOCK_INDEX()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_BLOCK_INDEX"
		);
	}
	inline jint GLES30::GL_UNIFORM_BLOCK_NAME_LENGTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_BLOCK_NAME_LENGTH"
		);
	}
	inline jint GLES30::GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER"
		);
	}
	inline jint GLES30::GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER"
		);
	}
	inline jint GLES30::GL_UNIFORM_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_BUFFER"
		);
	}
	inline jint GLES30::GL_UNIFORM_BUFFER_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_BUFFER_BINDING"
		);
	}
	inline jint GLES30::GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT"
		);
	}
	inline jint GLES30::GL_UNIFORM_BUFFER_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_BUFFER_SIZE"
		);
	}
	inline jint GLES30::GL_UNIFORM_BUFFER_START()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_BUFFER_START"
		);
	}
	inline jint GLES30::GL_UNIFORM_IS_ROW_MAJOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_IS_ROW_MAJOR"
		);
	}
	inline jint GLES30::GL_UNIFORM_MATRIX_STRIDE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_MATRIX_STRIDE"
		);
	}
	inline jint GLES30::GL_UNIFORM_NAME_LENGTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_NAME_LENGTH"
		);
	}
	inline jint GLES30::GL_UNIFORM_OFFSET()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_OFFSET"
		);
	}
	inline jint GLES30::GL_UNIFORM_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_SIZE"
		);
	}
	inline jint GLES30::GL_UNIFORM_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNIFORM_TYPE"
		);
	}
	inline jint GLES30::GL_UNPACK_IMAGE_HEIGHT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNPACK_IMAGE_HEIGHT"
		);
	}
	inline jint GLES30::GL_UNPACK_ROW_LENGTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNPACK_ROW_LENGTH"
		);
	}
	inline jint GLES30::GL_UNPACK_SKIP_IMAGES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNPACK_SKIP_IMAGES"
		);
	}
	inline jint GLES30::GL_UNPACK_SKIP_PIXELS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNPACK_SKIP_PIXELS"
		);
	}
	inline jint GLES30::GL_UNPACK_SKIP_ROWS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNPACK_SKIP_ROWS"
		);
	}
	inline jint GLES30::GL_UNSIGNALED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNSIGNALED"
		);
	}
	inline jint GLES30::GL_UNSIGNED_INT_10F_11F_11F_REV()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNSIGNED_INT_10F_11F_11F_REV"
		);
	}
	inline jint GLES30::GL_UNSIGNED_INT_24_8()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNSIGNED_INT_24_8"
		);
	}
	inline jint GLES30::GL_UNSIGNED_INT_2_10_10_10_REV()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNSIGNED_INT_2_10_10_10_REV"
		);
	}
	inline jint GLES30::GL_UNSIGNED_INT_5_9_9_9_REV()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNSIGNED_INT_5_9_9_9_REV"
		);
	}
	inline jint GLES30::GL_UNSIGNED_INT_SAMPLER_2D()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNSIGNED_INT_SAMPLER_2D"
		);
	}
	inline jint GLES30::GL_UNSIGNED_INT_SAMPLER_2D_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNSIGNED_INT_SAMPLER_2D_ARRAY"
		);
	}
	inline jint GLES30::GL_UNSIGNED_INT_SAMPLER_3D()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNSIGNED_INT_SAMPLER_3D"
		);
	}
	inline jint GLES30::GL_UNSIGNED_INT_SAMPLER_CUBE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNSIGNED_INT_SAMPLER_CUBE"
		);
	}
	inline jint GLES30::GL_UNSIGNED_INT_VEC2()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNSIGNED_INT_VEC2"
		);
	}
	inline jint GLES30::GL_UNSIGNED_INT_VEC3()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNSIGNED_INT_VEC3"
		);
	}
	inline jint GLES30::GL_UNSIGNED_INT_VEC4()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNSIGNED_INT_VEC4"
		);
	}
	inline jint GLES30::GL_UNSIGNED_NORMALIZED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_UNSIGNED_NORMALIZED"
		);
	}
	inline jint GLES30::GL_VERTEX_ARRAY_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_VERTEX_ARRAY_BINDING"
		);
	}
	inline jint GLES30::GL_VERTEX_ATTRIB_ARRAY_DIVISOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_VERTEX_ATTRIB_ARRAY_DIVISOR"
		);
	}
	inline jint GLES30::GL_VERTEX_ATTRIB_ARRAY_INTEGER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_VERTEX_ATTRIB_ARRAY_INTEGER"
		);
	}
	inline jint GLES30::GL_WAIT_FAILED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES30",
			"GL_WAIT_FAILED"
		);
	}
	
	// Constructors
	inline GLES30::GLES30()
		: android::opengl::GLES20(
			"android.opengl.GLES30",
			"()V"
		) {}
	
	// Methods
	inline void GLES30::glBeginQuery(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glBeginQuery",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void GLES30::glBeginTransformFeedback(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glBeginTransformFeedback",
			"(I)V",
			arg0
		);
	}
	inline void GLES30::glBindBufferBase(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glBindBufferBase",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void GLES30::glBindBufferRange(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glBindBufferRange",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void GLES30::glBindSampler(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glBindSampler",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void GLES30::glBindTransformFeedback(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glBindTransformFeedback",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void GLES30::glBindVertexArray(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glBindVertexArray",
			"(I)V",
			arg0
		);
	}
	inline void GLES30::glBlitFramebuffer(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9)
	{
		callStaticMethod<void>(
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
			arg9
		);
	}
	inline void GLES30::glClearBufferfi(jint arg0, jint arg1, jfloat arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glClearBufferfi",
			"(IIFI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void GLES30::glClearBufferfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glClearBufferfv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void GLES30::glClearBufferfv(jint arg0, jint arg1, JFloatArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glClearBufferfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>(),
			arg3
		);
	}
	inline void GLES30::glClearBufferiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glClearBufferiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void GLES30::glClearBufferiv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glClearBufferiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline void GLES30::glClearBufferuiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glClearBufferuiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void GLES30::glClearBufferuiv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glClearBufferuiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline jint GLES30::glClientWaitSync(jlong arg0, jint arg1, jlong arg2)
	{
		return callStaticMethod<jint>(
			"android.opengl.GLES30",
			"glClientWaitSync",
			"(JIJ)I",
			arg0,
			arg1,
			arg2
		);
	}
	inline void GLES30::glCompressedTexImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8)
	{
		callStaticMethod<void>(
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
			arg8
		);
	}
	inline void GLES30::glCompressedTexImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, java::nio::Buffer arg8)
	{
		callStaticMethod<void>(
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
			arg8.object()
		);
	}
	inline void GLES30::glCompressedTexSubImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10)
	{
		callStaticMethod<void>(
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
			arg10
		);
	}
	inline void GLES30::glCompressedTexSubImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, java::nio::Buffer arg10)
	{
		callStaticMethod<void>(
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
			arg10.object()
		);
	}
	inline void GLES30::glCopyBufferSubData(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glCopyBufferSubData",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void GLES30::glCopyTexSubImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8)
	{
		callStaticMethod<void>(
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
			arg8
		);
	}
	inline void GLES30::glDeleteQueries(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDeleteQueries",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	inline void GLES30::glDeleteQueries(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDeleteQueries",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	inline void GLES30::glDeleteSamplers(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDeleteSamplers",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	inline void GLES30::glDeleteSamplers(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDeleteSamplers",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	inline void GLES30::glDeleteSync(jlong arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDeleteSync",
			"(J)V",
			arg0
		);
	}
	inline void GLES30::glDeleteTransformFeedbacks(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDeleteTransformFeedbacks",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	inline void GLES30::glDeleteTransformFeedbacks(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDeleteTransformFeedbacks",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	inline void GLES30::glDeleteVertexArrays(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDeleteVertexArrays",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	inline void GLES30::glDeleteVertexArrays(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDeleteVertexArrays",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	inline void GLES30::glDrawArraysInstanced(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDrawArraysInstanced",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void GLES30::glDrawBuffers(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDrawBuffers",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	inline void GLES30::glDrawBuffers(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDrawBuffers",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	inline void GLES30::glDrawElementsInstanced(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDrawElementsInstanced",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void GLES30::glDrawElementsInstanced(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDrawElementsInstanced",
			"(IIILjava/nio/Buffer;I)V",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4
		);
	}
	inline void GLES30::glDrawRangeElements(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDrawRangeElements",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	inline void GLES30::glDrawRangeElements(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, java::nio::Buffer arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glDrawRangeElements",
			"(IIIIILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	inline void GLES30::glEndQuery(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glEndQuery",
			"(I)V",
			arg0
		);
	}
	inline void GLES30::glEndTransformFeedback()
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glEndTransformFeedback",
			"()V"
		);
	}
	inline jlong GLES30::glFenceSync(jint arg0, jint arg1)
	{
		return callStaticMethod<jlong>(
			"android.opengl.GLES30",
			"glFenceSync",
			"(II)J",
			arg0,
			arg1
		);
	}
	inline void GLES30::glFlushMappedBufferRange(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glFlushMappedBufferRange",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void GLES30::glFramebufferTextureLayer(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glFramebufferTextureLayer",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void GLES30::glGenQueries(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGenQueries",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	inline void GLES30::glGenQueries(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGenQueries",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	inline void GLES30::glGenSamplers(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGenSamplers",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	inline void GLES30::glGenSamplers(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGenSamplers",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	inline void GLES30::glGenTransformFeedbacks(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGenTransformFeedbacks",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	inline void GLES30::glGenTransformFeedbacks(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGenTransformFeedbacks",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	inline void GLES30::glGenVertexArrays(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGenVertexArrays",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	inline void GLES30::glGenVertexArrays(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGenVertexArrays",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	inline JString GLES30::glGetActiveUniformBlockName(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.opengl.GLES30",
			"glGetActiveUniformBlockName",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	inline void GLES30::glGetActiveUniformBlockName(jint arg0, jint arg1, java::nio::Buffer arg2, java::nio::Buffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetActiveUniformBlockName",
			"(IILjava/nio/Buffer;Ljava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	inline void GLES30::glGetActiveUniformBlockName(jint arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4, JByteArray arg5, jint arg6)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetActiveUniformBlockName",
			"(III[II[BI)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jintArray>(),
			arg4,
			arg5.object<jbyteArray>(),
			arg6
		);
	}
	inline void GLES30::glGetActiveUniformBlockiv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetActiveUniformBlockiv",
			"(IIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline void GLES30::glGetActiveUniformBlockiv(jint arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetActiveUniformBlockiv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jintArray>(),
			arg4
		);
	}
	inline void GLES30::glGetActiveUniformsiv(jint arg0, jint arg1, java::nio::IntBuffer arg2, jint arg3, java::nio::IntBuffer arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetActiveUniformsiv",
			"(IILjava/nio/IntBuffer;ILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3,
			arg4.object()
		);
	}
	inline void GLES30::glGetActiveUniformsiv(jint arg0, jint arg1, JIntArray arg2, jint arg3, jint arg4, JIntArray arg5, jint arg6)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetActiveUniformsiv",
			"(II[III[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3,
			arg4,
			arg5.object<jintArray>(),
			arg6
		);
	}
	inline void GLES30::glGetBufferParameteri64v(jint arg0, jint arg1, java::nio::LongBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetBufferParameteri64v",
			"(IILjava/nio/LongBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void GLES30::glGetBufferParameteri64v(jint arg0, jint arg1, JLongArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetBufferParameteri64v",
			"(II[JI)V",
			arg0,
			arg1,
			arg2.object<jlongArray>(),
			arg3
		);
	}
	inline java::nio::Buffer GLES30::glGetBufferPointerv(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.opengl.GLES30",
			"glGetBufferPointerv",
			"(II)Ljava/nio/Buffer;",
			arg0,
			arg1
		);
	}
	inline jint GLES30::glGetFragDataLocation(jint arg0, JString arg1)
	{
		return callStaticMethod<jint>(
			"android.opengl.GLES30",
			"glGetFragDataLocation",
			"(ILjava/lang/String;)I",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void GLES30::glGetInteger64i_v(jint arg0, jint arg1, java::nio::LongBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetInteger64i_v",
			"(IILjava/nio/LongBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void GLES30::glGetInteger64i_v(jint arg0, jint arg1, JLongArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetInteger64i_v",
			"(II[JI)V",
			arg0,
			arg1,
			arg2.object<jlongArray>(),
			arg3
		);
	}
	inline void GLES30::glGetInteger64v(jint arg0, java::nio::LongBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetInteger64v",
			"(ILjava/nio/LongBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	inline void GLES30::glGetInteger64v(jint arg0, JLongArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetInteger64v",
			"(I[JI)V",
			arg0,
			arg1.object<jlongArray>(),
			arg2
		);
	}
	inline void GLES30::glGetIntegeri_v(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetIntegeri_v",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void GLES30::glGetIntegeri_v(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetIntegeri_v",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline void GLES30::glGetInternalformativ(jint arg0, jint arg1, jint arg2, jint arg3, java::nio::IntBuffer arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetInternalformativ",
			"(IIIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	inline void GLES30::glGetInternalformativ(jint arg0, jint arg1, jint arg2, jint arg3, JIntArray arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetInternalformativ",
			"(IIII[II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jintArray>(),
			arg5
		);
	}
	inline void GLES30::glGetProgramBinary(jint arg0, jint arg1, java::nio::IntBuffer arg2, java::nio::IntBuffer arg3, java::nio::Buffer arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetProgramBinary",
			"(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	inline void GLES30::glGetProgramBinary(jint arg0, jint arg1, JIntArray arg2, jint arg3, JIntArray arg4, jint arg5, java::nio::Buffer arg6)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetProgramBinary",
			"(II[II[IILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3,
			arg4.object<jintArray>(),
			arg5,
			arg6.object()
		);
	}
	inline void GLES30::glGetQueryObjectuiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetQueryObjectuiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void GLES30::glGetQueryObjectuiv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetQueryObjectuiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline void GLES30::glGetQueryiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetQueryiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void GLES30::glGetQueryiv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetQueryiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline void GLES30::glGetSamplerParameterfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetSamplerParameterfv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void GLES30::glGetSamplerParameterfv(jint arg0, jint arg1, JFloatArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetSamplerParameterfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>(),
			arg3
		);
	}
	inline void GLES30::glGetSamplerParameteriv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetSamplerParameteriv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void GLES30::glGetSamplerParameteriv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetSamplerParameteriv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline JString GLES30::glGetStringi(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.opengl.GLES30",
			"glGetStringi",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	inline void GLES30::glGetSynciv(jlong arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3, java::nio::IntBuffer arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetSynciv",
			"(JIILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4.object()
		);
	}
	inline void GLES30::glGetSynciv(jlong arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4, JIntArray arg5, jint arg6)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetSynciv",
			"(JII[II[II)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jintArray>(),
			arg4,
			arg5.object<jintArray>(),
			arg6
		);
	}
	inline JString GLES30::glGetTransformFeedbackVarying(jint arg0, jint arg1, java::nio::IntBuffer arg2, java::nio::IntBuffer arg3)
	{
		return callStaticObjectMethod(
			"android.opengl.GLES30",
			"glGetTransformFeedbackVarying",
			"(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	inline JString GLES30::glGetTransformFeedbackVarying(jint arg0, jint arg1, JIntArray arg2, jint arg3, JIntArray arg4, jint arg5)
	{
		return callStaticObjectMethod(
			"android.opengl.GLES30",
			"glGetTransformFeedbackVarying",
			"(II[II[II)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3,
			arg4.object<jintArray>(),
			arg5
		);
	}
	inline void GLES30::glGetTransformFeedbackVarying(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3, java::nio::IntBuffer arg4, java::nio::IntBuffer arg5, jbyte arg6)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetTransformFeedbackVarying",
			"(IIILjava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;B)V",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4.object(),
			arg5.object(),
			arg6
		);
	}
	inline void GLES30::glGetTransformFeedbackVarying(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3, java::nio::IntBuffer arg4, java::nio::IntBuffer arg5, java::nio::ByteBuffer arg6)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetTransformFeedbackVarying",
			"(IIILjava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;Ljava/nio/ByteBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4.object(),
			arg5.object(),
			arg6.object()
		);
	}
	inline void GLES30::glGetTransformFeedbackVarying(jint arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4, JIntArray arg5, jint arg6, JIntArray arg7, jint arg8, JByteArray arg9, jint arg10)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetTransformFeedbackVarying",
			"(III[II[II[II[BI)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jintArray>(),
			arg4,
			arg5.object<jintArray>(),
			arg6,
			arg7.object<jintArray>(),
			arg8,
			arg9.object<jbyteArray>(),
			arg10
		);
	}
	inline jint GLES30::glGetUniformBlockIndex(jint arg0, JString arg1)
	{
		return callStaticMethod<jint>(
			"android.opengl.GLES30",
			"glGetUniformBlockIndex",
			"(ILjava/lang/String;)I",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void GLES30::glGetUniformIndices(jint arg0, JArray arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetUniformIndices",
			"(I[Ljava/lang/String;Ljava/nio/IntBuffer;)V",
			arg0,
			arg1.object<jarray>(),
			arg2.object()
		);
	}
	inline void GLES30::glGetUniformIndices(jint arg0, JArray arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetUniformIndices",
			"(I[Ljava/lang/String;[II)V",
			arg0,
			arg1.object<jarray>(),
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline void GLES30::glGetUniformuiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetUniformuiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void GLES30::glGetUniformuiv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetUniformuiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline void GLES30::glGetVertexAttribIiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetVertexAttribIiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void GLES30::glGetVertexAttribIiv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetVertexAttribIiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline void GLES30::glGetVertexAttribIuiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetVertexAttribIuiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void GLES30::glGetVertexAttribIuiv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glGetVertexAttribIuiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline void GLES30::glInvalidateFramebuffer(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glInvalidateFramebuffer",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void GLES30::glInvalidateFramebuffer(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glInvalidateFramebuffer",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline void GLES30::glInvalidateSubFramebuffer(jint arg0, jint arg1, java::nio::IntBuffer arg2, jint arg3, jint arg4, jint arg5, jint arg6)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glInvalidateSubFramebuffer",
			"(IILjava/nio/IntBuffer;IIII)V",
			arg0,
			arg1,
			arg2.object(),
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	inline void GLES30::glInvalidateSubFramebuffer(jint arg0, jint arg1, JIntArray arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glInvalidateSubFramebuffer",
			"(II[IIIIII)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		);
	}
	inline jboolean GLES30::glIsQuery(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.GLES30",
			"glIsQuery",
			"(I)Z",
			arg0
		);
	}
	inline jboolean GLES30::glIsSampler(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.GLES30",
			"glIsSampler",
			"(I)Z",
			arg0
		);
	}
	inline jboolean GLES30::glIsSync(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.GLES30",
			"glIsSync",
			"(J)Z",
			arg0
		);
	}
	inline jboolean GLES30::glIsTransformFeedback(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.GLES30",
			"glIsTransformFeedback",
			"(I)Z",
			arg0
		);
	}
	inline jboolean GLES30::glIsVertexArray(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.GLES30",
			"glIsVertexArray",
			"(I)Z",
			arg0
		);
	}
	inline java::nio::Buffer GLES30::glMapBufferRange(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.opengl.GLES30",
			"glMapBufferRange",
			"(IIII)Ljava/nio/Buffer;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void GLES30::glPauseTransformFeedback()
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glPauseTransformFeedback",
			"()V"
		);
	}
	inline void GLES30::glProgramBinary(jint arg0, jint arg1, java::nio::Buffer arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glProgramBinary",
			"(IILjava/nio/Buffer;I)V",
			arg0,
			arg1,
			arg2.object(),
			arg3
		);
	}
	inline void GLES30::glProgramParameteri(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glProgramParameteri",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void GLES30::glReadBuffer(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glReadBuffer",
			"(I)V",
			arg0
		);
	}
	inline void GLES30::glReadPixels(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glReadPixels",
			"(IIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	inline void GLES30::glRenderbufferStorageMultisample(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glRenderbufferStorageMultisample",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void GLES30::glResumeTransformFeedback()
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glResumeTransformFeedback",
			"()V"
		);
	}
	inline void GLES30::glSamplerParameterf(jint arg0, jint arg1, jfloat arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glSamplerParameterf",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void GLES30::glSamplerParameterfv(jint arg0, jint arg1, java::nio::FloatBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glSamplerParameterfv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void GLES30::glSamplerParameterfv(jint arg0, jint arg1, JFloatArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glSamplerParameterfv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>(),
			arg3
		);
	}
	inline void GLES30::glSamplerParameteri(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glSamplerParameteri",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void GLES30::glSamplerParameteriv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glSamplerParameteriv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void GLES30::glSamplerParameteriv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glSamplerParameteriv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline void GLES30::glTexImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9)
	{
		callStaticMethod<void>(
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
			arg9
		);
	}
	inline void GLES30::glTexImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, java::nio::Buffer arg9)
	{
		callStaticMethod<void>(
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
			arg9.object()
		);
	}
	inline void GLES30::glTexStorage2D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glTexStorage2D",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void GLES30::glTexStorage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glTexStorage3D",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	inline void GLES30::glTexSubImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10)
	{
		callStaticMethod<void>(
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
			arg10
		);
	}
	inline void GLES30::glTexSubImage3D(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, java::nio::Buffer arg10)
	{
		callStaticMethod<void>(
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
			arg10.object()
		);
	}
	inline void GLES30::glTransformFeedbackVaryings(jint arg0, JArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glTransformFeedbackVaryings",
			"(I[Ljava/lang/String;I)V",
			arg0,
			arg1.object<jarray>(),
			arg2
		);
	}
	inline void GLES30::glUniform1ui(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniform1ui",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void GLES30::glUniform1uiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniform1uiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void GLES30::glUniform1uiv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniform1uiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline void GLES30::glUniform2ui(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniform2ui",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void GLES30::glUniform2uiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniform2uiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void GLES30::glUniform2uiv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniform2uiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline void GLES30::glUniform3ui(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniform3ui",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void GLES30::glUniform3uiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniform3uiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void GLES30::glUniform3uiv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniform3uiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline void GLES30::glUniform4ui(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniform4ui",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void GLES30::glUniform4uiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniform4uiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void GLES30::glUniform4uiv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniform4uiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	inline void GLES30::glUniformBlockBinding(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniformBlockBinding",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void GLES30::glUniformMatrix2x3fv(jint arg0, jint arg1, jboolean arg2, java::nio::FloatBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniformMatrix2x3fv",
			"(IIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline void GLES30::glUniformMatrix2x3fv(jint arg0, jint arg1, jboolean arg2, JFloatArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniformMatrix2x3fv",
			"(IIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jfloatArray>(),
			arg4
		);
	}
	inline void GLES30::glUniformMatrix2x4fv(jint arg0, jint arg1, jboolean arg2, java::nio::FloatBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniformMatrix2x4fv",
			"(IIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline void GLES30::glUniformMatrix2x4fv(jint arg0, jint arg1, jboolean arg2, JFloatArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniformMatrix2x4fv",
			"(IIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jfloatArray>(),
			arg4
		);
	}
	inline void GLES30::glUniformMatrix3x2fv(jint arg0, jint arg1, jboolean arg2, java::nio::FloatBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniformMatrix3x2fv",
			"(IIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline void GLES30::glUniformMatrix3x2fv(jint arg0, jint arg1, jboolean arg2, JFloatArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniformMatrix3x2fv",
			"(IIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jfloatArray>(),
			arg4
		);
	}
	inline void GLES30::glUniformMatrix3x4fv(jint arg0, jint arg1, jboolean arg2, java::nio::FloatBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniformMatrix3x4fv",
			"(IIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline void GLES30::glUniformMatrix3x4fv(jint arg0, jint arg1, jboolean arg2, JFloatArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniformMatrix3x4fv",
			"(IIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jfloatArray>(),
			arg4
		);
	}
	inline void GLES30::glUniformMatrix4x2fv(jint arg0, jint arg1, jboolean arg2, java::nio::FloatBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniformMatrix4x2fv",
			"(IIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline void GLES30::glUniformMatrix4x2fv(jint arg0, jint arg1, jboolean arg2, JFloatArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniformMatrix4x2fv",
			"(IIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jfloatArray>(),
			arg4
		);
	}
	inline void GLES30::glUniformMatrix4x3fv(jint arg0, jint arg1, jboolean arg2, java::nio::FloatBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniformMatrix4x3fv",
			"(IIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline void GLES30::glUniformMatrix4x3fv(jint arg0, jint arg1, jboolean arg2, JFloatArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glUniformMatrix4x3fv",
			"(IIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jfloatArray>(),
			arg4
		);
	}
	inline jboolean GLES30::glUnmapBuffer(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.GLES30",
			"glUnmapBuffer",
			"(I)Z",
			arg0
		);
	}
	inline void GLES30::glVertexAttribDivisor(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glVertexAttribDivisor",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void GLES30::glVertexAttribI4i(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glVertexAttribI4i",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void GLES30::glVertexAttribI4iv(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glVertexAttribI4iv",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	inline void GLES30::glVertexAttribI4iv(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glVertexAttribI4iv",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	inline void GLES30::glVertexAttribI4ui(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glVertexAttribI4ui",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void GLES30::glVertexAttribI4uiv(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glVertexAttribI4uiv",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	inline void GLES30::glVertexAttribI4uiv(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glVertexAttribI4uiv",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	inline void GLES30::glVertexAttribIPointer(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glVertexAttribIPointer",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void GLES30::glVertexAttribIPointer(jint arg0, jint arg1, jint arg2, jint arg3, java::nio::Buffer arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glVertexAttribIPointer",
			"(IIIILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	inline void GLES30::glWaitSync(jlong arg0, jint arg1, jlong arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES30",
			"glWaitSync",
			"(JIJ)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace android::opengl

// Base class headers
#include "./GLES20.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::opengl;
#endif
