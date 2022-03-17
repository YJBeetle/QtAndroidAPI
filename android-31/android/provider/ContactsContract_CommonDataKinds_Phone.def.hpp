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
class JString;
class JString;

namespace android::provider
{
	class ContactsContract_CommonDataKinds_Phone : public JObject
	{
	public:
		// Fields
		static android::net::Uri CONTENT_FILTER_URI();
		static JString CONTENT_ITEM_TYPE();
		static JString CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static android::net::Uri ENTERPRISE_CONTENT_FILTER_URI();
		static JString EXTRA_ADDRESS_BOOK_INDEX();
		static JString EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static JString EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static JString NORMALIZED_NUMBER();
		static JString NUMBER();
		static JString SEARCH_DISPLAY_NAME_KEY();
		static JString SEARCH_PHONE_NUMBER_KEY();
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_CommonDataKinds_Phone(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_CommonDataKinds_Phone(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JString getTypeLabel(android::content::res::Resources arg0, jint arg1, JString arg2);
		static jint getTypeLabelResource(jint arg0);
	};
} // namespace android::provider

