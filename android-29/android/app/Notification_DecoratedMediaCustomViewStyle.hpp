#pragma once

#ifndef ANDROID_APP_NOTIFICATION_DECORATEDMEDIACUSTOMVIEWSTYLE
#define ANDROID_APP_NOTIFICATION_DECORATEDMEDIACUSTOMVIEWSTYLE

#include "../../__JniBaseClass.hpp"
#include "Notification_Style.hpp"
#include "Notification_MediaStyle.hpp"


namespace __jni_impl::android::app
{
	class Notification_DecoratedMediaCustomViewStyle : public __jni_impl::android::app::Notification_MediaStyle
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::app


namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void Notification_DecoratedMediaCustomViewStyle::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$DecoratedMediaCustomViewStyle",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::app

namespace android::app
{
	class Notification_DecoratedMediaCustomViewStyle : public __jni_impl::android::app::Notification_DecoratedMediaCustomViewStyle
	{
	public:
		Notification_DecoratedMediaCustomViewStyle(QAndroidJniObject obj) { __thiz = obj; }
		Notification_DecoratedMediaCustomViewStyle()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_NOTIFICATION_DECORATEDMEDIACUSTOMVIEWSTYLE

