#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace org::xml::sax
{
	class InputSource;
}
namespace org::xml::sax
{
	class SAXParseException;
}
namespace org::xml::sax::helpers
{
	class AttributesImpl;
}
namespace org::xml::sax::helpers
{
	class NamespaceSupport;
}

namespace org::xml::sax::helpers
{
	class ParserAdapter : public __JniBaseClass
	{
	public:
		// Fields
		
		ParserAdapter(QAndroidJniObject obj);
		// Constructors
		ParserAdapter();
		ParserAdapter(__JniBaseClass &arg0);
		
		// Methods
		void characters(jcharArray arg0, jint arg1, jint arg2);
		void endDocument();
		void endElement(jstring arg0);
		void endElement(const QString &arg0);
		QAndroidJniObject getContentHandler();
		QAndroidJniObject getDTDHandler();
		QAndroidJniObject getEntityResolver();
		QAndroidJniObject getErrorHandler();
		jboolean getFeature(jstring arg0);
		jboolean getFeature(const QString &arg0);
		jobject getProperty(jstring arg0);
		jobject getProperty(const QString &arg0);
		void ignorableWhitespace(jcharArray arg0, jint arg1, jint arg2);
		void parse(jstring arg0);
		void parse(const QString &arg0);
		void parse(org::xml::sax::InputSource arg0);
		void processingInstruction(jstring arg0, jstring arg1);
		void processingInstruction(const QString &arg0, const QString &arg1);
		void setContentHandler(__JniBaseClass arg0);
		void setDTDHandler(__JniBaseClass arg0);
		void setDocumentLocator(__JniBaseClass arg0);
		void setEntityResolver(__JniBaseClass arg0);
		void setErrorHandler(__JniBaseClass arg0);
		void setFeature(jstring arg0, jboolean arg1);
		void setFeature(const QString &arg0, jboolean arg1);
		void setProperty(jstring arg0, jobject arg1);
		void setProperty(const QString &arg0, jobject arg1);
		void startDocument();
		void startElement(jstring arg0, __JniBaseClass arg1);
		void startElement(const QString &arg0, __JniBaseClass arg1);
	};
} // namespace org::xml::sax::helpers

