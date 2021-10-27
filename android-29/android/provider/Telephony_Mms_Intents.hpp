#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class Telephony_Mms_Intents : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_CHANGED_ACTION();
		static jstring DELETED_CONTENTS();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	jstring Telephony_Mms_Intents::CONTENT_CHANGED_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Intents",
			"CONTENT_CHANGED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Intents::DELETED_CONTENTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Intents",
			"DELETED_CONTENTS",
			"Ljava/lang/String;"
		).object<jstring>();
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

