#pragma once

#include "../../../JArray.hpp"
#include "../../../java/io/ObjectInputStream.def.hpp"
#include "../../../java/io/ObjectOutputStream.def.hpp"
#include "../../../java/lang/Exception.def.hpp"
#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./SAXException.def.hpp"

namespace org::xml::sax
{
	// Fields
	
	// Constructors
	inline SAXException::SAXException()
		: java::lang::Exception(
			"org.xml.sax.SAXException",
			"()V"
		) {}
	inline SAXException::SAXException(java::lang::Exception arg0)
		: java::lang::Exception(
			"org.xml.sax.SAXException",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		) {}
	inline SAXException::SAXException(JString arg0)
		: java::lang::Exception(
			"org.xml.sax.SAXException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline SAXException::SAXException(JString arg0, java::lang::Exception arg1)
		: java::lang::Exception(
			"org.xml.sax.SAXException",
			"(Ljava/lang/String;Ljava/lang/Exception;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline JThrowable SAXException::getCause() const
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		);
	}
	inline java::lang::Exception SAXException::getException() const
	{
		return callObjectMethod(
			"getException",
			"()Ljava/lang/Exception;"
		);
	}
	inline JString SAXException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	inline JString SAXException::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace org::xml::sax

// Base class headers
#include "../../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace org::xml::sax;
#endif
