#include "./VoicemailContract.hpp"

namespace android::provider
{
	// Fields
	jstring VoicemailContract::ACTION_FETCH_VOICEMAIL()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract",
			"ACTION_FETCH_VOICEMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract::ACTION_NEW_VOICEMAIL()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract",
			"ACTION_NEW_VOICEMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract::ACTION_SYNC_VOICEMAIL()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract",
			"ACTION_SYNC_VOICEMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract",
			"AUTHORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract::EXTRA_PHONE_ACCOUNT_HANDLE()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract",
			"EXTRA_PHONE_ACCOUNT_HANDLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract::EXTRA_SELF_CHANGE()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract",
			"EXTRA_SELF_CHANGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract::PARAM_KEY_SOURCE_PACKAGE()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract",
			"PARAM_KEY_SOURCE_PACKAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	VoicemailContract::VoicemailContract(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

