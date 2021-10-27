#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Error.hpp"

namespace __jni_impl::java::lang
{
	class Exception;
}

namespace __jni_impl::java::nio::charset
{
	class CoderMalfunctionError : public __jni_impl::java::lang::Error
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::lang::Exception arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::nio::charset

#include "../../lang/Exception.hpp"

namespace __jni_impl::java::nio::charset
{
	// Fields
	
	// Constructors
	void CoderMalfunctionError::__constructor(__jni_impl::java::lang::Exception arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.charset.CoderMalfunctionError",
			"(Ljava/lang/Exception;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::nio::charset

namespace java::nio::charset
{
	class CoderMalfunctionError : public __jni_impl::java::nio::charset::CoderMalfunctionError
	{
	public:
		CoderMalfunctionError(QAndroidJniObject obj) { __thiz = obj; }
		CoderMalfunctionError(__jni_impl::java::lang::Exception arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::nio::charset

