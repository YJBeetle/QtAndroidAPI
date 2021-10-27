#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class CalendarContract_SyncState : public __JniBaseClass
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
	QAndroidJniObject CalendarContract_SyncState::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.CalendarContract$SyncState",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	void CalendarContract_SyncState::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.CalendarContract$SyncState",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class CalendarContract_SyncState : public __jni_impl::android::provider::CalendarContract_SyncState
	{
	public:
		CalendarContract_SyncState(QAndroidJniObject obj) { __thiz = obj; }
		CalendarContract_SyncState()
		{
			__constructor();
		}
	};
} // namespace android::provider

