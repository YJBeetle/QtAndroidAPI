#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"


namespace __jni_impl::java::nio::channels
{
	class FileLockInterruptionException : public __jni_impl::java::io::IOException
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
	void FileLockInterruptionException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.FileLockInterruptionException",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class FileLockInterruptionException : public __jni_impl::java::nio::channels::FileLockInterruptionException
	{
	public:
		FileLockInterruptionException(QAndroidJniObject obj) { __thiz = obj; }
		FileLockInterruptionException()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

