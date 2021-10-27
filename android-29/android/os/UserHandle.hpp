#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::os
{
	class UserHandle : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::android::os::Parcel arg0);
		
		// Methods
		static QAndroidJniObject getUserHandleForUid(jint arg0);
		static QAndroidJniObject readFromParcel(__jni_impl::android::os::Parcel arg0);
		static void writeToParcel(__jni_impl::android::os::UserHandle arg0, __jni_impl::android::os::Parcel arg1);
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::os

#include "Parcel.hpp"

namespace __jni_impl::android::os
{
	// Fields
	QAndroidJniObject UserHandle::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserHandle",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void UserHandle::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.UserHandle",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject UserHandle::getUserHandleForUid(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.UserHandle",
			"getUserHandleForUid",
			"(I)Landroid/os/UserHandle;",
			arg0
		);
	}
	QAndroidJniObject UserHandle::readFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.UserHandle",
			"readFromParcel",
			"(Landroid/os/Parcel;)Landroid/os/UserHandle;",
			arg0.__jniObject().object()
		);
	}
	void UserHandle::writeToParcel(__jni_impl::android::os::UserHandle arg0, __jni_impl::android::os::Parcel arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.UserHandle",
			"writeToParcel",
			"(Landroid/os/UserHandle;Landroid/os/Parcel;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint UserHandle::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean UserHandle::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint UserHandle::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring UserHandle::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void UserHandle::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class UserHandle : public __jni_impl::android::os::UserHandle
	{
	public:
		UserHandle(QAndroidJniObject obj) { __thiz = obj; }
		UserHandle(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::os

