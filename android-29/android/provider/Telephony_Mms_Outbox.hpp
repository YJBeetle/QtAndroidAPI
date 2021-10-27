#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class Telephony_Mms_Outbox : public __JniBaseClass
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
	QAndroidJniObject Telephony_Mms_Outbox::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Outbox",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Telephony_Mms_Outbox::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Outbox",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Telephony_Mms_Outbox::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Telephony$Mms$Outbox",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Telephony_Mms_Outbox : public __jni_impl::android::provider::Telephony_Mms_Outbox
	{
	public:
		Telephony_Mms_Outbox(QAndroidJniObject obj) { __thiz = obj; }
		Telephony_Mms_Outbox()
		{
			__constructor();
		}
	};
} // namespace android::provider

