#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class ContactsContract_CommonDataKinds_Identity : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jstring IDENTITY();
		static jstring NAMESPACE();
		
		ContactsContract_CommonDataKinds_Identity(QAndroidJniObject obj);
		// Constructors
		ContactsContract_CommonDataKinds_Identity() = default;
		
		// Methods
	};
} // namespace android::provider

