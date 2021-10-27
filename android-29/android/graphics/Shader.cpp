#include "./Matrix.hpp"
#include "./Shader.hpp"

namespace android::graphics
{
	// Fields
	
	Shader::Shader(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Shader::Shader()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Shader",
			"()V"
		);
	}
	
	// Methods
	jboolean Shader::getLocalMatrix(android::graphics::Matrix arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getLocalMatrix",
			"(Landroid/graphics/Matrix;)Z",
			arg0.__jniObject().object()
		);
	}
	void Shader::setLocalMatrix(android::graphics::Matrix arg0)
	{
		__thiz.callMethod<void>(
			"setLocalMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::graphics

