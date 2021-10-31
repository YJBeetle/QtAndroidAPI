#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class ContactsContract_CommonDataKinds_Nickname : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jstring NAME();
		static jint TYPE_DEFAULT();
		static jint TYPE_INITIALS();
		static jint TYPE_MAIDEN_NAME();
		static jint TYPE_MAINDEN_NAME();
		static jint TYPE_OTHER_NAME();
		static jint TYPE_SHORT_NAME();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_CommonDataKinds_Nickname(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_CommonDataKinds_Nickname(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

