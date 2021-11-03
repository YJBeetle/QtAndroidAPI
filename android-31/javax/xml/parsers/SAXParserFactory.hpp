#pragma once

#include "../../../JObject.hpp"

namespace java::lang
{
	class ClassLoader;
}
namespace javax::xml::parsers
{
	class SAXParser;
}
namespace javax::xml::validation
{
	class Schema;
}

namespace javax::xml::parsers
{
	class SAXParserFactory : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SAXParserFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SAXParserFactory(QJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::xml::parsers::SAXParserFactory newDefaultInstance();
		static javax::xml::parsers::SAXParserFactory newDefaultNSInstance();
		static javax::xml::parsers::SAXParserFactory newInstance();
		static javax::xml::parsers::SAXParserFactory newInstance(jstring arg0, java::lang::ClassLoader arg1);
		static javax::xml::parsers::SAXParserFactory newNSInstance();
		static javax::xml::parsers::SAXParserFactory newNSInstance(jstring arg0, java::lang::ClassLoader arg1);
		jboolean getFeature(jstring arg0);
		javax::xml::validation::Schema getSchema();
		jboolean isNamespaceAware();
		jboolean isValidating();
		jboolean isXIncludeAware();
		javax::xml::parsers::SAXParser newSAXParser();
		void setFeature(jstring arg0, jboolean arg1);
		void setNamespaceAware(jboolean arg0);
		void setSchema(javax::xml::validation::Schema arg0);
		void setValidating(jboolean arg0);
		void setXIncludeAware(jboolean arg0);
	};
} // namespace javax::xml::parsers

