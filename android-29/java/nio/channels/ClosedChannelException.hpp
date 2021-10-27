#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"


namespace __jni_impl::java::nio::channels
{
	class ClosedChannelException : public __jni_impl::java::io::IOException
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
	void ClosedChannelException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.ClosedChannelException",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class ClosedChannelException : public __jni_impl::java::nio::channels::ClosedChannelException
	{
	public:
		ClosedChannelException(QAndroidJniObject obj) { __thiz = obj; }
		ClosedChannelException()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

