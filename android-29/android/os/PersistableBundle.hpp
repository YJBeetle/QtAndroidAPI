#pragma once

#ifndef ANDROID_OS_PERSISTABLEBUNDLE
#define ANDROID_OS_PERSISTABLEBUNDLE

#include "../../__JniBaseClass.hpp"
#include "BaseBundle.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::os
{
	class PersistableBundle : public __jni_impl::android::os::BaseBundle
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static QAndroidJniObject EMPTY();
		
		// Constructors
		void __constructor(__jni_impl::android::os::PersistableBundle arg0);
		void __constructor(jint arg0);
		void __constructor();
		
		// Methods
		jstring toString();
		jobject clone();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject deepCopy();
		void putPersistableBundle(jstring arg0, __jni_impl::android::os::PersistableBundle arg1);
		QAndroidJniObject getPersistableBundle(jstring arg0);
	};
} // namespace __jni_impl::android::os

#include "Parcel.hpp"

namespace __jni_impl::android::os
{
	// Fields
	QAndroidJniObject PersistableBundle::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.PersistableBundle",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	QAndroidJniObject PersistableBundle::EMPTY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.PersistableBundle",
			"EMPTY",
			"Landroid/os/PersistableBundle;"
		);
	}
	
	// Constructors
	void PersistableBundle::__constructor(__jni_impl::android::os::PersistableBundle arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.PersistableBundle",
			"(Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object());
	}
	void PersistableBundle::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.PersistableBundle",
			"(I)V",
			arg0);
	}
	void PersistableBundle::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.PersistableBundle",
			"()V");
	}
	
	// Methods
	jstring PersistableBundle::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject PersistableBundle::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint PersistableBundle::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void PersistableBundle::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject PersistableBundle::deepCopy()
	{
		return __thiz.callObjectMethod(
			"deepCopy",
			"()Landroid/os/PersistableBundle;"
		);
	}
	void PersistableBundle::putPersistableBundle(jstring arg0, __jni_impl::android::os::PersistableBundle arg1)
	{
		__thiz.callMethod<void>(
			"putPersistableBundle",
			"(Ljava/lang/String;Landroid/os/PersistableBundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject PersistableBundle::getPersistableBundle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getPersistableBundle",
			"(Ljava/lang/String;)Landroid/os/PersistableBundle;",
			arg0
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class PersistableBundle : public __jni_impl::android::os::PersistableBundle
	{
	public:
		PersistableBundle(QAndroidJniObject obj) { __thiz = obj; }
		PersistableBundle(__jni_impl::android::os::PersistableBundle arg0)
		{
			__constructor(
				arg0);
		}
		PersistableBundle(jint arg0)
		{
			__constructor(
				arg0);
		}
		PersistableBundle()
		{
			__constructor();
		}
	};
} // namespace android::os

#endif // ANDROID_OS_PERSISTABLEBUNDLE

