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
		void characters(JCharArray arg0, jint arg1, jint arg2);
		void endDocument();
		void endElement(JString arg0, JString arg1, JString arg2);
		void endPrefixMapping(JString arg0);
		void ignorableWhitespace(JCharArray arg0, jint arg1, jint arg2);
		void parse(JString arg0);
		void parse(org::xml::sax::InputSource arg0);
		void processingInstruction(JString arg0, JString arg1);
		void setDTDHandler(JObject arg0);
		void setDocumentHandler(JObject arg0);
		void setDocumentLocator(JObject arg0);
		void setEntityResolver(JObject arg0);
		void setErrorHandler(JObject arg0);
		void setLocale(java::util::Locale arg0);
		void skippedEntity(JString arg0);
		void startDocument();
		void startElement(JString arg0, JString arg1, JString arg2, JObject arg3);
		void startPrefixMapping(JString arg0, JString arg1);
	};
} // namespace org::xml::sax::helpers

