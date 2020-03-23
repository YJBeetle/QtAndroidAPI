#pragma once

#ifndef ANDROID_PROVIDER_CALENDARCONTRACT_COLORS
#define ANDROID_PROVIDER_CALENDARCONTRACT_COLORS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class CalendarContract_Colors : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject CalendarContract_Colors::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$Colors",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	
	// Constructors
	void CalendarContract_Colors::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.CalendarContract$Colors",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class CalendarContract_Colors : public __jni_impl::android::provider::CalendarContract_Colors
	{
	public:
		CalendarContract_Colors(QAndroidJniObject obj) { __thiz = obj; }
		CalendarContract_Colors()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CALENDARCONTRACT_COLORS

