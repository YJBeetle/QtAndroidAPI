#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"


namespace __jni_impl::java::nio::channels
{
	class InterruptedByTimeoutException : public __jni_impl::java::io::IOException
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
	void InterruptedByTimeoutException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.InterruptedByTimeoutException",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class InterruptedByTimeoutException : public __jni_impl::java::nio::channels::InterruptedByTimeoutException
	{
	public:
		InterruptedByTimeoutException(QAndroidJniObject obj) { __thiz = obj; }
		InterruptedByTimeoutException()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

