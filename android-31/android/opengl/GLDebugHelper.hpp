#pragma once

#include "../../java/io/Writer.def.hpp"
#include "./GLDebugHelper.def.hpp"

namespace android::opengl
{
	// Fields
	inline jint GLDebugHelper::CONFIG_CHECK_GL_ERROR()
	{
		return getStaticField<jint>(
			"android.opengl.GLDebugHelper",
			"CONFIG_CHECK_GL_ERROR"
		);
	}
	inline jint GLDebugHelper::CONFIG_CHECK_THREAD()
	{
		return getStaticField<jint>(
			"android.opengl.GLDebugHelper",
			"CONFIG_CHECK_THREAD"
		);
	}
	inline jint GLDebugHelper::CONFIG_LOG_ARGUMENT_NAMES()
	{
		return getStaticField<jint>(
			"android.opengl.GLDebugHelper",
			"CONFIG_LOG_ARGUMENT_NAMES"
		);
	}
	inline jint GLDebugHelper::ERROR_WRONG_THREAD()
	{
		return getStaticField<jint>(
			"android.opengl.GLDebugHelper",
			"ERROR_WRONG_THREAD"
		);
	}
	
	// Constructors
	inline GLDebugHelper::GLDebugHelper()
		: JObject(
			"android.opengl.GLDebugHelper",
			"()V"
		) {}
	
	// Methods
	inline JObject GLDebugHelper::wrap(JObject arg0, jint arg1, java::io::Writer arg2)
	{
		return callStaticObjectMethod(
			"android.opengl.GLDebugHelper",
			"wrap",
			"(Ljavax/microedition/khronos/egl/EGL;ILjava/io/Writer;)Ljavax/microedition/khronos/egl/EGL;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
} // namespace android::opengl

// Base class headers

