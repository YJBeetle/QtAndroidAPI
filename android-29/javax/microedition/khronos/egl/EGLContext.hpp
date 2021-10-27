#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace javax::microedition::khronos::egl
{
	class EGLContext : public __JniBaseClass
	{
	public:
		// Fields
		
		EGLContext(QAndroidJniObject obj);
		// Constructors
		EGLContext();
		
		// Methods
		static QAndroidJniObject getEGL();
		QAndroidJniObject getGL();
	};
} // namespace javax::microedition::khronos::egl

