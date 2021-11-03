#pragma once

#include "../../../../JObject.hpp"

class JCharArray;
class JArray;
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
	class AttributesImpl;
}
namespace org::xml::sax::helpers
{
	class NamespaceSupport;
}

namespace org::xml::sax::helpers
{
	class ParserAdapter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ParserAdapter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ParserAdapter(QAndroidJniObject obj);
		
		// Constructors
		ParserAdapter();
		ParserAdapter(JObject arg0);
		
		// Methods
		void characters(JCharArray arg0, jint arg1, jint arg2) const;
		void endDocument() const;
		void endElement(JString arg0) const;
		JObject getContentHandler() const;
		JObject getDTDHandler() const;
		JObject getEntityResolver() const;
		JObject getErrorHandler() const;
		jboolean getFeature(JString arg0) const;
		JObject getProperty(JString arg0) const;
		void ignorableWhitespace(JCharArray arg0, jint arg1, jint arg2) const;
		void parse(JString arg0) const;
		void parse(org::xml::sax::InputSource arg0) const;
		void processingInstruction(JString arg0, JString arg1) const;
		void setContentHandler(JObject arg0) const;
		void setDTDHandler(JObject arg0) const;
		void setDocumentLocator(JObject arg0) const;
		void setEntityResolver(JObject arg0) const;
		void setErrorHandler(JObject arg0) const;
		void setFeature(JString arg0, jboolean arg1) const;
		void setProperty(JString arg0, JObject arg1) const;
		void startDocument() const;
		void startElement(JString arg0, JObject arg1) const;
	};
} // namespace org::xml::sax::helpers

