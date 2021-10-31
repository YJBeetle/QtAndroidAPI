#include "./TypeInfoProvider.hpp"

namespace javax::xml::validation
{
	// Fields
	
	// QAndroidJniObject forward
	TypeInfoProvider::TypeInfoProvider(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject TypeInfoProvider::getAttributeTypeInfo(jint arg0)
	{
		return callObjectMethod(
			"getAttributeTypeInfo",
			"(I)Lorg/w3c/dom/TypeInfo;",
			arg0
		);
	}
	QAndroidJniObject TypeInfoProvider::getElementTypeInfo()
	{
		return callObjectMethod(
			"getElementTypeInfo",
			"()Lorg/w3c/dom/TypeInfo;"
		);
	}
	jboolean TypeInfoProvider::isIdAttribute(jint arg0)
	{
		return callMethod<jboolean>(
			"isIdAttribute",
			"(I)Z",
			arg0
		);
	}
	jboolean TypeInfoProvider::isSpecified(jint arg0)
	{
		return callMethod<jboolean>(
			"isSpecified",
			"(I)Z",
			arg0
		);
	}
} // namespace javax::xml::validation

