#pragma once

#ifndef ANDROID_GRAPHICS_DRAWABLE_SHAPEDRAWABLE_SHADERFACTORY
#define ANDROID_GRAPHICS_DRAWABLE_SHAPEDRAWABLE_SHADERFACTORY

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Shader;
}

namespace __jni_impl::android::graphics::drawable
{
	class ShapeDrawable_ShaderFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject resize(jint arg0, jint arg1);
	};
} // namespace __jni_impl::android::graphics::drawable

#include "../Shader.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	
	// Constructors
	void ShapeDrawable_ShaderFactory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.ShapeDrawable$ShaderFactory",
			"()V");
	}
	
	// Methods
	QAndroidJniObject ShapeDrawable_ShaderFactory::resize(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"resize",
			"(II)Landroid/graphics/Shader;",
			arg0,
			arg1);
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class ShapeDrawable_ShaderFactory : public __jni_impl::android::graphics::drawable::ShapeDrawable_ShaderFactory
	{
	public:
		ShapeDrawable_ShaderFactory(QAndroidJniObject obj) { __thiz = obj; }
		ShapeDrawable_ShaderFactory()
		{
			__constructor();
		}
	};
} // namespace android::graphics::drawable

#endif // ANDROID_GRAPHICS_DRAWABLE_SHAPEDRAWABLE_SHADERFACTORY

