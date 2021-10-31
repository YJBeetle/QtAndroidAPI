#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace org::xml::sax::helpers
{
	class AttributeListImpl : public __JniBaseClass
	{
	public:
		// Fields
		
		AttributeListImpl(QAndroidJniObject obj);
		// Constructors
		AttributeListImpl();
		AttributeListImpl(__JniBaseClass arg0);
		
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
		void setAttributeList(__JniBaseClass arg0);
	};
} // namespace org::xml::sax::helpers

