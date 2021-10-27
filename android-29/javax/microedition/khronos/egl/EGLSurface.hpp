#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::microedition::khronos::egl
{
	class EGLSurface : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::javax::microedition::khronos::egl


namespace __jni_impl::javax::microedition::khronos::egl
{
	// Fields
	
	// Constructors
	void EGLSurface::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.microedition.khronos.egl.EGLSurface",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::javax::microedition::khronos::egl

namespace javax::microedition::khronos::egl
{
	class EGLSurface : public __jni_impl::javax::microedition::khronos::egl::EGLSurface
	{
	public:
		EGLSurface(QAndroidJniObject obj) { __thiz = obj; }
		EGLSurface()
		{
			__constructor();
		}
	};
} // namespace javax::microedition::khronos::egl

