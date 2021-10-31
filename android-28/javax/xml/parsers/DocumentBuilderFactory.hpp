#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::lang
{
	class ClassLoader;
}
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
	class DocumentBuilderFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DocumentBuilderFactory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DocumentBuilderFactory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::xml::parsers::DocumentBuilderFactory newDefaultInstance();
		static javax::xml::parsers::DocumentBuilderFactory newDefaultNSInstance();
		static javax::xml::parsers::DocumentBuilderFactory newInstance();
		static javax::xml::parsers::DocumentBuilderFactory newInstance(jstring arg0, java::lang::ClassLoader arg1);
		static javax::xml::parsers::DocumentBuilderFactory newNSInstance();
		static javax::xml::parsers::DocumentBuilderFactory newNSInstance(jstring arg0, java::lang::ClassLoader arg1);
		jobject getAttribute(jstring arg0);
		jboolean getFeature(jstring arg0);
		javax::xml::validation::Schema getSchema();
		jboolean isCoalescing();
		jboolean isExpandEntityReferences();
		jboolean isIgnoringComments();
		jboolean isIgnoringElementContentWhitespace();
		jboolean isNamespaceAware();
		jboolean isValidating();
		jboolean isXIncludeAware();
		javax::xml::parsers::DocumentBuilder newDocumentBuilder();
		void setAttribute(jstring arg0, jobject arg1);
		void setCoalescing(jboolean arg0);
		void setExpandEntityReferences(jboolean arg0);
		void setFeature(jstring arg0, jboolean arg1);
		void setIgnoringComments(jboolean arg0);
		void setIgnoringElementContentWhitespace(jboolean arg0);
		void setNamespaceAware(jboolean arg0);
		void setSchema(javax::xml::validation::Schema arg0);
		void setValidating(jboolean arg0);
		void setXIncludeAware(jboolean arg0);
	};
} // namespace javax::xml::parsers

