#include "../../../java/io/ObjectInputStream.hpp"
#include "../../../java/io/ObjectOutputStream.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./SAXException.hpp"

namespace org::xml::sax
{
	// Fields
	
	SAXException::SAXException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SAXException::SAXException()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXException",
			"()V"
		);
	}
	SAXException::SAXException(java::lang::Exception &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXException",
			"(Ljava/lang/Exception;)V",
			arg0.__jniObject().object()
		);
	}
	SAXException::SAXException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SAXException::SAXException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	SAXException::SAXException(jstring &arg0, java::lang::Exception &arg1)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXException",
			"(Ljava/lang/String;Ljava/lang/Exception;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	SAXException::SAXException(const QString &arg0, java::lang::Exception &arg1)
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
} // namespace org::xml::sax

