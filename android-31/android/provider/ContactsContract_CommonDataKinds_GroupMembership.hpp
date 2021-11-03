#pragma once

#include "../../JObject.hpp"


namespace android::provider
{
	class ContactsContract_CommonDataKinds_GroupMembership : public JObject
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jstring GROUP_ROW_ID();
		static jstring GROUP_SOURCE_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_CommonDataKinds_GroupMembership(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_CommonDataKinds_GroupMembership(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

