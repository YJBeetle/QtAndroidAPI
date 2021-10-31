#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"


namespace javax::xml::parsers
{
	class ParserConfigurationException : public java::lang::Exception
	{
	public:
		// Fields
		
		ParserConfigurationException(QAndroidJniObject obj);
		// Constructors
		ParserConfigurationException();
		ParserConfigurationException(jstring arg0);
		
		// Methods
	};
} // namespace javax::xml::parsers

