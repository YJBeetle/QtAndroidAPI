#pragma once

#include "../../JObject.hpp"


namespace android::provider
{
	class ContactsContract_CommonDataKinds_Website : public JObject
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
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_CommonDataKinds_Website(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_CommonDataKinds_Website(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

