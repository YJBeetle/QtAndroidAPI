#pragma once

#ifndef ANDROID_PRINT_PRINTJOBINFO
#define ANDROID_PRINT_PRINTJOBINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::print
{
	class PrintJobId;
}
namespace __jni_impl::android::print
{
	class PrintAttributes;
}
namespace __jni_impl::android::print
{
	class PrinterId;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::print
{
	class PrintJobInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint STATE_BLOCKED();
		static jint STATE_CANCELED();
		static jint STATE_COMPLETED();
		static jint STATE_CREATED();
		static jint STATE_FAILED();
		static jint STATE_QUEUED();
		static jint STATE_STARTED();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject getId();
		jint getState();
		QAndroidJniObject getAttributes();
		jlong getCreationTime();
		QAndroidJniObject getLabel();
		QAndroidJniObject getAdvancedStringOption(jstring arg0);
		jboolean hasAdvancedOption(jstring arg0);
		jint getAdvancedIntOption(jstring arg0);
		QAndroidJniObject getPrinterId();
		jint getCopies();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getPages();
	};
} // namespace __jni_impl::android::print

#include "PrintJobId.hpp"
#include "PrintAttributes.hpp"
#include "PrinterId.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::print
{
	// Fields
	QAndroidJniObject PrintJobInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintJobInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint PrintJobInfo::STATE_BLOCKED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_BLOCKED");
	}
	jint PrintJobInfo::STATE_CANCELED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_CANCELED");
	}
	jint PrintJobInfo::STATE_COMPLETED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_COMPLETED");
	}
	jint PrintJobInfo::STATE_CREATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_CREATED");
	}
	jint PrintJobInfo::STATE_FAILED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_FAILED");
	}
	jint PrintJobInfo::STATE_QUEUED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_QUEUED");
	}
	jint PrintJobInfo::STATE_STARTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_STARTED");
	}
	
	// Constructors
	void PrintJobInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.print.PrintJobInfo",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject PrintJobInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject PrintJobInfo::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Landroid/print/PrintJobId;");
	}
	jint PrintJobInfo::getState()
	{
		return __thiz.callMethod<jint>(
			"getState",
			"()I");
	}
	QAndroidJniObject PrintJobInfo::getAttributes()
	{
		return __thiz.callObjectMethod(
			"getAttributes",
			"()Landroid/print/PrintAttributes;");
	}
	jlong PrintJobInfo::getCreationTime()
	{
		return __thiz.callMethod<jlong>(
			"getCreationTime",
			"()J");
	}
	QAndroidJniObject PrintJobInfo::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject PrintJobInfo::getAdvancedStringOption(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAdvancedStringOption",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	jboolean PrintJobInfo::hasAdvancedOption(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasAdvancedOption",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	jint PrintJobInfo::getAdvancedIntOption(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getAdvancedIntOption",
			"(Ljava/lang/String;)I",
			arg0);
	}
	QAndroidJniObject PrintJobInfo::getPrinterId()
	{
		return __thiz.callObjectMethod(
			"getPrinterId",
			"()Landroid/print/PrinterId;");
	}
	jint PrintJobInfo::getCopies()
	{
		return __thiz.callMethod<jint>(
			"getCopies",
			"()I");
	}
	jint PrintJobInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void PrintJobInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject PrintJobInfo::getPages()
	{
		return __thiz.callObjectMethod(
			"getPages",
			"()[Landroid/print/PageRange;");
	}
} // namespace __jni_impl::android::print

namespace android::print
{
	class PrintJobInfo : public __jni_impl::android::print::PrintJobInfo
	{
	public:
		PrintJobInfo(QAndroidJniObject obj) { __thiz = obj; }
		PrintJobInfo()
		{
			__constructor();
		}
	};
} // namespace android::print

#endif // ANDROID_PRINT_PRINTJOBINFO

