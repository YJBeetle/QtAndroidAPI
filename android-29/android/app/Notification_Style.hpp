#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class Notification;
}
namespace __jni_impl::android::app
{
	class Notification_Builder;
}
namespace __jni_impl::android::widget
{
	class RemoteViews;
}

namespace __jni_impl::android::app
{
	class Notification_Style : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		void setBuilder(__jni_impl::android::app::Notification_Builder arg0);
	};
} // namespace __jni_impl::android::app

#include "Notification.hpp"
#include "Notification_Builder.hpp"
#include "../widget/RemoteViews.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void Notification_Style::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$Style",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Notification_Style::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/app/Notification;"
		);
	}
	void Notification_Style::setBuilder(__jni_impl::android::app::Notification_Builder arg0)
	{
		__thiz.callMethod<void>(
			"setBuilder",
			"(Landroid/app/Notification$Builder;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Notification_Style : public __jni_impl::android::app::Notification_Style
	{
	public:
		Notification_Style(QAndroidJniObject obj) { __thiz = obj; }
		Notification_Style()
		{
			__constructor();
		}
	};
} // namespace android::app

