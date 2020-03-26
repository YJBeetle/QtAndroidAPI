#pragma once

#ifndef ANDROID_APPWIDGET_APPWIDGETPROVIDERINFO
#define ANDROID_APPWIDGET_APPWIDGETPROVIDERINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::content::pm
{
	class PackageManager;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::os
{
	class UserHandle;
}

namespace __jni_impl::android::appwidget
{
	class AppWidgetProviderInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint RESIZE_BOTH();
		static jint RESIZE_HORIZONTAL();
		static jint RESIZE_NONE();
		static jint RESIZE_VERTICAL();
		static jint WIDGET_CATEGORY_HOME_SCREEN();
		static jint WIDGET_CATEGORY_KEYGUARD();
		static jint WIDGET_CATEGORY_SEARCHBOX();
		static jint WIDGET_FEATURE_HIDE_FROM_PICKER();
		static jint WIDGET_FEATURE_RECONFIGURABLE();
		jint autoAdvanceViewId();
		QAndroidJniObject configure();
		jint icon();
		jint initialKeyguardLayout();
		jint initialLayout();
		jstring label();
		jint minHeight();
		jint minResizeHeight();
		jint minResizeWidth();
		jint minWidth();
		jint previewImage();
		QAndroidJniObject provider();
		jint resizeMode();
		jint updatePeriodMillis();
		jint widgetCategory();
		jint widgetFeatures();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::os::Parcel arg0);
		
		// Methods
		jstring toString();
		QAndroidJniObject clone();
		jstring loadLabel(__jni_impl::android::content::pm::PackageManager arg0);
		QAndroidJniObject loadIcon(__jni_impl::android::content::Context arg0, jint arg1);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject loadPreviewImage(__jni_impl::android::content::Context arg0, jint arg1);
		QAndroidJniObject getProfile();
	};
} // namespace __jni_impl::android::appwidget

#include "../content/ComponentName.hpp"
#include "../os/Parcel.hpp"
#include "../content/pm/PackageManager.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../content/Context.hpp"
#include "../os/UserHandle.hpp"

namespace __jni_impl::android::appwidget
{
	// Fields
	QAndroidJniObject AppWidgetProviderInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetProviderInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint AppWidgetProviderInfo::RESIZE_BOTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"RESIZE_BOTH"
		);
	}
	jint AppWidgetProviderInfo::RESIZE_HORIZONTAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"RESIZE_HORIZONTAL"
		);
	}
	jint AppWidgetProviderInfo::RESIZE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"RESIZE_NONE"
		);
	}
	jint AppWidgetProviderInfo::RESIZE_VERTICAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"RESIZE_VERTICAL"
		);
	}
	jint AppWidgetProviderInfo::WIDGET_CATEGORY_HOME_SCREEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"WIDGET_CATEGORY_HOME_SCREEN"
		);
	}
	jint AppWidgetProviderInfo::WIDGET_CATEGORY_KEYGUARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"WIDGET_CATEGORY_KEYGUARD"
		);
	}
	jint AppWidgetProviderInfo::WIDGET_CATEGORY_SEARCHBOX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"WIDGET_CATEGORY_SEARCHBOX"
		);
	}
	jint AppWidgetProviderInfo::WIDGET_FEATURE_HIDE_FROM_PICKER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"WIDGET_FEATURE_HIDE_FROM_PICKER"
		);
	}
	jint AppWidgetProviderInfo::WIDGET_FEATURE_RECONFIGURABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"WIDGET_FEATURE_RECONFIGURABLE"
		);
	}
	jint AppWidgetProviderInfo::autoAdvanceViewId()
	{
		return __thiz.getField<jint>(
			"autoAdvanceViewId"
		);
	}
	QAndroidJniObject AppWidgetProviderInfo::configure()
	{
		return __thiz.getObjectField(
			"configure",
			"Landroid/content/ComponentName;"
		);
	}
	jint AppWidgetProviderInfo::icon()
	{
		return __thiz.getField<jint>(
			"icon"
		);
	}
	jint AppWidgetProviderInfo::initialKeyguardLayout()
	{
		return __thiz.getField<jint>(
			"initialKeyguardLayout"
		);
	}
	jint AppWidgetProviderInfo::initialLayout()
	{
		return __thiz.getField<jint>(
			"initialLayout"
		);
	}
	jstring AppWidgetProviderInfo::label()
	{
		return __thiz.getObjectField(
			"label",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AppWidgetProviderInfo::minHeight()
	{
		return __thiz.getField<jint>(
			"minHeight"
		);
	}
	jint AppWidgetProviderInfo::minResizeHeight()
	{
		return __thiz.getField<jint>(
			"minResizeHeight"
		);
	}
	jint AppWidgetProviderInfo::minResizeWidth()
	{
		return __thiz.getField<jint>(
			"minResizeWidth"
		);
	}
	jint AppWidgetProviderInfo::minWidth()
	{
		return __thiz.getField<jint>(
			"minWidth"
		);
	}
	jint AppWidgetProviderInfo::previewImage()
	{
		return __thiz.getField<jint>(
			"previewImage"
		);
	}
	QAndroidJniObject AppWidgetProviderInfo::provider()
	{
		return __thiz.getObjectField(
			"provider",
			"Landroid/content/ComponentName;"
		);
	}
	jint AppWidgetProviderInfo::resizeMode()
	{
		return __thiz.getField<jint>(
			"resizeMode"
		);
	}
	jint AppWidgetProviderInfo::updatePeriodMillis()
	{
		return __thiz.getField<jint>(
			"updatePeriodMillis"
		);
	}
	jint AppWidgetProviderInfo::widgetCategory()
	{
		return __thiz.getField<jint>(
			"widgetCategory"
		);
	}
	jint AppWidgetProviderInfo::widgetFeatures()
	{
		return __thiz.getField<jint>(
			"widgetFeatures"
		);
	}
	
	// Constructors
	void AppWidgetProviderInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.appwidget.AppWidgetProviderInfo",
			"()V");
	}
	void AppWidgetProviderInfo::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.appwidget.AppWidgetProviderInfo",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jstring AppWidgetProviderInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject AppWidgetProviderInfo::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/appwidget/AppWidgetProviderInfo;"
		);
	}
	jstring AppWidgetProviderInfo::loadLabel(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject AppWidgetProviderInfo::loadIcon(__jni_impl::android::content::Context arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"loadIcon",
			"(Landroid/content/Context;I)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint AppWidgetProviderInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void AppWidgetProviderInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AppWidgetProviderInfo::loadPreviewImage(__jni_impl::android::content::Context arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"loadPreviewImage",
			"(Landroid/content/Context;I)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AppWidgetProviderInfo::getProfile()
	{
		return __thiz.callObjectMethod(
			"getProfile",
			"()Landroid/os/UserHandle;"
		);
	}
} // namespace __jni_impl::android::appwidget

namespace android::appwidget
{
	class AppWidgetProviderInfo : public __jni_impl::android::appwidget::AppWidgetProviderInfo
	{
	public:
		AppWidgetProviderInfo(QAndroidJniObject obj) { __thiz = obj; }
		AppWidgetProviderInfo()
		{
			__constructor();
		}
		AppWidgetProviderInfo(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::appwidget

#endif // ANDROID_APPWIDGET_APPWIDGETPROVIDERINFO

