#pragma once

#include "../../__JniBaseClass.hpp"

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
	class ContactsContract_CommonDataKinds_StructuredPostal : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CITY();
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static jstring COUNTRY();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jstring FORMATTED_ADDRESS();
		static jstring NEIGHBORHOOD();
		static jstring POBOX();
		static jstring POSTCODE();
		static jstring REGION();
		static jstring STREET();
		static jint TYPE_HOME();
		static jint TYPE_OTHER();
		static jint TYPE_WORK();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_CommonDataKinds_StructuredPostal(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_CommonDataKinds_StructuredPostal(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring getTypeLabel(android::content::res::Resources arg0, jint arg1, jstring arg2);
		static jint getTypeLabelResource(jint arg0);
	};
} // namespace android::provider

