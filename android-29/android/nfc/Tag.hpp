#pragma once

#ifndef ANDROID_NFC_TAG
#define ANDROID_NFC_TAG

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::nfc
{
	class Tag : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		jbyteArray getId();
		jarray getTechList();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::nfc

#include "../os/Parcel.hpp"

namespace __jni_impl::android::nfc
{
	// Fields
	QAndroidJniObject Tag::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.Tag",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void Tag::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.nfc.Tag",
			"(V)V");
	}
	
	// Methods
	jstring Tag::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray Tag::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()[B"
		).object<jbyteArray>();
	}
	jarray Tag::getTechList()
	{
		return __thiz.callObjectMethod(
			"getTechList",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jint Tag::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void Tag::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::nfc

namespace android::nfc
{
	class Tag : public __jni_impl::android::nfc::Tag
	{
	public:
		Tag(QAndroidJniObject obj) { __thiz = obj; }
		Tag()
		{
			__constructor();
		}
	};
} // namespace android::nfc

#endif // ANDROID_NFC_TAG

