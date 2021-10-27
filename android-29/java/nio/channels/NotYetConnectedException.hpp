#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace __jni_impl::java::nio::channels
{
	class NotYetConnectedException : public __jni_impl::java::lang::IllegalStateException
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
	void NotYetConnectedException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.NotYetConnectedException",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class NotYetConnectedException : public __jni_impl::java::nio::channels::NotYetConnectedException
	{
	public:
		NotYetConnectedException(QAndroidJniObject obj) { __thiz = obj; }
		NotYetConnectedException()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

