#pragma once

#ifndef JAVA_NIO_CHANNELS_ILLEGALCHANNELGROUPEXCEPTION
#define JAVA_NIO_CHANNELS_ILLEGALCHANNELGROUPEXCEPTION

#include "../../lang/IllegalArgumentException.hpp"


namespace __jni_impl::java::nio::channels
{
	class IllegalChannelGroupException : public __jni_impl::java::lang::IllegalArgumentException
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
	void IllegalChannelGroupException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.IllegalChannelGroupException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class IllegalChannelGroupException : public __jni_impl::java::nio::channels::IllegalChannelGroupException
	{
	public:
		IllegalChannelGroupException(QAndroidJniObject obj) { __thiz = obj; }
		IllegalChannelGroupException()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_ILLEGALCHANNELGROUPEXCEPTION

