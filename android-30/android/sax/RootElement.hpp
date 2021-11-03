#pragma once

#include "../../JObject.hpp"
#include "./Element.hpp"


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
		RootElement(jstring arg0);
		RootElement(jstring arg0, jstring arg1);
		
		// Methods
		JObject getContentHandler();
	};
} // namespace android::sax

