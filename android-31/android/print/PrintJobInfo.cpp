#include "../os/Parcel.hpp"
#include "./PrintAttributes.hpp"
#include "./PrintJobId.hpp"
#include "./PrinterId.hpp"
#include "./PrintJobInfo.hpp"

namespace android::print
{
	// Fields
	__JniBaseClass PrintJobInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.print.PrintJobInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PrintJobInfo::STATE_BLOCKED()
	{
		return getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_BLOCKED"
		);
	}
	jint PrintJobInfo::STATE_CANCELED()
	{
		return getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_CANCELED"
		);
	}
	jint PrintJobInfo::STATE_COMPLETED()
	{
		return getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_COMPLETED"
		);
	}
	jint PrintJobInfo::STATE_CREATED()
	{
		return getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_CREATED"
		);
	}
	jint PrintJobInfo::STATE_FAILED()
	{
		return getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_FAILED"
		);
	}
	jint PrintJobInfo::STATE_QUEUED()
	{
		return getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_QUEUED"
		);
	}
	jint PrintJobInfo::STATE_STARTED()
	{
		return getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_STARTED"
		);
	}
	
	// QAndroidJniObject forward
	PrintJobInfo::PrintJobInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint PrintJobInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint PrintJobInfo::getAdvancedIntOption(jstring arg0)
	{
		return callMethod<jint>(
			"getAdvancedIntOption",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jstring PrintJobInfo::getAdvancedStringOption(jstring arg0)
	{
		return callObjectMethod(
			"getAdvancedStringOption",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	android::print::PrintAttributes PrintJobInfo::getAttributes()
	{
		return callObjectMethod(
			"getAttributes",
			"()Landroid/print/PrintAttributes;"
		);
	}
	jint PrintJobInfo::getCopies()
	{
		return callMethod<jint>(
			"getCopies",
			"()I"
		);
	}
	jlong PrintJobInfo::getCreationTime()
	{
		return callMethod<jlong>(
			"getCreationTime",
			"()J"
		);
	}
	android::print::PrintJobId PrintJobInfo::getId()
	{
		return callObjectMethod(
			"getId",
			"()Landroid/print/PrintJobId;"
		);
	}
	jstring PrintJobInfo::getLabel()
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray PrintJobInfo::getPages()
	{
		return callObjectMethod(
			"getPages",
			"()[Landroid/print/PageRange;"
		).object<jarray>();
	}
	android::print::PrinterId PrintJobInfo::getPrinterId()
	{
		return callObjectMethod(
			"getPrinterId",
			"()Landroid/print/PrinterId;"
		);
	}
	jint PrintJobInfo::getState()
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jboolean PrintJobInfo::hasAdvancedOption(jstring arg0)
	{
		return callMethod<jboolean>(
			"hasAdvancedOption",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jstring PrintJobInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PrintJobInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::print

