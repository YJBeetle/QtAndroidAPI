#pragma once

#include "./Element.def.hpp"

class JString;

namespace android::sax
{
	class RootElement : public android::sax::Element
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RootElement(const char *className, const char *sig, Ts...agv) : android::sax::Element(className, sig, std::forward<Ts>(agv)...) {}
		RootElement(QAndroidJniObject obj) : android::sax::Element(obj) {}
		
		// Constructors
		RootElement(JString arg0);
		RootElement(JString arg0, JString arg1);
		
		// Methods
		JObject getContentHandler() const;
	};
} // namespace android::sax

