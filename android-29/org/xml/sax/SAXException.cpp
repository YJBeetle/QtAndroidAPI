#include "../../../java/io/ObjectInputStream.hpp"
#include "../../../java/io/ObjectOutputStream.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./SAXException.hpp"

namespace org::xml::sax
{
	// Fields
	
	// QAndroidJniObject forward
	SAXException::SAXException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	SAXException::SAXException()
		: java::lang::Exception(
			"org.xml.sax.SAXException",
			"()V"
		) {}
	SAXException::SAXException(java::lang::Exception arg0)
		: java::lang::Exception(
			"org.xml.sax.SAXException",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		) {}
	SAXException::SAXException(jstring arg0)
		: java::lang::Exception(
			"org.xml.sax.SAXException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SAXException::SAXException(jstring arg0, java::lang::Exception arg1)
		: java::lang::Exception(
			"org.xml.sax.SAXException",
			"(Ljava/lang/String;Ljava/lang/Exception;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	jthrowable SAXException::getCause()
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	QAndroidJniObject SAXException::getException()
	{
		return callObjectMethod(
			"getException",
			"()Ljava/lang/Exception;"
		);
	}
	jstring SAXException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SAXException::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace org::xml::sax

