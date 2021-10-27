#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace __jni_impl::java::nio::file
{
	class ClosedWatchServiceException : public __jni_impl::java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::nio::file


namespace __jni_impl::java::nio::file
{
	// Fields
	
	// Constructors
	void ClosedWatchServiceException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.ClosedWatchServiceException",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class ClosedWatchServiceException : public __jni_impl::java::nio::file::ClosedWatchServiceException
	{
	public:
		ClosedWatchServiceException(QAndroidJniObject obj) { __thiz = obj; }
		ClosedWatchServiceException()
		{
			__constructor();
		}
	};
} // namespace java::nio::file

