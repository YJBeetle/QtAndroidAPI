#pragma once

#ifndef ANDROID_OPENGL_GLES31
#define ANDROID_OPENGL_GLES31

#include "../../__JniBaseClass.hpp"
#include "GLES20.hpp"
#include "GLES30.hpp"

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
	class GLES31 : public __jni_impl::android::opengl::GLES30
	{
	public:
		// Fields
		static jint GL_ACTIVE_ATOMIC_COUNTER_BUFFERS();
		static jint GL_ACTIVE_PROGRAM();
		static jint GL_ACTIVE_RESOURCES();
		static jint GL_ACTIVE_VARIABLES();
		static jint GL_ALL_BARRIER_BITS();
		static jint GL_ALL_SHADER_BITS();
		static jint GL_ARRAY_SIZE();
		static jint GL_ARRAY_STRIDE();
		static jint GL_ATOMIC_COUNTER_BARRIER_BIT();
		static jint GL_ATOMIC_COUNTER_BUFFER();
		static jint GL_ATOMIC_COUNTER_BUFFER_BINDING();
		static jint GL_ATOMIC_COUNTER_BUFFER_INDEX();
		static jint GL_ATOMIC_COUNTER_BUFFER_SIZE();
		static jint GL_ATOMIC_COUNTER_BUFFER_START();
		static jint GL_BLOCK_INDEX();
		static jint GL_BUFFER_BINDING();
		static jint GL_BUFFER_DATA_SIZE();
		static jint GL_BUFFER_UPDATE_BARRIER_BIT();
		static jint GL_BUFFER_VARIABLE();
		static jint GL_COMMAND_BARRIER_BIT();
		static jint GL_COMPUTE_SHADER();
		static jint GL_COMPUTE_SHADER_BIT();
		static jint GL_COMPUTE_WORK_GROUP_SIZE();
		static jint GL_DEPTH_STENCIL_TEXTURE_MODE();
		static jint GL_DISPATCH_INDIRECT_BUFFER();
		static jint GL_DISPATCH_INDIRECT_BUFFER_BINDING();
		static jint GL_DRAW_INDIRECT_BUFFER();
		static jint GL_DRAW_INDIRECT_BUFFER_BINDING();
		static jint GL_ELEMENT_ARRAY_BARRIER_BIT();
		static jint GL_FRAGMENT_SHADER_BIT();
		static jint GL_FRAMEBUFFER_BARRIER_BIT();
		static jint GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS();
		static jint GL_FRAMEBUFFER_DEFAULT_HEIGHT();
		static jint GL_FRAMEBUFFER_DEFAULT_SAMPLES();
		static jint GL_FRAMEBUFFER_DEFAULT_WIDTH();
		static jint GL_IMAGE_2D();
		static jint GL_IMAGE_2D_ARRAY();
		static jint GL_IMAGE_3D();
		static jint GL_IMAGE_BINDING_ACCESS();
		static jint GL_IMAGE_BINDING_FORMAT();
		static jint GL_IMAGE_BINDING_LAYER();
		static jint GL_IMAGE_BINDING_LAYERED();
		static jint GL_IMAGE_BINDING_LEVEL();
		static jint GL_IMAGE_BINDING_NAME();
		static jint GL_IMAGE_CUBE();
		static jint GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS();
		static jint GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE();
		static jint GL_IMAGE_FORMAT_COMPATIBILITY_TYPE();
		static jint GL_INT_IMAGE_2D();
		static jint GL_INT_IMAGE_2D_ARRAY();
		static jint GL_INT_IMAGE_3D();
		static jint GL_INT_IMAGE_CUBE();
		static jint GL_INT_SAMPLER_2D_MULTISAMPLE();
		static jint GL_IS_ROW_MAJOR();
		static jint GL_LOCATION();
		static jint GL_MATRIX_STRIDE();
		static jint GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS();
		static jint GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE();
		static jint GL_MAX_COLOR_TEXTURE_SAMPLES();
		static jint GL_MAX_COMBINED_ATOMIC_COUNTERS();
		static jint GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS();
		static jint GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS();
		static jint GL_MAX_COMBINED_IMAGE_UNIFORMS();
		static jint GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES();
		static jint GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS();
		static jint GL_MAX_COMPUTE_ATOMIC_COUNTERS();
		static jint GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS();
		static jint GL_MAX_COMPUTE_IMAGE_UNIFORMS();
		static jint GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS();
		static jint GL_MAX_COMPUTE_SHARED_MEMORY_SIZE();
		static jint GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS();
		static jint GL_MAX_COMPUTE_UNIFORM_BLOCKS();
		static jint GL_MAX_COMPUTE_UNIFORM_COMPONENTS();
		static jint GL_MAX_COMPUTE_WORK_GROUP_COUNT();
		static jint GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS();
		static jint GL_MAX_COMPUTE_WORK_GROUP_SIZE();
		static jint GL_MAX_DEPTH_TEXTURE_SAMPLES();
		static jint GL_MAX_FRAGMENT_ATOMIC_COUNTERS();
		static jint GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS();
		static jint GL_MAX_FRAGMENT_IMAGE_UNIFORMS();
		static jint GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS();
		static jint GL_MAX_FRAMEBUFFER_HEIGHT();
		static jint GL_MAX_FRAMEBUFFER_SAMPLES();
		static jint GL_MAX_FRAMEBUFFER_WIDTH();
		static jint GL_MAX_IMAGE_UNITS();
		static jint GL_MAX_INTEGER_SAMPLES();
		static jint GL_MAX_NAME_LENGTH();
		static jint GL_MAX_NUM_ACTIVE_VARIABLES();
		static jint GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET();
		static jint GL_MAX_SAMPLE_MASK_WORDS();
		static jint GL_MAX_SHADER_STORAGE_BLOCK_SIZE();
		static jint GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS();
		static jint GL_MAX_UNIFORM_LOCATIONS();
		static jint GL_MAX_VERTEX_ATOMIC_COUNTERS();
		static jint GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS();
		static jint GL_MAX_VERTEX_ATTRIB_BINDINGS();
		static jint GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET();
		static jint GL_MAX_VERTEX_ATTRIB_STRIDE();
		static jint GL_MAX_VERTEX_IMAGE_UNIFORMS();
		static jint GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS();
		static jint GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET();
		static jint GL_NAME_LENGTH();
		static jint GL_NUM_ACTIVE_VARIABLES();
		static jint GL_OFFSET();
		static jint GL_PIXEL_BUFFER_BARRIER_BIT();
		static jint GL_PROGRAM_INPUT();
		static jint GL_PROGRAM_OUTPUT();
		static jint GL_PROGRAM_PIPELINE_BINDING();
		static jint GL_PROGRAM_SEPARABLE();
		static jint GL_READ_ONLY();
		static jint GL_READ_WRITE();
		static jint GL_REFERENCED_BY_COMPUTE_SHADER();
		static jint GL_REFERENCED_BY_FRAGMENT_SHADER();
		static jint GL_REFERENCED_BY_VERTEX_SHADER();
		static jint GL_SAMPLER_2D_MULTISAMPLE();
		static jint GL_SAMPLE_MASK();
		static jint GL_SAMPLE_MASK_VALUE();
		static jint GL_SAMPLE_POSITION();
		static jint GL_SHADER_IMAGE_ACCESS_BARRIER_BIT();
		static jint GL_SHADER_STORAGE_BARRIER_BIT();
		static jint GL_SHADER_STORAGE_BLOCK();
		static jint GL_SHADER_STORAGE_BUFFER();
		static jint GL_SHADER_STORAGE_BUFFER_BINDING();
		static jint GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT();
		static jint GL_SHADER_STORAGE_BUFFER_SIZE();
		static jint GL_SHADER_STORAGE_BUFFER_START();
		static jint GL_STENCIL_INDEX();
		static jint GL_TEXTURE_2D_MULTISAMPLE();
		static jint GL_TEXTURE_ALPHA_SIZE();
		static jint GL_TEXTURE_ALPHA_TYPE();
		static jint GL_TEXTURE_BINDING_2D_MULTISAMPLE();
		static jint GL_TEXTURE_BLUE_SIZE();
		static jint GL_TEXTURE_BLUE_TYPE();
		static jint GL_TEXTURE_COMPRESSED();
		static jint GL_TEXTURE_DEPTH();
		static jint GL_TEXTURE_DEPTH_SIZE();
		static jint GL_TEXTURE_DEPTH_TYPE();
		static jint GL_TEXTURE_FETCH_BARRIER_BIT();
		static jint GL_TEXTURE_FIXED_SAMPLE_LOCATIONS();
		static jint GL_TEXTURE_GREEN_SIZE();
		static jint GL_TEXTURE_GREEN_TYPE();
		static jint GL_TEXTURE_HEIGHT();
		static jint GL_TEXTURE_INTERNAL_FORMAT();
		static jint GL_TEXTURE_RED_SIZE();
		static jint GL_TEXTURE_RED_TYPE();
		static jint GL_TEXTURE_SAMPLES();
		static jint GL_TEXTURE_SHARED_SIZE();
		static jint GL_TEXTURE_STENCIL_SIZE();
		static jint GL_TEXTURE_UPDATE_BARRIER_BIT();
		static jint GL_TEXTURE_WIDTH();
		static jint GL_TOP_LEVEL_ARRAY_SIZE();
		static jint GL_TOP_LEVEL_ARRAY_STRIDE();
		static jint GL_TRANSFORM_FEEDBACK_BARRIER_BIT();
		static jint GL_TRANSFORM_FEEDBACK_VARYING();
		static jint GL_TYPE();
		static jint GL_UNIFORM();
		static jint GL_UNIFORM_BARRIER_BIT();
		static jint GL_UNIFORM_BLOCK();
		static jint GL_UNSIGNED_INT_ATOMIC_COUNTER();
		static jint GL_UNSIGNED_INT_IMAGE_2D();
		static jint GL_UNSIGNED_INT_IMAGE_2D_ARRAY();
		static jint GL_UNSIGNED_INT_IMAGE_3D();
		static jint GL_UNSIGNED_INT_IMAGE_CUBE();
		static jint GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE();
		static jint GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT();
		static jint GL_VERTEX_ATTRIB_BINDING();
		static jint GL_VERTEX_ATTRIB_RELATIVE_OFFSET();
		static jint GL_VERTEX_BINDING_BUFFER();
		static jint GL_VERTEX_BINDING_DIVISOR();
		static jint GL_VERTEX_BINDING_OFFSET();
		static jint GL_VERTEX_BINDING_STRIDE();
		static jint GL_VERTEX_SHADER_BIT();
		static jint GL_WRITE_ONLY();
		
		// Constructors
		void __constructor();
		
		// Methods
		static void glDispatchCompute(jint arg0, jint arg1, jint arg2);
		static void glDispatchComputeIndirect(jlong arg0);
		static void glDrawArraysIndirect(jint arg0, jlong arg1);
		static void glDrawElementsIndirect(jint arg0, jint arg1, jlong arg2);
		static void glFramebufferParameteri(jint arg0, jint arg1, jint arg2);
		static void glGetFramebufferParameteriv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glGetFramebufferParameteriv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glGetProgramInterfaceiv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3);
		static void glGetProgramInterfaceiv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4);
		static jint glGetProgramResourceIndex(jint arg0, jint arg1, jstring arg2);
		static jint glGetProgramResourceIndex(jint arg0, jint arg1, const QString &arg2);
		static jstring glGetProgramResourceName(jint arg0, jint arg1, jint arg2);
		static void glGetProgramResourceiv(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::java::nio::IntBuffer arg4, jint arg5, __jni_impl::java::nio::IntBuffer arg6, __jni_impl::java::nio::IntBuffer arg7);
		static void glGetProgramResourceiv(jint arg0, jint arg1, jint arg2, jint arg3, jintArray arg4, jint arg5, jint arg6, jintArray arg7, jint arg8, jintArray arg9, jint arg10);
		static jint glGetProgramResourceLocation(jint arg0, jint arg1, jstring arg2);
		static jint glGetProgramResourceLocation(jint arg0, jint arg1, const QString &arg2);
		static void glUseProgramStages(jint arg0, jint arg1, jint arg2);
		static void glActiveShaderProgram(jint arg0, jint arg1);
		static jint glCreateShaderProgramv(jint arg0, jarray arg1);
		static void glBindProgramPipeline(jint arg0);
		static void glDeleteProgramPipelines(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glDeleteProgramPipelines(jint arg0, jintArray arg1, jint arg2);
		static void glGenProgramPipelines(jint arg0, __jni_impl::java::nio::IntBuffer arg1);
		static void glGenProgramPipelines(jint arg0, jintArray arg1, jint arg2);
		static jboolean glIsProgramPipeline(jint arg0);
		static void glGetProgramPipelineiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glGetProgramPipelineiv(jint arg0, jint arg1, jintArray arg2, jint arg3);
		static void glProgramUniform1i(jint arg0, jint arg1, jint arg2);
		static void glProgramUniform2i(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glProgramUniform3i(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glProgramUniform4i(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		static void glProgramUniform1ui(jint arg0, jint arg1, jint arg2);
		static void glProgramUniform2ui(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glProgramUniform3ui(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static void glProgramUniform4ui(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		static void glProgramUniform1f(jint arg0, jint arg1, jfloat arg2);
		static void glProgramUniform2f(jint arg0, jint arg1, jfloat arg2, jfloat arg3);
		static void glProgramUniform3f(jint arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4);
		static void glProgramUniform4f(jint arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		static void glProgramUniform1iv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3);
		static void glProgramUniform1iv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4);
		static void glProgramUniform2iv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3);
		static void glProgramUniform2iv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4);
		static void glProgramUniform3iv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3);
		static void glProgramUniform3iv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4);
		static void glProgramUniform4iv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3);
		static void glProgramUniform4iv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4);
		static void glProgramUniform1uiv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3);
		static void glProgramUniform1uiv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4);
		static void glProgramUniform2uiv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3);
		static void glProgramUniform2uiv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4);
		static void glProgramUniform3uiv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3);
		static void glProgramUniform3uiv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4);
		static void glProgramUniform4uiv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3);
		static void glProgramUniform4uiv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4);
		static void glProgramUniform1fv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::FloatBuffer arg3);
		static void glProgramUniform1fv(jint arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4);
		static void glProgramUniform2fv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::FloatBuffer arg3);
		static void glProgramUniform2fv(jint arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4);
		static void glProgramUniform3fv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::FloatBuffer arg3);
		static void glProgramUniform3fv(jint arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4);
		static void glProgramUniform4fv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::FloatBuffer arg3);
		static void glProgramUniform4fv(jint arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4);
		static void glProgramUniformMatrix2fv(jint arg0, jint arg1, jint arg2, jboolean arg3, __jni_impl::java::nio::FloatBuffer arg4);
		static void glProgramUniformMatrix2fv(jint arg0, jint arg1, jint arg2, jboolean arg3, jfloatArray arg4, jint arg5);
		static void glProgramUniformMatrix3fv(jint arg0, jint arg1, jint arg2, jboolean arg3, __jni_impl::java::nio::FloatBuffer arg4);
		static void glProgramUniformMatrix3fv(jint arg0, jint arg1, jint arg2, jboolean arg3, jfloatArray arg4, jint arg5);
		static void glProgramUniformMatrix4fv(jint arg0, jint arg1, jint arg2, jboolean arg3, __jni_impl::java::nio::FloatBuffer arg4);
		static void glProgramUniformMatrix4fv(jint arg0, jint arg1, jint arg2, jboolean arg3, jfloatArray arg4, jint arg5);
		static void glProgramUniformMatrix2x3fv(jint arg0, jint arg1, jint arg2, jboolean arg3, __jni_impl::java::nio::FloatBuffer arg4);
		static void glProgramUniformMatrix2x3fv(jint arg0, jint arg1, jint arg2, jboolean arg3, jfloatArray arg4, jint arg5);
		static void glProgramUniformMatrix3x2fv(jint arg0, jint arg1, jint arg2, jboolean arg3, __jni_impl::java::nio::FloatBuffer arg4);
		static void glProgramUniformMatrix3x2fv(jint arg0, jint arg1, jint arg2, jboolean arg3, jfloatArray arg4, jint arg5);
		static void glProgramUniformMatrix2x4fv(jint arg0, jint arg1, jint arg2, jboolean arg3, __jni_impl::java::nio::FloatBuffer arg4);
		static void glProgramUniformMatrix2x4fv(jint arg0, jint arg1, jint arg2, jboolean arg3, jfloatArray arg4, jint arg5);
		static void glProgramUniformMatrix4x2fv(jint arg0, jint arg1, jint arg2, jboolean arg3, __jni_impl::java::nio::FloatBuffer arg4);
		static void glProgramUniformMatrix4x2fv(jint arg0, jint arg1, jint arg2, jboolean arg3, jfloatArray arg4, jint arg5);
		static void glProgramUniformMatrix3x4fv(jint arg0, jint arg1, jint arg2, jboolean arg3, __jni_impl::java::nio::FloatBuffer arg4);
		static void glProgramUniformMatrix3x4fv(jint arg0, jint arg1, jint arg2, jboolean arg3, jfloatArray arg4, jint arg5);
		static void glProgramUniformMatrix4x3fv(jint arg0, jint arg1, jint arg2, jboolean arg3, __jni_impl::java::nio::FloatBuffer arg4);
		static void glProgramUniformMatrix4x3fv(jint arg0, jint arg1, jint arg2, jboolean arg3, jfloatArray arg4, jint arg5);
		static void glValidateProgramPipeline(jint arg0);
		static jstring glGetProgramPipelineInfoLog(jint arg0);
		static void glBindImageTexture(jint arg0, jint arg1, jint arg2, jboolean arg3, jint arg4, jint arg5, jint arg6);
		static void glGetBooleani_v(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2);
		static void glGetBooleani_v(jint arg0, jint arg1, jbooleanArray arg2, jint arg3);
		static void glMemoryBarrier(jint arg0);
		static void glMemoryBarrierByRegion(jint arg0);
		static void glTexStorage2DMultisample(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5);
		static void glGetMultisamplefv(jint arg0, jint arg1, jfloatArray arg2, jint arg3);
		static void glGetMultisamplefv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2);
		static void glSampleMaski(jint arg0, jint arg1);
		static void glGetTexLevelParameteriv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3);
		static void glGetTexLevelParameteriv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4);
		static void glGetTexLevelParameterfv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::FloatBuffer arg3);
		static void glGetTexLevelParameterfv(jint arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4);
		static void glBindVertexBuffer(jint arg0, jint arg1, jlong arg2, jint arg3);
		static void glVertexAttribFormat(jint arg0, jint arg1, jint arg2, jboolean arg3, jint arg4);
		static void glVertexAttribIFormat(jint arg0, jint arg1, jint arg2, jint arg3);
		static void glVertexAttribBinding(jint arg0, jint arg1);
		static void glVertexBindingDivisor(jint arg0, jint arg1);
	};
} // namespace __jni_impl::android::opengl

