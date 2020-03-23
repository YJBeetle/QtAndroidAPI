#pragma once

#ifndef ANDROID_APP_AUTOMATICZENRULE
#define ANDROID_APP_AUTOMATICZENRULE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::service::notification
{
	class ZenPolicy;
}

namespace __jni_impl::android::app
{
	class AutomaticZenRule : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::android::content::ComponentName arg1, __jni_impl::android::net::Uri arg2, jint arg3, jboolean arg4);
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(jstring arg0, __jni_impl::android::content::ComponentName arg1, __jni_impl::android::content::ComponentName arg2, __jni_impl::android::net::Uri arg3, __jni_impl::android::service::notification::ZenPolicy arg4, jint arg5, jboolean arg6);
		
		// Methods
		QAndroidJniObject getName();
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		void setName(jstring arg0);
		QAndroidJniObject getOwner();
		jlong getCreationTime();
		jboolean isEnabled();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		void setEnabled(jboolean arg0);
		void setInterruptionFilter(jint arg0);
		QAndroidJniObject getConfigurationActivity();
		QAndroidJniObject getConditionId();
		jint getInterruptionFilter();
		QAndroidJniObject getZenPolicy();
		void setConditionId(__jni_impl::android::net::Uri arg0);
		void setZenPolicy(__jni_impl::android::service::notification::ZenPolicy arg0);
		void setConfigurationActivity(__jni_impl::android::content::ComponentName arg0);
	};
} // namespace __jni_impl::android::app

#include "../content/ComponentName.hpp"
#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"
#include "../service/notification/ZenPolicy.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject AutomaticZenRule::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AutomaticZenRule",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void AutomaticZenRule::__constructor(jstring arg0, __jni_impl::android::content::ComponentName arg1, __jni_impl::android::net::Uri arg2, jint arg3, jboolean arg4)
	{
		__thiz = QAndroidJniObject(
			"android.app.AutomaticZenRule",
			"(Ljava/lang/String;Landroid/content/ComponentName;Landroid/net/Uri;IZ)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			arg4);
	}
	void AutomaticZenRule::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.AutomaticZenRule",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	void AutomaticZenRule::__constructor(jstring arg0, __jni_impl::android::content::ComponentName arg1, __jni_impl::android::content::ComponentName arg2, __jni_impl::android::net::Uri arg3, __jni_impl::android::service::notification::ZenPolicy arg4, jint arg5, jboolean arg6)
	{
		__thiz = QAndroidJniObject(
			"android.app.AutomaticZenRule",
			"(Ljava/lang/String;Landroid/content/ComponentName;Landroid/content/ComponentName;Landroid/net/Uri;Landroid/service/notification/ZenPolicy;IZ)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5,
			arg6);
	}
	
	// Methods
	QAndroidJniObject AutomaticZenRule::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;");
	}
	jboolean AutomaticZenRule::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject AutomaticZenRule::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint AutomaticZenRule::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	void AutomaticZenRule::setName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject AutomaticZenRule::getOwner()
	{
		return __thiz.callObjectMethod(
			"getOwner",
			"()Landroid/content/ComponentName;");
	}
	jlong AutomaticZenRule::getCreationTime()
	{
		return __thiz.callMethod<jlong>(
			"getCreationTime",
			"()J");
	}
	jboolean AutomaticZenRule::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z");
	}
	jint AutomaticZenRule::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void AutomaticZenRule::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void AutomaticZenRule::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0);
	}
	void AutomaticZenRule::setInterruptionFilter(jint arg0)
	{
		__thiz.callMethod<void>(
			"setInterruptionFilter",
			"(I)V",
			arg0);
	}
	QAndroidJniObject AutomaticZenRule::getConfigurationActivity()
	{
		return __thiz.callObjectMethod(
			"getConfigurationActivity",
			"()Landroid/content/ComponentName;");
	}
	QAndroidJniObject AutomaticZenRule::getConditionId()
	{
		return __thiz.callObjectMethod(
			"getConditionId",
			"()Landroid/net/Uri;");
	}
	jint AutomaticZenRule::getInterruptionFilter()
	{
		return __thiz.callMethod<jint>(
			"getInterruptionFilter",
			"()I");
	}
	QAndroidJniObject AutomaticZenRule::getZenPolicy()
	{
		return __thiz.callObjectMethod(
			"getZenPolicy",
			"()Landroid/service/notification/ZenPolicy;");
	}
	void AutomaticZenRule::setConditionId(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"setConditionId",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object());
	}
	void AutomaticZenRule::setZenPolicy(__jni_impl::android::service::notification::ZenPolicy arg0)
	{
		__thiz.callMethod<void>(
			"setZenPolicy",
			"(Landroid/service/notification/ZenPolicy;)V",
			arg0.__jniObject().object());
	}
	void AutomaticZenRule::setConfigurationActivity(__jni_impl::android::content::ComponentName arg0)
	{
		__thiz.callMethod<void>(
			"setConfigurationActivity",
			"(Landroid/content/ComponentName;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class AutomaticZenRule : public __jni_impl::android::app::AutomaticZenRule
	{
	public:
		AutomaticZenRule(QAndroidJniObject obj) { __thiz = obj; }
		AutomaticZenRule(jstring arg0, __jni_impl::android::content::ComponentName arg1, __jni_impl::android::net::Uri arg2, jint arg3, jboolean arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		AutomaticZenRule(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		AutomaticZenRule(jstring arg0, __jni_impl::android::content::ComponentName arg1, __jni_impl::android::content::ComponentName arg2, __jni_impl::android::net::Uri arg3, __jni_impl::android::service::notification::ZenPolicy arg4, jint arg5, jboolean arg6)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_AUTOMATICZENRULE

