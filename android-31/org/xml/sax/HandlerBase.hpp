#pragma once

#include "../../../JObject.hpp"

class JCharArray;
class JString;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit HandlerBase(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HandlerBase(QAndroidJniObject obj);
		
		// Constructors
		HandlerBase();
		
		// Methods
		void characters(JCharArray arg0, jint arg1, jint arg2) const;
		void endDocument() const;
		void endElement(JString arg0) const;
		void error(org::xml::sax::SAXParseException arg0) const;
		void fatalError(org::xml::sax::SAXParseException arg0) const;
		void ignorableWhitespace(JCharArray arg0, jint arg1, jint arg2) const;
		void notationDecl(JString arg0, JString arg1, JString arg2) const;
		void processingInstruction(JString arg0, JString arg1) const;
		org::xml::sax::InputSource resolveEntity(JString arg0, JString arg1) const;
		void setDocumentLocator(JObject arg0) const;
		void startDocument() const;
		void startElement(JString arg0, JObject arg1) const;
		void unparsedEntityDecl(JString arg0, JString arg1, JString arg2, JString arg3) const;
		void warning(org::xml::sax::SAXParseException arg0) const;
	};
} // namespace org::xml::sax

