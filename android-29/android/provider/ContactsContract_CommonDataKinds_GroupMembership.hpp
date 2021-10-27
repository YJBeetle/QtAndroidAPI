#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class ContactsContract_CommonDataKinds_GroupMembership : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jstring GROUP_ROW_ID();
		static jstring GROUP_SOURCE_ID();
		
		ContactsContract_CommonDataKinds_GroupMembership(QAndroidJniObject obj);
		// Constructors
		ContactsContract_CommonDataKinds_GroupMembership() = default;
		
		// Methods
	};
} // namespace android::provider

