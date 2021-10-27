#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class Contacts_People_Extensions : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		static jstring DEFAULT_SORT_ORDER();
		static jstring PERSON_ID();
		
		Contacts_People_Extensions(QAndroidJniObject obj);
		// Constructors
		Contacts_People_Extensions() = default;
		
		// Methods
	};
} // namespace android::provider

