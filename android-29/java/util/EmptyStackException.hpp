#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"


namespace __jni_impl::java::util
{
	class EmptyStackException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void EmptyStackException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.EmptyStackException",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::util

namespace java::util
{
	class EmptyStackException : public __jni_impl::java::util::EmptyStackException
	{
	public:
		EmptyStackException(QAndroidJniObject obj) { __thiz = obj; }
		EmptyStackException()
		{
			__constructor();
		}
	};
} // namespace java::util

