#pragma once

#include "../../../../JObject.hpp"

class JString;

namespace org::xml::sax::helpers
{
	class AttributeListImpl : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AttributeListImpl(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AttributeListImpl(QAndroidJniObject obj);
		
		// Constructors
		AttributeListImpl();
		AttributeListImpl(JObject arg0);
		
		// Methods
		void addAttribute(JString arg0, JString arg1, JString arg2);
		void clear();
		jint getLength();
		JString getName(jint arg0);
		JString getType(jint arg0);
		JString getType(JString arg0);
		JString getValue(jint arg0);
		JString getValue(JString arg0);
		void removeAttribute(JString arg0);
		void setAttributeList(JObject arg0);
	};
} // namespace org::xml::sax::helpers

