#pragma once

#ifndef JAVAX_XML_VALIDATION_SCHEMAFACTORYLOADER
#define JAVAX_XML_VALIDATION_SCHEMAFACTORYLOADER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::javax::xml::validation
{
	class SchemaFactory;
}

namespace __jni_impl::javax::xml::validation
{
	class SchemaFactoryLoader : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject newFactory(jstring arg0);
	};
} // namespace __jni_impl::javax::xml::validation

#include "SchemaFactory.hpp"

namespace __jni_impl::javax::xml::validation
{
	// Fields
	
	// Constructors
	void SchemaFactoryLoader::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.validation.SchemaFactoryLoader",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SchemaFactoryLoader::newFactory(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"newFactory",
			"(Ljava/lang/String;)Ljavax/xml/validation/SchemaFactory;",
			arg0
		);
	}
} // namespace __jni_impl::javax::xml::validation

namespace javax::xml::validation
{
	class SchemaFactoryLoader : public __jni_impl::javax::xml::validation::SchemaFactoryLoader
	{
	public:
		SchemaFactoryLoader(QAndroidJniObject obj) { __thiz = obj; }
		SchemaFactoryLoader()
		{
			__constructor();
		}
	};
} // namespace javax::xml::validation

#endif // JAVAX_XML_VALIDATION_SCHEMAFACTORYLOADER

