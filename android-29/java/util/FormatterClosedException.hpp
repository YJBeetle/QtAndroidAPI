#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalStateException.hpp"


namespace __jni_impl::java::util
{
	class FormatterClosedException : public __jni_impl::java::lang::IllegalStateException
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
	void FormatterClosedException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.FormatterClosedException",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::util

namespace java::util
{
	class FormatterClosedException : public __jni_impl::java::util::FormatterClosedException
	{
	public:
		FormatterClosedException(QAndroidJniObject obj) { __thiz = obj; }
		FormatterClosedException()
		{
			__constructor();
		}
	};
} // namespace java::util

