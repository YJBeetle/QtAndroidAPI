#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class Contacts_People_Phones : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		static jstring DEFAULT_SORT_ORDER();
		
		Contacts_People_Phones(QAndroidJniObject obj);
		// Constructors
		Contacts_People_Phones() = default;
		
		// Methods
	};
} // namespace android::provider

