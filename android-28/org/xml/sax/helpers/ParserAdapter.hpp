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
		
		// QJniObject forward
		template<typename ...Ts> explicit ParserAdapter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ParserAdapter(QJniObject obj);
		
		// Constructors
		ParserAdapter();
		ParserAdapter(JObject arg0);
		
		// Methods
		void characters(JCharArray arg0, jint arg1, jint arg2);
		void endDocument();
		void endElement(JString arg0);
		JObject getContentHandler();
		JObject getDTDHandler();
		JObject getEntityResolver();
		JObject getErrorHandler();
		jboolean getFeature(JString arg0);
		JObject getProperty(JString arg0);
		void ignorableWhitespace(JCharArray arg0, jint arg1, jint arg2);
		void parse(JString arg0);
		void parse(org::xml::sax::InputSource arg0);
		void processingInstruction(JString arg0, JString arg1);
		void setContentHandler(JObject arg0);
		void setDTDHandler(JObject arg0);
		void setDocumentLocator(JObject arg0);
		void setEntityResolver(JObject arg0);
		void setErrorHandler(JObject arg0);
		void setFeature(JString arg0, jboolean arg1);
		void setProperty(JString arg0, JObject arg1);
		void startDocument();
		void startElement(JString arg0, JObject arg1);
	};
} // namespace org::xml::sax::helpers

