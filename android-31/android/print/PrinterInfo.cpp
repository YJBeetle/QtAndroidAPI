#include "../os/Parcel.hpp"
#include "./PrinterCapabilitiesInfo.hpp"
#include "./PrinterId.hpp"
#include "./PrinterInfo.hpp"

namespace android::print
{
	// Fields
	JObject PrinterInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.print.PrinterInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PrinterInfo::STATUS_BUSY()
	{
		return getStaticField<jint>(
			"android.print.PrinterInfo",
			"STATUS_BUSY"
		);
	}
	jint PrinterInfo::STATUS_IDLE()
	{
		return getStaticField<jint>(
			"android.print.PrinterInfo",
			"STATUS_IDLE"
		);
	}
	jint PrinterInfo::STATUS_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.print.PrinterInfo",
			"STATUS_UNAVAILABLE"
		);
	}
	
	// QAndroidJniObject forward
	PrinterInfo::PrinterInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint PrinterInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PrinterInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::print::PrinterCapabilitiesInfo PrinterInfo::getCapabilities()
	{
		return callObjectMethod(
			"getCapabilities",
			"()Landroid/print/PrinterCapabilitiesInfo;"
		);
	}
	jstring PrinterInfo::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::print::PrinterId PrinterInfo::getId()
	{
		return callObjectMethod(
			"getId",
			"()Landroid/print/PrinterId;"
		);
	}
	jstring PrinterInfo::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint PrinterInfo::getStatus()
	{
		return callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	jint PrinterInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PrinterInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PrinterInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::print

