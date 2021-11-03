#pragma once

#include "../../JObject.hpp"

namespace android::content::res
{
	class Resources;
}
namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract_CommonDataKinds_Phone : public JObject
	{
	public:
		// Fields
		static android::net::Uri CONTENT_FILTER_URI();
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static android::net::Uri ENTERPRISE_CONTENT_FILTER_URI();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jstring NORMALIZED_NUMBER();
		static jstring NUMBER();
		static jstring SEARCH_DISPLAY_NAME_KEY();
		static jstring SEARCH_PHONE_NUMBER_KEY();
		static jint TYPE_ASSISTANT();
		static jint TYPE_CALLBACK();
		static jint TYPE_CAR();
		static jint TYPE_COMPANY_MAIN();
		static jint TYPE_FAX_HOME();
		static jint TYPE_FAX_WORK();
		static jint TYPE_HOME();
		static jint TYPE_ISDN();
		static jint TYPE_MAIN();
		static jint TYPE_MMS();
		static jint TYPE_MOBILE();
		static jint TYPE_OTHER();
		static jint TYPE_OTHER_FAX();
		static jint TYPE_PAGER();
		static jint TYPE_RADIO();
		static jint TYPE_TELEX();
		static jint TYPE_TTY_TDD();
		static jint TYPE_WORK();
		static jint TYPE_WORK_MOBILE();
		static jint TYPE_WORK_PAGER();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_CommonDataKinds_Phone(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_CommonDataKinds_Phone(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring getTypeLabel(android::content::res::Resources arg0, jint arg1, jstring arg2);
		static jint getTypeLabelResource(jint arg0);
	};
} // namespace android::provider

