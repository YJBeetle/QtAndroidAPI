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
	class XMLFilterImpl : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit XMLFilterImpl(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		XMLFilterImpl(QAndroidJniObject obj);
		
		// Constructors
		XMLFilterImpl();
		XMLFilterImpl(__JniBaseClass arg0);
		
		// Methods
		void characters(jcharArray arg0, jint arg1, jint arg2);
		void endDocument();
		void endElement(jstring arg0, jstring arg1, jstring arg2);
		void endPrefixMapping(jstring arg0);
		void error(org::xml::sax::SAXParseException arg0);
		void fatalError(org::xml::sax::SAXParseException arg0);
		__JniBaseClass getContentHandler();
		__JniBaseClass getDTDHandler();
		__JniBaseClass getEntityResolver();
		__JniBaseClass getErrorHandler();
		jboolean getFeature(jstring arg0);
		__JniBaseClass getParent();
		jobject getProperty(jstring arg0);
		void ignorableWhitespace(jcharArray arg0, jint arg1, jint arg2);
		void notationDecl(jstring arg0, jstring arg1, jstring arg2);
		void parse(jstring arg0);
		void parse(org::xml::sax::InputSource arg0);
		void processingInstruction(jstring arg0, jstring arg1);
		org::xml::sax::InputSource resolveEntity(jstring arg0, jstring arg1);
		void setContentHandler(__JniBaseClass arg0);
		void setDTDHandler(__JniBaseClass arg0);
		void setDocumentLocator(__JniBaseClass arg0);
		void setEntityResolver(__JniBaseClass arg0);
		void setErrorHandler(__JniBaseClass arg0);
		void setFeature(jstring arg0, jboolean arg1);
		void setParent(__JniBaseClass arg0);
		void setProperty(jstring arg0, jobject arg1);
		void skippedEntity(jstring arg0);
		void startDocument();
		void startElement(jstring arg0, jstring arg1, jstring arg2, __JniBaseClass arg3);
		void startPrefixMapping(jstring arg0, jstring arg1);
		void unparsedEntityDecl(jstring arg0, jstring arg1, jstring arg2, jstring arg3);
		void warning(org::xml::sax::SAXParseException arg0);
	};
} // namespace org::xml::sax::helpers

