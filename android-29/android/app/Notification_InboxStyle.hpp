#pragma once

#ifndef ANDROID_APP_NOTIFICATION_INBOXSTYLE
#define ANDROID_APP_NOTIFICATION_INBOXSTYLE

#include "../../__JniBaseClass.hpp"
#include "Notification_Style.hpp"

namespace __jni_impl::android::app
{
	class Notification_Builder;
}

namespace __jni_impl::android::app
{
	class Notification_InboxStyle : public __jni_impl::android::app::Notification_Style
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::app::Notification_Builder arg0);
		
		// Methods
		QAndroidJniObject addLine(jstring arg0);
		QAndroidJniObject setSummaryText(jstring arg0);
		QAndroidJniObject setBigContentTitle(jstring arg0);
	};
} // namespace __jni_impl::android::app

#include "Notification_Builder.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void Notification_InboxStyle::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$InboxStyle",
			"()V");
	}
	void Notification_InboxStyle::__constructor(__jni_impl::android::app::Notification_Builder arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$InboxStyle",
			"(Landroid/app/Notification$Builder;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject Notification_InboxStyle::addLine(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"addLine",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$InboxStyle;",
			arg0
		);
	}
	QAndroidJniObject Notification_InboxStyle::setSummaryText(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setSummaryText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$InboxStyle;",
			arg0
		);
	}
	QAndroidJniObject Notification_InboxStyle::setBigContentTitle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setBigContentTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$InboxStyle;",
			arg0
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Notification_InboxStyle : public __jni_impl::android::app::Notification_InboxStyle
	{
	public:
		Notification_InboxStyle(QAndroidJniObject obj) { __thiz = obj; }
		Notification_InboxStyle()
		{
			__constructor();
		}
		Notification_InboxStyle(__jni_impl::android::app::Notification_Builder arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_NOTIFICATION_INBOXSTYLE

