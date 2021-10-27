#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::security
{
	class KeyFactorySpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::security


namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void KeyFactorySpi::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyFactorySpi",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::security

namespace java::security
{
	class KeyFactorySpi : public __jni_impl::java::security::KeyFactorySpi
	{
	public:
		KeyFactorySpi(QAndroidJniObject obj) { __thiz = obj; }
		KeyFactorySpi()
		{
			__constructor();
		}
	};
} // namespace java::security

