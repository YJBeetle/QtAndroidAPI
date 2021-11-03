#pragma once

#include "../../../JObject.hpp"

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
	class HandlerBase : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit HandlerBase(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HandlerBase(QJniObject obj);
		
		// Constructors
		HandlerBase();
		
		// Methods
		void characters(jcharArray arg0, jint arg1, jint arg2);
		void endDocument();
		void endElement(jstring arg0);
		void error(org::xml::sax::SAXParseException arg0);
		void fatalError(org::xml::sax::SAXParseException arg0);
		void ignorableWhitespace(jcharArray arg0, jint arg1, jint arg2);
		void notationDecl(jstring arg0, jstring arg1, jstring arg2);
		void processingInstruction(jstring arg0, jstring arg1);
		org::xml::sax::InputSource resolveEntity(jstring arg0, jstring arg1);
		void setDocumentLocator(JObject arg0);
		void startDocument();
		void startElement(jstring arg0, JObject arg1);
		void unparsedEntityDecl(jstring arg0, jstring arg1, jstring arg2, jstring arg3);
		void warning(org::xml::sax::SAXParseException arg0);
	};
} // namespace org::xml::sax

