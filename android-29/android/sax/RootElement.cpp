#include "./RootElement.hpp"

namespace android::sax
{
	// Fields
	
	RootElement::RootElement(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RootElement::RootElement(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.sax.RootElement",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	RootElement::RootElement(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.sax.RootElement",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject RootElement::getContentHandler()
	{
		return __thiz.callObjectMethod(
			"getContentHandler",
			"()Lorg/xml/sax/ContentHandler;"
		);
	}
} // namespace android::sax

