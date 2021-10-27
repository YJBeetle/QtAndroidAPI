#pragma once

#ifndef ANDROID_APP_SLICE_SLICESPEC
#define ANDROID_APP_SLICE_SLICESPEC

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app::slice
{
	class SliceSpec : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jstring arg0, jint arg1);
		void __constructor(const QString &arg0, jint arg1);
		
		// Methods
		jboolean canRender(__jni_impl::android::app::slice::SliceSpec arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getRevision();
		jstring getType();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app::slice

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::app::slice
{
	// Fields
	QAndroidJniObject SliceSpec::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceSpec",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void SliceSpec::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.slice.SliceSpec",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void SliceSpec::__constructor(const QString &arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.slice.SliceSpec",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
	jboolean SliceSpec::canRender(__jni_impl::android::app::slice::SliceSpec arg0)
	{
		return __thiz.callMethod<jboolean>(
			"canRender",
			"(Landroid/app/slice/SliceSpec;)Z",
			arg0.__jniObject().object()
		);
	}
	jint SliceSpec::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SliceSpec::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint SliceSpec::getRevision()
	{
		return __thiz.callMethod<jint>(
			"getRevision",
			"()I"
		);
	}
	jstring SliceSpec::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SliceSpec::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SliceSpec::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::app::slice

namespace android::app::slice
{
	class SliceSpec : public __jni_impl::android::app::slice::SliceSpec
	{
	public:
		SliceSpec(QAndroidJniObject obj) { __thiz = obj; }
		SliceSpec(jstring arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::app::slice

#endif // ANDROID_APP_SLICE_SLICESPEC

