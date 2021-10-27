#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class ContactsContract_CommonDataKinds_Website : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jint TYPE_BLOG();
		static jint TYPE_FTP();
		static jint TYPE_HOME();
		static jint TYPE_HOMEPAGE();
		static jint TYPE_OTHER();
		static jint TYPE_PROFILE();
		static jint TYPE_WORK();
		static jstring URL();
		
		ContactsContract_CommonDataKinds_Website(QAndroidJniObject obj);
		// Constructors
		ContactsContract_CommonDataKinds_Website() = default;
		
		// Methods
	};
} // namespace android::provider

