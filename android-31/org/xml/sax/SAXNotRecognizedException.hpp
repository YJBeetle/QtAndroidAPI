#pragma once

#include "./SAXException.hpp"

class JString;

namespace org::xml::sax
{
	class SAXNotRecognizedException : public org::xml::sax::SAXException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SAXNotRecognizedException(const char *className, const char *sig, Ts...agv) : org::xml::sax::SAXException(className, sig, std::forward<Ts>(agv)...) {}
		SAXNotRecognizedException(QAndroidJniObject obj) : org::xml::sax::SAXException(obj) {}
		
		// Constructors
		SAXNotRecognizedException();
		SAXNotRecognizedException(JString arg0);
		
		// Methods
	};
} // namespace org::xml::sax

