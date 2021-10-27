#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}

namespace __jni_impl::java::util
{
	class InvalidPropertiesFormatException : public __jni_impl::java::io::IOException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jthrowable arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::util

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void InvalidPropertiesFormatException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.InvalidPropertiesFormatException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void InvalidPropertiesFormatException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.InvalidPropertiesFormatException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void InvalidPropertiesFormatException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.InvalidPropertiesFormatException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	
	// Methods
} // namespace __jni_impl::java::util

namespace java::util
{
	class InvalidPropertiesFormatException : public __jni_impl::java::util::InvalidPropertiesFormatException
	{
	public:
		InvalidPropertiesFormatException(QAndroidJniObject obj) { __thiz = obj; }
		InvalidPropertiesFormatException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		InvalidPropertiesFormatException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

