#pragma once

#ifndef ANDROID_CONTENT_PM_LAUNCHERAPPS_PINITEMREQUEST
#define ANDROID_CONTENT_PM_LAUNCHERAPPS_PINITEMREQUEST

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::appwidget
{
	class AppWidgetProviderInfo;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::pm
{
	class ShortcutInfo;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content::pm
{
	class LauncherApps_PinItemRequest : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint REQUEST_TYPE_APPWIDGET();
		static jint REQUEST_TYPE_SHORTCUT();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean accept();
		jboolean accept(__jni_impl::android::os::Bundle arg0);
		jint describeContents();
		QAndroidJniObject getAppWidgetProviderInfo(__jni_impl::android::content::Context arg0);
		QAndroidJniObject getExtras();
		jint getRequestType();
		QAndroidJniObject getShortcutInfo();
		jboolean isValid();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content::pm

#include "../../appwidget/AppWidgetProviderInfo.hpp"
#include "../Context.hpp"
#include "ShortcutInfo.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	QAndroidJniObject LauncherApps_PinItemRequest::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.LauncherApps$PinItemRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint LauncherApps_PinItemRequest::REQUEST_TYPE_APPWIDGET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.LauncherApps$PinItemRequest",
			"REQUEST_TYPE_APPWIDGET"
		);
	}
	jint LauncherApps_PinItemRequest::REQUEST_TYPE_SHORTCUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.LauncherApps$PinItemRequest",
			"REQUEST_TYPE_SHORTCUT"
		);
	}
	
	// Constructors
	void LauncherApps_PinItemRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.LauncherApps$PinItemRequest",
			"(V)V");
	}
	
	// Methods
	jboolean LauncherApps_PinItemRequest::accept()
	{
		return __thiz.callMethod<jboolean>(
			"accept",
			"()Z"
		);
	}
	jboolean LauncherApps_PinItemRequest::accept(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callMethod<jboolean>(
			"accept",
			"(Landroid/os/Bundle;)Z",
			arg0.__jniObject().object()
		);
	}
	jint LauncherApps_PinItemRequest::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject LauncherApps_PinItemRequest::getAppWidgetProviderInfo(__jni_impl::android::content::Context arg0)
	{
		return __thiz.callObjectMethod(
			"getAppWidgetProviderInfo",
			"(Landroid/content/Context;)Landroid/appwidget/AppWidgetProviderInfo;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LauncherApps_PinItemRequest::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint LauncherApps_PinItemRequest::getRequestType()
	{
		return __thiz.callMethod<jint>(
			"getRequestType",
			"()I"
		);
	}
	QAndroidJniObject LauncherApps_PinItemRequest::getShortcutInfo()
	{
		return __thiz.callObjectMethod(
			"getShortcutInfo",
			"()Landroid/content/pm/ShortcutInfo;"
		);
	}
	jboolean LauncherApps_PinItemRequest::isValid()
	{
		return __thiz.callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	void LauncherApps_PinItemRequest::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class LauncherApps_PinItemRequest : public __jni_impl::android::content::pm::LauncherApps_PinItemRequest
	{
	public:
		LauncherApps_PinItemRequest(QAndroidJniObject obj) { __thiz = obj; }
		LauncherApps_PinItemRequest()
		{
			__constructor();
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_LAUNCHERAPPS_PINITEMREQUEST

