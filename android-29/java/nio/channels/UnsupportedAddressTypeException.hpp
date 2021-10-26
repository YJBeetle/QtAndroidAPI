#pragma once

#ifndef JAVA_NIO_CHANNELS_UNSUPPORTEDADDRESSTYPEEXCEPTION
#define JAVA_NIO_CHANNELS_UNSUPPORTEDADDRESSTYPEEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"


namespace __jni_impl::java::nio::channels
{
	class UnsupportedAddressTypeException : public __jni_impl::java::lang::IllegalArgumentException
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
	void UnsupportedAddressTypeException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.UnsupportedAddressTypeException",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class UnsupportedAddressTypeException : public __jni_impl::java::nio::channels::UnsupportedAddressTypeException
	{
	public:
		UnsupportedAddressTypeException(QAndroidJniObject obj) { __thiz = obj; }
		UnsupportedAddressTypeException()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_UNSUPPORTEDADDRESSTYPEEXCEPTION

