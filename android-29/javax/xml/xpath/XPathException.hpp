#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::io
{
	class PrintStream;
}
namespace __jni_impl::java::io
{
	class PrintWriter;
}

namespace __jni_impl::javax::xml::xpath
{
	class XPathException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jthrowable arg0);
		
		// Methods
		jthrowable getCause();
		void printStackTrace();
		void printStackTrace(__jni_impl::java::io::PrintStream arg0);
		void printStackTrace(__jni_impl::java::io::PrintWriter arg0);
	};
} // namespace __jni_impl::javax::xml::xpath

#include "../../../java/io/ObjectInputStream.hpp"
#include "../../../java/io/ObjectOutputStream.hpp"
#include "../../../java/io/PrintStream.hpp"
#include "../../../java/io/PrintWriter.hpp"

namespace __jni_impl::javax::xml::xpath
{
	// Fields
	
	// Constructors
	void XPathException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.xpath.XPathException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void XPathException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.xpath.XPathException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void XPathException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.xpath.XPathException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	
	// Methods
	jthrowable XPathException::getCause()
	{
		return __thiz.callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	void XPathException::printStackTrace()
	{
		__thiz.callMethod<void>(
			"printStackTrace",
			"()V"
		);
	}
	void XPathException::printStackTrace(__jni_impl::java::io::PrintStream arg0)
	{
		__thiz.callMethod<void>(
			"printStackTrace",
			"(Ljava/io/PrintStream;)V",
			arg0.__jniObject().object()
		);
	}
	void XPathException::printStackTrace(__jni_impl::java::io::PrintWriter arg0)
	{
		__thiz.callMethod<void>(
			"printStackTrace",
			"(Ljava/io/PrintWriter;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::javax::xml::xpath

namespace javax::xml::xpath
{
	class XPathException : public __jni_impl::javax::xml::xpath::XPathException
	{
	public:
		XPathException(QAndroidJniObject obj) { __thiz = obj; }
		XPathException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		XPathException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::xml::xpath

