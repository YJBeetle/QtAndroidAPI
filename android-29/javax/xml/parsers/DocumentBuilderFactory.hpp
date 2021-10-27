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
		
		DocumentBuilderFactory(QAndroidJniObject obj);
		// Constructors
		DocumentBuilderFactory() = default;
		
		// Methods
		static QAndroidJniObject newDefaultInstance();
		static QAndroidJniObject newDefaultNSInstance();
		static QAndroidJniObject newInstance();
		static QAndroidJniObject newInstance(jstring arg0, java::lang::ClassLoader arg1);
		static QAndroidJniObject newInstance(const QString &arg0, java::lang::ClassLoader arg1);
		static QAndroidJniObject newNSInstance();
		static QAndroidJniObject newNSInstance(jstring arg0, java::lang::ClassLoader arg1);
		static QAndroidJniObject newNSInstance(const QString &arg0, java::lang::ClassLoader arg1);
		jobject getAttribute(jstring arg0);
		jobject getAttribute(const QString &arg0);
		jboolean getFeature(jstring arg0);
		jboolean getFeature(const QString &arg0);
		QAndroidJniObject getSchema();
		jboolean isCoalescing();
		jboolean isExpandEntityReferences();
		jboolean isIgnoringComments();
		jboolean isIgnoringElementContentWhitespace();
		jboolean isNamespaceAware();
		jboolean isValidating();
		jboolean isXIncludeAware();
		QAndroidJniObject newDocumentBuilder();
		void setAttribute(jstring arg0, jobject arg1);
		void setAttribute(const QString &arg0, jobject arg1);
		void setCoalescing(jboolean arg0);
		void setExpandEntityReferences(jboolean arg0);
		void setFeature(jstring arg0, jboolean arg1);
		void setFeature(const QString &arg0, jboolean arg1);
		void setIgnoringComments(jboolean arg0);
		void setIgnoringElementContentWhitespace(jboolean arg0);
		void setNamespaceAware(jboolean arg0);
		void setSchema(javax::xml::validation::Schema arg0);
		void setValidating(jboolean arg0);
		void setXIncludeAware(jboolean arg0);
	};
} // namespace javax::xml::parsers

