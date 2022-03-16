#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PrintDocumentInfo.hpp"

namespace android::print
{
	// Fields
	jint PrintDocumentInfo::CONTENT_TYPE_DOCUMENT()
	{
		return getStaticField<jint>(
			"android.print.PrintDocumentInfo",
			"CONTENT_TYPE_DOCUMENT"
		);
	}
	jint PrintDocumentInfo::CONTENT_TYPE_PHOTO()
	{
		return getStaticField<jint>(
			"android.print.PrintDocumentInfo",
			"CONTENT_TYPE_PHOTO"
		);
	}
	jint PrintDocumentInfo::CONTENT_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.print.PrintDocumentInfo",
			"CONTENT_TYPE_UNKNOWN"
		);
	}
	JObject PrintDocumentInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.print.PrintDocumentInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PrintDocumentInfo::PAGE_COUNT_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.print.PrintDocumentInfo",
			"PAGE_COUNT_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	jint PrintDocumentInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PrintDocumentInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint PrintDocumentInfo::getContentType() const
	{
		return callMethod<jint>(
			"getContentType",
			"()I"
		);
	}
	jlong PrintDocumentInfo::getDataSize() const
	{
		return callMethod<jlong>(
			"getDataSize",
			"()J"
		);
	}
	JString PrintDocumentInfo::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jint PrintDocumentInfo::getPageCount() const
	{
		return callMethod<jint>(
			"getPageCount",
			"()I"
		);
	}
	jint PrintDocumentInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString PrintDocumentInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void PrintDocumentInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::print

