#pragma once

#include "../../../JObject.hpp"

namespace java::io
{
	class File;
}
namespace java::io
{
	class InputStream;
}
class JObject;
class JString;
namespace javax::xml::validation
{
	class Schema;
}
namespace org::xml::sax
{
	class HandlerBase;
}
namespace org::xml::sax
{
	class InputSource;
}
namespace org::xml::sax::helpers
{
	class DefaultHandler;
}

namespace javax::xml::parsers
{
	class SAXParser : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SAXParser(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SAXParser(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getParser();
		JObject getProperty(JString arg0);
		javax::xml::validation::Schema getSchema();
		JObject getXMLReader();
		jboolean isNamespaceAware();
		jboolean isValidating();
		jboolean isXIncludeAware();
		void parse(java::io::File arg0, org::xml::sax::HandlerBase arg1);
		void parse(java::io::File arg0, org::xml::sax::helpers::DefaultHandler arg1);
		void parse(java::io::InputStream arg0, org::xml::sax::HandlerBase arg1);
		void parse(java::io::InputStream arg0, org::xml::sax::helpers::DefaultHandler arg1);
		void parse(JString arg0, org::xml::sax::HandlerBase arg1);
		void parse(JString arg0, org::xml::sax::helpers::DefaultHandler arg1);
		void parse(org::xml::sax::InputSource arg0, org::xml::sax::HandlerBase arg1);
		void parse(org::xml::sax::InputSource arg0, org::xml::sax::helpers::DefaultHandler arg1);
		void parse(java::io::InputStream arg0, org::xml::sax::HandlerBase arg1, JString arg2);
		void parse(java::io::InputStream arg0, org::xml::sax::helpers::DefaultHandler arg1, JString arg2);
		void reset();
		void setProperty(JString arg0, JObject arg1);
	};
} // namespace javax::xml::parsers

