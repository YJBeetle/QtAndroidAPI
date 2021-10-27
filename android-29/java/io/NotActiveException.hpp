#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "IOException.hpp"
#include "ObjectStreamException.hpp"


namespace __jni_impl::java::io
{
	class NotActiveException : public __jni_impl::java::io::ObjectStreamException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::io


namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void NotActiveException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.NotActiveException",
			"()V"
		);
	}
	void NotActiveException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.NotActiveException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NotActiveException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.NotActiveException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::io

namespace java::io
{
	class NotActiveException : public __jni_impl::java::io::NotActiveException
	{
	public:
		NotActiveException(QAndroidJniObject obj) { __thiz = obj; }
		NotActiveException()
		{
			__constructor();
		}
		NotActiveException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

