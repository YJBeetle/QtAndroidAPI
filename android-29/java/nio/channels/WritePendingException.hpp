#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace __jni_impl::java::nio::channels
{
	class WritePendingException : public __jni_impl::java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::nio::channels


namespace __jni_impl::java::nio::channels
{
	// Fields
	
	// Constructors
	void WritePendingException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.WritePendingException",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class WritePendingException : public __jni_impl::java::nio::channels::WritePendingException
	{
	public:
		WritePendingException(QAndroidJniObject obj) { __thiz = obj; }
		WritePendingException()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

