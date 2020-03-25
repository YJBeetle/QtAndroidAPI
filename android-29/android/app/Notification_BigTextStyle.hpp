#pragma once

#ifndef ANDROID_APP_NOTIFICATION_BIGTEXTSTYLE
#define ANDROID_APP_NOTIFICATION_BIGTEXTSTYLE

#include "../../__JniBaseClass.hpp"
#include "Notification_Style.hpp"

namespace __jni_impl::android::app
{
	class Notification_Builder;
}

namespace __jni_impl::android::app
{
	class Notification_BigTextStyle : public __jni_impl::android::app::Notification_Style
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::app::Notification_Builder arg0);
		
		// Methods
		QAndroidJniObject bigText(jstring arg0);
		QAndroidJniObject setSummaryText(jstring arg0);
		QAndroidJniObject setBigContentTitle(jstring arg0);
	};
} // namespace __jni_impl::android::app

#include "Notification_Builder.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void Notification_BigTextStyle::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$BigTextStyle",
			"()V");
	}
	void Notification_BigTextStyle::__constructor(__jni_impl::android::app::Notification_Builder arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$BigTextStyle",
			"(Landroid/app/Notification$Builder;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject Notification_BigTextStyle::bigText(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"bigText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigTextStyle;",
			arg0);
	}
	QAndroidJniObject Notification_BigTextStyle::setSummaryText(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setSummaryText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigTextStyle;",
			arg0);
	}
	QAndroidJniObject Notification_BigTextStyle::setBigContentTitle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setBigContentTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$BigTextStyle;",
			arg0);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Notification_BigTextStyle : public __jni_impl::android::app::Notification_BigTextStyle
	{
	public:
		Notification_BigTextStyle(QAndroidJniObject obj) { __thiz = obj; }
		Notification_BigTextStyle()
		{
			__constructor();
		}
		Notification_BigTextStyle(__jni_impl::android::app::Notification_Builder arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_NOTIFICATION_BIGTEXTSTYLE

