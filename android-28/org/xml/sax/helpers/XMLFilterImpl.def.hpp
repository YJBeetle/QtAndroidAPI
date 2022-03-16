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
		
		// QJniObject forward
		template<typename ...Ts> explicit XMLFilterImpl(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		XMLFilterImpl(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		XMLFilterImpl();
		XMLFilterImpl(JObject arg0);
		
		// Methods
		void characters(JCharArray arg0, jint arg1, jint arg2) const;
		void endDocument() const;
		void endElement(JString arg0, JString arg1, JString arg2) const;
		void endPrefixMapping(JString arg0) const;
		void error(org::xml::sax::SAXParseException arg0) const;
		void fatalError(org::xml::sax::SAXParseException arg0) const;
		JObject getContentHandler() const;
		JObject getDTDHandler() const;
		JObject getEntityResolver() const;
		JObject getErrorHandler() const;
		jboolean getFeature(JString arg0) const;
		JObject getParent() const;
		JObject getProperty(JString arg0) const;
		void ignorableWhitespace(JCharArray arg0, jint arg1, jint arg2) const;
		void notationDecl(JString arg0, JString arg1, JString arg2) const;
		void parse(JString arg0) const;
		void parse(org::xml::sax::InputSource arg0) const;
		void processingInstruction(JString arg0, JString arg1) const;
		org::xml::sax::InputSource resolveEntity(JString arg0, JString arg1) const;
		void setContentHandler(JObject arg0) const;
		void setDTDHandler(JObject arg0) const;
		void setDocumentLocator(JObject arg0) const;
		void setEntityResolver(JObject arg0) const;
		void setErrorHandler(JObject arg0) const;
		void setFeature(JString arg0, jboolean arg1) const;
		void setParent(JObject arg0) const;
		void setProperty(JString arg0, JObject arg1) const;
		void skippedEntity(JString arg0) const;
		void startDocument() const;
		void startElement(JString arg0, JString arg1, JString arg2, JObject arg3) const;
		void startPrefixMapping(JString arg0, JString arg1) const;
		void unparsedEntityDecl(JString arg0, JString arg1, JString arg2, JString arg3) const;
		void warning(org::xml::sax::SAXParseException arg0) const;
	};
} // namespace org::xml::sax::helpers

