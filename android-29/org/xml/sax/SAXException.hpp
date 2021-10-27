#pragma once

#ifndef ORG_XML_SAX_SAXEXCEPTION
#define ORG_XML_SAX_SAXEXCEPTION

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
namespace __jni_impl::java::lang
{
	class Exception;
}

namespace __jni_impl::org::xml::sax
{
	class SAXException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::java::lang::Exception arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, __jni_impl::java::lang::Exception arg1);
		void __constructor(const QString &arg0, __jni_impl::java::lang::Exception arg1);
		
		// Methods
		jthrowable getCause();
		QAndroidJniObject getException();
		jstring getMessage();
		jstring toString();
	};
} // namespace __jni_impl::org::xml::sax

#include "../../../java/io/ObjectInputStream.hpp"
#include "../../../java/io/ObjectOutputStream.hpp"
#include "../../../java/lang/Exception.hpp"

namespace __jni_impl::org::xml::sax
{
	// Fields
	
	// Constructors
	void SAXException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXException",
			"()V"
		);
	}
	void SAXException::__constructor(__jni_impl::java::lang::Exception arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXException",
			"(Ljava/lang/Exception;)V",
			arg0.__jniObject().object()
		);
	}
	void SAXException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SAXException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SAXException::__constructor(jstring arg0, __jni_impl::java::lang::Exception arg1)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXException",
			"(Ljava/lang/String;Ljava/lang/Exception;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void SAXException::__constructor(const QString &arg0, __jni_impl::java::lang::Exception arg1)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXException",
			"(Ljava/lang/String;Ljava/lang/Exception;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jthrowable SAXException::getCause()
	{
		return __thiz.callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	QAndroidJniObject SAXException::getException()
	{
		return __thiz.callObjectMethod(
			"getException",
			"()Ljava/lang/Exception;"
		);
	}
	jstring SAXException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SAXException::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::org::xml::sax

namespace org::xml::sax
{
	class SAXException : public __jni_impl::org::xml::sax::SAXException
	{
	public:
		SAXException(QAndroidJniObject obj) { __thiz = obj; }
		SAXException()
		{
			__constructor();
		}
		SAXException(__jni_impl::java::lang::Exception arg0)
		{
			__constructor(
				arg0);
		}
		SAXException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SAXException(jstring arg0, __jni_impl::java::lang::Exception arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace org::xml::sax

#endif // ORG_XML_SAX_SAXEXCEPTION

