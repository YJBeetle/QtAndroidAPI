#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class ContactsContract_CommonDataKinds_Photo : public JObject
	{
	public:
		// Fields
		static JString CONTENT_ITEM_TYPE();
		static JString EXTRA_ADDRESS_BOOK_INDEX();
		static JString EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static JString EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static JString PHOTO();
		static JString PHOTO_FILE_ID();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_CommonDataKinds_Photo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_CommonDataKinds_Photo(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

