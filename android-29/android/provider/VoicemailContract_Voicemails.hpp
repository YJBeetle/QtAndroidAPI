#pragma once

#ifndef ANDROID_PROVIDER_VOICEMAILCONTRACT_VOICEMAILS
#define ANDROID_PROVIDER_VOICEMAILCONTRACT_VOICEMAILS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class VoicemailContract_Voicemails : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ARCHIVED();
		static QAndroidJniObject BACKED_UP();
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject DATE();
		static QAndroidJniObject DELETED();
		static QAndroidJniObject DIRTY();
		static jint DIRTY_RETAIN();
		static QAndroidJniObject DIR_TYPE();
		static QAndroidJniObject DURATION();
		static QAndroidJniObject HAS_CONTENT();
		static QAndroidJniObject IS_OMTP_VOICEMAIL();
		static QAndroidJniObject IS_READ();
		static QAndroidJniObject ITEM_TYPE();
		static QAndroidJniObject LAST_MODIFIED();
		static QAndroidJniObject MIME_TYPE();
		static QAndroidJniObject NEW();
		static QAndroidJniObject NUMBER();
		static QAndroidJniObject PHONE_ACCOUNT_COMPONENT_NAME();
		static QAndroidJniObject PHONE_ACCOUNT_ID();
		static QAndroidJniObject RESTORED();
		static QAndroidJniObject SOURCE_DATA();
		static QAndroidJniObject SOURCE_PACKAGE();
		static QAndroidJniObject TRANSCRIPTION();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject buildSourceUri(jstring arg0);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject VoicemailContract_Voicemails::ARCHIVED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"ARCHIVED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoicemailContract_Voicemails::BACKED_UP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"BACKED_UP",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoicemailContract_Voicemails::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject VoicemailContract_Voicemails::DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"DATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoicemailContract_Voicemails::DELETED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"DELETED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoicemailContract_Voicemails::DIRTY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"DIRTY",
			"Ljava/lang/String;");
	}
	jint VoicemailContract_Voicemails::DIRTY_RETAIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Voicemails",
			"DIRTY_RETAIN");
	}
	QAndroidJniObject VoicemailContract_Voicemails::DIR_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"DIR_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoicemailContract_Voicemails::DURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"DURATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoicemailContract_Voicemails::HAS_CONTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"HAS_CONTENT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoicemailContract_Voicemails::IS_OMTP_VOICEMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"IS_OMTP_VOICEMAIL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoicemailContract_Voicemails::IS_READ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"IS_READ",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoicemailContract_Voicemails::ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"ITEM_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoicemailContract_Voicemails::LAST_MODIFIED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"LAST_MODIFIED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoicemailContract_Voicemails::MIME_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"MIME_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoicemailContract_Voicemails::NEW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"NEW",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoicemailContract_Voicemails::NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"NUMBER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoicemailContract_Voicemails::PHONE_ACCOUNT_COMPONENT_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"PHONE_ACCOUNT_COMPONENT_NAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoicemailContract_Voicemails::PHONE_ACCOUNT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"PHONE_ACCOUNT_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoicemailContract_Voicemails::RESTORED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"RESTORED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoicemailContract_Voicemails::SOURCE_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"SOURCE_DATA",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoicemailContract_Voicemails::SOURCE_PACKAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"SOURCE_PACKAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoicemailContract_Voicemails::TRANSCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Voicemails",
			"TRANSCRIPTION",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void VoicemailContract_Voicemails::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.VoicemailContract$Voicemails",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject VoicemailContract_Voicemails::buildSourceUri(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.VoicemailContract$Voicemails",
			"buildSourceUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class VoicemailContract_Voicemails : public __jni_impl::android::provider::VoicemailContract_Voicemails
	{
	public:
		VoicemailContract_Voicemails(QAndroidJniObject obj) { __thiz = obj; }
		VoicemailContract_Voicemails()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_VOICEMAILCONTRACT_VOICEMAILS

