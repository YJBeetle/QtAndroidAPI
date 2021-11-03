#include "../os/Parcel.hpp"
#include "./PrintAttributes_Margins.hpp"
#include "./PrintAttributes_MediaSize.hpp"
#include "./PrintAttributes_Resolution.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PrintAttributes.hpp"

namespace android::print
{
	// Fields
	jint PrintAttributes::COLOR_MODE_COLOR()
	{
		return getStaticField<jint>(
			"android.print.PrintAttributes",
			"COLOR_MODE_COLOR"
		);
	}
	jint PrintAttributes::COLOR_MODE_MONOCHROME()
	{
		return getStaticField<jint>(
			"android.print.PrintAttributes",
			"COLOR_MODE_MONOCHROME"
		);
	}
	JObject PrintAttributes::CREATOR()
	{
		return getStaticObjectField(
			"android.print.PrintAttributes",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PrintAttributes::DUPLEX_MODE_LONG_EDGE()
	{
		return getStaticField<jint>(
			"android.print.PrintAttributes",
			"DUPLEX_MODE_LONG_EDGE"
		);
	}
	jint PrintAttributes::DUPLEX_MODE_NONE()
	{
		return getStaticField<jint>(
			"android.print.PrintAttributes",
			"DUPLEX_MODE_NONE"
		);
	}
	jint PrintAttributes::DUPLEX_MODE_SHORT_EDGE()
	{
		return getStaticField<jint>(
			"android.print.PrintAttributes",
			"DUPLEX_MODE_SHORT_EDGE"
		);
	}
	
	// QAndroidJniObject forward
	PrintAttributes::PrintAttributes(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint PrintAttributes::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PrintAttributes::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint PrintAttributes::getColorMode()
	{
		return callMethod<jint>(
			"getColorMode",
			"()I"
		);
	}
	jint PrintAttributes::getDuplexMode()
	{
		return callMethod<jint>(
			"getDuplexMode",
			"()I"
		);
	}
	android::print::PrintAttributes_MediaSize PrintAttributes::getMediaSize()
	{
		return callObjectMethod(
			"getMediaSize",
			"()Landroid/print/PrintAttributes$MediaSize;"
		);
	}
	android::print::PrintAttributes_Margins PrintAttributes::getMinMargins()
	{
		return callObjectMethod(
			"getMinMargins",
			"()Landroid/print/PrintAttributes$Margins;"
		);
	}
	android::print::PrintAttributes_Resolution PrintAttributes::getResolution()
	{
		return callObjectMethod(
			"getResolution",
			"()Landroid/print/PrintAttributes$Resolution;"
		);
	}
	jint PrintAttributes::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString PrintAttributes::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void PrintAttributes::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::print

