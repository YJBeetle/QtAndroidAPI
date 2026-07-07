#pragma once

#include "../../JObject.hpp"

class JFloatArray;
class JIntArray;
class JShortArray;
namespace java::nio
{
	class Buffer;
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
	class ShortBuffer;
}

namespace android::opengl
{
	class GLES11Ext : public JObject
	{
	public:
		// Fields
		static jint GL_3DC_XY_AMD();
		static jint GL_3DC_X_AMD();
		static jint GL_ATC_RGBA_EXPLICIT_ALPHA_AMD();
		static jint GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD();
		static jint GL_ATC_RGB_AMD();
		static jint GL_BGRA();
		static jint GL_BLEND_DST_ALPHA_OES();
		static jint GL_BLEND_DST_RGB_OES();
		static jint GL_BLEND_EQUATION_ALPHA_OES();
		static jint GL_BLEND_EQUATION_OES();
		static jint GL_BLEND_EQUATION_RGB_OES();
		static jint GL_BLEND_SRC_ALPHA_OES();
		static jint GL_BLEND_SRC_RGB_OES();
		static jint GL_BUFFER_ACCESS_OES();
		static jint GL_BUFFER_MAPPED_OES();
		static jint GL_BUFFER_MAP_POINTER_OES();
		static jint GL_COLOR_ATTACHMENT0_OES();
		static jint GL_CURRENT_PALETTE_MATRIX_OES();
		static jint GL_DECR_WRAP_OES();
		static jint GL_DEPTH24_STENCIL8_OES();
		static jint GL_DEPTH_ATTACHMENT_OES();
		static jint GL_DEPTH_COMPONENT16_OES();
		static jint GL_DEPTH_COMPONENT24_OES();
		static jint GL_DEPTH_COMPONENT32_OES();
		static jint GL_DEPTH_STENCIL_OES();
		static jint GL_ETC1_RGB8_OES();
		static jint GL_FIXED_OES();
		static jint GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_OES();
		static jint GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_OES();
		static jint GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_OES();
		static jint GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_OES();
		static jint GL_FRAMEBUFFER_BINDING_OES();
		static jint GL_FRAMEBUFFER_COMPLETE_OES();
		static jint GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_OES();
		static jint GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_OES();
		static jint GL_FRAMEBUFFER_INCOMPLETE_FORMATS_OES();
		static jint GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_OES();
		static jint GL_FRAMEBUFFER_OES();
		static jint GL_FRAMEBUFFER_UNSUPPORTED_OES();
		static jint GL_FUNC_ADD_OES();
		static jint GL_FUNC_REVERSE_SUBTRACT_OES();
		static jint GL_FUNC_SUBTRACT_OES();
		static jint GL_INCR_WRAP_OES();
		static jint GL_INVALID_FRAMEBUFFER_OPERATION_OES();
		static jint GL_MATRIX_INDEX_ARRAY_BUFFER_BINDING_OES();
		static jint GL_MATRIX_INDEX_ARRAY_OES();
		static jint GL_MATRIX_INDEX_ARRAY_POINTER_OES();
		static jint GL_MATRIX_INDEX_ARRAY_SIZE_OES();
		static jint GL_MATRIX_INDEX_ARRAY_STRIDE_OES();
		static jint GL_MATRIX_INDEX_ARRAY_TYPE_OES();
		static jint GL_MATRIX_PALETTE_OES();
		static jint GL_MAX_CUBE_MAP_TEXTURE_SIZE_OES();
		static jint GL_MAX_PALETTE_MATRICES_OES();
		static jint GL_MAX_RENDERBUFFER_SIZE_OES();
		static jint GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT();
		static jint GL_MAX_VERTEX_UNITS_OES();
		static jint GL_MIRRORED_REPEAT_OES();
		static jint GL_MODELVIEW_MATRIX_FLOAT_AS_INT_BITS_OES();
		static jint GL_NONE_OES();
		static jint GL_NORMAL_MAP_OES();
		static jint GL_PROJECTION_MATRIX_FLOAT_AS_INT_BITS_OES();
		static jint GL_REFLECTION_MAP_OES();
		static jint GL_RENDERBUFFER_ALPHA_SIZE_OES();
		static jint GL_RENDERBUFFER_BINDING_OES();
		static jint GL_RENDERBUFFER_BLUE_SIZE_OES();
		static jint GL_RENDERBUFFER_DEPTH_SIZE_OES();
		static jint GL_RENDERBUFFER_GREEN_SIZE_OES();
		static jint GL_RENDERBUFFER_HEIGHT_OES();
		static jint GL_RENDERBUFFER_INTERNAL_FORMAT_OES();
		static jint GL_RENDERBUFFER_OES();
		static jint GL_RENDERBUFFER_RED_SIZE_OES();
		static jint GL_RENDERBUFFER_STENCIL_SIZE_OES();
		static jint GL_RENDERBUFFER_WIDTH_OES();
		static jint GL_REQUIRED_TEXTURE_IMAGE_UNITS_OES();
		static jint GL_RGB565_OES();
		static jint GL_RGB5_A1_OES();
		static jint GL_RGB8_OES();
		static jint GL_RGBA4_OES();
		static jint GL_RGBA8_OES();
		static jint GL_SAMPLER_EXTERNAL_OES();
		static jint GL_STENCIL_ATTACHMENT_OES();
		static jint GL_STENCIL_INDEX1_OES();
		static jint GL_STENCIL_INDEX4_OES();
		static jint GL_STENCIL_INDEX8_OES();
		static jint GL_TEXTURE_BINDING_CUBE_MAP_OES();
		static jint GL_TEXTURE_BINDING_EXTERNAL_OES();
		static jint GL_TEXTURE_CROP_RECT_OES();
		static jint GL_TEXTURE_CUBE_MAP_NEGATIVE_X_OES();
		static jint GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_OES();
		static jint GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_OES();
		static jint GL_TEXTURE_CUBE_MAP_OES();
		static jint GL_TEXTURE_CUBE_MAP_POSITIVE_X_OES();
		static jint GL_TEXTURE_CUBE_MAP_POSITIVE_Y_OES();
		static jint GL_TEXTURE_CUBE_MAP_POSITIVE_Z_OES();
		static jint GL_TEXTURE_EXTERNAL_OES();
		static jint GL_TEXTURE_GEN_MODE_OES();
		static jint GL_TEXTURE_GEN_STR_OES();
		static jint GL_TEXTURE_MATRIX_FLOAT_AS_INT_BITS_OES();
		static jint GL_TEXTURE_MAX_ANISOTROPY_EXT();
		static jint GL_UNSIGNED_INT_24_8_OES();
		static jint GL_WEIGHT_ARRAY_BUFFER_BINDING_OES();
		static jint GL_WEIGHT_ARRAY_OES();
		static jint GL_WEIGHT_ARRAY_POINTER_OES();
		static jint GL_WEIGHT_ARRAY_SIZE_OES();
		static jint GL_WEIGHT_ARRAY_STRIDE_OES();
		static jint GL_WEIGHT_ARRAY_TYPE_OES();
		static jint GL_WRITE_ONLY_OES();
		
