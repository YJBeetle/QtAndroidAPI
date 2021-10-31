#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content::res
{
	class Resources;
}

namespace android::provider
{
	class ContactsContract_CommonDataKinds_Organization : public __JniBaseClass
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
		
		ContactsContract_CommonDataKinds_Organization(QAndroidJniObject obj);
		// Constructors
		ContactsContract_CommonDataKinds_Organization() = default;
		
		// Methods
		static jstring getTypeLabel(android::content::res::Resources arg0, jint arg1, jstring arg2);
		static jint getTypeLabelResource(jint arg0);
	};
} // namespace android::provider

