#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::sax
{
	class Element : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Element(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Element(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::sax::Element getChild(jstring arg0);
		android::sax::Element getChild(jstring arg0, jstring arg1);
		android::sax::Element requireChild(jstring arg0);
		android::sax::Element requireChild(jstring arg0, jstring arg1);
		void setElementListener(__JniBaseClass arg0);
		void setEndElementListener(__JniBaseClass arg0);
		void setEndTextElementListener(__JniBaseClass arg0);
		void setStartElementListener(__JniBaseClass arg0);
		void setTextElementListener(__JniBaseClass arg0);
		jstring toString();
	};
} // namespace android::sax

