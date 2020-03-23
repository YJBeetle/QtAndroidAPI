#pragma once

#ifndef JAVAX_XML_VALIDATION_TYPEINFOPROVIDER
#define JAVAX_XML_VALIDATION_TYPEINFOPROVIDER

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::xml::validation
{
	class TypeInfoProvider : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getElementTypeInfo();
		QAndroidJniObject getAttributeTypeInfo(jint arg0);
		jboolean isIdAttribute(jint arg0);
		jboolean isSpecified(jint arg0);
	};
} // namespace __jni_impl::javax::xml::validation


namespace __jni_impl::javax::xml::validation
{
	// Fields
	
	// Constructors
	void TypeInfoProvider::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.validation.TypeInfoProvider",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TypeInfoProvider::getElementTypeInfo()
	{
		return __thiz.callObjectMethod(
			"getElementTypeInfo",
			"()Lorg/w3c/dom/TypeInfo;");
	}
	QAndroidJniObject TypeInfoProvider::getAttributeTypeInfo(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getAttributeTypeInfo",
			"(I)Lorg/w3c/dom/TypeInfo;",
			arg0);
	}
	jboolean TypeInfoProvider::isIdAttribute(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isIdAttribute",
			"(I)Z",
			arg0);
	}
	jboolean TypeInfoProvider::isSpecified(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSpecified",
			"(I)Z",
			arg0);
	}
} // namespace __jni_impl::javax::xml::validation

namespace javax::xml::validation
{
	class TypeInfoProvider : public __jni_impl::javax::xml::validation::TypeInfoProvider
	{
	public:
		TypeInfoProvider(QAndroidJniObject obj) { __thiz = obj; }
		TypeInfoProvider()
		{
			__constructor();
		}
	};
} // namespace javax::xml::validation

#endif // JAVAX_XML_VALIDATION_TYPEINFOPROVIDER

