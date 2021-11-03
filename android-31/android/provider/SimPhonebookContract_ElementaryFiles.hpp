#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class SimPhonebookContract_ElementaryFiles : public JObject
	{
	public:
		// Fields
		static JString CONTENT_ITEM_TYPE();
		static JString CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static jint EF_ADN();
		static jint EF_FDN();
		static jint EF_SDN();
		static JString EF_TYPE();
		static jint EF_UNKNOWN();
		static JString MAX_RECORDS();
		static JString NAME_MAX_LENGTH();
		static JString PHONE_NUMBER_MAX_LENGTH();
		static JString RECORD_COUNT();
		static JString SLOT_INDEX();
		static JString SUBSCRIPTION_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SimPhonebookContract_ElementaryFiles(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SimPhonebookContract_ElementaryFiles(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::Uri getItemUri(jint arg0, jint arg1);
	};
} // namespace android::provider

