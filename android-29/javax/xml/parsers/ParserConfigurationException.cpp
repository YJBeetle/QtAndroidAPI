#include "./ParserConfigurationException.hpp"

namespace javax::xml::parsers
{
	// Fields
	
	ParserConfigurationException::ParserConfigurationException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ParserConfigurationException::ParserConfigurationException()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.parsers.ParserConfigurationException",
			"()V"
		);
	}
	ParserConfigurationException::ParserConfigurationException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.parsers.ParserConfigurationException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ParserConfigurationException::ParserConfigurationException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.parsers.ParserConfigurationException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace javax::xml::parsers

