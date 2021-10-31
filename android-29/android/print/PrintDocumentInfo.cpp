#include "../os/Parcel.hpp"
#include "./PrintDocumentInfo.hpp"

namespace android::print
{
	// Fields
	jint PrintDocumentInfo::CONTENT_TYPE_DOCUMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintDocumentInfo",
			"CONTENT_TYPE_DOCUMENT"
		);
	}
	jint PrintDocumentInfo::CONTENT_TYPE_PHOTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintDocumentInfo",
			"CONTENT_TYPE_PHOTO"
		);
	}
	jint PrintDocumentInfo::CONTENT_TYPE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintDocumentInfo",
			"CONTENT_TYPE_UNKNOWN"
		);
	}
	QAndroidJniObject PrintDocumentInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintDocumentInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PrintDocumentInfo::PAGE_COUNT_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintDocumentInfo",
			"PAGE_COUNT_UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	PrintDocumentInfo::PrintDocumentInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint PrintDocumentInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PrintDocumentInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PrintDocumentInfo::getContentType()
	{
		return callMethod<jint>(
			"getContentType",
			"()I"
		);
	}
	jlong PrintDocumentInfo::getDataSize()
	{
		return callMethod<jlong>(
			"getDataSize",
			"()J"
		);
	}
	jstring PrintDocumentInfo::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint PrintDocumentInfo::getPageCount()
	{
		return callMethod<jint>(
			"getPageCount",
			"()I"
		);
	}
	jint PrintDocumentInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PrintDocumentInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PrintDocumentInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::print

