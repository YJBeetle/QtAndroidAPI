#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class CalendarContract_CalendarEntity : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_URI();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject newEntityIterator(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject CalendarContract_CalendarEntity::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$CalendarEntity",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	void CalendarContract_CalendarEntity::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.CalendarContract$CalendarEntity",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject CalendarContract_CalendarEntity::newEntityIterator(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.CalendarContract$CalendarEntity",
			"newEntityIterator",
			"(Landroid/database/Cursor;)Landroid/content/EntityIterator;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class CalendarContract_CalendarEntity : public __jni_impl::android::provider::CalendarContract_CalendarEntity
	{
	public:
		CalendarContract_CalendarEntity(QAndroidJniObject obj) { __thiz = obj; }
		CalendarContract_CalendarEntity()
		{
			__constructor();
		}
	};
} // namespace android::provider

