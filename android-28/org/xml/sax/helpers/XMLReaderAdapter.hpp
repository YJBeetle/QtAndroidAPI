#pragma once

#include "../../../../JObject.hpp"

class JCharArray;
class JString;
namespace java::util
{
	class Locale;
}
namespace org::xml::sax
{
	class InputSource;
}

namespace org::xml::sax::helpers
{
	class XMLReaderAdapter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit XMLReaderAdapter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		XMLReaderAdapter(QAndroidJniObject obj);
		
		// Constructors
		XMLReaderAdapter();
		XMLReaderAdapter(JObject arg0);
		
		// Methods
		void characters(JCharArray arg0, jint arg1, jint arg2) const;
		void endDocument() const;
		void endElement(JString arg0, JString arg1, JString arg2) const;
		void endPrefixMapping(JString arg0) const;
		void ignorableWhitespace(JCharArray arg0, jint arg1, jint arg2) const;
		void parse(JString arg0) const;
		void parse(org::xml::sax::InputSource arg0) const;
		void processingInstruction(JString arg0, JString arg1) const;
		void setDTDHandler(JObject arg0) const;
		void setDocumentHandler(JObject arg0) const;
		void setDocumentLocator(JObject arg0) const;
		void setEntityResolver(JObject arg0) const;
		void setErrorHandler(JObject arg0) const;
		void setLocale(java::util::Locale arg0) const;
		void skippedEntity(JString arg0) const;
		void startDocument() const;
		void startElement(JString arg0, JString arg1, JString arg2, JObject arg3) const;
		void startPrefixMapping(JString arg0, JString arg1) const;
	};
} // namespace org::xml::sax::helpers

