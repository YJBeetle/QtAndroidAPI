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
		void addAttribute(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4) const;
		void clear() const;
		jint getIndex(JString arg0) const;
		jint getIndex(JString arg0, JString arg1) const;
		jint getLength() const;
		JString getLocalName(jint arg0) const;
		JString getQName(jint arg0) const;
		JString getType(jint arg0) const;
		JString getType(JString arg0) const;
		JString getType(JString arg0, JString arg1) const;
		JString getURI(jint arg0) const;
		JString getValue(jint arg0) const;
		JString getValue(JString arg0) const;
		JString getValue(JString arg0, JString arg1) const;
		void removeAttribute(jint arg0) const;
		void setAttribute(jint arg0, JString arg1, JString arg2, JString arg3, JString arg4, JString arg5) const;
		void setAttributes(JObject arg0) const;
		void setLocalName(jint arg0, JString arg1) const;
		void setQName(jint arg0, JString arg1) const;
		void setType(jint arg0, JString arg1) const;
		void setURI(jint arg0, JString arg1) const;
		void setValue(jint arg0, JString arg1) const;
	};
} // namespace org::xml::sax::helpers

