#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Matrix;
}

namespace android::graphics
{
	class Shader : public __JniBaseClass
	{
	public:
		// Fields
		
		Shader(QAndroidJniObject obj);
		// Constructors
		Shader();
		
		// Methods
		jboolean getLocalMatrix(android::graphics::Matrix arg0);
		void setLocalMatrix(android::graphics::Matrix arg0);
	};
} // namespace android::graphics

