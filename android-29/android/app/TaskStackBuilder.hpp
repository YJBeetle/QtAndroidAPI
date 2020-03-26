#pragma once

#ifndef ANDROID_APP_TASKSTACKBUILDER
#define ANDROID_APP_TASKSTACKBUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::app
{
	class Activity;
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
	class TaskStackBuilder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject create(__jni_impl::android::content::Context arg0);
		QAndroidJniObject addNextIntent(__jni_impl::android::content::Intent arg0);
		QAndroidJniObject addNextIntentWithParentStack(__jni_impl::android::content::Intent arg0);
		QAndroidJniObject addParentStack(__jni_impl::android::content::ComponentName arg0);
		QAndroidJniObject addParentStack(jclass arg0);
		QAndroidJniObject addParentStack(__jni_impl::android::app::Activity arg0);
		jint getIntentCount();
		QAndroidJniObject editIntentAt(jint arg0);
		QAndroidJniObject getPendingIntent(jint arg0, jint arg1, __jni_impl::android::os::Bundle arg2);
		QAndroidJniObject getPendingIntent(jint arg0, jint arg1);
		jarray getIntents();
		void startActivities();
		void startActivities(__jni_impl::android::os::Bundle arg0);
	};
} // namespace __jni_impl::android::app

#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../content/ComponentName.hpp"
#include "Activity.hpp"
#include "PendingIntent.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void TaskStackBuilder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.TaskStackBuilder",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TaskStackBuilder::create(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.TaskStackBuilder",
			"create",
			"(Landroid/content/Context;)Landroid/app/TaskStackBuilder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TaskStackBuilder::addNextIntent(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"addNextIntent",
			"(Landroid/content/Intent;)Landroid/app/TaskStackBuilder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TaskStackBuilder::addNextIntentWithParentStack(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"addNextIntentWithParentStack",
			"(Landroid/content/Intent;)Landroid/app/TaskStackBuilder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TaskStackBuilder::addParentStack(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"addParentStack",
			"(Landroid/content/ComponentName;)Landroid/app/TaskStackBuilder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TaskStackBuilder::addParentStack(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"addParentStack",
			"(Ljava/lang/Class;)Landroid/app/TaskStackBuilder;",
			arg0
		);
	}
	QAndroidJniObject TaskStackBuilder::addParentStack(__jni_impl::android::app::Activity arg0)
	{
		return __thiz.callObjectMethod(
			"addParentStack",
			"(Landroid/app/Activity;)Landroid/app/TaskStackBuilder;",
			arg0.__jniObject().object()
		);
	}
	jint TaskStackBuilder::getIntentCount()
	{
		return __thiz.callMethod<jint>(
			"getIntentCount",
			"()I"
		);
	}
	QAndroidJniObject TaskStackBuilder::editIntentAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"editIntentAt",
			"(I)Landroid/content/Intent;",
			arg0
		);
	}
	QAndroidJniObject TaskStackBuilder::getPendingIntent(jint arg0, jint arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"getPendingIntent",
			"(IILandroid/os/Bundle;)Landroid/app/PendingIntent;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject TaskStackBuilder::getPendingIntent(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getPendingIntent",
			"(II)Landroid/app/PendingIntent;",
			arg0,
			arg1
		);
	}
	jarray TaskStackBuilder::getIntents()
	{
		return __thiz.callObjectMethod(
			"getIntents",
			"()[Landroid/content/Intent;"
		).object<jarray>();
	}
	void TaskStackBuilder::startActivities()
	{
		__thiz.callMethod<void>(
			"startActivities",
			"()V"
		);
	}
	void TaskStackBuilder::startActivities(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"startActivities",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class TaskStackBuilder : public __jni_impl::android::app::TaskStackBuilder
	{
	public:
		TaskStackBuilder(QAndroidJniObject obj) { __thiz = obj; }
		TaskStackBuilder()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_TASKSTACKBUILDER

