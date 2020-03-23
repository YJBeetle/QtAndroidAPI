#pragma once

#ifndef JAVA_NIO_CHANNELS_SHUTDOWNCHANNELGROUPEXCEPTION
#define JAVA_NIO_CHANNELS_SHUTDOWNCHANNELGROUPEXCEPTION

#include "../../lang/IllegalStateException.hpp"


namespace __jni_impl::java::nio::channels
{
	class ShutdownChannelGroupException : public __jni_impl::java::lang::IllegalStateException
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
	void ShutdownChannelGroupException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.ShutdownChannelGroupException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class ShutdownChannelGroupException : public __jni_impl::java::nio::channels::ShutdownChannelGroupException
	{
	public:
		ShutdownChannelGroupException(QAndroidJniObject obj) { __thiz = obj; }
		ShutdownChannelGroupException()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_SHUTDOWNCHANNELGROUPEXCEPTION

