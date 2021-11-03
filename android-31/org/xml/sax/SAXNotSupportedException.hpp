#pragma once

#include "./SAXException.hpp"

class JString;

namespace org::xml::sax
{
	class SAXNotSupportedException : public org::xml::sax::SAXException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SAXNotSupportedException(const char *className, const char *sig, Ts...agv) : org::xml::sax::SAXException(className, sig, std::forward<Ts>(agv)...) {}
		SAXNotSupportedException(QAndroidJniObject obj);
		
		// Constructors
		SAXNotSupportedException();
		SAXNotSupportedException(JString arg0);
		
		// Methods
	};
} // namespace org::xml::sax

