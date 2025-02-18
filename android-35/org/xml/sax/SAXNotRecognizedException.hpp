#pragma once

#include "../../../JString.hpp"
#include "./SAXNotRecognizedException.def.hpp"

namespace org::xml::sax
{
	// Fields
	
	// Constructors
	inline SAXNotRecognizedException::SAXNotRecognizedException()
		: org::xml::sax::SAXException(
			"org.xml.sax.SAXNotRecognizedException",
			"()V"
		) {}
	inline SAXNotRecognizedException::SAXNotRecognizedException(JString arg0)
		: org::xml::sax::SAXException(
			"org.xml.sax.SAXNotRecognizedException",
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
