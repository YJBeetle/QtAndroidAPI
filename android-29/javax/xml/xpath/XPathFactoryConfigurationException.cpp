#include "./XPathFactoryConfigurationException.hpp"

namespace javax::xml::xpath
{
	// Fields
	
	XPathFactoryConfigurationException::XPathFactoryConfigurationException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	XPathFactoryConfigurationException::XPathFactoryConfigurationException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.xpath.XPathFactoryConfigurationException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	XPathFactoryConfigurationException::XPathFactoryConfigurationException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.xpath.XPathFactoryConfigurationException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	
	// Methods
} // namespace javax::xml::xpath

