#include "../os/Parcel.hpp"
#include "./PrintAttributes.hpp"
#include "./PrintJobId.hpp"
#include "./PrinterId.hpp"
#include "./PrintJobInfo.hpp"

namespace android::print
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
	
	PrintJobInfo::PrintJobInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
	jstring PrintJobInfo::getAdvancedStringOption(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAdvancedStringOption",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
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
	jstring PrintJobInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PrintJobInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::print

