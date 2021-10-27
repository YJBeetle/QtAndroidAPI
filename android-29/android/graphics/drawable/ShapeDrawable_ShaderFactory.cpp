#include "../Shader.hpp"
#include "./ShapeDrawable_ShaderFactory.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	ShapeDrawable_ShaderFactory::ShapeDrawable_ShaderFactory(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ShapeDrawable_ShaderFactory::ShapeDrawable_ShaderFactory()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.ShapeDrawable$ShaderFactory",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ShapeDrawable_ShaderFactory::resize(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"resize",
			"(II)Landroid/graphics/Shader;",
			arg0,
			arg1
		);
	}
} // namespace android::graphics::drawable

