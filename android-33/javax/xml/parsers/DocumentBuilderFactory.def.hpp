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
		
		// QJniObject forward
		template<typename ...Ts> explicit DocumentBuilderFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DocumentBuilderFactory(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static javax::xml::parsers::DocumentBuilderFactory newDefaultInstance();
		static javax::xml::parsers::DocumentBuilderFactory newDefaultNSInstance();
		static javax::xml::parsers::DocumentBuilderFactory newInstance();
		static javax::xml::parsers::DocumentBuilderFactory newInstance(JString arg0, java::lang::ClassLoader arg1);
		static javax::xml::parsers::DocumentBuilderFactory newNSInstance();
		static javax::xml::parsers::DocumentBuilderFactory newNSInstance(JString arg0, java::lang::ClassLoader arg1);
		JObject getAttribute(JString arg0) const;
		jboolean getFeature(JString arg0) const;
		javax::xml::validation::Schema getSchema() const;
		jboolean isCoalescing() const;
		jboolean isExpandEntityReferences() const;
		jboolean isIgnoringComments() const;
		jboolean isIgnoringElementContentWhitespace() const;
		jboolean isNamespaceAware() const;
		jboolean isValidating() const;
		jboolean isXIncludeAware() const;
		javax::xml::parsers::DocumentBuilder newDocumentBuilder() const;
		void setAttribute(JString arg0, JObject arg1) const;
		void setCoalescing(jboolean arg0) const;
		void setExpandEntityReferences(jboolean arg0) const;
		void setFeature(JString arg0, jboolean arg1) const;
		void setIgnoringComments(jboolean arg0) const;
		void setIgnoringElementContentWhitespace(jboolean arg0) const;
		void setNamespaceAware(jboolean arg0) const;
		void setSchema(javax::xml::validation::Schema arg0) const;
		void setValidating(jboolean arg0) const;
		void setXIncludeAware(jboolean arg0) const;
	};
} // namespace javax::xml::parsers

