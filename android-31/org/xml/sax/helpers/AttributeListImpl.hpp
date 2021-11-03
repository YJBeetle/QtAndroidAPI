#pragma once

#include "../../../../JObject.hpp"


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
		void addAttribute(jstring arg0, jstring arg1, jstring arg2);
		void clear();
		jint getLength();
		jstring getName(jint arg0);
		jstring getType(jint arg0);
		jstring getType(jstring arg0);
		jstring getValue(jint arg0);
		jstring getValue(jstring arg0);
		void removeAttribute(jstring arg0);
		void setAttributeList(JObject arg0);
	};
} // namespace org::xml::sax::helpers

