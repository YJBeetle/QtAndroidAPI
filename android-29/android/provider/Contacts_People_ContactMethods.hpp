#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class Contacts_People_ContactMethods : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		static jstring DEFAULT_SORT_ORDER();
		
		Contacts_People_ContactMethods(QAndroidJniObject obj);
		// Constructors
		Contacts_People_ContactMethods() = default;
		
		// Methods
	};
} // namespace android::provider

