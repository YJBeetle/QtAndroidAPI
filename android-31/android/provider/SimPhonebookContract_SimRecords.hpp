#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ContentResolver;
}
namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class SimPhonebookContract_SimRecords : public JObject
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static jstring ELEMENTARY_FILE_TYPE();
		static jint ERROR_NAME_UNSUPPORTED();
		static jstring NAME();
		static jstring PHONE_NUMBER();
		static jstring RECORD_NUMBER();
		static jstring SUBSCRIPTION_ID();
		
		// QJniObject forward
		template<typename ...Ts> explicit SimPhonebookContract_SimRecords(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SimPhonebookContract_SimRecords(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::Uri getContentUri(jint arg0, jint arg1);
		static jint getEncodedNameLength(android::content::ContentResolver arg0, jstring arg1);
		static android::net::Uri getItemUri(jint arg0, jint arg1, jint arg2);
	};
} // namespace android::provider

