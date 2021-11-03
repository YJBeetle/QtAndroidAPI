#pragma once

#include "../../../JObject.hpp"


namespace javax::xml::validation
{
	class TypeInfoProvider : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TypeInfoProvider(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TypeInfoProvider(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getAttributeTypeInfo(jint arg0);
		JObject getElementTypeInfo();
		jboolean isIdAttribute(jint arg0);
		jboolean isSpecified(jint arg0);
	};
} // namespace javax::xml::validation

