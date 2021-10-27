#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class CalendarContract_Events : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_EXCEPTION_URI();
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject ENTERPRISE_CONTENT_URI();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject CalendarContract_Events::CONTENT_EXCEPTION_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Events",
			"CONTENT_EXCEPTION_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject CalendarContract_Events::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Events",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject CalendarContract_Events::ENTERPRISE_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Events",
			"ENTERPRISE_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	void CalendarContract_Events::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.CalendarContract$Events",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class CalendarContract_Events : public __jni_impl::android::provider::CalendarContract_Events
	{
	public:
		CalendarContract_Events(QAndroidJniObject obj) { __thiz = obj; }
		CalendarContract_Events()
		{
			__constructor();
		}
	};
} // namespace android::provider

