#pragma once

#ifndef JAVA_NIO_CHANNELS_UNRESOLVEDADDRESSEXCEPTION
#define JAVA_NIO_CHANNELS_UNRESOLVEDADDRESSEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"


namespace __jni_impl::java::nio::channels
{
	class UnresolvedAddressException : public __jni_impl::java::lang::IllegalArgumentException
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
	void UnresolvedAddressException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.UnresolvedAddressException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class UnresolvedAddressException : public __jni_impl::java::nio::channels::UnresolvedAddressException
	{
	public:
		UnresolvedAddressException(QAndroidJniObject obj) { __thiz = obj; }
		UnresolvedAddressException()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_UNRESOLVEDADDRESSEXCEPTION

