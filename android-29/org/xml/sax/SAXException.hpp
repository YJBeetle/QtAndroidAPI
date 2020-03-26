#pragma once

#ifndef ORG_XML_SAX_SAXEXCEPTION
#define ORG_XML_SAX_SAXEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"

namespace __jni_impl::java::lang
{
	class Exception;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}

namespace __jni_impl::org::xml::sax
{
	class SAXException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::java::lang::Exception arg1);
		void __constructor(__jni_impl::java::lang::Exception arg0);
		void __constructor(jstring arg0);
		void __constructor();
		
		// Methods
		jthrowable getCause();
		jstring toString();
		jstring getMessage();
		QAndroidJniObject getException();
	};
} // namespace __jni_impl::org::xml::sax

#include "../../../java/lang/Exception.hpp"
#include "../../../java/io/ObjectInputStream.hpp"
#include "../../../java/io/ObjectOutputStream.hpp"

namespace __jni_impl::org::xml::sax
{
	// Fields
	
	// Constructors
	void SAXException::__constructor(jstring arg0, __jni_impl::java::lang::Exception arg1)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXException",
			"(Ljava/lang/String;Ljava/lang/Exception;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void SAXException::__constructor(__jni_impl::java::lang::Exception arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXException",
			"(Ljava/lang/Exception;)V",
			arg0.__jniObject().object());
	}
	void SAXException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void SAXException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXException",
			"()V");
	}
	
	// Methods
	jthrowable SAXException::getCause()
	{
		return __thiz.callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	jstring SAXException::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SAXException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SAXException::getException()
	{
		return __thiz.callObjectMethod(
			"getException",
			"()Ljava/lang/Exception;"
		);
	}
} // namespace __jni_impl::org::xml::sax

namespace org::xml::sax
{
	class SAXException : public __jni_impl::org::xml::sax::SAXException
	{
	public:
		SAXException(QAndroidJniObject obj) { __thiz = obj; }
		SAXException(jstring arg0, __jni_impl::java::lang::Exception arg1)
		{
			__constructor(
				arg0,
				arg1);
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
		SAXException()
		{
			__constructor();
		}
	};
} // namespace org::xml::sax

#endif // ORG_XML_SAX_SAXEXCEPTION

