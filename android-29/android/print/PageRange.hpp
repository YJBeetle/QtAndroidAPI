#pragma once

#ifndef ANDROID_PRINT_PAGERANGE
#define ANDROID_PRINT_PAGERANGE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::print
{
	class PageRange : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ALL_PAGES();
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jint arg0, jint arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getEnd();
		jint getStart();
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::print

#include "../os/Parcel.hpp"

namespace __jni_impl::android::print
{
	// Fields
	QAndroidJniObject PageRange::ALL_PAGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PageRange",
			"ALL_PAGES",
			"Landroid/print/PageRange;"
		);
	}
	QAndroidJniObject PageRange::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PageRange",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void PageRange::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.print.PageRange",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jint PageRange::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PageRange::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PageRange::getEnd()
	{
		return __thiz.callMethod<jint>(
			"getEnd",
			"()I"
		);
	}
	jint PageRange::getStart()
	{
		return __thiz.callMethod<jint>(
			"getStart",
			"()I"
		);
	}
	jint PageRange::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PageRange::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PageRange::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::print

namespace android::print
{
	class PageRange : public __jni_impl::android::print::PageRange
	{
	public:
		PageRange(QAndroidJniObject obj) { __thiz = obj; }
		PageRange(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::print

#endif // ANDROID_PRINT_PAGERANGE