		// QJniObject forward
		template<typename ...Ts> explicit GLES11Ext(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GLES11Ext(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		GLES11Ext();
		
		// Methods
		static void glAlphaFuncxOES(jint arg0, jint arg1);
		static void glBindFramebufferOES(jint arg0, jint arg1);
		static void glBindRenderbufferOES(jint arg0, jint arg1);
		static void glBlendEquationOES(jint arg0);
		static void glBlendEquationSeparateOES(jint arg0, jint arg1);
		static void glBlendFuncSeparateOES(jint arg0, jint arg1, jint arg2, jint arg3);
		static jint glCheckFramebufferStatusOES(jint arg0);
		static void glClearColorxOES(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glClearDepthfOES(jfloat arg0);
		static void glClearDepthxOES(jint arg0);
		static void glClipPlanefOES(jint arg0, java::nio::FloatBuffer arg1);
		static void glClipPlanefOES(jint arg0, JFloatArray arg1, jint arg2);
		static void glClipPlanexOES(jint arg0, java::nio::IntBuffer arg1);
		static void glClipPlanexOES(jint arg0, JIntArray arg1, jint arg2);
		static void glColor4xOES(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glCurrentPaletteMatrixOES(jint arg0);
		static void glDeleteFramebuffersOES(jint arg0, java::nio::IntBuffer arg1);
		static void glDeleteFramebuffersOES(jint arg0, JIntArray arg1, jint arg2);
		static void glDeleteRenderbuffersOES(jint arg0, java::nio::IntBuffer arg1);
		static void glDeleteRenderbuffersOES(jint arg0, JIntArray arg1, jint arg2);
		static void glDepthRangefOES(jfloat arg0, jfloat arg1);
		static void glDepthRangexOES(jint arg0, jint arg1);
		static void glDrawTexfOES(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4);
		static void glDrawTexfvOES(java::nio::FloatBuffer arg0);
		static void glDrawTexfvOES(JFloatArray arg0, jint arg1);
		static void glDrawTexiOES(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glDrawTexivOES(java::nio::IntBuffer arg0);
		static void glDrawTexivOES(JIntArray arg0, jint arg1);
		static void glDrawTexsOES(jshort arg0, jshort arg1, jshort arg2, jshort arg3, jshort arg4);
		static void glDrawTexsvOES(java::nio::ShortBuffer arg0);
		static void glDrawTexsvOES(JShortArray arg0, jint arg1);
		static void glDrawTexxOES(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glDrawTexxvOES(java::nio::IntBuffer arg0);
		static void glDrawTexxvOES(JIntArray arg0, jint arg1);
		static void glEGLImageTargetRenderbufferStorageOES(jint arg0, java::nio::Buffer arg1);
		static void glEGLImageTargetTexture2DOES(jint arg0, java::nio::Buffer arg1);
		static void glFogxOES(jint arg0, jint arg1);
		static void glFogxvOES(jint arg0, java::nio::IntBuffer arg1);
		static void glFogxvOES(jint arg0, JIntArray arg1, jint arg2);
		static void glFramebufferRenderbufferOES(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glFramebufferTexture2DOES(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glFrustumfOES(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		static void glFrustumxOES(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		static void glGenFramebuffersOES(jint arg0, java::nio::IntBuffer arg1);
		static void glGenFramebuffersOES(jint arg0, JIntArray arg1, jint arg2);
		static void glGenRenderbuffersOES(jint arg0, java::nio::IntBuffer arg1);
		static void glGenRenderbuffersOES(jint arg0, JIntArray arg1, jint arg2);
		static void glGenerateMipmapOES(jint arg0);
		static void glGetClipPlanefOES(jint arg0, java::nio::FloatBuffer arg1);
		static void glGetClipPlanefOES(jint arg0, JFloatArray arg1, jint arg2);
		static void glGetClipPlanexOES(jint arg0, java::nio::IntBuffer arg1);
		static void glGetClipPlanexOES(jint arg0, JIntArray arg1, jint arg2);
		static void glGetFixedvOES(jint arg0, java::nio::IntBuffer arg1);
		static void glGetFixedvOES(jint arg0, JIntArray arg1, jint arg2);
		static void glGetFramebufferAttachmentParameterivOES(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3);
		static void glGetFramebufferAttachmentParameterivOES(jint arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4);
		static void glGetLightxvOES(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetLightxvOES(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glGetMaterialxvOES(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetMaterialxvOES(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glGetRenderbufferParameterivOES(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetRenderbufferParameterivOES(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glGetTexEnvxvOES(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetTexEnvxvOES(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glGetTexGenfvOES(jint arg0, jint arg1, java::nio::FloatBuffer arg2);
		static void glGetTexGenfvOES(jint arg0, jint arg1, JFloatArray arg2, jint arg3);
		static void glGetTexGenivOES(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetTexGenivOES(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glGetTexGenxvOES(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetTexGenxvOES(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glGetTexParameterxvOES(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glGetTexParameterxvOES(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static jboolean glIsFramebufferOES(jint arg0);
		static jboolean glIsRenderbufferOES(jint arg0);
		static void glLightModelxOES(jint arg0, jint arg1);
		static void glLightModelxvOES(jint arg0, java::nio::IntBuffer arg1);
		static void glLightModelxvOES(jint arg0, JIntArray arg1, jint arg2);
		static void glLightxOES(jint arg0, jint arg1, jint arg2);
		static void glLightxvOES(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glLightxvOES(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glLineWidthxOES(jint arg0);
		static void glLoadMatrixxOES(java::nio::IntBuffer arg0);
		static void glLoadMatrixxOES(JIntArray arg0, jint arg1);
		static void glLoadPaletteFromModelViewMatrixOES();
		static void glMaterialxOES(jint arg0, jint arg1, jint arg2);
		static void glMaterialxvOES(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glMaterialxvOES(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glMatrixIndexPointerOES(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3);
		static void glMultMatrixxOES(java::nio::IntBuffer arg0);
		static void glMultMatrixxOES(JIntArray arg0, jint arg1);
		static void glMultiTexCoord4xOES(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glNormal3xOES(jint arg0, jint arg1, jint arg2);
		static void glOrthofOES(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		static void glOrthoxOES(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		static void glPointParameterxOES(jint arg0, jint arg1);
		static void glPointParameterxvOES(jint arg0, java::nio::IntBuffer arg1);
		static void glPointParameterxvOES(jint arg0, JIntArray arg1, jint arg2);
		static void glPointSizexOES(jint arg0);
		static void glPolygonOffsetxOES(jint arg0, jint arg1);
		static void glRenderbufferStorageOES(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glRotatexOES(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glSampleCoveragexOES(jint arg0, jboolean arg1);
		static void glScalexOES(jint arg0, jint arg1, jint arg2);
		static void glTexEnvxOES(jint arg0, jint arg1, jint arg2);
		static void glTexEnvxvOES(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glTexEnvxvOES(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glTexGenfOES(jint arg0, jint arg1, jfloat arg2);
		static void glTexGenfvOES(jint arg0, jint arg1, java::nio::FloatBuffer arg2);
		static void glTexGenfvOES(jint arg0, jint arg1, JFloatArray arg2, jint arg3);
		static void glTexGeniOES(jint arg0, jint arg1, jint arg2);
		static void glTexGenivOES(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glTexGenivOES(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glTexGenxOES(jint arg0, jint arg1, jint arg2);
		static void glTexGenxvOES(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glTexGenxvOES(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glTexParameterxOES(jint arg0, jint arg1, jint arg2);
		static void glTexParameterxvOES(jint arg0, jint arg1, java::nio::IntBuffer arg2);
		static void glTexParameterxvOES(jint arg0, jint arg1, JIntArray arg2, jint arg3);
		static void glTranslatexOES(jint arg0, jint arg1, jint arg2);
		static void glWeightPointerOES(jint arg0, jint arg1, jint arg2, java::nio::Buffer arg3);
	};
} // namespace android::opengl

