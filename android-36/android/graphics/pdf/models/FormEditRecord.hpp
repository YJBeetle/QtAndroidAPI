#pragma once

#include "../../../../JIntArray.hpp"
#include "../../Point.def.hpp"
#include "../../../os/Parcel.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./FormEditRecord.def.hpp"

namespace android::graphics::pdf::models
{
	// Fields
	inline JObject FormEditRecord::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.pdf.models.FormEditRecord",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint FormEditRecord::EDIT_TYPE_CLICK()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.models.FormEditRecord",
			"EDIT_TYPE_CLICK"
		);
	}
	inline jint FormEditRecord::EDIT_TYPE_SET_INDICES()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.models.FormEditRecord",
			"EDIT_TYPE_SET_INDICES"
		);
	}
	inline jint FormEditRecord::EDIT_TYPE_SET_TEXT()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.models.FormEditRecord",
			"EDIT_TYPE_SET_TEXT"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint FormEditRecord::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean FormEditRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::graphics::Point FormEditRecord::getClickPoint() const
	{
		return callObjectMethod(
			"getClickPoint",
			"()Landroid/graphics/Point;"
		);
	}
	inline jint FormEditRecord::getPageNumber() const
	{
		return callMethod<jint>(
			"getPageNumber",
			"()I"
		);
	}
	inline JIntArray FormEditRecord::getSelectedIndices() const
	{
		return callObjectMethod(
			"getSelectedIndices",
			"()[I"
		);
	}
	inline JString FormEditRecord::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/String;"
		);
	}
	inline jint FormEditRecord::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline jint FormEditRecord::getWidgetIndex() const
	{
		return callMethod<jint>(
			"getWidgetIndex",
			"()I"
		);
	}
	inline jint FormEditRecord::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void FormEditRecord::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::graphics::pdf::models

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::pdf::models;
#endif
