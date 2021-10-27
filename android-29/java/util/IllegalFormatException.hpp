#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"


namespace __jni_impl::java::util
{
	class IllegalFormatException : public __jni_impl::java::lang::IllegalArgumentException
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
	void IllegalFormatException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.IllegalFormatException",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::java::util

namespace java::util
{
	class IllegalFormatException : public __jni_impl::java::util::IllegalFormatException
	{
	public:
		IllegalFormatException(QAndroidJniObject obj) { __thiz = obj; }
		IllegalFormatException()
		{
			__constructor();
		}
	};
} // namespace java::util

