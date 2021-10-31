#include "../os/Parcel.hpp"
#include "./PrintAttributes_Margins.hpp"
#include "./PrintAttributes_MediaSize.hpp"
#include "./PrintAttributes_Resolution.hpp"
#include "./PrintAttributes.hpp"

namespace android::print
{
	// Fields
	jint PrintAttributes::COLOR_MODE_COLOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintAttributes",
			"COLOR_MODE_COLOR"
		);
	}
	jint PrintAttributes::COLOR_MODE_MONOCHROME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintAttributes",
			"COLOR_MODE_MONOCHROME"
		);
	}
	QAndroidJniObject PrintAttributes::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PrintAttributes::DUPLEX_MODE_LONG_EDGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintAttributes",
			"DUPLEX_MODE_LONG_EDGE"
		);
	}
	jint PrintAttributes::DUPLEX_MODE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintAttributes",
			"DUPLEX_MODE_NONE"
		);
	}
	jint PrintAttributes::DUPLEX_MODE_SHORT_EDGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintAttributes",
			"DUPLEX_MODE_SHORT_EDGE"
		);
	}
	
	// QAndroidJniObject forward
	PrintAttributes::PrintAttributes(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint PrintAttributes::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PrintAttributes::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
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
	QAndroidJniObject PrintAttributes::getMediaSize()
	{
		return callObjectMethod(
			"getMediaSize",
			"()Landroid/print/PrintAttributes$MediaSize;"
		);
	}
	QAndroidJniObject PrintAttributes::getMinMargins()
	{
		return callObjectMethod(
			"getMinMargins",
			"()Landroid/print/PrintAttributes$Margins;"
		);
	}
	QAndroidJniObject PrintAttributes::getResolution()
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
	jstring PrintAttributes::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

