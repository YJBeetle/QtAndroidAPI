#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class CalendarContract_ExtendedProperties : public __JniBaseClass
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
	QAndroidJniObject CalendarContract_ExtendedProperties::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$ExtendedProperties",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	void CalendarContract_ExtendedProperties::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.CalendarContract$ExtendedProperties",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class CalendarContract_ExtendedProperties : public __jni_impl::android::provider::CalendarContract_ExtendedProperties
	{
	public:
		CalendarContract_ExtendedProperties(QAndroidJniObject obj) { __thiz = obj; }
		CalendarContract_ExtendedProperties()
		{
			__constructor();
		}
	};
} // namespace android::provider

