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
		
		// QJniObject forward
		template<typename ...Ts> explicit SAXParser(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SAXParser(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getParser() const;
		JObject getProperty(JString arg0) const;
		javax::xml::validation::Schema getSchema() const;
		JObject getXMLReader() const;
		jboolean isNamespaceAware() const;
		jboolean isValidating() const;
		jboolean isXIncludeAware() const;
		void parse(java::io::File arg0, org::xml::sax::HandlerBase arg1) const;
		void parse(java::io::File arg0, org::xml::sax::helpers::DefaultHandler arg1) const;
		void parse(java::io::InputStream arg0, org::xml::sax::HandlerBase arg1) const;
		void parse(java::io::InputStream arg0, org::xml::sax::helpers::DefaultHandler arg1) const;
		void parse(JString arg0, org::xml::sax::HandlerBase arg1) const;
		void parse(JString arg0, org::xml::sax::helpers::DefaultHandler arg1) const;
		void parse(org::xml::sax::InputSource arg0, org::xml::sax::HandlerBase arg1) const;
		void parse(org::xml::sax::InputSource arg0, org::xml::sax::helpers::DefaultHandler arg1) const;
		void parse(java::io::InputStream arg0, org::xml::sax::HandlerBase arg1, JString arg2) const;
		void parse(java::io::InputStream arg0, org::xml::sax::helpers::DefaultHandler arg1, JString arg2) const;
		void reset() const;
		void setProperty(JString arg0, JObject arg1) const;
	};
} // namespace javax::xml::parsers

