#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::microedition::khronos::egl
{
	class EGLConfig : public __JniBaseClass
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
	void EGLConfig::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.microedition.khronos.egl.EGLConfig",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::javax::microedition::khronos::egl

namespace javax::microedition::khronos::egl
{
	class EGLConfig : public __jni_impl::javax::microedition::khronos::egl::EGLConfig
	{
	public:
		EGLConfig(QAndroidJniObject obj) { __thiz = obj; }
		EGLConfig()
		{
			__constructor();
		}
	};
} // namespace javax::microedition::khronos::egl

