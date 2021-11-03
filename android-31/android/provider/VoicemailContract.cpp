#include "../../JString.hpp"
#include "./VoicemailContract.hpp"

namespace android::provider
{
	// Fields
	JString VoicemailContract::ACTION_FETCH_VOICEMAIL()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract",
			"ACTION_FETCH_VOICEMAIL",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract::ACTION_NEW_VOICEMAIL()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract",
			"ACTION_NEW_VOICEMAIL",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract::ACTION_SYNC_VOICEMAIL()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract",
			"ACTION_SYNC_VOICEMAIL",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract",
			"AUTHORITY",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract::EXTRA_PHONE_ACCOUNT_HANDLE()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract",
			"EXTRA_PHONE_ACCOUNT_HANDLE",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract::EXTRA_SELF_CHANGE()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract",
			"EXTRA_SELF_CHANGE",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract::PARAM_KEY_SOURCE_PACKAGE()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract",
			"PARAM_KEY_SOURCE_PACKAGE",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	VoicemailContract::VoicemailContract(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

