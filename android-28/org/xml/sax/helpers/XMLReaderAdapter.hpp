#pragma once

#include "../../../../JObject.hpp"

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
		void characters(jcharArray arg0, jint arg1, jint arg2);
		void endDocument();
		void endElement(jstring arg0, jstring arg1, jstring arg2);
		void endPrefixMapping(jstring arg0);
		void ignorableWhitespace(jcharArray arg0, jint arg1, jint arg2);
		void parse(jstring arg0);
		void parse(org::xml::sax::InputSource arg0);
		void processingInstruction(jstring arg0, jstring arg1);
		void setDTDHandler(JObject arg0);
		void setDocumentHandler(JObject arg0);
		void setDocumentLocator(JObject arg0);
		void setEntityResolver(JObject arg0);
		void setErrorHandler(JObject arg0);
		void setLocale(java::util::Locale arg0);
		void skippedEntity(jstring arg0);
		void startDocument();
		void startElement(jstring arg0, jstring arg1, jstring arg2, JObject arg3);
		void startPrefixMapping(jstring arg0, jstring arg1);
	};
} // namespace org::xml::sax::helpers

