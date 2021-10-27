#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Notification_Style.hpp"


namespace __jni_impl::android::app
{
	class Notification_DecoratedCustomViewStyle : public __jni_impl::android::app::Notification_Style
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
	void Notification_DecoratedCustomViewStyle::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$DecoratedCustomViewStyle",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::app

namespace android::app
{
	class Notification_DecoratedCustomViewStyle : public __jni_impl::android::app::Notification_DecoratedCustomViewStyle
	{
	public:
		Notification_DecoratedCustomViewStyle(QAndroidJniObject obj) { __thiz = obj; }
		Notification_DecoratedCustomViewStyle()
		{
			__constructor();
		}
	};
} // namespace android::app

