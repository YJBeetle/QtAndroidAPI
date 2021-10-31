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
		
		// QJniObject forward
		template<typename ...Ts> explicit SAXNotSupportedException(const char *className, const char *sig, Ts...agv) : org::xml::sax::SAXException(className, sig, std::forward<Ts>(agv)...) {}
		SAXNotSupportedException(QJniObject obj);
		
		// Constructors
		SAXNotSupportedException();
		SAXNotSupportedException(jstring arg0);
		
		// Methods
	};
} // namespace org::xml::sax

