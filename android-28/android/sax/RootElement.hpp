#pragma once

#include "../../JString.hpp"
#include "./RootElement.def.hpp"

namespace android::sax
{
	// Fields
	
	// Constructors
	inline RootElement::RootElement(JString arg0)
		: android::sax::Element(
			"android.sax.RootElement",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline RootElement::RootElement(JString arg0, JString arg1)
		: android::sax::Element(
			"android.sax.RootElement",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline JObject RootElement::getContentHandler() const
	{
		return callObjectMethod(
			"getContentHandler",
			"()Lorg/xml/sax/ContentHandler;"
		);
	}
} // namespace android::sax

// Base class headers
#include "./Element.hpp"

