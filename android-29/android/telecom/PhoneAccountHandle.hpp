#pragma once

#ifndef ANDROID_TELECOM_PHONEACCOUNTHANDLE
#define ANDROID_TELECOM_PHONEACCOUNTHANDLE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::os
{
	class UserHandle;
}

namespace __jni_impl::android::telecom
{
	class PhoneAccountHandle : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::android::content::ComponentName arg0, jstring arg1);
		void __constructor(__jni_impl::android::content::ComponentName arg0, const QString &arg1);
		void __constructor(__jni_impl::android::content::ComponentName arg0, jstring arg1, __jni_impl::android::os::UserHandle arg2);
		void __constructor(__jni_impl::android::content::ComponentName arg0, const QString &arg1, __jni_impl::android::os::UserHandle arg2);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getComponentName();
		jstring getId();
		QAndroidJniObject getUserHandle();
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::telecom

#include "../content/ComponentName.hpp"
#include "../os/Parcel.hpp"
#include "../os/UserHandle.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	QAndroidJniObject PhoneAccountHandle::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.PhoneAccountHandle",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void PhoneAccountHandle::__constructor(__jni_impl::android::content::ComponentName arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.PhoneAccountHandle",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void PhoneAccountHandle::__constructor(__jni_impl::android::content::ComponentName arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.PhoneAccountHandle",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void PhoneAccountHandle::__constructor(__jni_impl::android::content::ComponentName arg0, jstring arg1, __jni_impl::android::os::UserHandle arg2)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.PhoneAccountHandle",
			"(Landroid/content/ComponentName;Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void PhoneAccountHandle::__constructor(__jni_impl::android::content::ComponentName arg0, const QString &arg1, __jni_impl::android::os::UserHandle arg2)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.PhoneAccountHandle",
			"(Landroid/content/ComponentName;Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	jint PhoneAccountHandle::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PhoneAccountHandle::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject PhoneAccountHandle::getComponentName()
	{
		return __thiz.callObjectMethod(
			"getComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	jstring PhoneAccountHandle::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject PhoneAccountHandle::getUserHandle()
	{
		return __thiz.callObjectMethod(
			"getUserHandle",
			"()Landroid/os/UserHandle;"
		);
	}
	jint PhoneAccountHandle::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PhoneAccountHandle::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PhoneAccountHandle::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class PhoneAccountHandle : public __jni_impl::android::telecom::PhoneAccountHandle
	{
	public:
		PhoneAccountHandle(QAndroidJniObject obj) { __thiz = obj; }
		PhoneAccountHandle(__jni_impl::android::content::ComponentName arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PhoneAccountHandle(__jni_impl::android::content::ComponentName arg0, jstring arg1, __jni_impl::android::os::UserHandle arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::telecom

#endif // ANDROID_TELECOM_PHONEACCOUNTHANDLE

