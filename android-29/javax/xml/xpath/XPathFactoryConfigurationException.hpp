#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./XPathException.hpp"


namespace javax::xml::xpath
{
	class XPathFactoryConfigurationException : public javax::xml::xpath::XPathException
	{
	public:
		// Fields
		
		XPathFactoryConfigurationException(QAndroidJniObject obj);
		// Constructors
		XPathFactoryConfigurationException(jstring arg0);
		XPathFactoryConfigurationException(jthrowable arg0);
		XPathFactoryConfigurationException() = default;
		
		// Methods
	};
} // namespace javax::xml::xpath

