#pragma once

#include "../../../JString.hpp"
#include "./SAXNotSupportedException.def.hpp"

namespace org::xml::sax
{
	// Fields
	
	// Constructors
	inline SAXNotSupportedException::SAXNotSupportedException()
		: org::xml::sax::SAXException(
			"org.xml.sax.SAXNotSupportedException",
			"()V"
		) {}
	inline SAXNotSupportedException::SAXNotSupportedException(JString arg0)
		: org::xml::sax::SAXException(
			"org.xml.sax.SAXNotSupportedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace org::xml::sax

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "./SAXException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace org::xml::sax;
#endif
