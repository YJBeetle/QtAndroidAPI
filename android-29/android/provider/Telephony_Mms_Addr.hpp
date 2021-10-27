#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class Telephony_Mms_Addr : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ADDRESS();
		static jstring CHARSET();
		static jstring CONTACT_ID();
		static jstring MSG_ID();
		static jstring TYPE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	jstring Telephony_Mms_Addr::ADDRESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Addr",
			"ADDRESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Addr::CHARSET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Addr",
			"CHARSET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Addr::CONTACT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Addr",
			"CONTACT_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Addr::MSG_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Addr",
			"MSG_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Addr::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Addr",
			"TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Telephony_Mms_Addr::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Telephony$Mms$Addr",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Telephony_Mms_Addr : public __jni_impl::android::provider::Telephony_Mms_Addr
	{
	public:
		Telephony_Mms_Addr(QAndroidJniObject obj) { __thiz = obj; }
		Telephony_Mms_Addr()
		{
			__constructor();
		}
	};
} // namespace android::provider

