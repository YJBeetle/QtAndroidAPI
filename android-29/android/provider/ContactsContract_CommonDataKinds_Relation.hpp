#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content::res
{
	class Resources;
}

namespace android::provider
{
	class ContactsContract_CommonDataKinds_Relation : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jstring NAME();
		static jint TYPE_ASSISTANT();
		static jint TYPE_BROTHER();
		static jint TYPE_CHILD();
		static jint TYPE_DOMESTIC_PARTNER();
		static jint TYPE_FATHER();
		static jint TYPE_FRIEND();
		static jint TYPE_MANAGER();
		static jint TYPE_MOTHER();
		static jint TYPE_PARENT();
		static jint TYPE_PARTNER();
		static jint TYPE_REFERRED_BY();
		static jint TYPE_RELATIVE();
		static jint TYPE_SISTER();
		static jint TYPE_SPOUSE();
		
		ContactsContract_CommonDataKinds_Relation(QAndroidJniObject obj);
		// Constructors
		ContactsContract_CommonDataKinds_Relation() = default;
		
		// Methods
		static jstring getTypeLabel(android::content::res::Resources arg0, jint arg1, jstring arg2);
		static jint getTypeLabelResource(jint arg0);
	};
} // namespace android::provider

