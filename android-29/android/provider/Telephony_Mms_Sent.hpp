#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class Telephony_Mms_Sent : public __JniBaseClass
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
	QAndroidJniObject Telephony_Mms_Sent::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Sent",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Telephony_Mms_Sent::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Sent",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Telephony_Mms_Sent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Telephony$Mms$Sent",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Telephony_Mms_Sent : public __jni_impl::android::provider::Telephony_Mms_Sent
	{
	public:
		Telephony_Mms_Sent(QAndroidJniObject obj) { __thiz = obj; }
		Telephony_Mms_Sent()
		{
			__constructor();
		}
	};
} // namespace android::provider

