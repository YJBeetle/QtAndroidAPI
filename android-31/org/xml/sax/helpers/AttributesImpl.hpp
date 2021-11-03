#pragma once

#include "../../../../JObject.hpp"

class JArray;
class JString;

namespace org::xml::sax::helpers
{
	class AttributesImpl : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AttributesImpl(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AttributesImpl(QJniObject obj);
		
		// Constructors
		AttributesImpl();
		AttributesImpl(JObject arg0);
		
		// Methods
		void addAttribute(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4);
		void clear();
		jint getIndex(JString arg0);
		jint getIndex(JString arg0, JString arg1);
		jint getLength();
		JString getLocalName(jint arg0);
		JString getQName(jint arg0);
		JString getType(jint arg0);
		JString getType(JString arg0);
		JString getType(JString arg0, JString arg1);
		JString getURI(jint arg0);
		JString getValue(jint arg0);
		JString getValue(JString arg0);
		JString getValue(JString arg0, JString arg1);
		void removeAttribute(jint arg0);
		void setAttribute(jint arg0, JString arg1, JString arg2, JString arg3, JString arg4, JString arg5);
		void setAttributes(JObject arg0);
		void setLocalName(jint arg0, JString arg1);
		void setQName(jint arg0, JString arg1);
		void setType(jint arg0, JString arg1);
		void setURI(jint arg0, JString arg1);
		void setValue(jint arg0, JString arg1);
	};
} // namespace org::xml::sax::helpers

