#include "../os/Parcel.hpp"
#include "./PrinterCapabilitiesInfo.hpp"
#include "./PrinterId.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
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
	jboolean PrinterInfo::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::print::PrinterCapabilitiesInfo PrinterInfo::getCapabilities()
	{
		return callObjectMethod(
			"getCapabilities",
			"()Landroid/print/PrinterCapabilitiesInfo;"
		);
	}
	JString PrinterInfo::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	android::print::PrinterId PrinterInfo::getId()
	{
		return callObjectMethod(
			"getId",
			"()Landroid/print/PrinterId;"
		);
	}
	JString PrinterInfo::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
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
	JString PrinterInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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

