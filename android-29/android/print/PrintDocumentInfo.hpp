#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PrintDocumentInfo.def.hpp"

namespace android::print
{
	// Fields
	inline jint PrintDocumentInfo::CONTENT_TYPE_DOCUMENT()
	{
		return getStaticField<jint>(
			"android.print.PrintDocumentInfo",
			"CONTENT_TYPE_DOCUMENT"
		);
	}
	inline jint PrintDocumentInfo::CONTENT_TYPE_PHOTO()
	{
		return getStaticField<jint>(
			"android.print.PrintDocumentInfo",
			"CONTENT_TYPE_PHOTO"
		);
	}
	inline jint PrintDocumentInfo::CONTENT_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.print.PrintDocumentInfo",
			"CONTENT_TYPE_UNKNOWN"
		);
	}
	inline JObject PrintDocumentInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.print.PrintDocumentInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint PrintDocumentInfo::PAGE_COUNT_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.print.PrintDocumentInfo",
			"PAGE_COUNT_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PrintDocumentInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PrintDocumentInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint PrintDocumentInfo::getContentType() const
	{
		return callMethod<jint>(
			"getContentType",
			"()I"
		);
	}
	inline jlong PrintDocumentInfo::getDataSize() const
	{
		return callMethod<jlong>(
			"getDataSize",
			"()J"
		);
	}
	inline JString PrintDocumentInfo::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint PrintDocumentInfo::getPageCount() const
	{
		return callMethod<jint>(
			"getPageCount",
			"()I"
		);
	}
	inline jint PrintDocumentInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString PrintDocumentInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PrintDocumentInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::print

// Base class headers

