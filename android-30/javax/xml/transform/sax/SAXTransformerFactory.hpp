#pragma once

#include "../TransformerFactory.hpp"

class JString;

namespace javax::xml::transform::sax
{
	class SAXTransformerFactory : public javax::xml::transform::TransformerFactory
	{
	public:
		// Fields
		static JString FEATURE();
		static JString FEATURE_XMLFILTER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SAXTransformerFactory(const char *className, const char *sig, Ts...agv) : javax::xml::transform::TransformerFactory(className, sig, std::forward<Ts>(agv)...) {}
		SAXTransformerFactory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject newTemplatesHandler();
		JObject newTransformerHandler();
		JObject newTransformerHandler(JObject arg0);
		JObject newXMLFilter(JObject arg0);
	};
} // namespace javax::xml::transform::sax

