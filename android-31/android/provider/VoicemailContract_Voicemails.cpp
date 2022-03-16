#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./VoicemailContract_Voicemails.hpp"

namespace android::provider
{
	// Fields
	JString VoicemailContract_Voicemails::ARCHIVED()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"ARCHIVED",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract_Voicemails::BACKED_UP()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"BACKED_UP",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri VoicemailContract_Voicemails::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString VoicemailContract_Voicemails::DATE()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"DATE",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract_Voicemails::DELETED()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"DELETED",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract_Voicemails::DIRTY()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"DIRTY",
			"Ljava/lang/String;"
		);
	}
	jint VoicemailContract_Voicemails::DIRTY_RETAIN()
	{
		return getStaticField<jint>(
			"android.provider.VoicemailContract$Voicemails",
			"DIRTY_RETAIN"
		);
	}
	JString VoicemailContract_Voicemails::DIR_TYPE()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"DIR_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract_Voicemails::DURATION()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"DURATION",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract_Voicemails::HAS_CONTENT()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"HAS_CONTENT",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract_Voicemails::IS_OMTP_VOICEMAIL()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"IS_OMTP_VOICEMAIL",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract_Voicemails::IS_READ()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"IS_READ",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract_Voicemails::ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract_Voicemails::LAST_MODIFIED()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"LAST_MODIFIED",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract_Voicemails::MIME_TYPE()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"MIME_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract_Voicemails::NEW()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"NEW",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract_Voicemails::NUMBER()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"NUMBER",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract_Voicemails::PHONE_ACCOUNT_COMPONENT_NAME()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"PHONE_ACCOUNT_COMPONENT_NAME",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract_Voicemails::PHONE_ACCOUNT_ID()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"PHONE_ACCOUNT_ID",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract_Voicemails::RESTORED()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"RESTORED",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract_Voicemails::SOURCE_DATA()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"SOURCE_DATA",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract_Voicemails::SOURCE_PACKAGE()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"SOURCE_PACKAGE",
			"Ljava/lang/String;"
		);
	}
	JString VoicemailContract_Voicemails::TRANSCRIPTION()
	{
		return getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"TRANSCRIPTION",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	android::net::Uri VoicemailContract_Voicemails::buildSourceUri(JString arg0)
	{
		return callStaticObjectMethod(
			"android.provider.VoicemailContract$Voicemails",
			"buildSourceUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>()
		);
	}
} // namespace android::provider

