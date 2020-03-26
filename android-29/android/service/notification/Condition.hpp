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
		static jstring SCHEME();
		static jint STATE_ERROR();
		static jint STATE_FALSE();
		static jint STATE_TRUE();
		static jint STATE_UNKNOWN();
		jint flags();
		jint icon();
		QAndroidJniObject id();
		jstring line1();
		jstring line2();
		jint state();
		jstring summary();
		
		// Constructors
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(__jni_impl::android::net::Uri arg0, jstring arg1, jstring arg2, jstring arg3, jint arg4, jint arg5, jint arg6);
		void __constructor(__jni_impl::android::net::Uri arg0, jstring arg1, jint arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		QAndroidJniObject copy();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		static jstring relevanceToString(jint arg0);
		static QAndroidJniObject newId(__jni_impl::android::content::Context arg0);
		static jboolean isValidId(__jni_impl::android::net::Uri arg0, jstring arg1);
		static jstring stateToString(jint arg0);
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
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Condition::FLAG_RELEVANT_ALWAYS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.Condition",
			"FLAG_RELEVANT_ALWAYS"
		);
	}
	jint Condition::FLAG_RELEVANT_NOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.Condition",
			"FLAG_RELEVANT_NOW"
		);
	}
	jstring Condition::SCHEME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.notification.Condition",
			"SCHEME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Condition::STATE_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.Condition",
			"STATE_ERROR"
		);
	}
	jint Condition::STATE_FALSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.Condition",
			"STATE_FALSE"
		);
	}
	jint Condition::STATE_TRUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.Condition",
			"STATE_TRUE"
		);
	}
	jint Condition::STATE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.Condition",
			"STATE_UNKNOWN"
		);
	}
	jint Condition::flags()
	{
		return __thiz.getField<jint>(
			"flags"
		);
	}
	jint Condition::icon()
	{
		return __thiz.getField<jint>(
			"icon"
		);
	}
	QAndroidJniObject Condition::id()
	{
		return __thiz.getObjectField(
			"id",
			"Landroid/net/Uri;"
		);
	}
	jstring Condition::line1()
	{
		return __thiz.getObjectField(
			"line1",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Condition::line2()
	{
		return __thiz.getObjectField(
			"line2",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Condition::state()
	{
		return __thiz.getField<jint>(
			"state"
		);
	}
	jstring Condition::summary()
	{
		return __thiz.getObjectField(
			"summary",
			"Ljava/lang/String;"
		).object<jstring>();
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
			arg0
		);
	}
	jstring Condition::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Condition::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject Condition::copy()
	{
		return __thiz.callObjectMethod(
			"copy",
			"()Landroid/service/notification/Condition;"
		);
	}
	jint Condition::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void Condition::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring Condition::relevanceToString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.service.notification.Condition",
			"relevanceToString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject Condition::newId(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.service.notification.Condition",
			"newId",
			"(Landroid/content/Context;)Landroid/net/Uri$Builder;",
			arg0.__jniObject().object()
		);
	}
	jboolean Condition::isValidId(__jni_impl::android::net::Uri arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.service.notification.Condition",
			"isValidId",
			"(Landroid/net/Uri;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring Condition::stateToString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.service.notification.Condition",
			"stateToString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
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

