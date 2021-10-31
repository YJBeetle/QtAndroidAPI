#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class VoicemailContract_Voicemails : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ARCHIVED();
		static jstring BACKED_UP();
		static QAndroidJniObject CONTENT_URI();
		static jstring DATE();
		static jstring DELETED();
		static jstring DIRTY();
		static jint DIRTY_RETAIN();
		static jstring DIR_TYPE();
		static jstring DURATION();
		static jstring HAS_CONTENT();
		static jstring IS_OMTP_VOICEMAIL();
		static jstring IS_READ();
		static jstring ITEM_TYPE();
		static jstring LAST_MODIFIED();
		static jstring MIME_TYPE();
		static jstring NEW();
		static jstring NUMBER();
		static jstring PHONE_ACCOUNT_COMPONENT_NAME();
		static jstring PHONE_ACCOUNT_ID();
		static jstring RESTORED();
		static jstring SOURCE_DATA();
		static jstring SOURCE_PACKAGE();
		static jstring TRANSCRIPTION();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VoicemailContract_Voicemails(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VoicemailContract_Voicemails(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject buildSourceUri(jstring arg0);
	};
} // namespace android::provider

