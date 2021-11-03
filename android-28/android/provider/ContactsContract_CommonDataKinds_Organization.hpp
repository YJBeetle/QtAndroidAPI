#pragma once

#include "../../JObject.hpp"

namespace android::content::res
{
	class Resources;
}

namespace android::provider
{
	class ContactsContract_CommonDataKinds_Organization : public JObject
	{
	public:
		// Fields
		static jstring COMPANY();
		static jstring CONTENT_ITEM_TYPE();
		static jstring DEPARTMENT();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jstring JOB_DESCRIPTION();
		static jstring OFFICE_LOCATION();
		static jstring PHONETIC_NAME();
		static jstring PHONETIC_NAME_STYLE();
		static jstring SYMBOL();
		static jstring TITLE();
		static jint TYPE_OTHER();
		static jint TYPE_WORK();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_CommonDataKinds_Organization(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_CommonDataKinds_Organization(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring getTypeLabel(android::content::res::Resources arg0, jint arg1, jstring arg2);
		static jint getTypeLabelResource(jint arg0);
	};
} // namespace android::provider

