#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class SAXParserFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SAXParserFactory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SAXParserFactory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject newDefaultInstance();
		static QAndroidJniObject newDefaultNSInstance();
		static QAndroidJniObject newInstance();
		static QAndroidJniObject newInstance(jstring arg0, java::lang::ClassLoader arg1);
		static QAndroidJniObject newNSInstance();
		static QAndroidJniObject newNSInstance(jstring arg0, java::lang::ClassLoader arg1);
		jboolean getFeature(jstring arg0);
		QAndroidJniObject getSchema();
		jboolean isNamespaceAware();
		jboolean isValidating();
		jboolean isXIncludeAware();
		QAndroidJniObject newSAXParser();
		void setFeature(jstring arg0, jboolean arg1);
		void setNamespaceAware(jboolean arg0);
		void setSchema(javax::xml::validation::Schema arg0);
		void setValidating(jboolean arg0);
		void setXIncludeAware(jboolean arg0);
	};
} // namespace javax::xml::parsers

