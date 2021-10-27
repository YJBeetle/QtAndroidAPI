#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::os
{
	class WorkSource : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::os::WorkSource arg0);
		
		// Methods
		jboolean add(__jni_impl::android::os::WorkSource arg0);
		void clear();
		jint describeContents();
		jboolean diff(__jni_impl::android::os::WorkSource arg0);
		jboolean equals(jobject arg0);
		jint hashCode();
		jboolean remove(__jni_impl::android::os::WorkSource arg0);
		void set(__jni_impl::android::os::WorkSource arg0);
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::os

#include "Parcel.hpp"

namespace __jni_impl::android::os
{
	// Fields
	QAndroidJniObject WorkSource::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.WorkSource",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void WorkSource::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.WorkSource",
			"()V"
		);
	}
	void WorkSource::__constructor(__jni_impl::android::os::WorkSource arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.WorkSource",
			"(Landroid/os/WorkSource;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean WorkSource::add(__jni_impl::android::os::WorkSource arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Landroid/os/WorkSource;)Z",
			arg0.__jniObject().object()
		);
	}
	void WorkSource::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint WorkSource::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WorkSource::diff(__jni_impl::android::os::WorkSource arg0)
	{
		return __thiz.callMethod<jboolean>(
			"diff",
			"(Landroid/os/WorkSource;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean WorkSource::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint WorkSource::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean WorkSource::remove(__jni_impl::android::os::WorkSource arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Landroid/os/WorkSource;)Z",
			arg0.__jniObject().object()
		);
	}
	void WorkSource::set(__jni_impl::android::os::WorkSource arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/os/WorkSource;)V",
			arg0.__jniObject().object()
		);
	}
	jstring WorkSource::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WorkSource::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class WorkSource : public __jni_impl::android::os::WorkSource
	{
	public:
		WorkSource(QAndroidJniObject obj) { __thiz = obj; }
		WorkSource()
		{
			__constructor();
		}
		WorkSource(__jni_impl::android::os::WorkSource arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::os

