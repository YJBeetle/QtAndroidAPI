#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::text
{
	class Annotation : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		
		// Methods
		jint describeContents();
		jstring getKey();
		jint getSpanTypeId();
		jstring getValue();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::text

#include "../os/Parcel.hpp"

namespace __jni_impl::android::text
{
	// Fields
	
	// Constructors
	void Annotation::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.Annotation",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void Annotation::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.Annotation",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void Annotation::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.Annotation",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jint Annotation::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring Annotation::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Annotation::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	jstring Annotation::getValue()
	{
		return __thiz.callObjectMethod(
			"getValue",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Annotation::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class Annotation : public __jni_impl::android::text::Annotation
	{
	public:
		Annotation(QAndroidJniObject obj) { __thiz = obj; }
		Annotation(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		Annotation(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::text

