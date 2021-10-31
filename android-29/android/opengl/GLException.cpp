#include "./GLException.hpp"

namespace android::opengl
{
	// Fields
	
	GLException::GLException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GLException::GLException(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.opengl.GLException",
			"(I)V",
			arg0
		);
	}
	GLException::GLException(jint arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.opengl.GLException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace android::opengl

