#pragma once

#include "../../__JniBaseClass.hpp"


namespace javax::xml
{
	class XMLConstants : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACCESS_EXTERNAL_DTD();
		static jstring ACCESS_EXTERNAL_SCHEMA();
		static jstring ACCESS_EXTERNAL_STYLESHEET();
		static jstring DEFAULT_NS_PREFIX();
		static jstring FEATURE_SECURE_PROCESSING();
		static jstring NULL_NS_URI();
		static jstring RELAXNG_NS_URI();
		static jstring USE_CATALOG();
		static jstring W3C_XML_SCHEMA_INSTANCE_NS_URI();
		static jstring W3C_XML_SCHEMA_NS_URI();
		static jstring W3C_XPATH_DATATYPE_NS_URI();
		static jstring XMLNS_ATTRIBUTE();
		static jstring XMLNS_ATTRIBUTE_NS_URI();
		static jstring XML_DTD_NS_URI();
		static jstring XML_NS_PREFIX();
		static jstring XML_NS_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit XMLConstants(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		XMLConstants(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace javax::xml

