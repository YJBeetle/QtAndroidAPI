#pragma once

#ifndef ANDROID_PRINT_PRINTJOBINFO
#define ANDROID_PRINT_PRINTJOBINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::print
{
	class PrintAttributes;
}
namespace __jni_impl::android::print
{
	class PrintJobId;
}
namespace __jni_impl::android::print
{
	class PrinterId;
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
		jint describeContents();
		jint getAdvancedIntOption(jstring arg0);
		jint getAdvancedIntOption(const QString &arg0);
		jstring getAdvancedStringOption(jstring arg0);
		jstring getAdvancedStringOption(const QString &arg0);
		QAndroidJniObject getAttributes();
		jint getCopies();
		jlong getCreationTime();
		QAndroidJniObject getId();
		jstring getLabel();
		jarray getPages();
		QAndroidJniObject getPrinterId();
		jint getState();
		jboolean hasAdvancedOption(jstring arg0);
		jboolean hasAdvancedOption(const QString &arg0);
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::print

#include "../os/Parcel.hpp"
#include "PrintAttributes.hpp"
#include "PrintJobId.hpp"
#include "PrinterId.hpp"

namespace __jni_impl::android::print
{
	// Fields
	QAndroidJniObject PrintJobInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintJobInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PrintJobInfo::STATE_BLOCKED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_BLOCKED"
		);
	}
	jint PrintJobInfo::STATE_CANCELED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_CANCELED"
		);
	}
	jint PrintJobInfo::STATE_COMPLETED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_COMPLETED"
		);
	}
	jint PrintJobInfo::STATE_CREATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_CREATED"
		);
	}
	jint PrintJobInfo::STATE_FAILED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_FAILED"
		);
	}
	jint PrintJobInfo::STATE_QUEUED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_QUEUED"
		);
	}
	jint PrintJobInfo::STATE_STARTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_STARTED"
		);
	}
	
	// Constructors
	void PrintJobInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.print.PrintJobInfo",
			"(V)V");
	}
	
	// Methods
	jint PrintJobInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint PrintJobInfo::getAdvancedIntOption(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getAdvancedIntOption",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint PrintJobInfo::getAdvancedIntOption(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"getAdvancedIntOption",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring PrintJobInfo::getAdvancedStringOption(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAdvancedStringOption",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring PrintJobInfo::getAdvancedStringOption(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getAdvancedStringOption",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject PrintJobInfo::getAttributes()
	{
		return __thiz.callObjectMethod(
			"getAttributes",
			"()Landroid/print/PrintAttributes;"
		);
	}
	jint PrintJobInfo::getCopies()
	{
		return __thiz.callMethod<jint>(
			"getCopies",
			"()I"
		);
	}
	jlong PrintJobInfo::getCreationTime()
	{
		return __thiz.callMethod<jlong>(
			"getCreationTime",
			"()J"
		);
	}
	QAndroidJniObject PrintJobInfo::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Landroid/print/PrintJobId;"
		);
	}
	jstring PrintJobInfo::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray PrintJobInfo::getPages()
	{
		return __thiz.callObjectMethod(
			"getPages",
			"()[Landroid/print/PageRange;"
		).object<jarray>();
	}
	QAndroidJniObject PrintJobInfo::getPrinterId()
	{
		return __thiz.callObjectMethod(
			"getPrinterId",
			"()Landroid/print/PrinterId;"
		);
	}
	jint PrintJobInfo::getState()
	{
		return __thiz.callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jboolean PrintJobInfo::hasAdvancedOption(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasAdvancedOption",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean PrintJobInfo::hasAdvancedOption(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasAdvancedOption",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring PrintJobInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PrintJobInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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

