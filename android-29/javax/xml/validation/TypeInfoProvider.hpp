#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::xml::validation
{
	class TypeInfoProvider : public __JniBaseClass
	{
	public:
		// Fields
		
		TypeInfoProvider(QAndroidJniObject obj);
		// Constructors
		TypeInfoProvider() = default;
		
		// Methods
		QAndroidJniObject getAttributeTypeInfo(jint arg0);
		QAndroidJniObject getElementTypeInfo();
		jboolean isIdAttribute(jint arg0);
		jboolean isSpecified(jint arg0);
	};
} // namespace javax::xml::validation

