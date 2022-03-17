#pragma once

#include "../../JArray.hpp"
#include "../os/Parcel.def.hpp"
#include "./PrintAttributes.def.hpp"
#include "./PrintJobId.def.hpp"
#include "./PrinterId.def.hpp"
#include "../../JString.hpp"
#include "./PrintJobInfo.def.hpp"

namespace android::print
{
	// Fields
	inline JObject PrintJobInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.print.PrintJobInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint PrintJobInfo::STATE_BLOCKED()
	{
		return getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_BLOCKED"
		);
	}
	inline jint PrintJobInfo::STATE_CANCELED()
	{
		return getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_CANCELED"
		);
	}
	inline jint PrintJobInfo::STATE_COMPLETED()
	{
		return getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_COMPLETED"
		);
	}
	inline jint PrintJobInfo::STATE_CREATED()
	{
		return getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_CREATED"
		);
	}
	inline jint PrintJobInfo::STATE_FAILED()
	{
		return getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_FAILED"
		);
	}
	inline jint PrintJobInfo::STATE_QUEUED()
	{
		return getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_QUEUED"
		);
	}
	inline jint PrintJobInfo::STATE_STARTED()
	{
		return getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_STARTED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PrintJobInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint PrintJobInfo::getAdvancedIntOption(JString arg0) const
	{
		return callMethod<jint>(
			"getAdvancedIntOption",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline JString PrintJobInfo::getAdvancedStringOption(JString arg0) const
	{
		return callObjectMethod(
			"getAdvancedStringOption",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline android::print::PrintAttributes PrintJobInfo::getAttributes() const
	{
		return callObjectMethod(
			"getAttributes",
			"()Landroid/print/PrintAttributes;"
		);
	}
	inline jint PrintJobInfo::getCopies() const
	{
		return callMethod<jint>(
			"getCopies",
			"()I"
		);
	}
	inline jlong PrintJobInfo::getCreationTime() const
	{
		return callMethod<jlong>(
			"getCreationTime",
			"()J"
		);
	}
	inline android::print::PrintJobId PrintJobInfo::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Landroid/print/PrintJobId;"
		);
	}
	inline JString PrintJobInfo::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/String;"
		);
	}
	inline JArray PrintJobInfo::getPages() const
	{
		return callObjectMethod(
			"getPages",
			"()[Landroid/print/PageRange;"
		);
	}
	inline android::print::PrinterId PrintJobInfo::getPrinterId() const
	{
		return callObjectMethod(
			"getPrinterId",
			"()Landroid/print/PrinterId;"
		);
	}
	inline jint PrintJobInfo::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	inline jboolean PrintJobInfo::hasAdvancedOption(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasAdvancedOption",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline JString PrintJobInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PrintJobInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

