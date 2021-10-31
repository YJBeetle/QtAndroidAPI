#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::io
{
	class File;
}
namespace java::lang
{
	class ClassLoader;
}
namespace java::net
{
	class URL;
}
namespace javax::xml::validation
{
	class Schema;
}

namespace javax::xml::validation
{
	class SchemaFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SchemaFactory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SchemaFactory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject newDefaultInstance();
		static QAndroidJniObject newInstance(jstring arg0);
		static QAndroidJniObject newInstance(jstring arg0, jstring arg1, java::lang::ClassLoader arg2);
		QAndroidJniObject getErrorHandler();
		jboolean getFeature(jstring arg0);
		jobject getProperty(jstring arg0);
		QAndroidJniObject getResourceResolver();
		jboolean isSchemaLanguageSupported(jstring arg0);
		QAndroidJniObject newSchema();
		QAndroidJniObject newSchema(jarray arg0);
		QAndroidJniObject newSchema(java::io::File arg0);
		QAndroidJniObject newSchema(java::net::URL arg0);
		QAndroidJniObject newSchema(__JniBaseClass arg0);
		void setErrorHandler(__JniBaseClass arg0);
		void setFeature(jstring arg0, jboolean arg1);
		void setProperty(jstring arg0, jobject arg1);
		void setResourceResolver(__JniBaseClass arg0);
	};
} // namespace javax::xml::validation