#include "../../java/nio/IntBuffer.hpp"
#include "../../java/nio/FloatBuffer.hpp"

namespace __jni_impl::android::opengl
{
	// Fields
	jint GLES31::GL_ACTIVE_ATOMIC_COUNTER_BUFFERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ACTIVE_ATOMIC_COUNTER_BUFFERS"
		);
	}
	jint GLES31::GL_ACTIVE_PROGRAM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ACTIVE_PROGRAM"
		);
	}
	jint GLES31::GL_ACTIVE_RESOURCES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ACTIVE_RESOURCES"
		);
	}
	jint GLES31::GL_ACTIVE_VARIABLES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ACTIVE_VARIABLES"
		);
	}
	jint GLES31::GL_ALL_BARRIER_BITS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ALL_BARRIER_BITS"
		);
	}
	jint GLES31::GL_ALL_SHADER_BITS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ALL_SHADER_BITS"
		);
	}
	jint GLES31::GL_ARRAY_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ARRAY_SIZE"
		);
	}
	jint GLES31::GL_ARRAY_STRIDE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ARRAY_STRIDE"
		);
	}
	jint GLES31::GL_ATOMIC_COUNTER_BARRIER_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ATOMIC_COUNTER_BARRIER_BIT"
		);
	}
	jint GLES31::GL_ATOMIC_COUNTER_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ATOMIC_COUNTER_BUFFER"
		);
	}
	jint GLES31::GL_ATOMIC_COUNTER_BUFFER_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ATOMIC_COUNTER_BUFFER_BINDING"
		);
	}
	jint GLES31::GL_ATOMIC_COUNTER_BUFFER_INDEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ATOMIC_COUNTER_BUFFER_INDEX"
		);
	}
	jint GLES31::GL_ATOMIC_COUNTER_BUFFER_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ATOMIC_COUNTER_BUFFER_SIZE"
		);
	}
	jint GLES31::GL_ATOMIC_COUNTER_BUFFER_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ATOMIC_COUNTER_BUFFER_START"
		);
	}
	jint GLES31::GL_BLOCK_INDEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_BLOCK_INDEX"
		);
	}
	jint GLES31::GL_BUFFER_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_BUFFER_BINDING"
		);
	}
	jint GLES31::GL_BUFFER_DATA_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_BUFFER_DATA_SIZE"
		);
	}
	jint GLES31::GL_BUFFER_UPDATE_BARRIER_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_BUFFER_UPDATE_BARRIER_BIT"
		);
	}
	jint GLES31::GL_BUFFER_VARIABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_BUFFER_VARIABLE"
		);
	}
	jint GLES31::GL_COMMAND_BARRIER_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_COMMAND_BARRIER_BIT"
		);
	}
	jint GLES31::GL_COMPUTE_SHADER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_COMPUTE_SHADER"
		);
	}
	jint GLES31::GL_COMPUTE_SHADER_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_COMPUTE_SHADER_BIT"
		);
	}
	jint GLES31::GL_COMPUTE_WORK_GROUP_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_COMPUTE_WORK_GROUP_SIZE"
		);
	}
	jint GLES31::GL_DEPTH_STENCIL_TEXTURE_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_DEPTH_STENCIL_TEXTURE_MODE"
		);
	}
	jint GLES31::GL_DISPATCH_INDIRECT_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_DISPATCH_INDIRECT_BUFFER"
		);
	}
	jint GLES31::GL_DISPATCH_INDIRECT_BUFFER_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_DISPATCH_INDIRECT_BUFFER_BINDING"
		);
	}
	jint GLES31::GL_DRAW_INDIRECT_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_DRAW_INDIRECT_BUFFER"
		);
	}
	jint GLES31::GL_DRAW_INDIRECT_BUFFER_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_DRAW_INDIRECT_BUFFER_BINDING"
		);
	}
	jint GLES31::GL_ELEMENT_ARRAY_BARRIER_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ELEMENT_ARRAY_BARRIER_BIT"
		);
	}
	jint GLES31::GL_FRAGMENT_SHADER_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_FRAGMENT_SHADER_BIT"
		);
	}
	jint GLES31::GL_FRAMEBUFFER_BARRIER_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_FRAMEBUFFER_BARRIER_BIT"
		);
	}
	jint GLES31::GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS"
		);
	}
	jint GLES31::GL_FRAMEBUFFER_DEFAULT_HEIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_FRAMEBUFFER_DEFAULT_HEIGHT"
		);
	}
	jint GLES31::GL_FRAMEBUFFER_DEFAULT_SAMPLES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_FRAMEBUFFER_DEFAULT_SAMPLES"
		);
	}
	jint GLES31::GL_FRAMEBUFFER_DEFAULT_WIDTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_FRAMEBUFFER_DEFAULT_WIDTH"
		);
	}
	jint GLES31::GL_IMAGE_2D()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IMAGE_2D"
		);
	}
	jint GLES31::GL_IMAGE_2D_ARRAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IMAGE_2D_ARRAY"
		);
	}
	jint GLES31::GL_IMAGE_3D()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IMAGE_3D"
		);
	}
	jint GLES31::GL_IMAGE_BINDING_ACCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IMAGE_BINDING_ACCESS"
		);
	}
	jint GLES31::GL_IMAGE_BINDING_FORMAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IMAGE_BINDING_FORMAT"
		);
	}
	jint GLES31::GL_IMAGE_BINDING_LAYER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IMAGE_BINDING_LAYER"
		);
	}
	jint GLES31::GL_IMAGE_BINDING_LAYERED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IMAGE_BINDING_LAYERED"
		);
	}
	jint GLES31::GL_IMAGE_BINDING_LEVEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IMAGE_BINDING_LEVEL"
		);
	}
	jint GLES31::GL_IMAGE_BINDING_NAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IMAGE_BINDING_NAME"
		);
	}
	jint GLES31::GL_IMAGE_CUBE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IMAGE_CUBE"
		);
	}
	jint GLES31::GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS"
		);
	}
	jint GLES31::GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE"
		);
	}
	jint GLES31::GL_IMAGE_FORMAT_COMPATIBILITY_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IMAGE_FORMAT_COMPATIBILITY_TYPE"
		);
	}
	jint GLES31::GL_INT_IMAGE_2D()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_INT_IMAGE_2D"
		);
	}
	jint GLES31::GL_INT_IMAGE_2D_ARRAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_INT_IMAGE_2D_ARRAY"
		);
	}
	jint GLES31::GL_INT_IMAGE_3D()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_INT_IMAGE_3D"
		);
	}
	jint GLES31::GL_INT_IMAGE_CUBE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_INT_IMAGE_CUBE"
		);
	}
	jint GLES31::GL_INT_SAMPLER_2D_MULTISAMPLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_INT_SAMPLER_2D_MULTISAMPLE"
		);
	}
	jint GLES31::GL_IS_ROW_MAJOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IS_ROW_MAJOR"
		);
	}
	jint GLES31::GL_LOCATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_LOCATION"
		);
	}
	jint GLES31::GL_MATRIX_STRIDE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MATRIX_STRIDE"
		);
	}
	jint GLES31::GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS"
		);
	}
	jint GLES31::GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE"
		);
	}
	jint GLES31::GL_MAX_COLOR_TEXTURE_SAMPLES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COLOR_TEXTURE_SAMPLES"
		);
	}
	jint GLES31::GL_MAX_COMBINED_ATOMIC_COUNTERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMBINED_ATOMIC_COUNTERS"
		);
	}
	jint GLES31::GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS"
		);
	}
	jint GLES31::GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS"
		);
	}
	jint GLES31::GL_MAX_COMBINED_IMAGE_UNIFORMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMBINED_IMAGE_UNIFORMS"
		);
	}
	jint GLES31::GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES"
		);
	}
	jint GLES31::GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS"
		);
	}
	jint GLES31::GL_MAX_COMPUTE_ATOMIC_COUNTERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMPUTE_ATOMIC_COUNTERS"
		);
	}
	jint GLES31::GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS"
		);
	}
	jint GLES31::GL_MAX_COMPUTE_IMAGE_UNIFORMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMPUTE_IMAGE_UNIFORMS"
		);
	}
	jint GLES31::GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS"
		);
	}
	jint GLES31::GL_MAX_COMPUTE_SHARED_MEMORY_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMPUTE_SHARED_MEMORY_SIZE"
		);
	}
	jint GLES31::GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS"
		);
	}
	jint GLES31::GL_MAX_COMPUTE_UNIFORM_BLOCKS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMPUTE_UNIFORM_BLOCKS"
		);
	}
	jint GLES31::GL_MAX_COMPUTE_UNIFORM_COMPONENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMPUTE_UNIFORM_COMPONENTS"
		);
	}
	jint GLES31::GL_MAX_COMPUTE_WORK_GROUP_COUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMPUTE_WORK_GROUP_COUNT"
		);
	}
	jint GLES31::GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS"
		);
	}
	jint GLES31::GL_MAX_COMPUTE_WORK_GROUP_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMPUTE_WORK_GROUP_SIZE"
		);
	}
	jint GLES31::GL_MAX_DEPTH_TEXTURE_SAMPLES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_DEPTH_TEXTURE_SAMPLES"
		);
	}
	jint GLES31::GL_MAX_FRAGMENT_ATOMIC_COUNTERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_FRAGMENT_ATOMIC_COUNTERS"
		);
	}
	jint GLES31::GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS"
		);
	}
	jint GLES31::GL_MAX_FRAGMENT_IMAGE_UNIFORMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_FRAGMENT_IMAGE_UNIFORMS"
		);
	}
	jint GLES31::GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS"
		);
	}
	jint GLES31::GL_MAX_FRAMEBUFFER_HEIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_FRAMEBUFFER_HEIGHT"
		);
	}
	jint GLES31::GL_MAX_FRAMEBUFFER_SAMPLES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_FRAMEBUFFER_SAMPLES"
		);
	}
	jint GLES31::GL_MAX_FRAMEBUFFER_WIDTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_FRAMEBUFFER_WIDTH"
		);
	}
	jint GLES31::GL_MAX_IMAGE_UNITS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_IMAGE_UNITS"
		);
	}
	jint GLES31::GL_MAX_INTEGER_SAMPLES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_INTEGER_SAMPLES"
		);
	}
	jint GLES31::GL_MAX_NAME_LENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_NAME_LENGTH"
		);
	}
	jint GLES31::GL_MAX_NUM_ACTIVE_VARIABLES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_NUM_ACTIVE_VARIABLES"
		);
	}
	jint GLES31::GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET"
		);
	}
	jint GLES31::GL_MAX_SAMPLE_MASK_WORDS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_SAMPLE_MASK_WORDS"
		);
	}
	jint GLES31::GL_MAX_SHADER_STORAGE_BLOCK_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_SHADER_STORAGE_BLOCK_SIZE"
		);
	}
	jint GLES31::GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS"
		);
	}
	jint GLES31::GL_MAX_UNIFORM_LOCATIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_UNIFORM_LOCATIONS"
		);
	}
	jint GLES31::GL_MAX_VERTEX_ATOMIC_COUNTERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_VERTEX_ATOMIC_COUNTERS"
		);
	}
	jint GLES31::GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS"
		);
	}
	jint GLES31::GL_MAX_VERTEX_ATTRIB_BINDINGS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_VERTEX_ATTRIB_BINDINGS"
		);
	}
	jint GLES31::GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET"
		);
	}
	jint GLES31::GL_MAX_VERTEX_ATTRIB_STRIDE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_VERTEX_ATTRIB_STRIDE"
		);
	}
	jint GLES31::GL_MAX_VERTEX_IMAGE_UNIFORMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_VERTEX_IMAGE_UNIFORMS"
		);
	}
	jint GLES31::GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS"
		);
	}
	jint GLES31::GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET"
		);
	}
	jint GLES31::GL_NAME_LENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_NAME_LENGTH"
		);
	}
	jint GLES31::GL_NUM_ACTIVE_VARIABLES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_NUM_ACTIVE_VARIABLES"
		);
	}
	jint GLES31::GL_OFFSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_OFFSET"
		);
	}
	jint GLES31::GL_PIXEL_BUFFER_BARRIER_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_PIXEL_BUFFER_BARRIER_BIT"
		);
	}
	jint GLES31::GL_PROGRAM_INPUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_PROGRAM_INPUT"
		);
	}
	jint GLES31::GL_PROGRAM_OUTPUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_PROGRAM_OUTPUT"
		);
	}
	jint GLES31::GL_PROGRAM_PIPELINE_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_PROGRAM_PIPELINE_BINDING"
		);
	}
	jint GLES31::GL_PROGRAM_SEPARABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_PROGRAM_SEPARABLE"
		);
	}
	jint GLES31::GL_READ_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_READ_ONLY"
		);
	}
	jint GLES31::GL_READ_WRITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_READ_WRITE"
		);
	}
	jint GLES31::GL_REFERENCED_BY_COMPUTE_SHADER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_REFERENCED_BY_COMPUTE_SHADER"
		);
	}
	jint GLES31::GL_REFERENCED_BY_FRAGMENT_SHADER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_REFERENCED_BY_FRAGMENT_SHADER"
		);
	}
	jint GLES31::GL_REFERENCED_BY_VERTEX_SHADER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_REFERENCED_BY_VERTEX_SHADER"
		);
	}
	jint GLES31::GL_SAMPLER_2D_MULTISAMPLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_SAMPLER_2D_MULTISAMPLE"
		);
	}
	jint GLES31::GL_SAMPLE_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_SAMPLE_MASK"
		);
	}
	jint GLES31::GL_SAMPLE_MASK_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_SAMPLE_MASK_VALUE"
		);
	}
	jint GLES31::GL_SAMPLE_POSITION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_SAMPLE_POSITION"
		);
	}
	jint GLES31::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_SHADER_IMAGE_ACCESS_BARRIER_BIT"
		);
	}
	jint GLES31::GL_SHADER_STORAGE_BARRIER_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_SHADER_STORAGE_BARRIER_BIT"
		);
	}
	jint GLES31::GL_SHADER_STORAGE_BLOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_SHADER_STORAGE_BLOCK"
		);
	}
	jint GLES31::GL_SHADER_STORAGE_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_SHADER_STORAGE_BUFFER"
		);
	}
	jint GLES31::GL_SHADER_STORAGE_BUFFER_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_SHADER_STORAGE_BUFFER_BINDING"
		);
	}
	jint GLES31::GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT"
		);
	}
	jint GLES31::GL_SHADER_STORAGE_BUFFER_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_SHADER_STORAGE_BUFFER_SIZE"
		);
	}
	jint GLES31::GL_SHADER_STORAGE_BUFFER_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_SHADER_STORAGE_BUFFER_START"
		);
	}
	jint GLES31::GL_STENCIL_INDEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_STENCIL_INDEX"
		);
	}
	jint GLES31::GL_TEXTURE_2D_MULTISAMPLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_2D_MULTISAMPLE"
		);
	}
	jint GLES31::GL_TEXTURE_ALPHA_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_ALPHA_SIZE"
		);
	}
	jint GLES31::GL_TEXTURE_ALPHA_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_ALPHA_TYPE"
		);
	}
	jint GLES31::GL_TEXTURE_BINDING_2D_MULTISAMPLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_BINDING_2D_MULTISAMPLE"
		);
	}
	jint GLES31::GL_TEXTURE_BLUE_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_BLUE_SIZE"
		);
	}
	jint GLES31::GL_TEXTURE_BLUE_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_BLUE_TYPE"
		);
	}
	jint GLES31::GL_TEXTURE_COMPRESSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_COMPRESSED"
		);
	}
	jint GLES31::GL_TEXTURE_DEPTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_DEPTH"
		);
	}
	jint GLES31::GL_TEXTURE_DEPTH_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_DEPTH_SIZE"
		);
	}
	jint GLES31::GL_TEXTURE_DEPTH_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_DEPTH_TYPE"
		);
	}
	jint GLES31::GL_TEXTURE_FETCH_BARRIER_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_FETCH_BARRIER_BIT"
		);
	}
	jint GLES31::GL_TEXTURE_FIXED_SAMPLE_LOCATIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_FIXED_SAMPLE_LOCATIONS"
		);
	}
	jint GLES31::GL_TEXTURE_GREEN_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_GREEN_SIZE"
		);
	}
	jint GLES31::GL_TEXTURE_GREEN_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_GREEN_TYPE"
		);
	}
	jint GLES31::GL_TEXTURE_HEIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_HEIGHT"
		);
	}
	jint GLES31::GL_TEXTURE_INTERNAL_FORMAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_INTERNAL_FORMAT"
		);
	}
	jint GLES31::GL_TEXTURE_RED_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_RED_SIZE"
		);
	}
	jint GLES31::GL_TEXTURE_RED_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_RED_TYPE"
		);
	}
	jint GLES31::GL_TEXTURE_SAMPLES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_SAMPLES"
		);
	}
	jint GLES31::GL_TEXTURE_SHARED_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_SHARED_SIZE"
		);
	}
	jint GLES31::GL_TEXTURE_STENCIL_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_STENCIL_SIZE"
		);
	}
	jint GLES31::GL_TEXTURE_UPDATE_BARRIER_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_UPDATE_BARRIER_BIT"
		);
	}
	jint GLES31::GL_TEXTURE_WIDTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_WIDTH"
		);
	}
	jint GLES31::GL_TOP_LEVEL_ARRAY_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TOP_LEVEL_ARRAY_SIZE"
		);
	}
	jint GLES31::GL_TOP_LEVEL_ARRAY_STRIDE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TOP_LEVEL_ARRAY_STRIDE"
		);
	}
	jint GLES31::GL_TRANSFORM_FEEDBACK_BARRIER_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TRANSFORM_FEEDBACK_BARRIER_BIT"
		);
	}
	jint GLES31::GL_TRANSFORM_FEEDBACK_VARYING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TRANSFORM_FEEDBACK_VARYING"
		);
	}
	jint GLES31::GL_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TYPE"
		);
	}
	jint GLES31::GL_UNIFORM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_UNIFORM"
		);
	}
	jint GLES31::GL_UNIFORM_BARRIER_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_UNIFORM_BARRIER_BIT"
		);
	}
	jint GLES31::GL_UNIFORM_BLOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_UNIFORM_BLOCK"
		);
	}
	jint GLES31::GL_UNSIGNED_INT_ATOMIC_COUNTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_UNSIGNED_INT_ATOMIC_COUNTER"
		);
	}
	jint GLES31::GL_UNSIGNED_INT_IMAGE_2D()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_UNSIGNED_INT_IMAGE_2D"
		);
	}
	jint GLES31::GL_UNSIGNED_INT_IMAGE_2D_ARRAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_UNSIGNED_INT_IMAGE_2D_ARRAY"
		);
	}
	jint GLES31::GL_UNSIGNED_INT_IMAGE_3D()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_UNSIGNED_INT_IMAGE_3D"
		);
	}
	jint GLES31::GL_UNSIGNED_INT_IMAGE_CUBE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_UNSIGNED_INT_IMAGE_CUBE"
		);
	}
	jint GLES31::GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE"
		);
	}
	jint GLES31::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT"
		);
	}
	jint GLES31::GL_VERTEX_ATTRIB_BINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_VERTEX_ATTRIB_BINDING"
		);
	}
	jint GLES31::GL_VERTEX_ATTRIB_RELATIVE_OFFSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_VERTEX_ATTRIB_RELATIVE_OFFSET"
		);
	}
	jint GLES31::GL_VERTEX_BINDING_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_VERTEX_BINDING_BUFFER"
		);
	}
	jint GLES31::GL_VERTEX_BINDING_DIVISOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_VERTEX_BINDING_DIVISOR"
		);
	}
	jint GLES31::GL_VERTEX_BINDING_OFFSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_VERTEX_BINDING_OFFSET"
		);
	}
	jint GLES31::GL_VERTEX_BINDING_STRIDE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_VERTEX_BINDING_STRIDE"
		);
	}
	jint GLES31::GL_VERTEX_SHADER_BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_VERTEX_SHADER_BIT"
		);
	}
	jint GLES31::GL_WRITE_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_WRITE_ONLY"
		);
	}
	
	// Constructors
	void GLES31::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.opengl.GLES31",
			"(V)V");
	}
	
	// Methods
	void GLES31::glDispatchCompute(jint arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glDispatchCompute",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES31::glDispatchComputeIndirect(jlong arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glDispatchComputeIndirect",
			"(J)V",
			arg0
		);
	}
	void GLES31::glDrawArraysIndirect(jint arg0, jlong arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glDrawArraysIndirect",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void GLES31::glDrawElementsIndirect(jint arg0, jint arg1, jlong arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glDrawElementsIndirect",
			"(IIJ)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES31::glFramebufferParameteri(jint arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glFramebufferParameteri",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES31::glGetFramebufferParameteriv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetFramebufferParameteriv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GLES31::glGetFramebufferParameteriv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetFramebufferParameteriv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES31::glGetProgramInterfaceiv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetProgramInterfaceiv",
			"(IIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void GLES31::glGetProgramInterfaceiv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetProgramInterfaceiv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jint GLES31::glGetProgramResourceIndex(jint arg0, jint arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.GLES31",
			"glGetProgramResourceIndex",
			"(IILjava/lang/String;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint GLES31::glGetProgramResourceIndex(jint arg0, jint arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.GLES31",
			"glGetProgramResourceIndex",
			"(IILjava/lang/String;)I",
			arg0,
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	jstring GLES31::glGetProgramResourceName(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.GLES31",
			"glGetProgramResourceName",
			"(III)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	void GLES31::glGetProgramResourceiv(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::java::nio::IntBuffer arg4, jint arg5, __jni_impl::java::nio::IntBuffer arg6, __jni_impl::java::nio::IntBuffer arg7)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetProgramResourceiv",
			"(IIIILjava/nio/IntBuffer;ILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5,
			arg6.__jniObject().object(),
			arg7.__jniObject().object()
		);
	}
	void GLES31::glGetProgramResourceiv(jint arg0, jint arg1, jint arg2, jint arg3, jintArray arg4, jint arg5, jint arg6, jintArray arg7, jint arg8, jintArray arg9, jint arg10)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetProgramResourceiv",
			"(IIII[III[II[II)V",
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
	jint GLES31::glGetProgramResourceLocation(jint arg0, jint arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.GLES31",
			"glGetProgramResourceLocation",
			"(IILjava/lang/String;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint GLES31::glGetProgramResourceLocation(jint arg0, jint arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.GLES31",
			"glGetProgramResourceLocation",
			"(IILjava/lang/String;)I",
			arg0,
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void GLES31::glUseProgramStages(jint arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glUseProgramStages",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES31::glActiveShaderProgram(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glActiveShaderProgram",
			"(II)V",
			arg0,
			arg1
		);
	}
	jint GLES31::glCreateShaderProgramv(jint arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.GLES31",
			"glCreateShaderProgramv",
			"(I[Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	void GLES31::glBindProgramPipeline(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glBindProgramPipeline",
			"(I)V",
			arg0
		);
	}
	void GLES31::glDeleteProgramPipelines(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glDeleteProgramPipelines",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void GLES31::glDeleteProgramPipelines(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glDeleteProgramPipelines",
			"(I[II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES31::glGenProgramPipelines(jint arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGenProgramPipelines",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void GLES31::glGenProgramPipelines(jint arg0, jintArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGenProgramPipelines",
			"(I[II)V",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean GLES31::glIsProgramPipeline(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.GLES31",
			"glIsProgramPipeline",
			"(I)Z",
			arg0
		);
	}
	void GLES31::glGetProgramPipelineiv(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetProgramPipelineiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GLES31::glGetProgramPipelineiv(jint arg0, jint arg1, jintArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetProgramPipelineiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES31::glProgramUniform1i(jint arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform1i",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES31::glProgramUniform2i(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform2i",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES31::glProgramUniform3i(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform3i",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES31::glProgramUniform4i(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform4i",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void GLES31::glProgramUniform1ui(jint arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform1ui",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES31::glProgramUniform2ui(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform2ui",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES31::glProgramUniform3ui(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform3ui",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES31::glProgramUniform4ui(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform4ui",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void GLES31::glProgramUniform1f(jint arg0, jint arg1, jfloat arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform1f",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES31::glProgramUniform2f(jint arg0, jint arg1, jfloat arg2, jfloat arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform2f",
			"(IIFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES31::glProgramUniform3f(jint arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform3f",
			"(IIFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES31::glProgramUniform4f(jint arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform4f",
			"(IIFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void GLES31::glProgramUniform1iv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform1iv",
			"(IIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void GLES31::glProgramUniform1iv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform1iv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES31::glProgramUniform2iv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform2iv",
			"(IIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void GLES31::glProgramUniform2iv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform2iv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES31::glProgramUniform3iv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform3iv",
			"(IIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void GLES31::glProgramUniform3iv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform3iv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES31::glProgramUniform4iv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform4iv",
			"(IIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void GLES31::glProgramUniform4iv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform4iv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES31::glProgramUniform1uiv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform1uiv",
			"(IIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void GLES31::glProgramUniform1uiv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform1uiv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES31::glProgramUniform2uiv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform2uiv",
			"(IIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void GLES31::glProgramUniform2uiv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform2uiv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES31::glProgramUniform3uiv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform3uiv",
			"(IIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void GLES31::glProgramUniform3uiv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform3uiv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES31::glProgramUniform4uiv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform4uiv",
			"(IIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void GLES31::glProgramUniform4uiv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform4uiv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES31::glProgramUniform1fv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::FloatBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform1fv",
			"(IIILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void GLES31::glProgramUniform1fv(jint arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform1fv",
			"(III[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES31::glProgramUniform2fv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::FloatBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform2fv",
			"(IIILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void GLES31::glProgramUniform2fv(jint arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform2fv",
			"(III[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES31::glProgramUniform3fv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::FloatBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform3fv",
			"(IIILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void GLES31::glProgramUniform3fv(jint arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform3fv",
			"(III[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES31::glProgramUniform4fv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::FloatBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform4fv",
			"(IIILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void GLES31::glProgramUniform4fv(jint arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform4fv",
			"(III[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES31::glProgramUniformMatrix2fv(jint arg0, jint arg1, jint arg2, jboolean arg3, __jni_impl::java::nio::FloatBuffer arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix2fv",
			"(IIIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void GLES31::glProgramUniformMatrix2fv(jint arg0, jint arg1, jint arg2, jboolean arg3, jfloatArray arg4, jint arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix2fv",
			"(IIIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void GLES31::glProgramUniformMatrix3fv(jint arg0, jint arg1, jint arg2, jboolean arg3, __jni_impl::java::nio::FloatBuffer arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix3fv",
			"(IIIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void GLES31::glProgramUniformMatrix3fv(jint arg0, jint arg1, jint arg2, jboolean arg3, jfloatArray arg4, jint arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix3fv",
			"(IIIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void GLES31::glProgramUniformMatrix4fv(jint arg0, jint arg1, jint arg2, jboolean arg3, __jni_impl::java::nio::FloatBuffer arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix4fv",
			"(IIIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void GLES31::glProgramUniformMatrix4fv(jint arg0, jint arg1, jint arg2, jboolean arg3, jfloatArray arg4, jint arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix4fv",
			"(IIIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void GLES31::glProgramUniformMatrix2x3fv(jint arg0, jint arg1, jint arg2, jboolean arg3, __jni_impl::java::nio::FloatBuffer arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix2x3fv",
			"(IIIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void GLES31::glProgramUniformMatrix2x3fv(jint arg0, jint arg1, jint arg2, jboolean arg3, jfloatArray arg4, jint arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix2x3fv",
			"(IIIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void GLES31::glProgramUniformMatrix3x2fv(jint arg0, jint arg1, jint arg2, jboolean arg3, __jni_impl::java::nio::FloatBuffer arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix3x2fv",
			"(IIIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void GLES31::glProgramUniformMatrix3x2fv(jint arg0, jint arg1, jint arg2, jboolean arg3, jfloatArray arg4, jint arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix3x2fv",
			"(IIIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void GLES31::glProgramUniformMatrix2x4fv(jint arg0, jint arg1, jint arg2, jboolean arg3, __jni_impl::java::nio::FloatBuffer arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix2x4fv",
			"(IIIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void GLES31::glProgramUniformMatrix2x4fv(jint arg0, jint arg1, jint arg2, jboolean arg3, jfloatArray arg4, jint arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix2x4fv",
			"(IIIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void GLES31::glProgramUniformMatrix4x2fv(jint arg0, jint arg1, jint arg2, jboolean arg3, __jni_impl::java::nio::FloatBuffer arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix4x2fv",
			"(IIIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void GLES31::glProgramUniformMatrix4x2fv(jint arg0, jint arg1, jint arg2, jboolean arg3, jfloatArray arg4, jint arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix4x2fv",
			"(IIIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void GLES31::glProgramUniformMatrix3x4fv(jint arg0, jint arg1, jint arg2, jboolean arg3, __jni_impl::java::nio::FloatBuffer arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix3x4fv",
			"(IIIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void GLES31::glProgramUniformMatrix3x4fv(jint arg0, jint arg1, jint arg2, jboolean arg3, jfloatArray arg4, jint arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix3x4fv",
			"(IIIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void GLES31::glProgramUniformMatrix4x3fv(jint arg0, jint arg1, jint arg2, jboolean arg3, __jni_impl::java::nio::FloatBuffer arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix4x3fv",
			"(IIIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void GLES31::glProgramUniformMatrix4x3fv(jint arg0, jint arg1, jint arg2, jboolean arg3, jfloatArray arg4, jint arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix4x3fv",
			"(IIIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void GLES31::glValidateProgramPipeline(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glValidateProgramPipeline",
			"(I)V",
			arg0
		);
	}
	jstring GLES31::glGetProgramPipelineInfoLog(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.GLES31",
			"glGetProgramPipelineInfoLog",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	void GLES31::glBindImageTexture(jint arg0, jint arg1, jint arg2, jboolean arg3, jint arg4, jint arg5, jint arg6)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glBindImageTexture",
			"(IIIZIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	void GLES31::glGetBooleani_v(jint arg0, jint arg1, __jni_impl::java::nio::IntBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetBooleani_v",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GLES31::glGetBooleani_v(jint arg0, jint arg1, jbooleanArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetBooleani_v",
			"(II[ZI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES31::glMemoryBarrier(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glMemoryBarrier",
			"(I)V",
			arg0
		);
	}
	void GLES31::glMemoryBarrierByRegion(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glMemoryBarrierByRegion",
			"(I)V",
			arg0
		);
	}
	void GLES31::glTexStorage2DMultisample(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glTexStorage2DMultisample",
			"(IIIIIZ)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void GLES31::glGetMultisamplefv(jint arg0, jint arg1, jfloatArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetMultisamplefv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES31::glGetMultisamplefv(jint arg0, jint arg1, __jni_impl::java::nio::FloatBuffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetMultisamplefv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GLES31::glSampleMaski(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glSampleMaski",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES31::glGetTexLevelParameteriv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::IntBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetTexLevelParameteriv",
			"(IIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void GLES31::glGetTexLevelParameteriv(jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetTexLevelParameteriv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES31::glGetTexLevelParameterfv(jint arg0, jint arg1, jint arg2, __jni_impl::java::nio::FloatBuffer arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetTexLevelParameterfv",
			"(IIILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void GLES31::glGetTexLevelParameterfv(jint arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetTexLevelParameterfv",
			"(III[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES31::glBindVertexBuffer(jint arg0, jint arg1, jlong arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glBindVertexBuffer",
			"(IIJI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES31::glVertexAttribFormat(jint arg0, jint arg1, jint arg2, jboolean arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glVertexAttribFormat",
			"(IIIZI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void GLES31::glVertexAttribIFormat(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glVertexAttribIFormat",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES31::glVertexAttribBinding(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glVertexAttribBinding",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES31::glVertexBindingDivisor(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.GLES31",
			"glVertexBindingDivisor",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::opengl

namespace android::opengl
{
	class GLES31 : public __jni_impl::android::opengl::GLES31
	{
	public:
		GLES31(QAndroidJniObject obj) { __thiz = obj; }
		GLES31()
		{
			__constructor();
		}
	};
} // namespace android::opengl

#endif // ANDROID_OPENGL_GLES31

