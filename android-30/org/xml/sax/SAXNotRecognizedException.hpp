#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./SAXException.hpp"


namespace org::xml::sax
{
	class SAXNotRecognizedException : public org::xml::sax::SAXException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SAXNotRecognizedException(const char *className, const char *sig, Ts...agv) : org::xml::sax::SAXException(className, sig, std::forward<Ts>(agv)...) {}
		SAXNotRecognizedException(QJniObject obj);
		
		// Constructors
		SAXNotRecognizedException();
		SAXNotRecognizedException(jstring arg0);
		
		// Methods
	};
} // namespace org::xml::sax

