#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::sax
{
	class Element : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Element(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Element(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::sax::Element getChild(JString arg0) const;
		android::sax::Element getChild(JString arg0, JString arg1) const;
		android::sax::Element requireChild(JString arg0) const;
		android::sax::Element requireChild(JString arg0, JString arg1) const;
		void setElementListener(JObject arg0) const;
		void setEndElementListener(JObject arg0) const;
		void setEndTextElementListener(JObject arg0) const;
		void setStartElementListener(JObject arg0) const;
		void setTextElementListener(JObject arg0) const;
		JString toString() const;
	};
} // namespace android::sax

