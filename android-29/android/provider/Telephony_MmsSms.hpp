#pragma once

#ifndef ANDROID_PROVIDER_TELEPHONY_MMSSMS
#define ANDROID_PROVIDER_TELEPHONY_MMSSMS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class Telephony_MmsSms : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_CONVERSATIONS_URI();
		static QAndroidJniObject CONTENT_DRAFT_URI();
		static QAndroidJniObject CONTENT_FILTER_BYPHONE_URI();
		static QAndroidJniObject CONTENT_LOCKED_URI();
		static QAndroidJniObject CONTENT_UNDELIVERED_URI();
		static QAndroidJniObject CONTENT_URI();
		static jint ERR_TYPE_GENERIC();
		static jint ERR_TYPE_GENERIC_PERMANENT();
		static jint ERR_TYPE_MMS_PROTO_PERMANENT();
		static jint ERR_TYPE_MMS_PROTO_TRANSIENT();
		static jint ERR_TYPE_SMS_PROTO_PERMANENT();
		static jint ERR_TYPE_SMS_PROTO_TRANSIENT();
		static jint ERR_TYPE_TRANSPORT_FAILURE();
		static jint MMS_PROTO();
		static jint NO_ERROR();
		static QAndroidJniObject SEARCH_URI();
		static jint SMS_PROTO();
		static jstring TYPE_DISCRIMINATOR_COLUMN();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject Telephony_MmsSms::CONTENT_CONVERSATIONS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"CONTENT_CONVERSATIONS_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject Telephony_MmsSms::CONTENT_DRAFT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"CONTENT_DRAFT_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject Telephony_MmsSms::CONTENT_FILTER_BYPHONE_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"CONTENT_FILTER_BYPHONE_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject Telephony_MmsSms::CONTENT_LOCKED_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"CONTENT_LOCKED_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject Telephony_MmsSms::CONTENT_UNDELIVERED_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"CONTENT_UNDELIVERED_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject Telephony_MmsSms::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jint Telephony_MmsSms::ERR_TYPE_GENERIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_GENERIC"
		);
	}
	jint Telephony_MmsSms::ERR_TYPE_GENERIC_PERMANENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_GENERIC_PERMANENT"
		);
	}
	jint Telephony_MmsSms::ERR_TYPE_MMS_PROTO_PERMANENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_MMS_PROTO_PERMANENT"
		);
	}
	jint Telephony_MmsSms::ERR_TYPE_MMS_PROTO_TRANSIENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_MMS_PROTO_TRANSIENT"
		);
	}
	jint Telephony_MmsSms::ERR_TYPE_SMS_PROTO_PERMANENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_SMS_PROTO_PERMANENT"
		);
	}
	jint Telephony_MmsSms::ERR_TYPE_SMS_PROTO_TRANSIENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_SMS_PROTO_TRANSIENT"
		);
	}
	jint Telephony_MmsSms::ERR_TYPE_TRANSPORT_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_TRANSPORT_FAILURE"
		);
	}
	jint Telephony_MmsSms::MMS_PROTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"MMS_PROTO"
		);
	}
	jint Telephony_MmsSms::NO_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"NO_ERROR"
		);
	}
	QAndroidJniObject Telephony_MmsSms::SEARCH_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"SEARCH_URI",
			"Landroid/net/Uri;"
		);
	}
	jint Telephony_MmsSms::SMS_PROTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"SMS_PROTO"
		);
	}
	jstring Telephony_MmsSms::TYPE_DISCRIMINATOR_COLUMN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"TYPE_DISCRIMINATOR_COLUMN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Telephony_MmsSms::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Telephony$MmsSms",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Telephony_MmsSms : public __jni_impl::android::provider::Telephony_MmsSms
	{
	public:
		Telephony_MmsSms(QAndroidJniObject obj) { __thiz = obj; }
		Telephony_MmsSms()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_TELEPHONY_MMSSMS

