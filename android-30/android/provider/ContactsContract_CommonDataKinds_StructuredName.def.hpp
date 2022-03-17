#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class ContactsContract_CommonDataKinds_StructuredName : public JObject
	{
	public:
		// Fields
		static JString CONTENT_ITEM_TYPE();
		static JString DISPLAY_NAME();
		static JString EXTRA_ADDRESS_BOOK_INDEX();
		static JString EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static JString EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static JString FAMILY_NAME();
		static JString FULL_NAME_STYLE();
		static JString GIVEN_NAME();
		static JString MIDDLE_NAME();
		static JString PHONETIC_FAMILY_NAME();
		static JString PHONETIC_GIVEN_NAME();
		static JString PHONETIC_MIDDLE_NAME();
		static JString PHONETIC_NAME_STYLE();
		static JString PREFIX();
		static JString SUFFIX();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_CommonDataKinds_StructuredName(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_CommonDataKinds_StructuredName(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

