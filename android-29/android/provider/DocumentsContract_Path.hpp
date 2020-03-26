#pragma once

#ifndef ANDROID_PROVIDER_DOCUMENTSCONTRACT_PATH
#define ANDROID_PROVIDER_DOCUMENTSCONTRACT_PATH

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::provider
{
	class DocumentsContract_Path : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		QAndroidJniObject getPath();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jstring getRootId();
	};
} // namespace __jni_impl::android::provider

#include "../os/Parcel.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject DocumentsContract_Path::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Path",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void DocumentsContract_Path::__constructor(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.provider.DocumentsContract$Path",
			"(Ljava/lang/String;Ljava/util/List;)V",
			arg0,
			arg1.__jniObject().object());
	}
	
	// Methods
	jboolean DocumentsContract_Path::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring DocumentsContract_Path::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint DocumentsContract_Path::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject DocumentsContract_Path::getPath()
	{
		return __thiz.callObjectMethod(
			"getPath",
			"()Ljava/util/List;"
		);
	}
	jint DocumentsContract_Path::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void DocumentsContract_Path::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring DocumentsContract_Path::getRootId()
	{
		return __thiz.callObjectMethod(
			"getRootId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class DocumentsContract_Path : public __jni_impl::android::provider::DocumentsContract_Path
	{
	public:
		DocumentsContract_Path(QAndroidJniObject obj) { __thiz = obj; }
		DocumentsContract_Path(jstring arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_DOCUMENTSCONTRACT_PATH

