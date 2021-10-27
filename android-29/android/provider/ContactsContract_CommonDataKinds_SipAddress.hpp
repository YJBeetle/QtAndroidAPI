#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content::res
{
	class Resources;
}

namespace android::provider
{
	class ContactsContract_CommonDataKinds_SipAddress : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jstring SIP_ADDRESS();
		static jint TYPE_HOME();
		static jint TYPE_OTHER();
		static jint TYPE_WORK();
		
		ContactsContract_CommonDataKinds_SipAddress(QAndroidJniObject obj);
		// Constructors
		ContactsContract_CommonDataKinds_SipAddress() = default;
		
		// Methods
		static jstring getTypeLabel(android::content::res::Resources arg0, jint arg1, jstring arg2);
		static jstring getTypeLabel(android::content::res::Resources arg0, jint arg1, const QString &arg2);
		static jint getTypeLabelResource(jint arg0);
	};
} // namespace android::provider

