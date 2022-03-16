#pragma once

#include "./SAXException.hpp"

namespace java::lang
{
	class Exception;
}
class JString;

namespace org::xml::sax
{
	class SAXParseException : public org::xml::sax::SAXException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SAXParseException(const char *className, const char *sig, Ts...agv) : org::xml::sax::SAXException(className, sig, std::forward<Ts>(agv)...) {}
		SAXParseException(QAndroidJniObject obj) : org::xml::sax::SAXException(obj) {}
		
		// Constructors
		SAXParseException(JString arg0, JObject arg1);
		SAXParseException(JString arg0, JObject arg1, java::lang::Exception arg2);
		SAXParseException(JString arg0, JString arg1, JString arg2, jint arg3, jint arg4);
		SAXParseException(JString arg0, JString arg1, JString arg2, jint arg3, jint arg4, java::lang::Exception arg5);
		
		// Methods
		jint getColumnNumber() const;
		jint getLineNumber() const;
		JString getPublicId() const;
		JString getSystemId() const;
		JString toString() const;
	};
} // namespace org::xml::sax

