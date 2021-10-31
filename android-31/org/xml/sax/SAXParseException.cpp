#include "../../../java/lang/Exception.hpp"
#include "./SAXParseException.hpp"

namespace org::xml::sax
{
	// Fields
	
	// QJniObject forward
	SAXParseException::SAXParseException(QJniObject obj) : org::xml::sax::SAXException(obj) {}
	
	// Constructors
	SAXParseException::SAXParseException(jstring arg0, __JniBaseClass arg1)
		: org::xml::sax::SAXException(
			"org.xml.sax.SAXParseException",
			"(Ljava/lang/String;Lorg/xml/sax/Locator;)V",
			arg0,
			arg1.object()
		) {}
	SAXParseException::SAXParseException(jstring arg0, __JniBaseClass arg1, java::lang::Exception arg2)
		: org::xml::sax::SAXException(
			"org.xml.sax.SAXParseException",
			"(Ljava/lang/String;Lorg/xml/sax/Locator;Ljava/lang/Exception;)V",
			arg0,
			arg1.object(),
			arg2.object()
		) {}
	SAXParseException::SAXParseException(jstring arg0, jstring arg1, jstring arg2, jint arg3, jint arg4)
		: org::xml::sax::SAXException(
			"org.xml.sax.SAXParseException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	SAXParseException::SAXParseException(jstring arg0, jstring arg1, jstring arg2, jint arg3, jint arg4, java::lang::Exception arg5)
		: org::xml::sax::SAXException(
			"org.xml.sax.SAXParseException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IILjava/lang/Exception;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		) {}
	
	// Methods
	jint SAXParseException::getColumnNumber()
	{
		return callMethod<jint>(
			"getColumnNumber",
			"()I"
		);
	}
	jint SAXParseException::getLineNumber()
	{
		return callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	jstring SAXParseException::getPublicId()
	{
		return callObjectMethod(
			"getPublicId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SAXParseException::getSystemId()
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SAXParseException::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace org::xml::sax

