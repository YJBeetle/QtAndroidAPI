#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace __jni_impl::java::nio::channels
{
	class ReadPendingException : public __jni_impl::java::lang::IllegalStateException
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
	void ReadPendingException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.ReadPendingException",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class ReadPendingException : public __jni_impl::java::nio::channels::ReadPendingException
	{
	public:
		ReadPendingException(QAndroidJniObject obj) { __thiz = obj; }
		ReadPendingException()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

