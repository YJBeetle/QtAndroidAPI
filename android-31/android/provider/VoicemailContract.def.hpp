#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class VoicemailContract : public JObject
	{
	public:
		// Fields
		static JString ACTION_FETCH_VOICEMAIL();
		static JString ACTION_NEW_VOICEMAIL();
		static JString ACTION_SYNC_VOICEMAIL();
		static JString AUTHORITY();
		static JString EXTRA_PHONE_ACCOUNT_HANDLE();
		static JString EXTRA_SELF_CHANGE();
		static JString PARAM_KEY_SOURCE_PACKAGE();
		
		// QJniObject forward
		template<typename ...Ts> explicit VoicemailContract(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VoicemailContract(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

