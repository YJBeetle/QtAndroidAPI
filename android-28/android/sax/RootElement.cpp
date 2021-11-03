#include "../../JString.hpp"
#include "./RootElement.hpp"

namespace android::sax
{
	// Fields
	
	// QJniObject forward
	RootElement::RootElement(QJniObject obj) : android::sax::Element(obj) {}
	
	// Constructors
	RootElement::RootElement(JString arg0)
		: android::sax::Element(
			"android.sax.RootElement",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	RootElement::RootElement(JString arg0, JString arg1)
		: android::sax::Element(
			"android.sax.RootElement",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	JObject RootElement::getContentHandler()
	{
		return callObjectMethod(
			"getContentHandler",
			"()Lorg/xml/sax/ContentHandler;"
		);
	}
} // namespace android::sax

