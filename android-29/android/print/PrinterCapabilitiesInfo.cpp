#include "../os/Parcel.hpp"
#include "./PrintAttributes.hpp"
#include "./PrintAttributes_Margins.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PrinterCapabilitiesInfo.hpp"

namespace android::print
{
	// Fields
	JObject PrinterCapabilitiesInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.print.PrinterCapabilitiesInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	PrinterCapabilitiesInfo::PrinterCapabilitiesInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint PrinterCapabilitiesInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PrinterCapabilitiesInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint PrinterCapabilitiesInfo::getColorModes() const
	{
		return callMethod<jint>(
			"getColorModes",
			"()I"
		);
	}
	android::print::PrintAttributes PrinterCapabilitiesInfo::getDefaults() const
	{
		return callObjectMethod(
			"getDefaults",
			"()Landroid/print/PrintAttributes;"
		);
	}
	jint PrinterCapabilitiesInfo::getDuplexModes() const
	{
		return callMethod<jint>(
			"getDuplexModes",
			"()I"
		);
	}
	JObject PrinterCapabilitiesInfo::getMediaSizes() const
	{
		return callObjectMethod(
			"getMediaSizes",
			"()Ljava/util/List;"
		);
	}
	android::print::PrintAttributes_Margins PrinterCapabilitiesInfo::getMinMargins() const
	{
		return callObjectMethod(
			"getMinMargins",
			"()Landroid/print/PrintAttributes$Margins;"
		);
	}
	JObject PrinterCapabilitiesInfo::getResolutions() const
	{
		return callObjectMethod(
			"getResolutions",
			"()Ljava/util/List;"
		);
	}
	jint PrinterCapabilitiesInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString PrinterCapabilitiesInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void PrinterCapabilitiesInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::print

