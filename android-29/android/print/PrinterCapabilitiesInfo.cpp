#include "../os/Parcel.hpp"
#include "./PrintAttributes.hpp"
#include "./PrintAttributes_Margins.hpp"
#include "./PrinterCapabilitiesInfo.hpp"

namespace android::print
{
	// Fields
	QAndroidJniObject PrinterCapabilitiesInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrinterCapabilitiesInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	PrinterCapabilitiesInfo::PrinterCapabilitiesInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint PrinterCapabilitiesInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PrinterCapabilitiesInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PrinterCapabilitiesInfo::getColorModes()
	{
		return __thiz.callMethod<jint>(
			"getColorModes",
			"()I"
		);
	}
	QAndroidJniObject PrinterCapabilitiesInfo::getDefaults()
	{
		return __thiz.callObjectMethod(
			"getDefaults",
			"()Landroid/print/PrintAttributes;"
		);
	}
	jint PrinterCapabilitiesInfo::getDuplexModes()
	{
		return __thiz.callMethod<jint>(
			"getDuplexModes",
			"()I"
		);
	}
	QAndroidJniObject PrinterCapabilitiesInfo::getMediaSizes()
	{
		return __thiz.callObjectMethod(
			"getMediaSizes",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject PrinterCapabilitiesInfo::getMinMargins()
	{
		return __thiz.callObjectMethod(
			"getMinMargins",
			"()Landroid/print/PrintAttributes$Margins;"
		);
	}
	QAndroidJniObject PrinterCapabilitiesInfo::getResolutions()
	{
		return __thiz.callObjectMethod(
			"getResolutions",
			"()Ljava/util/List;"
		);
	}
	jint PrinterCapabilitiesInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PrinterCapabilitiesInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PrinterCapabilitiesInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::print

