#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class SAXParser : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SAXParser(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SAXParser(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getParser();
		jobject getProperty(jstring arg0);
		javax::xml::validation::Schema getSchema();
		__JniBaseClass getXMLReader();
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

