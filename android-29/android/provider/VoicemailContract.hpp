#pragma once

#ifndef ANDROID_PROVIDER_VOICEMAILCONTRACT
#define ANDROID_PROVIDER_VOICEMAILCONTRACT

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
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
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	jstring VoicemailContract::ACTION_FETCH_VOICEMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract",
			"ACTION_FETCH_VOICEMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract::ACTION_NEW_VOICEMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract",
			"ACTION_NEW_VOICEMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract::ACTION_SYNC_VOICEMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract",
			"ACTION_SYNC_VOICEMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract::AUTHORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract",
			"AUTHORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract::EXTRA_PHONE_ACCOUNT_HANDLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract",
			"EXTRA_PHONE_ACCOUNT_HANDLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract::EXTRA_SELF_CHANGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract",
			"EXTRA_SELF_CHANGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract::PARAM_KEY_SOURCE_PACKAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract",
			"PARAM_KEY_SOURCE_PACKAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void VoicemailContract::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.VoicemailContract",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class VoicemailContract : public __jni_impl::android::provider::VoicemailContract
	{
	public:
		VoicemailContract(QAndroidJniObject obj) { __thiz = obj; }
		VoicemailContract()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_VOICEMAILCONTRACT

