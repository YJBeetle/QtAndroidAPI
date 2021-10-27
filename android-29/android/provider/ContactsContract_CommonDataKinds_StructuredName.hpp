#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class ContactsContract_CommonDataKinds_StructuredName : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring DISPLAY_NAME();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jstring FAMILY_NAME();
		static jstring FULL_NAME_STYLE();
		static jstring GIVEN_NAME();
		static jstring MIDDLE_NAME();
		static jstring PHONETIC_FAMILY_NAME();
		static jstring PHONETIC_GIVEN_NAME();
		static jstring PHONETIC_MIDDLE_NAME();
		static jstring PHONETIC_NAME_STYLE();
		static jstring PREFIX();
		static jstring SUFFIX();
		
		ContactsContract_CommonDataKinds_StructuredName(QAndroidJniObject obj);
		// Constructors
		ContactsContract_CommonDataKinds_StructuredName() = default;
		
		// Methods
	};
} // namespace android::provider

