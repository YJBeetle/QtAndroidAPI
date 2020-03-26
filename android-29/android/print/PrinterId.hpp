#pragma once

#ifndef ANDROID_PRINT_PRINTERID
#define ANDROID_PRINT_PRINTERID

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::print
{
	class PrinterId : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jstring getLocalId();
	};
} // namespace __jni_impl::android::print

#include "../os/Parcel.hpp"

namespace __jni_impl::android::print
{
	// Fields
	QAndroidJniObject PrinterId::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrinterId",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void PrinterId::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.print.PrinterId",
			"(V)V");
	}
	
	// Methods
	jboolean PrinterId::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring PrinterId::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint PrinterId::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint PrinterId::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void PrinterId::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring PrinterId::getLocalId()
	{
		return __thiz.callObjectMethod(
			"getLocalId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::print

namespace android::print
{
	class PrinterId : public __jni_impl::android::print::PrinterId
	{
	public:
		PrinterId(QAndroidJniObject obj) { __thiz = obj; }
		PrinterId()
		{
			__constructor();
		}
	};
} // namespace android::print

#endif // ANDROID_PRINT_PRINTERID

