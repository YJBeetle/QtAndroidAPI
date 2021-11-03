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
	
	// QJniObject forward
	PrintAttributes::PrintAttributes(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint PrintAttributes::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PrintAttributes::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint PrintAttributes::getColorMode() const
	{
		return callMethod<jint>(
			"getColorMode",
			"()I"
		);
	}
	jint PrintAttributes::getDuplexMode() const
	{
		return callMethod<jint>(
			"getDuplexMode",
			"()I"
		);
	}
	android::print::PrintAttributes_MediaSize PrintAttributes::getMediaSize() const
	{
		return callObjectMethod(
			"getMediaSize",
			"()Landroid/print/PrintAttributes$MediaSize;"
		);
	}
	android::print::PrintAttributes_Margins PrintAttributes::getMinMargins() const
	{
		return callObjectMethod(
			"getMinMargins",
			"()Landroid/print/PrintAttributes$Margins;"
		);
	}
	android::print::PrintAttributes_Resolution PrintAttributes::getResolution() const
	{
		return callObjectMethod(
			"getResolution",
			"()Landroid/print/PrintAttributes$Resolution;"
		);
	}
	jint PrintAttributes::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString PrintAttributes::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void PrintAttributes::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::print

