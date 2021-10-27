#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Contacts_Groups : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		static QAndroidJniObject DELETED_CONTENT_URI();
		static jstring GROUP_ANDROID_STARRED();
		static jstring GROUP_MY_CONTACTS();
		
		Contacts_Groups(QAndroidJniObject obj);
		// Constructors
		Contacts_Groups() = default;
		
		// Methods
	};
} // namespace android::provider

