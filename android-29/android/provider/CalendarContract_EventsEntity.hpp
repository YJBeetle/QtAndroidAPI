#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ContentProviderClient;
}
namespace __jni_impl::android::content
{
	class ContentResolver;
}
namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class CalendarContract_EventsEntity : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject newEntityIterator(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentProviderClient arg1);
		static QAndroidJniObject newEntityIterator(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentResolver arg1);
	};
} // namespace __jni_impl::android::provider

#include "../content/ContentProviderClient.hpp"
#include "../content/ContentResolver.hpp"
#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject CalendarContract_EventsEntity::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$EventsEntity",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	void CalendarContract_EventsEntity::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.CalendarContract$EventsEntity",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject CalendarContract_EventsEntity::newEntityIterator(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentProviderClient arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.CalendarContract$EventsEntity",
			"newEntityIterator",
			"(Landroid/database/Cursor;Landroid/content/ContentProviderClient;)Landroid/content/EntityIterator;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CalendarContract_EventsEntity::newEntityIterator(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::ContentResolver arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.CalendarContract$EventsEntity",
			"newEntityIterator",
			"(Landroid/database/Cursor;Landroid/content/ContentResolver;)Landroid/content/EntityIterator;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class CalendarContract_EventsEntity : public __jni_impl::android::provider::CalendarContract_EventsEntity
	{
	public:
		CalendarContract_EventsEntity(QAndroidJniObject obj) { __thiz = obj; }
		CalendarContract_EventsEntity()
		{
			__constructor();
		}
	};
} // namespace android::provider

