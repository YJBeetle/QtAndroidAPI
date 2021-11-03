#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./SAXException.hpp"

namespace java::lang
{
	class Exception;
}

namespace org::xml::sax
{
	class SAXParseException : public org::xml::sax::SAXException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SAXParseException(const char *className, const char *sig, Ts...agv) : org::xml::sax::SAXException(className, sig, std::forward<Ts>(agv)...) {}
		SAXParseException(QJniObject obj);
		
		// Constructors
		SAXParseException(jstring arg0, JObject arg1);
		SAXParseException(jstring arg0, JObject arg1, java::lang::Exception arg2);
		SAXParseException(jstring arg0, jstring arg1, jstring arg2, jint arg3, jint arg4);
		SAXParseException(jstring arg0, jstring arg1, jstring arg2, jint arg3, jint arg4, java::lang::Exception arg5);
		
		// Methods
		jint getColumnNumber();
		jint getLineNumber();
		jstring getPublicId();
		jstring getSystemId();
		jstring toString();
	};
} // namespace org::xml::sax

