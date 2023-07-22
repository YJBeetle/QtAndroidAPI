#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class Contacts_People_ContactMethods : public JObject
	{
	public:
		// Fields
		static JString CONTENT_DIRECTORY();
		static JString DEFAULT_SORT_ORDER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Contacts_People_ContactMethods(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Contacts_People_ContactMethods(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

