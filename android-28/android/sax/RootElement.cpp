#include "./RootElement.hpp"

namespace android::sax
{
	// Fields
	
	// QJniObject forward
	RootElement::RootElement(QJniObject obj) : android::sax::Element(obj) {}
	
	// Constructors
	RootElement::RootElement(jstring arg0)
		: android::sax::Element(
			"android.sax.RootElement",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	RootElement::RootElement(jstring arg0, jstring arg1)
		: android::sax::Element(
			"android.sax.RootElement",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	__JniBaseClass RootElement::getContentHandler()
	{
		return callObjectMethod(
			"getContentHandler",
			"()Lorg/xml/sax/ContentHandler;"
		);
	}
} // namespace android::sax

