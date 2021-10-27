#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace java::util
{
	class Locale;
}
namespace org::xml::sax
{
	class InputSource;
}

namespace org::xml::sax::helpers
{
	class XMLReaderAdapter : public __JniBaseClass
	{
	public:
		// Fields
		
		XMLReaderAdapter(QAndroidJniObject obj);
		// Constructors
		XMLReaderAdapter();
		XMLReaderAdapter(__JniBaseClass &arg0);
		
		// Methods
		void characters(jcharArray arg0, jint arg1, jint arg2);
		void endDocument();
		void endElement(jstring arg0, jstring arg1, jstring arg2);
		void endElement(const QString &arg0, const QString &arg1, const QString &arg2);
		void endPrefixMapping(jstring arg0);
		void endPrefixMapping(const QString &arg0);
		void ignorableWhitespace(jcharArray arg0, jint arg1, jint arg2);
		void parse(jstring arg0);
		void parse(const QString &arg0);
		void parse(org::xml::sax::InputSource arg0);
		void processingInstruction(jstring arg0, jstring arg1);
		void processingInstruction(const QString &arg0, const QString &arg1);
		void setDTDHandler(__JniBaseClass arg0);
		void setDocumentHandler(__JniBaseClass arg0);
		void setDocumentLocator(__JniBaseClass arg0);
		void setEntityResolver(__JniBaseClass arg0);
		void setErrorHandler(__JniBaseClass arg0);
		void setLocale(java::util::Locale arg0);
		void skippedEntity(jstring arg0);
		void skippedEntity(const QString &arg0);
		void startDocument();
		void startElement(jstring arg0, jstring arg1, jstring arg2, __JniBaseClass arg3);
		void startElement(const QString &arg0, const QString &arg1, const QString &arg2, __JniBaseClass arg3);
		void startPrefixMapping(jstring arg0, jstring arg1);
		void startPrefixMapping(const QString &arg0, const QString &arg1);
	};
} // namespace org::xml::sax::helpers

