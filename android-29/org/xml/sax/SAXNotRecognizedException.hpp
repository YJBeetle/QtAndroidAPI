#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./SAXException.hpp"


namespace org::xml::sax
{
	class SAXNotRecognizedException : public org::xml::sax::SAXException
	{
	public:
		// Fields
		
		SAXNotRecognizedException(QAndroidJniObject obj);
		// Constructors
		SAXNotRecognizedException();
		SAXNotRecognizedException(jstring &arg0);
		SAXNotRecognizedException(const QString &arg0);
		
		// Methods
	};
} // namespace org::xml::sax

