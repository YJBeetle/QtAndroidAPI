#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./SAXException.hpp"


namespace org::xml::sax
{
	class SAXNotSupportedException : public org::xml::sax::SAXException
	{
	public:
		// Fields
		
		SAXNotSupportedException(QAndroidJniObject obj);
		// Constructors
		SAXNotSupportedException();
		SAXNotSupportedException(jstring arg0);
		
		// Methods
	};
} // namespace org::xml::sax

