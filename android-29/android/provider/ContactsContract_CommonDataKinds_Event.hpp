#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content::res
{
	class Resources;
}
namespace java::lang
{
	class Integer;
}

namespace android::provider
{
	class ContactsContract_CommonDataKinds_Event : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jstring START_DATE();
		static jint TYPE_ANNIVERSARY();
		static jint TYPE_BIRTHDAY();
		static jint TYPE_OTHER();
		
		ContactsContract_CommonDataKinds_Event(QAndroidJniObject obj);
		// Constructors
		ContactsContract_CommonDataKinds_Event() = default;
		
		// Methods
		static jstring getTypeLabel(android::content::res::Resources arg0, jint arg1, jstring arg2);
		static jstring getTypeLabel(android::content::res::Resources arg0, jint arg1, const QString &arg2);
		static jint getTypeResource(java::lang::Integer arg0);
	};
} // namespace android::provider

