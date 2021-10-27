#include "./TypeInfoProvider.hpp"

namespace javax::xml::validation
{
	// Fields
	
	TypeInfoProvider::TypeInfoProvider(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject TypeInfoProvider::getAttributeTypeInfo(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getAttributeTypeInfo",
			"(I)Lorg/w3c/dom/TypeInfo;",
			arg0
		);
	}
	QAndroidJniObject TypeInfoProvider::getElementTypeInfo()
	{
		return __thiz.callObjectMethod(
			"getElementTypeInfo",
			"()Lorg/w3c/dom/TypeInfo;"
		);
	}
	jboolean TypeInfoProvider::isIdAttribute(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isIdAttribute",
			"(I)Z",
			arg0
		);
	}
	jboolean TypeInfoProvider::isSpecified(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSpecified",
			"(I)Z",
			arg0
		);
	}
} // namespace javax::xml::validation

