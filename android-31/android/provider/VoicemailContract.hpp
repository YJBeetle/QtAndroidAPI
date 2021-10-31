#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class VoicemailContract : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_FETCH_VOICEMAIL();
		static jstring ACTION_NEW_VOICEMAIL();
		static jstring ACTION_SYNC_VOICEMAIL();
		static jstring AUTHORITY();
		static jstring EXTRA_PHONE_ACCOUNT_HANDLE();
		static jstring EXTRA_SELF_CHANGE();
		static jstring PARAM_KEY_SOURCE_PACKAGE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VoicemailContract(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VoicemailContract(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

