#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::xml::validation
{
	class TypeInfoProvider : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TypeInfoProvider(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TypeInfoProvider(QJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getAttributeTypeInfo(jint arg0);
		__JniBaseClass getElementTypeInfo();
		jboolean isIdAttribute(jint arg0);
		jboolean isSpecified(jint arg0);
	};
} // namespace javax::xml::validation

