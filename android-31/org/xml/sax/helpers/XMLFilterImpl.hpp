#pragma once

#include "../../../../JObject.hpp"

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
	class XMLFilterImpl : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit XMLFilterImpl(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		XMLFilterImpl(QJniObject obj);
		
		// Constructors
		XMLFilterImpl();
		XMLFilterImpl(JObject arg0);
		
		// Methods
		void characters(jcharArray arg0, jint arg1, jint arg2);
		void endDocument();
		void endElement(jstring arg0, jstring arg1, jstring arg2);
		void endPrefixMapping(jstring arg0);
		void error(org::xml::sax::SAXParseException arg0);
		void fatalError(org::xml::sax::SAXParseException arg0);
		JObject getContentHandler();
		JObject getDTDHandler();
		JObject getEntityResolver();
		JObject getErrorHandler();
		jboolean getFeature(jstring arg0);
		JObject getParent();
		jobject getProperty(jstring arg0);
		void ignorableWhitespace(jcharArray arg0, jint arg1, jint arg2);
		void notationDecl(jstring arg0, jstring arg1, jstring arg2);
		void parse(jstring arg0);
		void parse(org::xml::sax::InputSource arg0);
		void processingInstruction(jstring arg0, jstring arg1);
		org::xml::sax::InputSource resolveEntity(jstring arg0, jstring arg1);
		void setContentHandler(JObject arg0);
		void setDTDHandler(JObject arg0);
		void setDocumentLocator(JObject arg0);
		void setEntityResolver(JObject arg0);
		void setErrorHandler(JObject arg0);
		void setFeature(jstring arg0, jboolean arg1);
		void setParent(JObject arg0);
		void setProperty(jstring arg0, jobject arg1);
		void skippedEntity(jstring arg0);
		void startDocument();
		void startElement(jstring arg0, jstring arg1, jstring arg2, JObject arg3);
		void startPrefixMapping(jstring arg0, jstring arg1);
		void unparsedEntityDecl(jstring arg0, jstring arg1, jstring arg2, jstring arg3);
		void warning(org::xml::sax::SAXParseException arg0);
	};
} // namespace org::xml::sax::helpers

