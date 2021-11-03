#pragma once

#include "../../../JObject.hpp"

namespace java::lang
{
	class ClassLoader;
}
class JObject;
class JString;
namespace javax::xml::parsers
{
	class DocumentBuilder;
}
namespace javax::xml::validation
{
	class Schema;
}

namespace javax::xml::parsers
{
	class DocumentBuilderFactory : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DocumentBuilderFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DocumentBuilderFactory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::xml::parsers::DocumentBuilderFactory newDefaultInstance();
		static javax::xml::parsers::DocumentBuilderFactory newDefaultNSInstance();
		static javax::xml::parsers::DocumentBuilderFactory newInstance();
		static javax::xml::parsers::DocumentBuilderFactory newInstance(JString arg0, java::lang::ClassLoader arg1);
		static javax::xml::parsers::DocumentBuilderFactory newNSInstance();
		static javax::xml::parsers::DocumentBuilderFactory newNSInstance(JString arg0, java::lang::ClassLoader arg1);
		JObject getAttribute(JString arg0);
		jboolean getFeature(JString arg0);
		javax::xml::validation::Schema getSchema();
		jboolean isCoalescing();
		jboolean isExpandEntityReferences();
		jboolean isIgnoringComments();
		jboolean isIgnoringElementContentWhitespace();
		jboolean isNamespaceAware();
		jboolean isValidating();
		jboolean isXIncludeAware();
		javax::xml::parsers::DocumentBuilder newDocumentBuilder();
		void setAttribute(JString arg0, JObject arg1);
		void setCoalescing(jboolean arg0);
		void setExpandEntityReferences(jboolean arg0);
		void setFeature(JString arg0, jboolean arg1);
		void setIgnoringComments(jboolean arg0);
		void setIgnoringElementContentWhitespace(jboolean arg0);
		void setNamespaceAware(jboolean arg0);
		void setSchema(javax::xml::validation::Schema arg0);
		void setValidating(jboolean arg0);
		void setXIncludeAware(jboolean arg0);
	};
} // namespace javax::xml::parsers

