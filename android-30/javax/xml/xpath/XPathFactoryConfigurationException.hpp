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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit XPathFactoryConfigurationException(const char *className, const char *sig, Ts...agv) : javax::xml::xpath::XPathException(className, sig, std::forward<Ts>(agv)...) {}
		XPathFactoryConfigurationException(QAndroidJniObject obj);
		
		// Constructors
		XPathFactoryConfigurationException(jstring arg0);
		XPathFactoryConfigurationException(jthrowable arg0);
		
		// Methods
	};
} // namespace javax::xml::xpath

