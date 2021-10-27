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
		
		SAXParser(QAndroidJniObject obj);
		// Constructors
		SAXParser() = default;
		
		// Methods
		QAndroidJniObject getParser();
		jobject getProperty(jstring arg0);
		jobject getProperty(const QString &arg0);
		QAndroidJniObject getSchema();
		QAndroidJniObject getXMLReader();
		jboolean isNamespaceAware();
		jboolean isValidating();
		jboolean isXIncludeAware();
		void parse(java::io::File arg0, org::xml::sax::HandlerBase arg1);
		void parse(java::io::File arg0, org::xml::sax::helpers::DefaultHandler arg1);
		void parse(java::io::InputStream arg0, org::xml::sax::HandlerBase arg1);
		void parse(java::io::InputStream arg0, org::xml::sax::helpers::DefaultHandler arg1);
		void parse(jstring arg0, org::xml::sax::HandlerBase arg1);
		void parse(const QString &arg0, org::xml::sax::HandlerBase arg1);
		void parse(jstring arg0, org::xml::sax::helpers::DefaultHandler arg1);
		void parse(const QString &arg0, org::xml::sax::helpers::DefaultHandler arg1);
		void parse(org::xml::sax::InputSource arg0, org::xml::sax::HandlerBase arg1);
		void parse(org::xml::sax::InputSource arg0, org::xml::sax::helpers::DefaultHandler arg1);
		void parse(java::io::InputStream arg0, org::xml::sax::HandlerBase arg1, jstring arg2);
		void parse(java::io::InputStream arg0, org::xml::sax::HandlerBase arg1, const QString &arg2);
		void parse(java::io::InputStream arg0, org::xml::sax::helpers::DefaultHandler arg1, jstring arg2);
		void parse(java::io::InputStream arg0, org::xml::sax::helpers::DefaultHandler arg1, const QString &arg2);
		void reset();
		void setProperty(jstring arg0, jobject arg1);
		void setProperty(const QString &arg0, jobject arg1);
	};
} // namespace javax::xml::parsers

