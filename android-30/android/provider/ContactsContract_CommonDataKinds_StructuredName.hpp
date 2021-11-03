#pragma once

#include "../../JObject.hpp"


namespace android::provider
{
	class ContactsContract_CommonDataKinds_StructuredName : public JObject
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_CommonDataKinds_StructuredName(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_CommonDataKinds_StructuredName(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

