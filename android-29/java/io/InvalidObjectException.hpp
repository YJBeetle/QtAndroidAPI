#pragma once

#ifndef JAVA_IO_INVALIDOBJECTEXCEPTION
#define JAVA_IO_INVALIDOBJECTEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "IOException.hpp"
#include "ObjectStreamException.hpp"


namespace __jni_impl::java::io
{
	class InvalidObjectException : public __jni_impl::java::io::ObjectStreamException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::io


namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void InvalidObjectException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.InvalidObjectException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void InvalidObjectException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.InvalidObjectException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::io

namespace java::io
{
	class InvalidObjectException : public __jni_impl::java::io::InvalidObjectException
	{
	public:
		InvalidObjectException(QAndroidJniObject obj) { __thiz = obj; }
		InvalidObjectException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

#endif // JAVA_IO_INVALIDOBJECTEXCEPTION

