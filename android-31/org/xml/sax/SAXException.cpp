#include "../../../JArray.hpp"
#include "../../../java/io/ObjectInputStream.hpp"
#include "../../../java/io/ObjectOutputStream.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./SAXException.hpp"

namespace org::xml::sax
{
	// Fields
	
	// QJniObject forward
	SAXException::SAXException(QJniObject obj) : java::lang::Exception(obj) {}
	
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
	SAXException::SAXException(JString arg0)
		: java::lang::Exception(
			"org.xml.sax.SAXException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	SAXException::SAXException(JString arg0, java::lang::Exception arg1)
		: java::lang::Exception(
			"org.xml.sax.SAXException",
			"(Ljava/lang/String;Ljava/lang/Exception;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	JThrowable SAXException::getCause()
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		);
	}
	java::lang::Exception SAXException::getException()
	{
		return callObjectMethod(
			"getException",
			"()Ljava/lang/Exception;"
		);
	}
	JString SAXException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	JString SAXException::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace org::xml::sax

