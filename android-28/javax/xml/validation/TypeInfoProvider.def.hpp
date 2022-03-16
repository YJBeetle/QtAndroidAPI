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
		TypeInfoProvider(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getAttributeTypeInfo(jint arg0) const;
		JObject getElementTypeInfo() const;
		jboolean isIdAttribute(jint arg0) const;
		jboolean isSpecified(jint arg0) const;
	};
} // namespace javax::xml::validation

