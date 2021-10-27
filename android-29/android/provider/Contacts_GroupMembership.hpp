#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Contacts_GroupMembership : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		static jstring GROUP_ID();
		static jstring GROUP_SYNC_ACCOUNT();
		static jstring GROUP_SYNC_ACCOUNT_TYPE();
		static jstring GROUP_SYNC_ID();
		static jstring PERSON_ID();
		static QAndroidJniObject RAW_CONTENT_URI();
		
		Contacts_GroupMembership(QAndroidJniObject obj);
		// Constructors
		Contacts_GroupMembership() = default;
		
		// Methods
	};
} // namespace android::provider

