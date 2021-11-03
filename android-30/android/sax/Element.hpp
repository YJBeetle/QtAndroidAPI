#pragma once

#include "../../JObject.hpp"


namespace android::sax
{
	class Element : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Element(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Element(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::sax::Element getChild(jstring arg0);
		android::sax::Element getChild(jstring arg0, jstring arg1);
		android::sax::Element requireChild(jstring arg0);
		android::sax::Element requireChild(jstring arg0, jstring arg1);
		void setElementListener(JObject arg0);
		void setEndElementListener(JObject arg0);
		void setEndTextElementListener(JObject arg0);
		void setStartElementListener(JObject arg0);
		void setTextElementListener(JObject arg0);
		jstring toString();
	};
} // namespace android::sax

