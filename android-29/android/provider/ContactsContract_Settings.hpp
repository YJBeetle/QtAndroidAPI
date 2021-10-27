#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract_Settings : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		
		ContactsContract_Settings(QAndroidJniObject obj);
		// Constructors
		ContactsContract_Settings() = default;
		
		// Methods
	};
} // namespace android::provider

