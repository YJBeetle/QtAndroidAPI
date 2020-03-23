#pragma once

#ifndef ANDROID_PROVIDER_TELEPHONY_MMS_INTENTS
#define ANDROID_PROVIDER_TELEPHONY_MMS_INTENTS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class Telephony_Mms_Intents : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_CHANGED_ACTION();
		static QAndroidJniObject DELETED_CONTENTS();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject Telephony_Mms_Intents::CONTENT_CHANGED_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Intents",
			"CONTENT_CHANGED_ACTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Mms_Intents::DELETED_CONTENTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Intents",
			"DELETED_CONTENTS",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void Telephony_Mms_Intents::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Telephony$Mms$Intents",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Telephony_Mms_Intents : public __jni_impl::android::provider::Telephony_Mms_Intents
	{
	public:
		Telephony_Mms_Intents(QAndroidJniObject obj) { __thiz = obj; }
		Telephony_Mms_Intents()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_TELEPHONY_MMS_INTENTS

