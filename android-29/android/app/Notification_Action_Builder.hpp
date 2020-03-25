#pragma once

#ifndef ANDROID_APP_NOTIFICATION_ACTION_BUILDER
#define ANDROID_APP_NOTIFICATION_ACTION_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class Notification_Action;
}
namespace __jni_impl::android::graphics::drawable
{
	class Icon;
}
namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::app
{
	class RemoteInput;
}

namespace __jni_impl::android::app
{
	class Notification_Action_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::app::Notification_Action arg0);
		void __constructor(__jni_impl::android::graphics::drawable::Icon arg0, jstring arg1, __jni_impl::android::app::PendingIntent arg2);
		void __constructor(jint arg0, jstring arg1, __jni_impl::android::app::PendingIntent arg2);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject getExtras();
		QAndroidJniObject extend(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject setAllowGeneratedReplies(jboolean arg0);
		QAndroidJniObject setSemanticAction(jint arg0);
		QAndroidJniObject addRemoteInput(__jni_impl::android::app::RemoteInput arg0);
		QAndroidJniObject setContextual(jboolean arg0);
		QAndroidJniObject addExtras(__jni_impl::android::os::Bundle arg0);
	};
} // namespace __jni_impl::android::app

#include "Notification_Action.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "PendingIntent.hpp"
#include "../os/Bundle.hpp"
#include "RemoteInput.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void Notification_Action_Builder::__constructor(__jni_impl::android::app::Notification_Action arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$Action$Builder",
			"(Landroid/app/Notification$Action;)V",
			arg0.__jniObject().object());
	}
	void Notification_Action_Builder::__constructor(__jni_impl::android::graphics::drawable::Icon arg0, jstring arg1, __jni_impl::android::app::PendingIntent arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$Action$Builder",
			"(Landroid/graphics/drawable/Icon;Ljava/lang/CharSequence;Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	void Notification_Action_Builder::__constructor(jint arg0, jstring arg1, __jni_impl::android::app::PendingIntent arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$Action$Builder",
			"(ILjava/lang/CharSequence;Landroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject Notification_Action_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/app/Notification$Action;");
	}
	QAndroidJniObject Notification_Action_Builder::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;");
	}
	QAndroidJniObject Notification_Action_Builder::extend(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"extend",
			"(Landroid/app/Notification$Action$Extender;)Landroid/app/Notification$Action$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Notification_Action_Builder::setAllowGeneratedReplies(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setAllowGeneratedReplies",
			"(Z)Landroid/app/Notification$Action$Builder;",
			arg0);
	}
	QAndroidJniObject Notification_Action_Builder::setSemanticAction(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setSemanticAction",
			"(I)Landroid/app/Notification$Action$Builder;",
			arg0);
	}
	QAndroidJniObject Notification_Action_Builder::addRemoteInput(__jni_impl::android::app::RemoteInput arg0)
	{
		return __thiz.callObjectMethod(
			"addRemoteInput",
			"(Landroid/app/RemoteInput;)Landroid/app/Notification$Action$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Notification_Action_Builder::setContextual(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setContextual",
			"(Z)Landroid/app/Notification$Action$Builder;",
			arg0);
	}
	QAndroidJniObject Notification_Action_Builder::addExtras(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"addExtras",
			"(Landroid/os/Bundle;)Landroid/app/Notification$Action$Builder;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Notification_Action_Builder : public __jni_impl::android::app::Notification_Action_Builder
	{
	public:
		Notification_Action_Builder(QAndroidJniObject obj) { __thiz = obj; }
		Notification_Action_Builder(__jni_impl::android::app::Notification_Action arg0)
		{
			__constructor(
				arg0);
		}
		Notification_Action_Builder(__jni_impl::android::graphics::drawable::Icon arg0, jstring arg1, __jni_impl::android::app::PendingIntent arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Notification_Action_Builder(jint arg0, jstring arg1, __jni_impl::android::app::PendingIntent arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_NOTIFICATION_ACTION_BUILDER

