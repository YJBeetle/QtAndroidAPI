#pragma once

#include "../../Rect.def.hpp"
#include "../../../os/Parcel.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./FormWidgetInfo.def.hpp"

namespace android::graphics::pdf::models
{
	// Fields
	inline JObject FormWidgetInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.pdf.models.FormWidgetInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint FormWidgetInfo::WIDGET_TYPE_CHECKBOX()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.models.FormWidgetInfo",
			"WIDGET_TYPE_CHECKBOX"
		);
	}
	inline jint FormWidgetInfo::WIDGET_TYPE_COMBOBOX()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.models.FormWidgetInfo",
			"WIDGET_TYPE_COMBOBOX"
		);
	}
	inline jint FormWidgetInfo::WIDGET_TYPE_LISTBOX()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.models.FormWidgetInfo",
			"WIDGET_TYPE_LISTBOX"
		);
	}
	inline jint FormWidgetInfo::WIDGET_TYPE_PUSHBUTTON()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.models.FormWidgetInfo",
			"WIDGET_TYPE_PUSHBUTTON"
		);
	}
	inline jint FormWidgetInfo::WIDGET_TYPE_RADIOBUTTON()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.models.FormWidgetInfo",
			"WIDGET_TYPE_RADIOBUTTON"
		);
	}
	inline jint FormWidgetInfo::WIDGET_TYPE_SIGNATURE()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.models.FormWidgetInfo",
			"WIDGET_TYPE_SIGNATURE"
		);
	}
	inline jint FormWidgetInfo::WIDGET_TYPE_TEXTFIELD()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.models.FormWidgetInfo",
			"WIDGET_TYPE_TEXTFIELD"
		);
	}
	inline jint FormWidgetInfo::WIDGET_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.graphics.pdf.models.FormWidgetInfo",
			"WIDGET_TYPE_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint FormWidgetInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean FormWidgetInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString FormWidgetInfo::getAccessibilityLabel() const
	{
		return callObjectMethod(
			"getAccessibilityLabel",
			"()Ljava/lang/String;"
		);
	}
	inline jfloat FormWidgetInfo::getFontSize() const
	{
		return callMethod<jfloat>(
			"getFontSize",
			"()F"
		);
	}
	inline JObject FormWidgetInfo::getListItems() const
	{
		return callObjectMethod(
			"getListItems",
			"()Ljava/util/List;"
		);
	}
	inline jint FormWidgetInfo::getMaxLength() const
	{
		return callMethod<jint>(
			"getMaxLength",
			"()I"
		);
	}
	inline JString FormWidgetInfo::getTextValue() const
	{
		return callObjectMethod(
			"getTextValue",
			"()Ljava/lang/String;"
		);
	}
	inline jint FormWidgetInfo::getWidgetIndex() const
	{
		return callMethod<jint>(
			"getWidgetIndex",
			"()I"
		);
	}
	inline android::graphics::Rect FormWidgetInfo::getWidgetRect() const
	{
		return callObjectMethod(
			"getWidgetRect",
			"()Landroid/graphics/Rect;"
		);
	}
	inline jint FormWidgetInfo::getWidgetType() const
	{
		return callMethod<jint>(
			"getWidgetType",
			"()I"
		);
	}
	inline jint FormWidgetInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean FormWidgetInfo::isEditableText() const
	{
		return callMethod<jboolean>(
			"isEditableText",
			"()Z"
		);
	}
	inline jboolean FormWidgetInfo::isMultiLineText() const
	{
		return callMethod<jboolean>(
			"isMultiLineText",
			"()Z"
		);
	}
	inline jboolean FormWidgetInfo::isMultiSelect() const
	{
		return callMethod<jboolean>(
			"isMultiSelect",
			"()Z"
		);
	}
	inline jboolean FormWidgetInfo::isReadOnly() const
	{
		return callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	inline JString FormWidgetInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void FormWidgetInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
