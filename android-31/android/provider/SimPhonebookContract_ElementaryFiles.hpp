#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class SimPhonebookContract_ElementaryFiles : public JObject
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static jint EF_ADN();
		static jint EF_FDN();
		static jint EF_SDN();
		static jstring EF_TYPE();
		static jint EF_UNKNOWN();
		static jstring MAX_RECORDS();
		static jstring NAME_MAX_LENGTH();
		static jstring PHONE_NUMBER_MAX_LENGTH();
		static jstring RECORD_COUNT();
		static jstring SLOT_INDEX();
		static jstring SUBSCRIPTION_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SimPhonebookContract_ElementaryFiles(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SimPhonebookContract_ElementaryFiles(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::Uri getItemUri(jint arg0, jint arg1);
	};
} // namespace android::provider

