#include "../Shader.hpp"
#include "./ShapeDrawable_ShaderFactory.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// QAndroidJniObject forward
	ShapeDrawable_ShaderFactory::ShapeDrawable_ShaderFactory(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ShapeDrawable_ShaderFactory::ShapeDrawable_ShaderFactory()
		: __JniBaseClass(
			"android.graphics.drawable.ShapeDrawable$ShaderFactory",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject ShapeDrawable_ShaderFactory::resize(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"resize",
			"(II)Landroid/graphics/Shader;",
			arg0,
			arg1
		);
	}
} // namespace android::graphics::drawable

