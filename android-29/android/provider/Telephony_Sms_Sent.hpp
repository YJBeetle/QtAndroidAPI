#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class Telephony_Sms_Sent : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject Telephony_Sms_Sent::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms$Sent",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Telephony_Sms_Sent::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Sms$Sent",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Telephony_Sms_Sent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Telephony$Sms$Sent",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Telephony_Sms_Sent : public __jni_impl::android::provider::Telephony_Sms_Sent
	{
	public:
		Telephony_Sms_Sent(QAndroidJniObject obj) { __thiz = obj; }
		Telephony_Sms_Sent()
		{
			__constructor();
		}
	};
} // namespace android::provider

