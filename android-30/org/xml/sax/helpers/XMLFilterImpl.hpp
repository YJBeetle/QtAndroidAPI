#pragma once

#include "../../../../JObject.hpp"

class JCharArray;
class JObject;
class JString;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit XMLFilterImpl(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		XMLFilterImpl(QAndroidJniObject obj);
		
		// Constructors
		XMLFilterImpl();
		XMLFilterImpl(JObject arg0);
		
		// Methods
		void characters(JCharArray arg0, jint arg1, jint arg2);
		void endDocument();
		void endElement(JString arg0, JString arg1, JString arg2);
		void endPrefixMapping(JString arg0);
		void error(org::xml::sax::SAXParseException arg0);
		void fatalError(org::xml::sax::SAXParseException arg0);
		JObject getContentHandler();
		JObject getDTDHandler();
		JObject getEntityResolver();
		JObject getErrorHandler();
		jboolean getFeature(JString arg0);
		JObject getParent();
		JObject getProperty(JString arg0);
		void ignorableWhitespace(JCharArray arg0, jint arg1, jint arg2);
		void notationDecl(JString arg0, JString arg1, JString arg2);
		void parse(JString arg0);
		void parse(org::xml::sax::InputSource arg0);
		void processingInstruction(JString arg0, JString arg1);
		org::xml::sax::InputSource resolveEntity(JString arg0, JString arg1);
		void setContentHandler(JObject arg0);
		void setDTDHandler(JObject arg0);
		void setDocumentLocator(JObject arg0);
		void setEntityResolver(JObject arg0);
		void setErrorHandler(JObject arg0);
		void setFeature(JString arg0, jboolean arg1);
		void setParent(JObject arg0);
		void setProperty(JString arg0, JObject arg1);
		void skippedEntity(JString arg0);
		void startDocument();
		void startElement(JString arg0, JString arg1, JString arg2, JObject arg3);
		void startPrefixMapping(JString arg0, JString arg1);
		void unparsedEntityDecl(JString arg0, JString arg1, JString arg2, JString arg3);
		void warning(org::xml::sax::SAXParseException arg0);
	};
} // namespace org::xml::sax::helpers

