#include "./Matrix.hpp"
#include "./Shader.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	Shader::Shader(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Shader::Shader()
		: JObject(
			"android.graphics.Shader",
			"()V"
		) {}
	
	// Methods
	jboolean Shader::getLocalMatrix(android::graphics::Matrix arg0)
	{
		return callMethod<jboolean>(
			"getLocalMatrix",
			"(Landroid/graphics/Matrix;)Z",
			arg0.object()
		);
	}
	void Shader::setLocalMatrix(android::graphics::Matrix arg0)
	{
		callMethod<void>(
			"setLocalMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
} // namespace android::graphics

