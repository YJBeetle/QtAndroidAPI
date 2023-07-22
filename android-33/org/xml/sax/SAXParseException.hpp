#pragma once

#include "../../../java/lang/Exception.def.hpp"
#include "../../../JString.hpp"
#include "./SAXParseException.def.hpp"

namespace org::xml::sax
{
	// Fields
	
	// Constructors
	inline SAXParseException::SAXParseException(JString arg0, JObject arg1)
		: org::xml::sax::SAXException(
			"org.xml.sax.SAXParseException",
			"(Ljava/lang/String;Lorg/xml/sax/Locator;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	inline SAXParseException::SAXParseException(JString arg0, JObject arg1, java::lang::Exception arg2)
		: org::xml::sax::SAXException(
			"org.xml.sax.SAXParseException",
			"(Ljava/lang/String;Lorg/xml/sax/Locator;Ljava/lang/Exception;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		) {}
	inline SAXParseException::SAXParseException(JString arg0, JString arg1, JString arg2, jint arg3, jint arg4)
		: org::xml::sax::SAXException(
			"org.xml.sax.SAXParseException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3,
			arg4
		) {}
	inline SAXParseException::SAXParseException(JString arg0, JString arg1, JString arg2, jint arg3, jint arg4, java::lang::Exception arg5)
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
	inline jint SAXParseException::getColumnNumber() const
	{
		return callMethod<jint>(
			"getColumnNumber",
			"()I"
		);
	}
	inline jint SAXParseException::getLineNumber() const
	{
		return callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	inline JString SAXParseException::getPublicId() const
	{
		return callObjectMethod(
			"getPublicId",
			"()Ljava/lang/String;"
		);
	}
	inline JString SAXParseException::getSystemId() const
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		);
	}
	inline JString SAXParseException::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace org::xml::sax

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "./SAXException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace org::xml::sax;
#endif
