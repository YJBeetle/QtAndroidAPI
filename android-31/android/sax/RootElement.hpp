#pragma once

#include "./Element.hpp"

class JString;

namespace android::sax
{
	class RootElement : public android::sax::Element
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RootElement(const char *className, const char *sig, Ts...agv) : android::sax::Element(className, sig, std::forward<Ts>(agv)...) {}
		RootElement(QJniObject obj);
		
		// Constructors
		RootElement(JString arg0);
		RootElement(JString arg0, JString arg1);
		
		// Methods
		JObject getContentHandler();
	};
} // namespace android::sax

