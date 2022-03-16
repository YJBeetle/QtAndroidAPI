#include "./Matrix.hpp"
#include "./Shader.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	Shader::Shader()
		: JObject(
			"android.graphics.Shader",
			"()V"
		) {}
	
	// Methods
	jboolean Shader::getLocalMatrix(android::graphics::Matrix arg0) const
	{
		return callMethod<jboolean>(
			"getLocalMatrix",
			"(Landroid/graphics/Matrix;)Z",
			arg0.object()
		);
	}
	void Shader::setLocalMatrix(android::graphics::Matrix arg0) const
	{
		callMethod<void>(
			"setLocalMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
} // namespace android::graphics

