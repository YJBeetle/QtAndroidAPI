#pragma once

#ifndef JAVAX_XML_TRANSFORM_TRANSFORMEREXCEPTION
#define JAVAX_XML_TRANSFORM_TRANSFORMEREXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"

namespace __jni_impl::java::io
{
	class PrintStream;
}
namespace __jni_impl::java::io
{
	class PrintWriter;
}
namespace __jni_impl::java::security
{
	class ProtectionDomain;
}

namespace __jni_impl::javax::xml::transform
{
	class TransformerException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(jstring arg0, __jni_impl::__JniBaseClass arg1, jthrowable arg2);
		
		// Methods
		void printStackTrace();
		void printStackTrace(__jni_impl::java::io::PrintStream arg0);
		void printStackTrace(__jni_impl::java::io::PrintWriter arg0);
		jthrowable getCause();
		jthrowable initCause(jthrowable arg0);
		jthrowable getException();
		jstring getLocationAsString();
		QAndroidJniObject getLocator();
		void setLocator(__jni_impl::__JniBaseClass arg0);
		jstring getMessageAndLocation();
	};
} // namespace __jni_impl::javax::xml::transform

#include "../../../java/io/PrintStream.hpp"
#include "../../../java/io/PrintWriter.hpp"
#include "../../../java/security/ProtectionDomain.hpp"

namespace __jni_impl::javax::xml::transform
{
	// Fields
	
	// Constructors
	void TransformerException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void TransformerException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void TransformerException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void TransformerException::__constructor(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void TransformerException::__constructor(jstring arg0, __jni_impl::__JniBaseClass arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;Ljava/lang/Throwable;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2);
	}
	
	// Methods
	void TransformerException::printStackTrace()
	{
		__thiz.callMethod<void>(
			"printStackTrace",
			"()V"
		);
	}
	void TransformerException::printStackTrace(__jni_impl::java::io::PrintStream arg0)
	{
		__thiz.callMethod<void>(
			"printStackTrace",
			"(Ljava/io/PrintStream;)V",
			arg0.__jniObject().object()
		);
	}
	void TransformerException::printStackTrace(__jni_impl::java::io::PrintWriter arg0)
	{
		__thiz.callMethod<void>(
			"printStackTrace",
			"(Ljava/io/PrintWriter;)V",
			arg0.__jniObject().object()
		);
	}
	jthrowable TransformerException::getCause()
	{
		return __thiz.callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	jthrowable TransformerException::initCause(jthrowable arg0)
	{
		return __thiz.callObjectMethod(
			"initCause",
			"(Ljava/lang/Throwable;)Ljava/lang/Throwable;",
			arg0
		).object<jthrowable>();
	}
	jthrowable TransformerException::getException()
	{
		return __thiz.callObjectMethod(
			"getException",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	jstring TransformerException::getLocationAsString()
	{
		return __thiz.callObjectMethod(
			"getLocationAsString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TransformerException::getLocator()
	{
		return __thiz.callObjectMethod(
			"getLocator",
			"()Ljavax/xml/transform/SourceLocator;"
		);
	}
	void TransformerException::setLocator(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setLocator",
			"(Ljavax/xml/transform/SourceLocator;)V",
			arg0.__jniObject().object()
		);
	}
	jstring TransformerException::getMessageAndLocation()
	{
		return __thiz.callObjectMethod(
			"getMessageAndLocation",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::javax::xml::transform

namespace javax::xml::transform
{
	class TransformerException : public __jni_impl::javax::xml::transform::TransformerException
	{
	public:
		TransformerException(QAndroidJniObject obj) { __thiz = obj; }
		TransformerException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		TransformerException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		TransformerException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		TransformerException(jstring arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		TransformerException(jstring arg0, __jni_impl::__JniBaseClass arg1, jthrowable arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace javax::xml::transform

#endif // JAVAX_XML_TRANSFORM_TRANSFORMEREXCEPTION

