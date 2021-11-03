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
class JString;

namespace android::provider
{
	class SimPhonebookContract_SimRecords : public JObject
	{
	public:
		// Fields
		static JString CONTENT_ITEM_TYPE();
		static JString CONTENT_TYPE();
		static JString ELEMENTARY_FILE_TYPE();
		static jint ERROR_NAME_UNSUPPORTED();
		static JString NAME();
		static JString PHONE_NUMBER();
		static JString RECORD_NUMBER();
		static JString SUBSCRIPTION_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SimPhonebookContract_SimRecords(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SimPhonebookContract_SimRecords(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::Uri getContentUri(jint arg0, jint arg1);
		static jint getEncodedNameLength(android::content::ContentResolver arg0, JString arg1);
		static android::net::Uri getItemUri(jint arg0, jint arg1, jint arg2);
	};
} // namespace android::provider

