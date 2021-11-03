#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JShortArray.hpp"
#include "../../java/nio/Buffer.hpp"
#include "../../java/nio/FloatBuffer.hpp"
#include "../../java/nio/IntBuffer.hpp"
#include "../../java/nio/ShortBuffer.hpp"
#include "./GLES11Ext.hpp"

namespace android::opengl
{
	// Fields
	jint GLES11Ext::GL_3DC_XY_AMD()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_3DC_XY_AMD"
		);
	}
	jint GLES11Ext::GL_3DC_X_AMD()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_3DC_X_AMD"
		);
	}
	jint GLES11Ext::GL_ATC_RGBA_EXPLICIT_ALPHA_AMD()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_ATC_RGBA_EXPLICIT_ALPHA_AMD"
		);
	}
	jint GLES11Ext::GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD"
		);
	}
	jint GLES11Ext::GL_ATC_RGB_AMD()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_ATC_RGB_AMD"
		);
	}
	jint GLES11Ext::GL_BGRA()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_BGRA"
		);
	}
	jint GLES11Ext::GL_BLEND_DST_ALPHA_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_BLEND_DST_ALPHA_OES"
		);
	}
	jint GLES11Ext::GL_BLEND_DST_RGB_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_BLEND_DST_RGB_OES"
		);
	}
	jint GLES11Ext::GL_BLEND_EQUATION_ALPHA_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_BLEND_EQUATION_ALPHA_OES"
		);
	}
	jint GLES11Ext::GL_BLEND_EQUATION_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_BLEND_EQUATION_OES"
		);
	}
	jint GLES11Ext::GL_BLEND_EQUATION_RGB_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_BLEND_EQUATION_RGB_OES"
		);
	}
	jint GLES11Ext::GL_BLEND_SRC_ALPHA_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_BLEND_SRC_ALPHA_OES"
		);
	}
	jint GLES11Ext::GL_BLEND_SRC_RGB_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_BLEND_SRC_RGB_OES"
		);
	}
	jint GLES11Ext::GL_BUFFER_ACCESS_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_BUFFER_ACCESS_OES"
		);
	}
	jint GLES11Ext::GL_BUFFER_MAPPED_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_BUFFER_MAPPED_OES"
		);
	}
	jint GLES11Ext::GL_BUFFER_MAP_POINTER_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_BUFFER_MAP_POINTER_OES"
		);
	}
	jint GLES11Ext::GL_COLOR_ATTACHMENT0_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_COLOR_ATTACHMENT0_OES"
		);
	}
	jint GLES11Ext::GL_CURRENT_PALETTE_MATRIX_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_CURRENT_PALETTE_MATRIX_OES"
		);
	}
	jint GLES11Ext::GL_DECR_WRAP_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_DECR_WRAP_OES"
		);
	}
	jint GLES11Ext::GL_DEPTH24_STENCIL8_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_DEPTH24_STENCIL8_OES"
		);
	}
	jint GLES11Ext::GL_DEPTH_ATTACHMENT_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_DEPTH_ATTACHMENT_OES"
		);
	}
	jint GLES11Ext::GL_DEPTH_COMPONENT16_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_DEPTH_COMPONENT16_OES"
		);
	}
	jint GLES11Ext::GL_DEPTH_COMPONENT24_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_DEPTH_COMPONENT24_OES"
		);
	}
	jint GLES11Ext::GL_DEPTH_COMPONENT32_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_DEPTH_COMPONENT32_OES"
		);
	}
	jint GLES11Ext::GL_DEPTH_STENCIL_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_DEPTH_STENCIL_OES"
		);
	}
	jint GLES11Ext::GL_ETC1_RGB8_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_ETC1_RGB8_OES"
		);
	}
	jint GLES11Ext::GL_FIXED_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_FIXED_OES"
		);
	}
	jint GLES11Ext::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_OES"
		);
	}
	jint GLES11Ext::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_OES"
		);
	}
	jint GLES11Ext::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_OES"
		);
	}
	jint GLES11Ext::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_OES"
		);
	}
	jint GLES11Ext::GL_FRAMEBUFFER_BINDING_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_FRAMEBUFFER_BINDING_OES"
		);
	}
	jint GLES11Ext::GL_FRAMEBUFFER_COMPLETE_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_FRAMEBUFFER_COMPLETE_OES"
		);
	}
	jint GLES11Ext::GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_OES"
		);
	}
	jint GLES11Ext::GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_OES"
		);
	}
	jint GLES11Ext::GL_FRAMEBUFFER_INCOMPLETE_FORMATS_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_FRAMEBUFFER_INCOMPLETE_FORMATS_OES"
		);
	}
	jint GLES11Ext::GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_OES"
		);
	}
	jint GLES11Ext::GL_FRAMEBUFFER_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_FRAMEBUFFER_OES"
		);
	}
	jint GLES11Ext::GL_FRAMEBUFFER_UNSUPPORTED_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_FRAMEBUFFER_UNSUPPORTED_OES"
		);
	}
	jint GLES11Ext::GL_FUNC_ADD_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_FUNC_ADD_OES"
		);
	}
	jint GLES11Ext::GL_FUNC_REVERSE_SUBTRACT_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_FUNC_REVERSE_SUBTRACT_OES"
		);
	}
	jint GLES11Ext::GL_FUNC_SUBTRACT_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_FUNC_SUBTRACT_OES"
		);
	}
	jint GLES11Ext::GL_INCR_WRAP_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_INCR_WRAP_OES"
		);
	}
	jint GLES11Ext::GL_INVALID_FRAMEBUFFER_OPERATION_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_INVALID_FRAMEBUFFER_OPERATION_OES"
		);
	}
	jint GLES11Ext::GL_MATRIX_INDEX_ARRAY_BUFFER_BINDING_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_MATRIX_INDEX_ARRAY_BUFFER_BINDING_OES"
		);
	}
	jint GLES11Ext::GL_MATRIX_INDEX_ARRAY_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_MATRIX_INDEX_ARRAY_OES"
		);
	}
	jint GLES11Ext::GL_MATRIX_INDEX_ARRAY_POINTER_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_MATRIX_INDEX_ARRAY_POINTER_OES"
		);
	}
	jint GLES11Ext::GL_MATRIX_INDEX_ARRAY_SIZE_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_MATRIX_INDEX_ARRAY_SIZE_OES"
		);
	}
	jint GLES11Ext::GL_MATRIX_INDEX_ARRAY_STRIDE_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_MATRIX_INDEX_ARRAY_STRIDE_OES"
		);
	}
	jint GLES11Ext::GL_MATRIX_INDEX_ARRAY_TYPE_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_MATRIX_INDEX_ARRAY_TYPE_OES"
		);
	}
	jint GLES11Ext::GL_MATRIX_PALETTE_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_MATRIX_PALETTE_OES"
		);
	}
	jint GLES11Ext::GL_MAX_CUBE_MAP_TEXTURE_SIZE_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_MAX_CUBE_MAP_TEXTURE_SIZE_OES"
		);
	}
	jint GLES11Ext::GL_MAX_PALETTE_MATRICES_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_MAX_PALETTE_MATRICES_OES"
		);
	}
	jint GLES11Ext::GL_MAX_RENDERBUFFER_SIZE_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_MAX_RENDERBUFFER_SIZE_OES"
		);
	}
	jint GLES11Ext::GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT"
		);
	}
	jint GLES11Ext::GL_MAX_VERTEX_UNITS_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_MAX_VERTEX_UNITS_OES"
		);
	}
	jint GLES11Ext::GL_MIRRORED_REPEAT_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_MIRRORED_REPEAT_OES"
		);
	}
	jint GLES11Ext::GL_MODELVIEW_MATRIX_FLOAT_AS_INT_BITS_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_MODELVIEW_MATRIX_FLOAT_AS_INT_BITS_OES"
		);
	}
	jint GLES11Ext::GL_NONE_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_NONE_OES"
		);
	}
	jint GLES11Ext::GL_NORMAL_MAP_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_NORMAL_MAP_OES"
		);
	}
	jint GLES11Ext::GL_PROJECTION_MATRIX_FLOAT_AS_INT_BITS_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_PROJECTION_MATRIX_FLOAT_AS_INT_BITS_OES"
		);
	}
	jint GLES11Ext::GL_REFLECTION_MAP_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_REFLECTION_MAP_OES"
		);
	}
	jint GLES11Ext::GL_RENDERBUFFER_ALPHA_SIZE_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_RENDERBUFFER_ALPHA_SIZE_OES"
		);
	}
	jint GLES11Ext::GL_RENDERBUFFER_BINDING_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_RENDERBUFFER_BINDING_OES"
		);
	}
	jint GLES11Ext::GL_RENDERBUFFER_BLUE_SIZE_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_RENDERBUFFER_BLUE_SIZE_OES"
		);
	}
	jint GLES11Ext::GL_RENDERBUFFER_DEPTH_SIZE_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_RENDERBUFFER_DEPTH_SIZE_OES"
		);
	}
	jint GLES11Ext::GL_RENDERBUFFER_GREEN_SIZE_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_RENDERBUFFER_GREEN_SIZE_OES"
		);
	}
	jint GLES11Ext::GL_RENDERBUFFER_HEIGHT_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_RENDERBUFFER_HEIGHT_OES"
		);
	}
	jint GLES11Ext::GL_RENDERBUFFER_INTERNAL_FORMAT_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_RENDERBUFFER_INTERNAL_FORMAT_OES"
		);
	}
	jint GLES11Ext::GL_RENDERBUFFER_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_RENDERBUFFER_OES"
		);
	}
	jint GLES11Ext::GL_RENDERBUFFER_RED_SIZE_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_RENDERBUFFER_RED_SIZE_OES"
		);
	}
	jint GLES11Ext::GL_RENDERBUFFER_STENCIL_SIZE_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_RENDERBUFFER_STENCIL_SIZE_OES"
		);
	}
	jint GLES11Ext::GL_RENDERBUFFER_WIDTH_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_RENDERBUFFER_WIDTH_OES"
		);
	}
	jint GLES11Ext::GL_REQUIRED_TEXTURE_IMAGE_UNITS_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_REQUIRED_TEXTURE_IMAGE_UNITS_OES"
		);
	}
	jint GLES11Ext::GL_RGB565_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_RGB565_OES"
		);
	}
	jint GLES11Ext::GL_RGB5_A1_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_RGB5_A1_OES"
		);
	}
	jint GLES11Ext::GL_RGB8_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_RGB8_OES"
		);
	}
	jint GLES11Ext::GL_RGBA4_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_RGBA4_OES"
		);
	}
	jint GLES11Ext::GL_RGBA8_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_RGBA8_OES"
		);
	}
	jint GLES11Ext::GL_SAMPLER_EXTERNAL_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_SAMPLER_EXTERNAL_OES"
		);
	}
	jint GLES11Ext::GL_STENCIL_ATTACHMENT_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_STENCIL_ATTACHMENT_OES"
		);
	}
	jint GLES11Ext::GL_STENCIL_INDEX1_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_STENCIL_INDEX1_OES"
		);
	}
	jint GLES11Ext::GL_STENCIL_INDEX4_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_STENCIL_INDEX4_OES"
		);
	}
	jint GLES11Ext::GL_STENCIL_INDEX8_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_STENCIL_INDEX8_OES"
		);
	}
	jint GLES11Ext::GL_TEXTURE_BINDING_CUBE_MAP_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_TEXTURE_BINDING_CUBE_MAP_OES"
		);
	}
	jint GLES11Ext::GL_TEXTURE_BINDING_EXTERNAL_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_TEXTURE_BINDING_EXTERNAL_OES"
		);
	}
	jint GLES11Ext::GL_TEXTURE_CROP_RECT_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_TEXTURE_CROP_RECT_OES"
		);
	}
	jint GLES11Ext::GL_TEXTURE_CUBE_MAP_NEGATIVE_X_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_TEXTURE_CUBE_MAP_NEGATIVE_X_OES"
		);
	}
	jint GLES11Ext::GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_OES"
		);
	}
	jint GLES11Ext::GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_OES"
		);
	}
	jint GLES11Ext::GL_TEXTURE_CUBE_MAP_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_TEXTURE_CUBE_MAP_OES"
		);
	}
	jint GLES11Ext::GL_TEXTURE_CUBE_MAP_POSITIVE_X_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_TEXTURE_CUBE_MAP_POSITIVE_X_OES"
		);
	}
	jint GLES11Ext::GL_TEXTURE_CUBE_MAP_POSITIVE_Y_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_TEXTURE_CUBE_MAP_POSITIVE_Y_OES"
		);
	}
	jint GLES11Ext::GL_TEXTURE_CUBE_MAP_POSITIVE_Z_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_TEXTURE_CUBE_MAP_POSITIVE_Z_OES"
		);
	}
	jint GLES11Ext::GL_TEXTURE_EXTERNAL_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_TEXTURE_EXTERNAL_OES"
		);
	}
	jint GLES11Ext::GL_TEXTURE_GEN_MODE_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_TEXTURE_GEN_MODE_OES"
		);
	}
	jint GLES11Ext::GL_TEXTURE_GEN_STR_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_TEXTURE_GEN_STR_OES"
		);
	}
	jint GLES11Ext::GL_TEXTURE_MATRIX_FLOAT_AS_INT_BITS_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_TEXTURE_MATRIX_FLOAT_AS_INT_BITS_OES"
		);
	}
	jint GLES11Ext::GL_TEXTURE_MAX_ANISOTROPY_EXT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_TEXTURE_MAX_ANISOTROPY_EXT"
		);
	}
	jint GLES11Ext::GL_UNSIGNED_INT_24_8_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_UNSIGNED_INT_24_8_OES"
		);
	}
	jint GLES11Ext::GL_WEIGHT_ARRAY_BUFFER_BINDING_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_WEIGHT_ARRAY_BUFFER_BINDING_OES"
		);
	}
	jint GLES11Ext::GL_WEIGHT_ARRAY_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_WEIGHT_ARRAY_OES"
		);
	}
	jint GLES11Ext::GL_WEIGHT_ARRAY_POINTER_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_WEIGHT_ARRAY_POINTER_OES"
		);
	}
	jint GLES11Ext::GL_WEIGHT_ARRAY_SIZE_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_WEIGHT_ARRAY_SIZE_OES"
		);
	}
	jint GLES11Ext::GL_WEIGHT_ARRAY_STRIDE_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_WEIGHT_ARRAY_STRIDE_OES"
		);
	}
	jint GLES11Ext::GL_WEIGHT_ARRAY_TYPE_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_WEIGHT_ARRAY_TYPE_OES"
		);
	}
	jint GLES11Ext::GL_WRITE_ONLY_OES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES11Ext",
			"GL_WRITE_ONLY_OES"
		);
	}
	
	// QJniObject forward
	GLES11Ext::GLES11Ext(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	GLES11Ext::GLES11Ext()
		: JObject(
			"android.opengl.GLES11Ext",
			"()V"
		) {}
	
	// Methods
	void GLES11Ext::glAlphaFuncxOES(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glAlphaFuncxOES",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES11Ext::glBindFramebufferOES(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glBindFramebufferOES",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES11Ext::glBindRenderbufferOES(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glBindRenderbufferOES",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES11Ext::glBlendEquationOES(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glBlendEquationOES",
			"(I)V",
			arg0
		);
	}
	void GLES11Ext::glBlendEquationSeparateOES(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glBlendEquationSeparateOES",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES11Ext::glBlendFuncSeparateOES(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glBlendFuncSeparateOES",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint GLES11Ext::glCheckFramebufferStatusOES(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.opengl.GLES11Ext",
			"glCheckFramebufferStatusOES",
			"(I)I",
			arg0
		);
	}
	void GLES11Ext::glClearColorxOES(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glClearColorxOES",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11Ext::glClearDepthfOES(jfloat arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glClearDepthfOES",
			"(F)V",
			arg0
		);
	}
	void GLES11Ext::glClearDepthxOES(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glClearDepthxOES",
			"(I)V",
			arg0
		);
	}
	void GLES11Ext::glClipPlanefOES(jint arg0, java::nio::FloatBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glClipPlanefOES",
			"(ILjava/nio/FloatBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES11Ext::glClipPlanefOES(jint arg0, JFloatArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glClipPlanefOES",
			"(I[FI)V",
			arg0,
			arg1.object<jfloatArray>(),
			arg2
		);
	}
	void GLES11Ext::glClipPlanexOES(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glClipPlanexOES",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES11Ext::glClipPlanexOES(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glClipPlanexOES",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	void GLES11Ext::glColor4xOES(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glColor4xOES",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11Ext::glCurrentPaletteMatrixOES(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glCurrentPaletteMatrixOES",
			"(I)V",
			arg0
		);
	}
	void GLES11Ext::glDeleteFramebuffersOES(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glDeleteFramebuffersOES",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES11Ext::glDeleteFramebuffersOES(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glDeleteFramebuffersOES",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	void GLES11Ext::glDeleteRenderbuffersOES(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glDeleteRenderbuffersOES",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES11Ext::glDeleteRenderbuffersOES(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glDeleteRenderbuffersOES",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	void GLES11Ext::glDepthRangefOES(jfloat arg0, jfloat arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glDepthRangefOES",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void GLES11Ext::glDepthRangexOES(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glDepthRangexOES",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES11Ext::glDrawTexfOES(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glDrawTexfOES",
			"(FFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES11Ext::glDrawTexfvOES(java::nio::FloatBuffer arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glDrawTexfvOES",
			"(Ljava/nio/FloatBuffer;)V",
			arg0.object()
		);
	}
	void GLES11Ext::glDrawTexfvOES(JFloatArray arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glDrawTexfvOES",
			"([FI)V",
			arg0.object<jfloatArray>(),
			arg1
		);
	}
	void GLES11Ext::glDrawTexiOES(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glDrawTexiOES",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES11Ext::glDrawTexivOES(java::nio::IntBuffer arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glDrawTexivOES",
			"(Ljava/nio/IntBuffer;)V",
			arg0.object()
		);
	}
	void GLES11Ext::glDrawTexivOES(JIntArray arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glDrawTexivOES",
			"([II)V",
			arg0.object<jintArray>(),
			arg1
		);
	}
	void GLES11Ext::glDrawTexsOES(jshort arg0, jshort arg1, jshort arg2, jshort arg3, jshort arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glDrawTexsOES",
			"(SSSSS)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES11Ext::glDrawTexsvOES(java::nio::ShortBuffer arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glDrawTexsvOES",
			"(Ljava/nio/ShortBuffer;)V",
			arg0.object()
		);
	}
	void GLES11Ext::glDrawTexsvOES(JShortArray arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glDrawTexsvOES",
			"([SI)V",
			arg0.object<jshortArray>(),
			arg1
		);
	}
	void GLES11Ext::glDrawTexxOES(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glDrawTexxOES",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES11Ext::glDrawTexxvOES(java::nio::IntBuffer arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glDrawTexxvOES",
			"(Ljava/nio/IntBuffer;)V",
			arg0.object()
		);
	}
	void GLES11Ext::glDrawTexxvOES(JIntArray arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glDrawTexxvOES",
			"([II)V",
			arg0.object<jintArray>(),
			arg1
		);
	}
	void GLES11Ext::glEGLImageTargetRenderbufferStorageOES(jint arg0, java::nio::Buffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glEGLImageTargetRenderbufferStorageOES",
			"(ILjava/nio/Buffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES11Ext::glEGLImageTargetTexture2DOES(jint arg0, java::nio::Buffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glEGLImageTargetTexture2DOES",
			"(ILjava/nio/Buffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES11Ext::glFogxOES(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glFogxOES",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES11Ext::glFogxvOES(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glFogxvOES",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES11Ext::glFogxvOES(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glFogxvOES",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	void GLES11Ext::glFramebufferRenderbufferOES(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glFramebufferRenderbufferOES",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11Ext::glFramebufferTexture2DOES(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glFramebufferTexture2DOES",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES11Ext::glFrustumfOES(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glFrustumfOES",
			"(FFFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void GLES11Ext::glFrustumxOES(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glFrustumxOES",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void GLES11Ext::glGenFramebuffersOES(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGenFramebuffersOES",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES11Ext::glGenFramebuffersOES(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGenFramebuffersOES",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	void GLES11Ext::glGenRenderbuffersOES(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGenRenderbuffersOES",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES11Ext::glGenRenderbuffersOES(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGenRenderbuffersOES",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	void GLES11Ext::glGenerateMipmapOES(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGenerateMipmapOES",
			"(I)V",
			arg0
		);
	}
	void GLES11Ext::glGetClipPlanefOES(jint arg0, java::nio::FloatBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGetClipPlanefOES",
			"(ILjava/nio/FloatBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES11Ext::glGetClipPlanefOES(jint arg0, JFloatArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGetClipPlanefOES",
			"(I[FI)V",
			arg0,
			arg1.object<jfloatArray>(),
			arg2
		);
	}
	void GLES11Ext::glGetClipPlanexOES(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGetClipPlanexOES",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES11Ext::glGetClipPlanexOES(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGetClipPlanexOES",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	void GLES11Ext::glGetFixedvOES(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGetFixedvOES",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES11Ext::glGetFixedvOES(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGetFixedvOES",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	void GLES11Ext::glGetFramebufferAttachmentParameterivOES(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGetFramebufferAttachmentParameterivOES",
			"(IIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void GLES11Ext::glGetFramebufferAttachmentParameterivOES(jint arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGetFramebufferAttachmentParameterivOES",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jintArray>(),
			arg4
		);
	}
	void GLES11Ext::glGetLightxvOES(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGetLightxvOES",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11Ext::glGetLightxvOES(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGetLightxvOES",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES11Ext::glGetMaterialxvOES(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGetMaterialxvOES",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11Ext::glGetMaterialxvOES(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGetMaterialxvOES",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES11Ext::glGetRenderbufferParameterivOES(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGetRenderbufferParameterivOES",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11Ext::glGetRenderbufferParameterivOES(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGetRenderbufferParameterivOES",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES11Ext::glGetTexEnvxvOES(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGetTexEnvxvOES",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11Ext::glGetTexEnvxvOES(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGetTexEnvxvOES",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES11Ext::glGetTexGenfvOES(jint arg0, jint arg1, java::nio::FloatBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGetTexGenfvOES",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11Ext::glGetTexGenfvOES(jint arg0, jint arg1, JFloatArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGetTexGenfvOES",
			"(II[FI)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>(),
			arg3
		);
	}
	void GLES11Ext::glGetTexGenivOES(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGetTexGenivOES",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11Ext::glGetTexGenivOES(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGetTexGenivOES",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES11Ext::glGetTexGenxvOES(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGetTexGenxvOES",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11Ext::glGetTexGenxvOES(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGetTexGenxvOES",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES11Ext::glGetTexParameterxvOES(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGetTexParameterxvOES",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11Ext::glGetTexParameterxvOES(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glGetTexParameterxvOES",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	jboolean GLES11Ext::glIsFramebufferOES(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.GLES11Ext",
			"glIsFramebufferOES",
			"(I)Z",
			arg0
		);
	}
	jboolean GLES11Ext::glIsRenderbufferOES(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.GLES11Ext",
			"glIsRenderbufferOES",
			"(I)Z",
			arg0
		);
	}
	void GLES11Ext::glLightModelxOES(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glLightModelxOES",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES11Ext::glLightModelxvOES(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glLightModelxvOES",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES11Ext::glLightModelxvOES(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glLightModelxvOES",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	void GLES11Ext::glLightxOES(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glLightxOES",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES11Ext::glLightxvOES(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glLightxvOES",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11Ext::glLightxvOES(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glLightxvOES",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES11Ext::glLineWidthxOES(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glLineWidthxOES",
			"(I)V",
			arg0
		);
	}
	void GLES11Ext::glLoadMatrixxOES(java::nio::IntBuffer arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glLoadMatrixxOES",
			"(Ljava/nio/IntBuffer;)V",
			arg0.object()
		);
	}
	void GLES11Ext::glLoadMatrixxOES(JIntArray arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glLoadMatrixxOES",
			"([II)V",
			arg0.object<jintArray>(),
			arg1
		);
	}
	void GLES11Ext::glLoadPaletteFromModelViewMatrixOES()
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glLoadPaletteFromModelViewMatrixOES",
			"()V"
		);
	}
	void GLES11Ext::glMaterialxOES(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glMaterialxOES",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES11Ext::glMaterialxvOES(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glMaterialxvOES",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11Ext::glMaterialxvOES(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glMaterialxvOES",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES11Ext::glMatrixIndexPointerOES(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glMatrixIndexPointerOES",
			"(IIILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void GLES11Ext::glMultMatrixxOES(java::nio::IntBuffer arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glMultMatrixxOES",
			"(Ljava/nio/IntBuffer;)V",
			arg0.object()
		);
	}
	void GLES11Ext::glMultMatrixxOES(JIntArray arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glMultMatrixxOES",
			"([II)V",
			arg0.object<jintArray>(),
			arg1
		);
	}
	void GLES11Ext::glMultiTexCoord4xOES(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glMultiTexCoord4xOES",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES11Ext::glNormal3xOES(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glNormal3xOES",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES11Ext::glOrthofOES(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glOrthofOES",
			"(FFFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void GLES11Ext::glOrthoxOES(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glOrthoxOES",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void GLES11Ext::glPointParameterxOES(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glPointParameterxOES",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES11Ext::glPointParameterxvOES(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glPointParameterxvOES",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES11Ext::glPointParameterxvOES(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glPointParameterxvOES",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	void GLES11Ext::glPointSizexOES(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glPointSizexOES",
			"(I)V",
			arg0
		);
	}
	void GLES11Ext::glPolygonOffsetxOES(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glPolygonOffsetxOES",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES11Ext::glRenderbufferStorageOES(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glRenderbufferStorageOES",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11Ext::glRotatexOES(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glRotatexOES",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES11Ext::glSampleCoveragexOES(jint arg0, jboolean arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glSampleCoveragexOES",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void GLES11Ext::glScalexOES(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glScalexOES",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES11Ext::glTexEnvxOES(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glTexEnvxOES",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES11Ext::glTexEnvxvOES(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glTexEnvxvOES",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11Ext::glTexEnvxvOES(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glTexEnvxvOES",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES11Ext::glTexGenfOES(jint arg0, jint arg1, jfloat arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glTexGenfOES",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES11Ext::glTexGenfvOES(jint arg0, jint arg1, java::nio::FloatBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glTexGenfvOES",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11Ext::glTexGenfvOES(jint arg0, jint arg1, JFloatArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glTexGenfvOES",
			"(II[FI)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>(),
			arg3
		);
	}
	void GLES11Ext::glTexGeniOES(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glTexGeniOES",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES11Ext::glTexGenivOES(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glTexGenivOES",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11Ext::glTexGenivOES(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glTexGenivOES",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES11Ext::glTexGenxOES(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glTexGenxOES",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES11Ext::glTexGenxvOES(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glTexGenxvOES",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11Ext::glTexGenxvOES(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glTexGenxvOES",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES11Ext::glTexParameterxOES(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glTexParameterxOES",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES11Ext::glTexParameterxvOES(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glTexParameterxvOES",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES11Ext::glTexParameterxvOES(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glTexParameterxvOES",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES11Ext::glTranslatexOES(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glTranslatexOES",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES11Ext::glWeightPointerOES(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES11Ext",
			"glWeightPointerOES",
			"(IIILjava/nio/Buffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
} // namespace android::opengl

