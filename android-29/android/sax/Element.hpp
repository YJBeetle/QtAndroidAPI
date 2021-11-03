#pragma once

#include "../../JObject.hpp"

class JString;

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
		android::sax::Element getChild(JString arg0);
		android::sax::Element getChild(JString arg0, JString arg1);
		android::sax::Element requireChild(JString arg0);
		android::sax::Element requireChild(JString arg0, JString arg1);
		void setElementListener(JObject arg0);
		void setEndElementListener(JObject arg0);
		void setEndTextElementListener(JObject arg0);
		void setStartElementListener(JObject arg0);
		void setTextElementListener(JObject arg0);
		JString toString();
	};
} // namespace android::sax

