#pragma once

#ifndef ANDROID_PROVIDER_TELEPHONY_MMS_ADDR
#define ANDROID_PROVIDER_TELEPHONY_MMS_ADDR

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class Telephony_Mms_Addr : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ADDRESS();
		static QAndroidJniObject CHARSET();
		static QAndroidJniObject CONTACT_ID();
		static QAndroidJniObject MSG_ID();
		static QAndroidJniObject TYPE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject Telephony_Mms_Addr::ADDRESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Addr",
			"ADDRESS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Mms_Addr::CHARSET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Addr",
			"CHARSET",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Mms_Addr::CONTACT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Addr",
			"CONTACT_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Mms_Addr::MSG_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Addr",
			"MSG_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Mms_Addr::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Addr",
			"TYPE",
			"Ljava/lang/String;");
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

#endif // ANDROID_PROVIDER_TELEPHONY_MMS_ADDR

