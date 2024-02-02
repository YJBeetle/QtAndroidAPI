#pragma once

#include "./TypeInfoProvider.def.hpp"

namespace javax::xml::validation
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject TypeInfoProvider::getAttributeTypeInfo(jint arg0) const
	{
		return callObjectMethod(
			"getAttributeTypeInfo",
			"(I)Lorg/w3c/dom/TypeInfo;",
			arg0
		);
	}
	inline JObject TypeInfoProvider::getElementTypeInfo() const
	{
		return callObjectMethod(
			"getElementTypeInfo",
			"()Lorg/w3c/dom/TypeInfo;"
		);
	}
	inline jboolean TypeInfoProvider::isIdAttribute(jint arg0) const
	{
		return callMethod<jboolean>(
			"isIdAttribute",
			"(I)Z",
			arg0
		);
	}
	inline jboolean TypeInfoProvider::isSpecified(jint arg0) const
	{
		return callMethod<jboolean>(
			"isSpecified",
			"(I)Z",
			arg0
		);
	}
} // namespace javax::xml::validation

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::xml::validation;
#endif
