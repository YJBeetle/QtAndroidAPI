#include "../os/Parcel.hpp"
#include "./PrintAttributes.hpp"
#include "./PrintAttributes_Margins.hpp"
#include "./PrinterCapabilitiesInfo.hpp"

namespace android::print
{
	// Fields
	__JniBaseClass PrinterCapabilitiesInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.print.PrinterCapabilitiesInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	PrinterCapabilitiesInfo::PrinterCapabilitiesInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint PrinterCapabilitiesInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PrinterCapabilitiesInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PrinterCapabilitiesInfo::getColorModes()
	{
		return callMethod<jint>(
			"getColorModes",
			"()I"
		);
	}
	android::print::PrintAttributes PrinterCapabilitiesInfo::getDefaults()
	{
		return callObjectMethod(
			"getDefaults",
			"()Landroid/print/PrintAttributes;"
		);
	}
	jint PrinterCapabilitiesInfo::getDuplexModes()
	{
		return callMethod<jint>(
			"getDuplexModes",
			"()I"
		);
	}
	__JniBaseClass PrinterCapabilitiesInfo::getMediaSizes()
	{
		return callObjectMethod(
			"getMediaSizes",
			"()Ljava/util/List;"
		);
	}
	android::print::PrintAttributes_Margins PrinterCapabilitiesInfo::getMinMargins()
	{
		return callObjectMethod(
			"getMinMargins",
			"()Landroid/print/PrintAttributes$Margins;"
		);
	}
	__JniBaseClass PrinterCapabilitiesInfo::getResolutions()
	{
		return callObjectMethod(
			"getResolutions",
			"()Ljava/util/List;"
		);
	}
	jint PrinterCapabilitiesInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PrinterCapabilitiesInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PrinterCapabilitiesInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::print
