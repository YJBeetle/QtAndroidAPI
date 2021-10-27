#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class ContactsContract_CommonDataKinds_Photo : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jstring PHOTO();
		static jstring PHOTO_FILE_ID();
		
		ContactsContract_CommonDataKinds_Photo(QAndroidJniObject obj);
		// Constructors
		ContactsContract_CommonDataKinds_Photo() = default;
		
		// Methods
	};
} // namespace android::provider

