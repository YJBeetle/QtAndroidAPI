#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class ContactsContract_CommonDataKinds_Nickname : public JObject
	{
	public:
		// Fields
		static JString CONTENT_ITEM_TYPE();
		static JString EXTRA_ADDRESS_BOOK_INDEX();
		static JString EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static JString EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static JString NAME();
		static jint TYPE_DEFAULT();
		static jint TYPE_INITIALS();
		static jint TYPE_MAIDEN_NAME();
		static jint TYPE_MAINDEN_NAME();
		static jint TYPE_OTHER_NAME();
		static jint TYPE_SHORT_NAME();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_CommonDataKinds_Nickname(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_CommonDataKinds_Nickname(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

