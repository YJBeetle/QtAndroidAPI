#pragma once

#include "../../../__JniBaseClass.hpp"

namespace org::xml::sax
{
	class InputSource;
}
namespace org::xml::sax
{
	class SAXParseException;
}

namespace org::xml::sax
{
	class HandlerBase : public __JniBaseClass
	{
	public:
		// Fields
		
		HandlerBase(QAndroidJniObject obj);
		// Constructors
		HandlerBase();
		
		// Methods
		void characters(jcharArray arg0, jint arg1, jint arg2);
		void endDocument();
		void endElement(jstring arg0);
		void endElement(const QString &arg0);
		void error(org::xml::sax::SAXParseException arg0);
		void fatalError(org::xml::sax::SAXParseException arg0);
		void ignorableWhitespace(jcharArray arg0, jint arg1, jint arg2);
		void notationDecl(jstring arg0, jstring arg1, jstring arg2);
		void notationDecl(const QString &arg0, const QString &arg1, const QString &arg2);
		void processingInstruction(jstring arg0, jstring arg1);
		void processingInstruction(const QString &arg0, const QString &arg1);
		QAndroidJniObject resolveEntity(jstring arg0, jstring arg1);
		QAndroidJniObject resolveEntity(const QString &arg0, const QString &arg1);
		void setDocumentLocator(__JniBaseClass arg0);
		void startDocument();
		void startElement(jstring arg0, __JniBaseClass arg1);
		void startElement(const QString &arg0, __JniBaseClass arg1);
		void unparsedEntityDecl(jstring arg0, jstring arg1, jstring arg2, jstring arg3);
		void unparsedEntityDecl(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3);
		void warning(org::xml::sax::SAXParseException arg0);
	};
} // namespace org::xml::sax

