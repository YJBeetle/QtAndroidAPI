#pragma once

#include "../../../../JObject.hpp"


namespace org::xml::sax::helpers
{
	class AttributesImpl : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AttributesImpl(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AttributesImpl(QAndroidJniObject obj);
		
		// Constructors
		AttributesImpl();
		AttributesImpl(JObject arg0);
		
		// Methods
		void addAttribute(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4);
		void clear();
		jint getIndex(jstring arg0);
		jint getIndex(jstring arg0, jstring arg1);
		jint getLength();
		jstring getLocalName(jint arg0);
		jstring getQName(jint arg0);
		jstring getType(jint arg0);
		jstring getType(jstring arg0);
		jstring getType(jstring arg0, jstring arg1);
		jstring getURI(jint arg0);
		jstring getValue(jint arg0);
		jstring getValue(jstring arg0);
		jstring getValue(jstring arg0, jstring arg1);
		void removeAttribute(jint arg0);
		void setAttribute(jint arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jstring arg5);
		void setAttributes(JObject arg0);
		void setLocalName(jint arg0, jstring arg1);
		void setQName(jint arg0, jstring arg1);
		void setType(jint arg0, jstring arg1);
		void setURI(jint arg0, jstring arg1);
		void setValue(jint arg0, jstring arg1);
	};
} // namespace org::xml::sax::helpers

