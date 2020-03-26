#pragma once

#ifndef ANDROID_PROVIDER_CALENDARCONTRACT_CALENDARALERTS
#define ANDROID_PROVIDER_CALENDARCONTRACT_CALENDARALERTS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class CalendarContract_CalendarAlerts : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject CONTENT_URI_BY_INSTANCE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject CalendarContract_CalendarAlerts::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$CalendarAlerts",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject CalendarContract_CalendarAlerts::CONTENT_URI_BY_INSTANCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$CalendarAlerts",
			"CONTENT_URI_BY_INSTANCE",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	void CalendarContract_CalendarAlerts::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.CalendarContract$CalendarAlerts",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class CalendarContract_CalendarAlerts : public __jni_impl::android::provider::CalendarContract_CalendarAlerts
	{
	public:
		CalendarContract_CalendarAlerts(QAndroidJniObject obj) { __thiz = obj; }
		CalendarContract_CalendarAlerts()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CALENDARCONTRACT_CALENDARALERTS

