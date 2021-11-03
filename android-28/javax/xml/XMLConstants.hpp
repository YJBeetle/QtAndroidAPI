#pragma once

#include "../../JObject.hpp"

class JString;

namespace javax::xml
{
	class XMLConstants : public JObject
	{
	public:
		// Fields
		static JString ACCESS_EXTERNAL_DTD();
		static JString ACCESS_EXTERNAL_SCHEMA();
		static JString ACCESS_EXTERNAL_STYLESHEET();
		static JString DEFAULT_NS_PREFIX();
		static JString FEATURE_SECURE_PROCESSING();
		static JString NULL_NS_URI();
		static JString RELAXNG_NS_URI();
		static JString USE_CATALOG();
		static JString W3C_XML_SCHEMA_INSTANCE_NS_URI();
		static JString W3C_XML_SCHEMA_NS_URI();
		static JString W3C_XPATH_DATATYPE_NS_URI();
		static JString XMLNS_ATTRIBUTE();
		static JString XMLNS_ATTRIBUTE_NS_URI();
		static JString XML_DTD_NS_URI();
		static JString XML_NS_PREFIX();
		static JString XML_NS_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit XMLConstants(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		XMLConstants(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace javax::xml

