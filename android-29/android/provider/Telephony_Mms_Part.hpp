#pragma once

#ifndef ANDROID_PROVIDER_TELEPHONY_MMS_PART
#define ANDROID_PROVIDER_TELEPHONY_MMS_PART

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class Telephony_Mms_Part : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CHARSET();
		static QAndroidJniObject CONTENT_DISPOSITION();
		static QAndroidJniObject CONTENT_ID();
		static QAndroidJniObject CONTENT_LOCATION();
		static QAndroidJniObject CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject CT_START();
		static QAndroidJniObject CT_TYPE();
		static QAndroidJniObject FILENAME();
		static QAndroidJniObject MSG_ID();
		static QAndroidJniObject NAME();
		static QAndroidJniObject SEQ();
		static QAndroidJniObject TEXT();
		static QAndroidJniObject _DATA();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject Telephony_Mms_Part::CHARSET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CHARSET",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Mms_Part::CONTENT_DISPOSITION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CONTENT_DISPOSITION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Mms_Part::CONTENT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CONTENT_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Mms_Part::CONTENT_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CONTENT_LOCATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Mms_Part::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CONTENT_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Mms_Part::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject Telephony_Mms_Part::CT_START()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CT_START",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Mms_Part::CT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CT_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Mms_Part::FILENAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"FILENAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Mms_Part::MSG_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"MSG_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Mms_Part::NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"NAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Mms_Part::SEQ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"SEQ",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Mms_Part::TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"TEXT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Telephony_Mms_Part::_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"_DATA",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void Telephony_Mms_Part::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Telephony$Mms$Part",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Telephony_Mms_Part : public __jni_impl::android::provider::Telephony_Mms_Part
	{
	public:
		Telephony_Mms_Part(QAndroidJniObject obj) { __thiz = obj; }
		Telephony_Mms_Part()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_TELEPHONY_MMS_PART

