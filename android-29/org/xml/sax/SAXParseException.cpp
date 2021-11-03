#include "../../../java/lang/Exception.hpp"
#include "../../../JString.hpp"
#include "./SAXParseException.hpp"

namespace org::xml::sax
{
	// Fields
	
	// QAndroidJniObject forward
	SAXParseException::SAXParseException(QAndroidJniObject obj) : org::xml::sax::SAXException(obj) {}
	
	// Constructors
	SAXParseException::SAXParseException(JString arg0, JObject arg1)
		: org::xml::sax::SAXException(
			"org.xml.sax.SAXParseException",
			"(Ljava/lang/String;Lorg/xml/sax/Locator;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	SAXParseException::SAXParseException(JString arg0, JObject arg1, java::lang::Exception arg2)
		: org::xml::sax::SAXException(
			"org.xml.sax.SAXParseException",
			"(Ljava/lang/String;Lorg/xml/sax/Locator;Ljava/lang/Exception;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		) {}
	SAXParseException::SAXParseException(JString arg0, JString arg1, JString arg2, jint arg3, jint arg4)
		: org::xml::sax::SAXException(
			"org.xml.sax.SAXParseException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3,
			arg4
		) {}
	SAXParseException::SAXParseException(JString arg0, JString arg1, JString arg2, jint arg3, jint arg4, java::lang::Exception arg5)
		: org::xml::sax::SAXException(
			"org.xml.sax.SAXParseException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IILjava/lang/Exception;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3,
			arg4,
			arg5.object()
		) {}
	
	// Methods
	jint SAXParseException::getColumnNumber() const
	{
		return callMethod<jint>(
			"getColumnNumber",
			"()I"
		);
	}
	jint SAXParseException::getLineNumber() const
	{
		return callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	JString SAXParseException::getPublicId() const
	{
		return callObjectMethod(
			"getPublicId",
			"()Ljava/lang/String;"
		);
	}
	JString SAXParseException::getSystemId() const
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		);
	}
	JString SAXParseException::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace org::xml::sax

