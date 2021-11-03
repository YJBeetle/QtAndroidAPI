#include "../../java/io/Writer.hpp"
#include "./GLDebugHelper.hpp"

namespace android::opengl
{
	// Fields
	jint GLDebugHelper::CONFIG_CHECK_GL_ERROR()
	{
		return getStaticField<jint>(
			"android.opengl.GLDebugHelper",
			"CONFIG_CHECK_GL_ERROR"
		);
	}
	jint GLDebugHelper::CONFIG_CHECK_THREAD()
	{
		return getStaticField<jint>(
			"android.opengl.GLDebugHelper",
			"CONFIG_CHECK_THREAD"
		);
	}
	jint GLDebugHelper::CONFIG_LOG_ARGUMENT_NAMES()
	{
		return getStaticField<jint>(
			"android.opengl.GLDebugHelper",
			"CONFIG_LOG_ARGUMENT_NAMES"
		);
	}
	jint GLDebugHelper::ERROR_WRONG_THREAD()
	{
		return getStaticField<jint>(
			"android.opengl.GLDebugHelper",
			"ERROR_WRONG_THREAD"
		);
	}
	
	// QJniObject forward
	GLDebugHelper::GLDebugHelper(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	GLDebugHelper::GLDebugHelper()
		: JObject(
			"android.opengl.GLDebugHelper",
			"()V"
		) {}
	
	// Methods
	JObject GLDebugHelper::wrap(JObject arg0, jint arg1, java::io::Writer arg2)
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

