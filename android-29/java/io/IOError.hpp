#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Error.hpp"


namespace __jni_impl::java::io
{
	class IOError : public __jni_impl::java::lang::Error
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jthrowable arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::io


namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void IOError::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.IOError",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	
	// Methods
} // namespace __jni_impl::java::io

namespace java::io
{
	class IOError : public __jni_impl::java::io::IOError
	{
	public:
		IOError(QAndroidJniObject obj) { __thiz = obj; }
		IOError(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

