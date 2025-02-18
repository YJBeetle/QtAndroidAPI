#pragma once

#include "../../../../JObject.hpp"

class JString;

namespace org::xml::sax::helpers
{
	class AttributeListImpl : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AttributeListImpl(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AttributeListImpl(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AttributeListImpl();
		AttributeListImpl(JObject arg0);
		
		// Methods
		void addAttribute(JString arg0, JString arg1, JString arg2) const;
		void clear() const;
		jint getLength() const;
		JString getName(jint arg0) const;
		JString getType(jint arg0) const;
		JString getType(JString arg0) const;
		JString getValue(jint arg0) const;
		JString getValue(JString arg0) const;
		void removeAttribute(JString arg0) const;
		void setAttributeList(JObject arg0) const;
	};
} // namespace org::xml::sax::helpers

