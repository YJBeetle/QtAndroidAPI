#include "../Shader.hpp"
#include "./ShapeDrawable_ShaderFactory.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// QAndroidJniObject forward
	ShapeDrawable_ShaderFactory::ShapeDrawable_ShaderFactory(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ShapeDrawable_ShaderFactory::ShapeDrawable_ShaderFactory()
		: JObject(
			"android.graphics.drawable.ShapeDrawable$ShaderFactory",
			"()V"
		) {}
	
	// Methods
	android::graphics::Shader ShapeDrawable_ShaderFactory::resize(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"resize",
			"(II)Landroid/graphics/Shader;",
			arg0,
			arg1
		);
	}
} // namespace android::graphics::drawable

