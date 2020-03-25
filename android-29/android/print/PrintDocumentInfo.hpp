#pragma once

#ifndef ANDROID_PRINT_PRINTDOCUMENTINFO
#define ANDROID_PRINT_PRINTDOCUMENTINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::print
{
	class PrintDocumentInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint CONTENT_TYPE_DOCUMENT();
		static jint CONTENT_TYPE_PHOTO();
		static jint CONTENT_TYPE_UNKNOWN();
		static QAndroidJniObject CREATOR();
		static jint PAGE_COUNT_UNKNOWN();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getName();
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jlong getDataSize();
		jint getPageCount();
		jint getContentType();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::print

#include "../os/Parcel.hpp"

namespace __jni_impl::android::print
{
	// Fields
	jint PrintDocumentInfo::CONTENT_TYPE_DOCUMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintDocumentInfo",
			"CONTENT_TYPE_DOCUMENT");
	}
	jint PrintDocumentInfo::CONTENT_TYPE_PHOTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintDocumentInfo",
			"CONTENT_TYPE_PHOTO");
	}
	jint PrintDocumentInfo::CONTENT_TYPE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintDocumentInfo",
			"CONTENT_TYPE_UNKNOWN");
	}
	QAndroidJniObject PrintDocumentInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintDocumentInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint PrintDocumentInfo::PAGE_COUNT_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintDocumentInfo",
			"PAGE_COUNT_UNKNOWN");
	}
	
	// Constructors
	void PrintDocumentInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.print.PrintDocumentInfo",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject PrintDocumentInfo::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;");
	}
	jboolean PrintDocumentInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject PrintDocumentInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint PrintDocumentInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jlong PrintDocumentInfo::getDataSize()
	{
		return __thiz.callMethod<jlong>(
			"getDataSize",
			"()J");
	}
	jint PrintDocumentInfo::getPageCount()
	{
		return __thiz.callMethod<jint>(
			"getPageCount",
			"()I");
	}
	jint PrintDocumentInfo::getContentType()
	{
		return __thiz.callMethod<jint>(
			"getContentType",
			"()I");
	}
	jint PrintDocumentInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void PrintDocumentInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::print

namespace android::print
{
	class PrintDocumentInfo : public __jni_impl::android::print::PrintDocumentInfo
	{
	public:
		PrintDocumentInfo(QAndroidJniObject obj) { __thiz = obj; }
		PrintDocumentInfo()
		{
			__constructor();
		}
	};
} // namespace android::print

#endif // ANDROID_PRINT_PRINTDOCUMENTINFO

