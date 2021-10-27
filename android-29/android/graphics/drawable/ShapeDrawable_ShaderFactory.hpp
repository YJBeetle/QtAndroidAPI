#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Shader;
}

namespace android::graphics::drawable
{
	class ShapeDrawable_ShaderFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		ShapeDrawable_ShaderFactory(QAndroidJniObject obj);
		// Constructors
		ShapeDrawable_ShaderFactory();
		
		// Methods
		QAndroidJniObject resize(jint arg0, jint arg1);
	};
} // namespace android::graphics::drawable

