#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"


namespace __jni_impl::java::lang
{
	class ThreadDeath : public __jni_impl::java::lang::Error
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void ThreadDeath::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ThreadDeath",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class ThreadDeath : public __jni_impl::java::lang::ThreadDeath
	{
	public:
		ThreadDeath(QAndroidJniObject obj) { __thiz = obj; }
		ThreadDeath()
		{
			__constructor();
		}
	};
} // namespace java::lang

