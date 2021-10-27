#pragma once

#ifndef JAVA_SECURITY_PRIVILEGEDACTIONEXCEPTION
#define JAVA_SECURITY_PRIVILEGEDACTIONEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::lang
{
	class Exception;
}

namespace __jni_impl::java::security
{
	class PrivilegedActionException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::lang::Exception arg0);
		
		// Methods
		QAndroidJniObject getException();
		jstring toString();
	};
} // namespace __jni_impl::java::security

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../lang/Exception.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void PrivilegedActionException::__constructor(__jni_impl::java::lang::Exception arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.PrivilegedActionException",
			"(Ljava/lang/Exception;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject PrivilegedActionException::getException()
	{
		return __thiz.callObjectMethod(
			"getException",
			"()Ljava/lang/Exception;"
		);
	}
	jstring PrivilegedActionException::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class PrivilegedActionException : public __jni_impl::java::security::PrivilegedActionException
	{
	public:
		PrivilegedActionException(QAndroidJniObject obj) { __thiz = obj; }
		PrivilegedActionException(__jni_impl::java::lang::Exception arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_PRIVILEGEDACTIONEXCEPTION

