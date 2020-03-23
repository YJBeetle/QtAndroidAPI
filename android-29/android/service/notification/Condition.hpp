#pragma once

#ifndef ANDROID_SERVICE_NOTIFICATION_CONDITION
#define ANDROID_SERVICE_NOTIFICATION_CONDITION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::net
{
	class Uri_Builder;
}
namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::service::notification
{
	class Condition : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint FLAG_RELEVANT_ALWAYS();
		static jint FLAG_RELEVANT_NOW();
		static QAndroidJniObject SCHEME();
		static jint STATE_ERROR();
		static jint STATE_FALSE();
		static jint STATE_TRUE();
		static jint STATE_UNKNOWN();
		jint flags();
		jint icon();
		QAndroidJniObject id();
		QAndroidJniObject line1();
		QAndroidJniObject line2();
		jint state();
		QAndroidJniObject summary();
		
		// Constructors
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(__jni_impl::android::net::Uri arg0, jstring arg1, jstring arg2, jstring arg3, jint arg4, jint arg5, jint arg6);
		void __constructor(__jni_impl::android::net::Uri arg0, jstring arg1, jint arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject copy();
		static QAndroidJniObject stateToString(jint arg0);
		static QAndroidJniObject relevanceToString(jint arg0);
		static QAndroidJniObject newId(__jni_impl::android::content::Context arg0);
		static jboolean isValidId(__jni_impl::android::net::Uri arg0, jstring arg1);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::service::notification

#include "../../net/Uri.hpp"
#include "../../os/Parcel.hpp"
#include "../../net/Uri_Builder.hpp"
#include "../../content/Context.hpp"

namespace __jni_impl::android::service::notification
{
	// Fields
	QAndroidJniObject Condition::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.notification.Condition",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint Condition::FLAG_RELEVANT_ALWAYS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.Condition",
			"FLAG_RELEVANT_ALWAYS");
	}
	jint Condition::FLAG_RELEVANT_NOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.Condition",
			"FLAG_RELEVANT_NOW");
	}
	QAndroidJniObject Condition::SCHEME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.notification.Condition",
			"SCHEME",
			"Ljava/lang/String;");
	}
	jint Condition::STATE_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.Condition",
			"STATE_ERROR");
	}
	jint Condition::STATE_FALSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.Condition",
			"STATE_FALSE");
	}
	jint Condition::STATE_TRUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.Condition",
			"STATE_TRUE");
	}
	jint Condition::STATE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.Condition",
			"STATE_UNKNOWN");
	}
	jint Condition::flags()
	{
		return __thiz.getField<jint>(
			"flags");
	}
	jint Condition::icon()
	{
		return __thiz.getField<jint>(
			"icon");
	}
	QAndroidJniObject Condition::id()
	{
		return __thiz.getObjectField(
			"id",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject Condition::line1()
	{
		return __thiz.getObjectField(
			"line1",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Condition::line2()
	{
		return __thiz.getObjectField(
			"line2",
			"Ljava/lang/String;");
	}
	jint Condition::state()
	{
		return __thiz.getField<jint>(
			"state");
	}
	QAndroidJniObject Condition::summary()
	{
		return __thiz.getObjectField(
			"summary",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void Condition::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.service.notification.Condition",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	void Condition::__constructor(__jni_impl::android::net::Uri arg0, jstring arg1, jstring arg2, jstring arg3, jint arg4, jint arg5, jint arg6)
	{
		__thiz = QAndroidJniObject(
			"android.service.notification.Condition",
			"(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;III)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6);
	}
	void Condition::__constructor(__jni_impl::android::net::Uri arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.service.notification.Condition",
			"(Landroid/net/Uri;Ljava/lang/String;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	
	// Methods
	jboolean Condition::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Condition::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint Condition::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject Condition::copy()
	{
		return __thiz.callObjectMethod(
			"copy",
			"()Landroid/service/notification/Condition;");
	}
	QAndroidJniObject Condition::stateToString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.service.notification.Condition",
			"stateToString",
			"(I)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject Condition::relevanceToString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.service.notification.Condition",
			"relevanceToString",
			"(I)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject Condition::newId(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.service.notification.Condition",
			"newId",
			"(Landroid/content/Context;)Landroid/net/Uri$Builder;",
			arg0.__jniObject().object());
	}
	jboolean Condition::isValidId(__jni_impl::android::net::Uri arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.service.notification.Condition",
			"isValidId",
			"(Landroid/net/Uri;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1);
	}
	jint Condition::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void Condition::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::service::notification

namespace android::service::notification
{
	class Condition : public __jni_impl::android::service::notification::Condition
	{
	public:
		Condition(QAndroidJniObject obj) { __thiz = obj; }
		Condition(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		Condition(__jni_impl::android::net::Uri arg0, jstring arg1, jstring arg2, jstring arg3, jint arg4, jint arg5, jint arg6)
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
		Condition(__jni_impl::android::net::Uri arg0, jstring arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::service::notification

#endif // ANDROID_SERVICE_NOTIFICATION_CONDITION

