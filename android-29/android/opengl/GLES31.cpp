#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../../JBooleanArray.hpp"
#include "../../JString.hpp"
#include "../../java/nio/FloatBuffer.hpp"
#include "../../java/nio/IntBuffer.hpp"
#include "./GLES31.hpp"

namespace android::opengl
{
	// Fields
	jint GLES31::GL_ACTIVE_ATOMIC_COUNTER_BUFFERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ACTIVE_ATOMIC_COUNTER_BUFFERS"
		);
	}
	jint GLES31::GL_ACTIVE_PROGRAM()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ACTIVE_PROGRAM"
		);
	}
	jint GLES31::GL_ACTIVE_RESOURCES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ACTIVE_RESOURCES"
		);
	}
	jint GLES31::GL_ACTIVE_VARIABLES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ACTIVE_VARIABLES"
		);
	}
	jint GLES31::GL_ALL_BARRIER_BITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ALL_BARRIER_BITS"
		);
	}
	jint GLES31::GL_ALL_SHADER_BITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ALL_SHADER_BITS"
		);
	}
	jint GLES31::GL_ARRAY_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ARRAY_SIZE"
		);
	}
	jint GLES31::GL_ARRAY_STRIDE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ARRAY_STRIDE"
		);
	}
	jint GLES31::GL_ATOMIC_COUNTER_BARRIER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ATOMIC_COUNTER_BARRIER_BIT"
		);
	}
	jint GLES31::GL_ATOMIC_COUNTER_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ATOMIC_COUNTER_BUFFER"
		);
	}
	jint GLES31::GL_ATOMIC_COUNTER_BUFFER_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ATOMIC_COUNTER_BUFFER_BINDING"
		);
	}
	jint GLES31::GL_ATOMIC_COUNTER_BUFFER_INDEX()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ATOMIC_COUNTER_BUFFER_INDEX"
		);
	}
	jint GLES31::GL_ATOMIC_COUNTER_BUFFER_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ATOMIC_COUNTER_BUFFER_SIZE"
		);
	}
	jint GLES31::GL_ATOMIC_COUNTER_BUFFER_START()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ATOMIC_COUNTER_BUFFER_START"
		);
	}
	jint GLES31::GL_BLOCK_INDEX()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_BLOCK_INDEX"
		);
	}
	jint GLES31::GL_BUFFER_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_BUFFER_BINDING"
		);
	}
	jint GLES31::GL_BUFFER_DATA_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_BUFFER_DATA_SIZE"
		);
	}
	jint GLES31::GL_BUFFER_UPDATE_BARRIER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_BUFFER_UPDATE_BARRIER_BIT"
		);
	}
	jint GLES31::GL_BUFFER_VARIABLE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_BUFFER_VARIABLE"
		);
	}
	jint GLES31::GL_COMMAND_BARRIER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_COMMAND_BARRIER_BIT"
		);
	}
	jint GLES31::GL_COMPUTE_SHADER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_COMPUTE_SHADER"
		);
	}
	jint GLES31::GL_COMPUTE_SHADER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_COMPUTE_SHADER_BIT"
		);
	}
	jint GLES31::GL_COMPUTE_WORK_GROUP_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_COMPUTE_WORK_GROUP_SIZE"
		);
	}
	jint GLES31::GL_DEPTH_STENCIL_TEXTURE_MODE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_DEPTH_STENCIL_TEXTURE_MODE"
		);
	}
	jint GLES31::GL_DISPATCH_INDIRECT_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_DISPATCH_INDIRECT_BUFFER"
		);
	}
	jint GLES31::GL_DISPATCH_INDIRECT_BUFFER_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_DISPATCH_INDIRECT_BUFFER_BINDING"
		);
	}
	jint GLES31::GL_DRAW_INDIRECT_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_DRAW_INDIRECT_BUFFER"
		);
	}
	jint GLES31::GL_DRAW_INDIRECT_BUFFER_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_DRAW_INDIRECT_BUFFER_BINDING"
		);
	}
	jint GLES31::GL_ELEMENT_ARRAY_BARRIER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_ELEMENT_ARRAY_BARRIER_BIT"
		);
	}
	jint GLES31::GL_FRAGMENT_SHADER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_FRAGMENT_SHADER_BIT"
		);
	}
	jint GLES31::GL_FRAMEBUFFER_BARRIER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_FRAMEBUFFER_BARRIER_BIT"
		);
	}
	jint GLES31::GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS"
		);
	}
	jint GLES31::GL_FRAMEBUFFER_DEFAULT_HEIGHT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_FRAMEBUFFER_DEFAULT_HEIGHT"
		);
	}
	jint GLES31::GL_FRAMEBUFFER_DEFAULT_SAMPLES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_FRAMEBUFFER_DEFAULT_SAMPLES"
		);
	}
	jint GLES31::GL_FRAMEBUFFER_DEFAULT_WIDTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_FRAMEBUFFER_DEFAULT_WIDTH"
		);
	}
	jint GLES31::GL_IMAGE_2D()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IMAGE_2D"
		);
	}
	jint GLES31::GL_IMAGE_2D_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IMAGE_2D_ARRAY"
		);
	}
	jint GLES31::GL_IMAGE_3D()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IMAGE_3D"
		);
	}
	jint GLES31::GL_IMAGE_BINDING_ACCESS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IMAGE_BINDING_ACCESS"
		);
	}
	jint GLES31::GL_IMAGE_BINDING_FORMAT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IMAGE_BINDING_FORMAT"
		);
	}
	jint GLES31::GL_IMAGE_BINDING_LAYER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IMAGE_BINDING_LAYER"
		);
	}
	jint GLES31::GL_IMAGE_BINDING_LAYERED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IMAGE_BINDING_LAYERED"
		);
	}
	jint GLES31::GL_IMAGE_BINDING_LEVEL()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IMAGE_BINDING_LEVEL"
		);
	}
	jint GLES31::GL_IMAGE_BINDING_NAME()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IMAGE_BINDING_NAME"
		);
	}
	jint GLES31::GL_IMAGE_CUBE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IMAGE_CUBE"
		);
	}
	jint GLES31::GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS"
		);
	}
	jint GLES31::GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE"
		);
	}
	jint GLES31::GL_IMAGE_FORMAT_COMPATIBILITY_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IMAGE_FORMAT_COMPATIBILITY_TYPE"
		);
	}
	jint GLES31::GL_INT_IMAGE_2D()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_INT_IMAGE_2D"
		);
	}
	jint GLES31::GL_INT_IMAGE_2D_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_INT_IMAGE_2D_ARRAY"
		);
	}
	jint GLES31::GL_INT_IMAGE_3D()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_INT_IMAGE_3D"
		);
	}
	jint GLES31::GL_INT_IMAGE_CUBE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_INT_IMAGE_CUBE"
		);
	}
	jint GLES31::GL_INT_SAMPLER_2D_MULTISAMPLE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_INT_SAMPLER_2D_MULTISAMPLE"
		);
	}
	jint GLES31::GL_IS_ROW_MAJOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_IS_ROW_MAJOR"
		);
	}
	jint GLES31::GL_LOCATION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_LOCATION"
		);
	}
	jint GLES31::GL_MATRIX_STRIDE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MATRIX_STRIDE"
		);
	}
	jint GLES31::GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS"
		);
	}
	jint GLES31::GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE"
		);
	}
	jint GLES31::GL_MAX_COLOR_TEXTURE_SAMPLES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COLOR_TEXTURE_SAMPLES"
		);
	}
	jint GLES31::GL_MAX_COMBINED_ATOMIC_COUNTERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMBINED_ATOMIC_COUNTERS"
		);
	}
	jint GLES31::GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS"
		);
	}
	jint GLES31::GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS"
		);
	}
	jint GLES31::GL_MAX_COMBINED_IMAGE_UNIFORMS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMBINED_IMAGE_UNIFORMS"
		);
	}
	jint GLES31::GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES"
		);
	}
	jint GLES31::GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS"
		);
	}
	jint GLES31::GL_MAX_COMPUTE_ATOMIC_COUNTERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMPUTE_ATOMIC_COUNTERS"
		);
	}
	jint GLES31::GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS"
		);
	}
	jint GLES31::GL_MAX_COMPUTE_IMAGE_UNIFORMS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMPUTE_IMAGE_UNIFORMS"
		);
	}
	jint GLES31::GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS"
		);
	}
	jint GLES31::GL_MAX_COMPUTE_SHARED_MEMORY_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMPUTE_SHARED_MEMORY_SIZE"
		);
	}
	jint GLES31::GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS"
		);
	}
	jint GLES31::GL_MAX_COMPUTE_UNIFORM_BLOCKS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMPUTE_UNIFORM_BLOCKS"
		);
	}
	jint GLES31::GL_MAX_COMPUTE_UNIFORM_COMPONENTS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMPUTE_UNIFORM_COMPONENTS"
		);
	}
	jint GLES31::GL_MAX_COMPUTE_WORK_GROUP_COUNT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMPUTE_WORK_GROUP_COUNT"
		);
	}
	jint GLES31::GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS"
		);
	}
	jint GLES31::GL_MAX_COMPUTE_WORK_GROUP_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_COMPUTE_WORK_GROUP_SIZE"
		);
	}
	jint GLES31::GL_MAX_DEPTH_TEXTURE_SAMPLES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_DEPTH_TEXTURE_SAMPLES"
		);
	}
	jint GLES31::GL_MAX_FRAGMENT_ATOMIC_COUNTERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_FRAGMENT_ATOMIC_COUNTERS"
		);
	}
	jint GLES31::GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS"
		);
	}
	jint GLES31::GL_MAX_FRAGMENT_IMAGE_UNIFORMS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_FRAGMENT_IMAGE_UNIFORMS"
		);
	}
	jint GLES31::GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS"
		);
	}
	jint GLES31::GL_MAX_FRAMEBUFFER_HEIGHT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_FRAMEBUFFER_HEIGHT"
		);
	}
	jint GLES31::GL_MAX_FRAMEBUFFER_SAMPLES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_FRAMEBUFFER_SAMPLES"
		);
	}
	jint GLES31::GL_MAX_FRAMEBUFFER_WIDTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_FRAMEBUFFER_WIDTH"
		);
	}
	jint GLES31::GL_MAX_IMAGE_UNITS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_IMAGE_UNITS"
		);
	}
	jint GLES31::GL_MAX_INTEGER_SAMPLES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_INTEGER_SAMPLES"
		);
	}
	jint GLES31::GL_MAX_NAME_LENGTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_NAME_LENGTH"
		);
	}
	jint GLES31::GL_MAX_NUM_ACTIVE_VARIABLES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_NUM_ACTIVE_VARIABLES"
		);
	}
	jint GLES31::GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET"
		);
	}
	jint GLES31::GL_MAX_SAMPLE_MASK_WORDS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_SAMPLE_MASK_WORDS"
		);
	}
	jint GLES31::GL_MAX_SHADER_STORAGE_BLOCK_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_SHADER_STORAGE_BLOCK_SIZE"
		);
	}
	jint GLES31::GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS"
		);
	}
	jint GLES31::GL_MAX_UNIFORM_LOCATIONS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_UNIFORM_LOCATIONS"
		);
	}
	jint GLES31::GL_MAX_VERTEX_ATOMIC_COUNTERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_VERTEX_ATOMIC_COUNTERS"
		);
	}
	jint GLES31::GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS"
		);
	}
	jint GLES31::GL_MAX_VERTEX_ATTRIB_BINDINGS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_VERTEX_ATTRIB_BINDINGS"
		);
	}
	jint GLES31::GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET"
		);
	}
	jint GLES31::GL_MAX_VERTEX_ATTRIB_STRIDE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_VERTEX_ATTRIB_STRIDE"
		);
	}
	jint GLES31::GL_MAX_VERTEX_IMAGE_UNIFORMS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_VERTEX_IMAGE_UNIFORMS"
		);
	}
	jint GLES31::GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS"
		);
	}
	jint GLES31::GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET"
		);
	}
	jint GLES31::GL_NAME_LENGTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_NAME_LENGTH"
		);
	}
	jint GLES31::GL_NUM_ACTIVE_VARIABLES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_NUM_ACTIVE_VARIABLES"
		);
	}
	jint GLES31::GL_OFFSET()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_OFFSET"
		);
	}
	jint GLES31::GL_PIXEL_BUFFER_BARRIER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_PIXEL_BUFFER_BARRIER_BIT"
		);
	}
	jint GLES31::GL_PROGRAM_INPUT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_PROGRAM_INPUT"
		);
	}
	jint GLES31::GL_PROGRAM_OUTPUT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_PROGRAM_OUTPUT"
		);
	}
	jint GLES31::GL_PROGRAM_PIPELINE_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_PROGRAM_PIPELINE_BINDING"
		);
	}
	jint GLES31::GL_PROGRAM_SEPARABLE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_PROGRAM_SEPARABLE"
		);
	}
	jint GLES31::GL_READ_ONLY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_READ_ONLY"
		);
	}
	jint GLES31::GL_READ_WRITE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_READ_WRITE"
		);
	}
	jint GLES31::GL_REFERENCED_BY_COMPUTE_SHADER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_REFERENCED_BY_COMPUTE_SHADER"
		);
	}
	jint GLES31::GL_REFERENCED_BY_FRAGMENT_SHADER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_REFERENCED_BY_FRAGMENT_SHADER"
		);
	}
	jint GLES31::GL_REFERENCED_BY_VERTEX_SHADER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_REFERENCED_BY_VERTEX_SHADER"
		);
	}
	jint GLES31::GL_SAMPLER_2D_MULTISAMPLE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_SAMPLER_2D_MULTISAMPLE"
		);
	}
	jint GLES31::GL_SAMPLE_MASK()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_SAMPLE_MASK"
		);
	}
	jint GLES31::GL_SAMPLE_MASK_VALUE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_SAMPLE_MASK_VALUE"
		);
	}
	jint GLES31::GL_SAMPLE_POSITION()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_SAMPLE_POSITION"
		);
	}
	jint GLES31::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_SHADER_IMAGE_ACCESS_BARRIER_BIT"
		);
	}
	jint GLES31::GL_SHADER_STORAGE_BARRIER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_SHADER_STORAGE_BARRIER_BIT"
		);
	}
	jint GLES31::GL_SHADER_STORAGE_BLOCK()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_SHADER_STORAGE_BLOCK"
		);
	}
	jint GLES31::GL_SHADER_STORAGE_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_SHADER_STORAGE_BUFFER"
		);
	}
	jint GLES31::GL_SHADER_STORAGE_BUFFER_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_SHADER_STORAGE_BUFFER_BINDING"
		);
	}
	jint GLES31::GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT"
		);
	}
	jint GLES31::GL_SHADER_STORAGE_BUFFER_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_SHADER_STORAGE_BUFFER_SIZE"
		);
	}
	jint GLES31::GL_SHADER_STORAGE_BUFFER_START()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_SHADER_STORAGE_BUFFER_START"
		);
	}
	jint GLES31::GL_STENCIL_INDEX()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_STENCIL_INDEX"
		);
	}
	jint GLES31::GL_TEXTURE_2D_MULTISAMPLE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_2D_MULTISAMPLE"
		);
	}
	jint GLES31::GL_TEXTURE_ALPHA_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_ALPHA_SIZE"
		);
	}
	jint GLES31::GL_TEXTURE_ALPHA_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_ALPHA_TYPE"
		);
	}
	jint GLES31::GL_TEXTURE_BINDING_2D_MULTISAMPLE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_BINDING_2D_MULTISAMPLE"
		);
	}
	jint GLES31::GL_TEXTURE_BLUE_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_BLUE_SIZE"
		);
	}
	jint GLES31::GL_TEXTURE_BLUE_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_BLUE_TYPE"
		);
	}
	jint GLES31::GL_TEXTURE_COMPRESSED()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_COMPRESSED"
		);
	}
	jint GLES31::GL_TEXTURE_DEPTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_DEPTH"
		);
	}
	jint GLES31::GL_TEXTURE_DEPTH_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_DEPTH_SIZE"
		);
	}
	jint GLES31::GL_TEXTURE_DEPTH_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_DEPTH_TYPE"
		);
	}
	jint GLES31::GL_TEXTURE_FETCH_BARRIER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_FETCH_BARRIER_BIT"
		);
	}
	jint GLES31::GL_TEXTURE_FIXED_SAMPLE_LOCATIONS()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_FIXED_SAMPLE_LOCATIONS"
		);
	}
	jint GLES31::GL_TEXTURE_GREEN_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_GREEN_SIZE"
		);
	}
	jint GLES31::GL_TEXTURE_GREEN_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_GREEN_TYPE"
		);
	}
	jint GLES31::GL_TEXTURE_HEIGHT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_HEIGHT"
		);
	}
	jint GLES31::GL_TEXTURE_INTERNAL_FORMAT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_INTERNAL_FORMAT"
		);
	}
	jint GLES31::GL_TEXTURE_RED_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_RED_SIZE"
		);
	}
	jint GLES31::GL_TEXTURE_RED_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_RED_TYPE"
		);
	}
	jint GLES31::GL_TEXTURE_SAMPLES()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_SAMPLES"
		);
	}
	jint GLES31::GL_TEXTURE_SHARED_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_SHARED_SIZE"
		);
	}
	jint GLES31::GL_TEXTURE_STENCIL_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_STENCIL_SIZE"
		);
	}
	jint GLES31::GL_TEXTURE_UPDATE_BARRIER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_UPDATE_BARRIER_BIT"
		);
	}
	jint GLES31::GL_TEXTURE_WIDTH()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TEXTURE_WIDTH"
		);
	}
	jint GLES31::GL_TOP_LEVEL_ARRAY_SIZE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TOP_LEVEL_ARRAY_SIZE"
		);
	}
	jint GLES31::GL_TOP_LEVEL_ARRAY_STRIDE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TOP_LEVEL_ARRAY_STRIDE"
		);
	}
	jint GLES31::GL_TRANSFORM_FEEDBACK_BARRIER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TRANSFORM_FEEDBACK_BARRIER_BIT"
		);
	}
	jint GLES31::GL_TRANSFORM_FEEDBACK_VARYING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TRANSFORM_FEEDBACK_VARYING"
		);
	}
	jint GLES31::GL_TYPE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_TYPE"
		);
	}
	jint GLES31::GL_UNIFORM()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_UNIFORM"
		);
	}
	jint GLES31::GL_UNIFORM_BARRIER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_UNIFORM_BARRIER_BIT"
		);
	}
	jint GLES31::GL_UNIFORM_BLOCK()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_UNIFORM_BLOCK"
		);
	}
	jint GLES31::GL_UNSIGNED_INT_ATOMIC_COUNTER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_UNSIGNED_INT_ATOMIC_COUNTER"
		);
	}
	jint GLES31::GL_UNSIGNED_INT_IMAGE_2D()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_UNSIGNED_INT_IMAGE_2D"
		);
	}
	jint GLES31::GL_UNSIGNED_INT_IMAGE_2D_ARRAY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_UNSIGNED_INT_IMAGE_2D_ARRAY"
		);
	}
	jint GLES31::GL_UNSIGNED_INT_IMAGE_3D()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_UNSIGNED_INT_IMAGE_3D"
		);
	}
	jint GLES31::GL_UNSIGNED_INT_IMAGE_CUBE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_UNSIGNED_INT_IMAGE_CUBE"
		);
	}
	jint GLES31::GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE"
		);
	}
	jint GLES31::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT"
		);
	}
	jint GLES31::GL_VERTEX_ATTRIB_BINDING()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_VERTEX_ATTRIB_BINDING"
		);
	}
	jint GLES31::GL_VERTEX_ATTRIB_RELATIVE_OFFSET()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_VERTEX_ATTRIB_RELATIVE_OFFSET"
		);
	}
	jint GLES31::GL_VERTEX_BINDING_BUFFER()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_VERTEX_BINDING_BUFFER"
		);
	}
	jint GLES31::GL_VERTEX_BINDING_DIVISOR()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_VERTEX_BINDING_DIVISOR"
		);
	}
	jint GLES31::GL_VERTEX_BINDING_OFFSET()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_VERTEX_BINDING_OFFSET"
		);
	}
	jint GLES31::GL_VERTEX_BINDING_STRIDE()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_VERTEX_BINDING_STRIDE"
		);
	}
	jint GLES31::GL_VERTEX_SHADER_BIT()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_VERTEX_SHADER_BIT"
		);
	}
	jint GLES31::GL_WRITE_ONLY()
	{
		return getStaticField<jint>(
			"android.opengl.GLES31",
			"GL_WRITE_ONLY"
		);
	}
	
	// QAndroidJniObject forward
	GLES31::GLES31(QAndroidJniObject obj) : android::opengl::GLES30(obj) {}
	
	// Constructors
	
	// Methods
	void GLES31::glActiveShaderProgram(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glActiveShaderProgram",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES31::glBindImageTexture(jint arg0, jint arg1, jint arg2, jboolean arg3, jint arg4, jint arg5, jint arg6)
	{
		callStaticMethod<void>(
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
	void GLES31::glBindProgramPipeline(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glBindProgramPipeline",
			"(I)V",
			arg0
		);
	}
	void GLES31::glBindVertexBuffer(jint arg0, jint arg1, jlong arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glBindVertexBuffer",
			"(IIJI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint GLES31::glCreateShaderProgramv(jint arg0, JArray arg1)
	{
		return callStaticMethod<jint>(
			"android.opengl.GLES31",
			"glCreateShaderProgramv",
			"(I[Ljava/lang/String;)I",
			arg0,
			arg1.object<jarray>()
		);
	}
	void GLES31::glDeleteProgramPipelines(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glDeleteProgramPipelines",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES31::glDeleteProgramPipelines(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glDeleteProgramPipelines",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	void GLES31::glDispatchCompute(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
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
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glDispatchComputeIndirect",
			"(J)V",
			arg0
		);
	}
	void GLES31::glDrawArraysIndirect(jint arg0, jlong arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glDrawArraysIndirect",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void GLES31::glDrawElementsIndirect(jint arg0, jint arg1, jlong arg2)
	{
		callStaticMethod<void>(
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
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glFramebufferParameteri",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES31::glGenProgramPipelines(jint arg0, java::nio::IntBuffer arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGenProgramPipelines",
			"(ILjava/nio/IntBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void GLES31::glGenProgramPipelines(jint arg0, JIntArray arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGenProgramPipelines",
			"(I[II)V",
			arg0,
			arg1.object<jintArray>(),
			arg2
		);
	}
	void GLES31::glGetBooleani_v(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetBooleani_v",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES31::glGetBooleani_v(jint arg0, jint arg1, JBooleanArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetBooleani_v",
			"(II[ZI)V",
			arg0,
			arg1,
			arg2.object<jbooleanArray>(),
			arg3
		);
	}
	void GLES31::glGetFramebufferParameteriv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetFramebufferParameteriv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES31::glGetFramebufferParameteriv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetFramebufferParameteriv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	void GLES31::glGetMultisamplefv(jint arg0, jint arg1, java::nio::FloatBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetMultisamplefv",
			"(IILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES31::glGetMultisamplefv(jint arg0, jint arg1, JFloatArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetMultisamplefv",
			"(II[FI)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>(),
			arg3
		);
	}
	void GLES31::glGetProgramInterfaceiv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetProgramInterfaceiv",
			"(IIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void GLES31::glGetProgramInterfaceiv(jint arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetProgramInterfaceiv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jintArray>(),
			arg4
		);
	}
	JString GLES31::glGetProgramPipelineInfoLog(jint arg0)
	{
		return callStaticObjectMethod(
			"android.opengl.GLES31",
			"glGetProgramPipelineInfoLog",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	void GLES31::glGetProgramPipelineiv(jint arg0, jint arg1, java::nio::IntBuffer arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetProgramPipelineiv",
			"(IILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void GLES31::glGetProgramPipelineiv(jint arg0, jint arg1, JIntArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetProgramPipelineiv",
			"(II[II)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3
		);
	}
	jint GLES31::glGetProgramResourceIndex(jint arg0, jint arg1, JString arg2)
	{
		return callStaticMethod<jint>(
			"android.opengl.GLES31",
			"glGetProgramResourceIndex",
			"(IILjava/lang/String;)I",
			arg0,
			arg1,
			arg2.object<jstring>()
		);
	}
	jint GLES31::glGetProgramResourceLocation(jint arg0, jint arg1, JString arg2)
	{
		return callStaticMethod<jint>(
			"android.opengl.GLES31",
			"glGetProgramResourceLocation",
			"(IILjava/lang/String;)I",
			arg0,
			arg1,
			arg2.object<jstring>()
		);
	}
	JString GLES31::glGetProgramResourceName(jint arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.opengl.GLES31",
			"glGetProgramResourceName",
			"(III)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES31::glGetProgramResourceiv(jint arg0, jint arg1, jint arg2, jint arg3, java::nio::IntBuffer arg4, jint arg5, java::nio::IntBuffer arg6, java::nio::IntBuffer arg7)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetProgramResourceiv",
			"(IIIILjava/nio/IntBuffer;ILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object(),
			arg5,
			arg6.object(),
			arg7.object()
		);
	}
	void GLES31::glGetProgramResourceiv(jint arg0, jint arg1, jint arg2, jint arg3, JIntArray arg4, jint arg5, jint arg6, JIntArray arg7, jint arg8, JIntArray arg9, jint arg10)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetProgramResourceiv",
			"(IIII[III[II[II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jintArray>(),
			arg5,
			arg6,
			arg7.object<jintArray>(),
			arg8,
			arg9.object<jintArray>(),
			arg10
		);
	}
	void GLES31::glGetTexLevelParameterfv(jint arg0, jint arg1, jint arg2, java::nio::FloatBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetTexLevelParameterfv",
			"(IIILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void GLES31::glGetTexLevelParameterfv(jint arg0, jint arg1, jint arg2, JFloatArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetTexLevelParameterfv",
			"(III[FI)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jfloatArray>(),
			arg4
		);
	}
	void GLES31::glGetTexLevelParameteriv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetTexLevelParameteriv",
			"(IIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void GLES31::glGetTexLevelParameteriv(jint arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glGetTexLevelParameteriv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jintArray>(),
			arg4
		);
	}
	jboolean GLES31::glIsProgramPipeline(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.GLES31",
			"glIsProgramPipeline",
			"(I)Z",
			arg0
		);
	}
	void GLES31::glMemoryBarrier(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glMemoryBarrier",
			"(I)V",
			arg0
		);
	}
	void GLES31::glMemoryBarrierByRegion(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glMemoryBarrierByRegion",
			"(I)V",
			arg0
		);
	}
	void GLES31::glProgramUniform1f(jint arg0, jint arg1, jfloat arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform1f",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES31::glProgramUniform1fv(jint arg0, jint arg1, jint arg2, java::nio::FloatBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform1fv",
			"(IIILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void GLES31::glProgramUniform1fv(jint arg0, jint arg1, jint arg2, JFloatArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform1fv",
			"(III[FI)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jfloatArray>(),
			arg4
		);
	}
	void GLES31::glProgramUniform1i(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform1i",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES31::glProgramUniform1iv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform1iv",
			"(IIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void GLES31::glProgramUniform1iv(jint arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform1iv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jintArray>(),
			arg4
		);
	}
	void GLES31::glProgramUniform1ui(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform1ui",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES31::glProgramUniform1uiv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform1uiv",
			"(IIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void GLES31::glProgramUniform1uiv(jint arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform1uiv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jintArray>(),
			arg4
		);
	}
	void GLES31::glProgramUniform2f(jint arg0, jint arg1, jfloat arg2, jfloat arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform2f",
			"(IIFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES31::glProgramUniform2fv(jint arg0, jint arg1, jint arg2, java::nio::FloatBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform2fv",
			"(IIILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void GLES31::glProgramUniform2fv(jint arg0, jint arg1, jint arg2, JFloatArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform2fv",
			"(III[FI)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jfloatArray>(),
			arg4
		);
	}
	void GLES31::glProgramUniform2i(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform2i",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES31::glProgramUniform2iv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform2iv",
			"(IIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void GLES31::glProgramUniform2iv(jint arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform2iv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jintArray>(),
			arg4
		);
	}
	void GLES31::glProgramUniform2ui(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform2ui",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES31::glProgramUniform2uiv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform2uiv",
			"(IIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void GLES31::glProgramUniform2uiv(jint arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform2uiv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jintArray>(),
			arg4
		);
	}
	void GLES31::glProgramUniform3f(jint arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4)
	{
		callStaticMethod<void>(
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
	void GLES31::glProgramUniform3fv(jint arg0, jint arg1, jint arg2, java::nio::FloatBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform3fv",
			"(IIILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void GLES31::glProgramUniform3fv(jint arg0, jint arg1, jint arg2, JFloatArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform3fv",
			"(III[FI)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jfloatArray>(),
			arg4
		);
	}
	void GLES31::glProgramUniform3i(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		callStaticMethod<void>(
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
	void GLES31::glProgramUniform3iv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform3iv",
			"(IIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void GLES31::glProgramUniform3iv(jint arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform3iv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jintArray>(),
			arg4
		);
	}
	void GLES31::glProgramUniform3ui(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		callStaticMethod<void>(
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
	void GLES31::glProgramUniform3uiv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform3uiv",
			"(IIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void GLES31::glProgramUniform3uiv(jint arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform3uiv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jintArray>(),
			arg4
		);
	}
	void GLES31::glProgramUniform4f(jint arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5)
	{
		callStaticMethod<void>(
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
	void GLES31::glProgramUniform4fv(jint arg0, jint arg1, jint arg2, java::nio::FloatBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform4fv",
			"(IIILjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void GLES31::glProgramUniform4fv(jint arg0, jint arg1, jint arg2, JFloatArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform4fv",
			"(III[FI)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jfloatArray>(),
			arg4
		);
	}
	void GLES31::glProgramUniform4i(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		callStaticMethod<void>(
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
	void GLES31::glProgramUniform4iv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform4iv",
			"(IIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void GLES31::glProgramUniform4iv(jint arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform4iv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jintArray>(),
			arg4
		);
	}
	void GLES31::glProgramUniform4ui(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		callStaticMethod<void>(
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
	void GLES31::glProgramUniform4uiv(jint arg0, jint arg1, jint arg2, java::nio::IntBuffer arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform4uiv",
			"(IIILjava/nio/IntBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void GLES31::glProgramUniform4uiv(jint arg0, jint arg1, jint arg2, JIntArray arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniform4uiv",
			"(III[II)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jintArray>(),
			arg4
		);
	}
	void GLES31::glProgramUniformMatrix2fv(jint arg0, jint arg1, jint arg2, jboolean arg3, java::nio::FloatBuffer arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix2fv",
			"(IIIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	void GLES31::glProgramUniformMatrix2fv(jint arg0, jint arg1, jint arg2, jboolean arg3, JFloatArray arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix2fv",
			"(IIIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jfloatArray>(),
			arg5
		);
	}
	void GLES31::glProgramUniformMatrix2x3fv(jint arg0, jint arg1, jint arg2, jboolean arg3, java::nio::FloatBuffer arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix2x3fv",
			"(IIIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	void GLES31::glProgramUniformMatrix2x3fv(jint arg0, jint arg1, jint arg2, jboolean arg3, JFloatArray arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix2x3fv",
			"(IIIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jfloatArray>(),
			arg5
		);
	}
	void GLES31::glProgramUniformMatrix2x4fv(jint arg0, jint arg1, jint arg2, jboolean arg3, java::nio::FloatBuffer arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix2x4fv",
			"(IIIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	void GLES31::glProgramUniformMatrix2x4fv(jint arg0, jint arg1, jint arg2, jboolean arg3, JFloatArray arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix2x4fv",
			"(IIIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jfloatArray>(),
			arg5
		);
	}
	void GLES31::glProgramUniformMatrix3fv(jint arg0, jint arg1, jint arg2, jboolean arg3, java::nio::FloatBuffer arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix3fv",
			"(IIIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	void GLES31::glProgramUniformMatrix3fv(jint arg0, jint arg1, jint arg2, jboolean arg3, JFloatArray arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix3fv",
			"(IIIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jfloatArray>(),
			arg5
		);
	}
	void GLES31::glProgramUniformMatrix3x2fv(jint arg0, jint arg1, jint arg2, jboolean arg3, java::nio::FloatBuffer arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix3x2fv",
			"(IIIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	void GLES31::glProgramUniformMatrix3x2fv(jint arg0, jint arg1, jint arg2, jboolean arg3, JFloatArray arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix3x2fv",
			"(IIIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jfloatArray>(),
			arg5
		);
	}
	void GLES31::glProgramUniformMatrix3x4fv(jint arg0, jint arg1, jint arg2, jboolean arg3, java::nio::FloatBuffer arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix3x4fv",
			"(IIIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	void GLES31::glProgramUniformMatrix3x4fv(jint arg0, jint arg1, jint arg2, jboolean arg3, JFloatArray arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix3x4fv",
			"(IIIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jfloatArray>(),
			arg5
		);
	}
	void GLES31::glProgramUniformMatrix4fv(jint arg0, jint arg1, jint arg2, jboolean arg3, java::nio::FloatBuffer arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix4fv",
			"(IIIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	void GLES31::glProgramUniformMatrix4fv(jint arg0, jint arg1, jint arg2, jboolean arg3, JFloatArray arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix4fv",
			"(IIIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jfloatArray>(),
			arg5
		);
	}
	void GLES31::glProgramUniformMatrix4x2fv(jint arg0, jint arg1, jint arg2, jboolean arg3, java::nio::FloatBuffer arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix4x2fv",
			"(IIIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	void GLES31::glProgramUniformMatrix4x2fv(jint arg0, jint arg1, jint arg2, jboolean arg3, JFloatArray arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix4x2fv",
			"(IIIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jfloatArray>(),
			arg5
		);
	}
	void GLES31::glProgramUniformMatrix4x3fv(jint arg0, jint arg1, jint arg2, jboolean arg3, java::nio::FloatBuffer arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix4x3fv",
			"(IIIZLjava/nio/FloatBuffer;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	void GLES31::glProgramUniformMatrix4x3fv(jint arg0, jint arg1, jint arg2, jboolean arg3, JFloatArray arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glProgramUniformMatrix4x3fv",
			"(IIIZ[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jfloatArray>(),
			arg5
		);
	}
	void GLES31::glSampleMaski(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glSampleMaski",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES31::glTexStorage2DMultisample(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jboolean arg5)
	{
		callStaticMethod<void>(
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
	void GLES31::glUseProgramStages(jint arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glUseProgramStages",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void GLES31::glValidateProgramPipeline(jint arg0)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glValidateProgramPipeline",
			"(I)V",
			arg0
		);
	}
	void GLES31::glVertexAttribBinding(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glVertexAttribBinding",
			"(II)V",
			arg0,
			arg1
		);
	}
	void GLES31::glVertexAttribFormat(jint arg0, jint arg1, jint arg2, jboolean arg3, jint arg4)
	{
		callStaticMethod<void>(
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
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glVertexAttribIFormat",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void GLES31::glVertexBindingDivisor(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.GLES31",
			"glVertexBindingDivisor",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::opengl

