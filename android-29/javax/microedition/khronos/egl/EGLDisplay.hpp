#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace javax::microedition::khronos::egl
{
	class EGLDisplay : public __JniBaseClass
	{
	public:
		// Fields
		
		EGLDisplay(QAndroidJniObject obj);
		// Constructors
		EGLDisplay();
		
		// Methods
	};
} // namespace javax::microedition::khronos::egl

