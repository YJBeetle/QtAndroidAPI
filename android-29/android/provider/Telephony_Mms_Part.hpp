#pragma once

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
		static jstring CHARSET();
		static jstring CONTENT_DISPOSITION();
		static jstring CONTENT_ID();
		static jstring CONTENT_LOCATION();
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static jstring CT_START();
		static jstring CT_TYPE();
		static jstring FILENAME();
		static jstring MSG_ID();
		static jstring NAME();
		static jstring SEQ();
		static jstring TEXT();
		static jstring _DATA();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring Telephony_Mms_Part::CHARSET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CHARSET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::CONTENT_DISPOSITION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CONTENT_DISPOSITION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::CONTENT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CONTENT_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::CONTENT_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CONTENT_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Telephony_Mms_Part::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Telephony_Mms_Part::CT_START()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CT_START",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::CT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"CT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::FILENAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"FILENAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::MSG_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"MSG_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::SEQ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"SEQ",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Part::_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Part",
			"_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
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

