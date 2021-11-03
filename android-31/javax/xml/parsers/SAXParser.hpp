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
		
		// QJniObject forward
		template<typename ...Ts> explicit SAXParser(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SAXParser(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getParser();
		jobject getProperty(jstring arg0);
		javax::xml::validation::Schema getSchema();
		JObject getXMLReader();
		jboolean isNamespaceAware();
		jboolean isValidating();
		jboolean isXIncludeAware();
		void parse(java::io::File arg0, org::xml::sax::HandlerBase arg1);
		void parse(java::io::File arg0, org::xml::sax::helpers::DefaultHandler arg1);
		void parse(java::io::InputStream arg0, org::xml::sax::HandlerBase arg1);
		void parse(java::io::InputStream arg0, org::xml::sax::helpers::DefaultHandler arg1);
		void parse(jstring arg0, org::xml::sax::HandlerBase arg1);
		void parse(jstring arg0, org::xml::sax::helpers::DefaultHandler arg1);
		void parse(org::xml::sax::InputSource arg0, org::xml::sax::HandlerBase arg1);
		void parse(org::xml::sax::InputSource arg0, org::xml::sax::helpers::DefaultHandler arg1);
		void parse(java::io::InputStream arg0, org::xml::sax::HandlerBase arg1, jstring arg2);
		void parse(java::io::InputStream arg0, org::xml::sax::helpers::DefaultHandler arg1, jstring arg2);
		void reset();
		void setProperty(jstring arg0, jobject arg1);
	};
} // namespace javax::xml::parsers

