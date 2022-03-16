#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class VoicemailContract_Voicemails : public JObject
	{
	public:
		// Fields
		static JString ARCHIVED();
		static JString BACKED_UP();
		static android::net::Uri CONTENT_URI();
		static JString DATE();
		static JString DELETED();
		static JString DIRTY();
		static jint DIRTY_RETAIN();
		static JString DIR_TYPE();
		static JString DURATION();
		static JString HAS_CONTENT();
		static JString IS_OMTP_VOICEMAIL();
		static JString IS_READ();
		static JString ITEM_TYPE();
		static JString LAST_MODIFIED();
		static JString MIME_TYPE();
		static JString NEW();
		static JString NUMBER();
		static JString PHONE_ACCOUNT_COMPONENT_NAME();
		static JString PHONE_ACCOUNT_ID();
		static JString RESTORED();
		static JString SOURCE_DATA();
		static JString SOURCE_PACKAGE();
		static JString TRANSCRIPTION();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VoicemailContract_Voicemails(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VoicemailContract_Voicemails(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::net::Uri buildSourceUri(JString arg0);
	};
} // namespace android::provider

