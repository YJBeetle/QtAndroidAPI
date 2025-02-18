#pragma once

#include "../../graphics/Matrix.def.hpp"
#include "../../graphics/RectF.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./EditorBoundsInfo.def.hpp"
#include "./TextAppearanceInfo.def.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./CursorAnchorInfo.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline JObject CursorAnchorInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.CursorAnchorInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint CursorAnchorInfo::FLAG_HAS_INVISIBLE_REGION()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.CursorAnchorInfo",
			"FLAG_HAS_INVISIBLE_REGION"
		);
	}
	inline jint CursorAnchorInfo::FLAG_HAS_VISIBLE_REGION()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.CursorAnchorInfo",
			"FLAG_HAS_VISIBLE_REGION"
		);
	}
	inline jint CursorAnchorInfo::FLAG_IS_RTL()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.CursorAnchorInfo",
			"FLAG_IS_RTL"
		);
	}
	
	// Constructors
	inline CursorAnchorInfo::CursorAnchorInfo(android::os::Parcel arg0)
		: JObject(
			"android.view.inputmethod.CursorAnchorInfo",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint CursorAnchorInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean CursorAnchorInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::graphics::RectF CursorAnchorInfo::getCharacterBounds(jint arg0) const
	{
		return callObjectMethod(
			"getCharacterBounds",
			"(I)Landroid/graphics/RectF;",
			arg0
		);
	}
	inline jint CursorAnchorInfo::getCharacterBoundsFlags(jint arg0) const
	{
		return callMethod<jint>(
			"getCharacterBoundsFlags",
			"(I)I",
			arg0
		);
	}
	inline JString CursorAnchorInfo::getComposingText() const
	{
		return callObjectMethod(
			"getComposingText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint CursorAnchorInfo::getComposingTextStart() const
	{
		return callMethod<jint>(
			"getComposingTextStart",
			"()I"
		);
	}
	inline android::view::inputmethod::EditorBoundsInfo CursorAnchorInfo::getEditorBoundsInfo() const
	{
		return callObjectMethod(
			"getEditorBoundsInfo",
			"()Landroid/view/inputmethod/EditorBoundsInfo;"
		);
	}
	inline jfloat CursorAnchorInfo::getInsertionMarkerBaseline() const
	{
		return callMethod<jfloat>(
			"getInsertionMarkerBaseline",
			"()F"
		);
	}
	inline jfloat CursorAnchorInfo::getInsertionMarkerBottom() const
	{
		return callMethod<jfloat>(
			"getInsertionMarkerBottom",
			"()F"
		);
	}
	inline jint CursorAnchorInfo::getInsertionMarkerFlags() const
	{
		return callMethod<jint>(
			"getInsertionMarkerFlags",
			"()I"
		);
	}
	inline jfloat CursorAnchorInfo::getInsertionMarkerHorizontal() const
	{
		return callMethod<jfloat>(
			"getInsertionMarkerHorizontal",
			"()F"
		);
	}
	inline jfloat CursorAnchorInfo::getInsertionMarkerTop() const
	{
		return callMethod<jfloat>(
			"getInsertionMarkerTop",
			"()F"
		);
	}
	inline android::graphics::Matrix CursorAnchorInfo::getMatrix() const
	{
		return callObjectMethod(
			"getMatrix",
			"()Landroid/graphics/Matrix;"
		);
	}
	inline jint CursorAnchorInfo::getSelectionEnd() const
	{
		return callMethod<jint>(
			"getSelectionEnd",
			"()I"
		);
	}
	inline jint CursorAnchorInfo::getSelectionStart() const
	{
		return callMethod<jint>(
			"getSelectionStart",
			"()I"
		);
	}
	inline android::view::inputmethod::TextAppearanceInfo CursorAnchorInfo::getTextAppearanceInfo() const
	{
		return callObjectMethod(
			"getTextAppearanceInfo",
			"()Landroid/view/inputmethod/TextAppearanceInfo;"
		);
	}
	inline JObject CursorAnchorInfo::getVisibleLineBounds() const
	{
		return callObjectMethod(
			"getVisibleLineBounds",
			"()Ljava/util/List;"
		);
	}
	inline jint CursorAnchorInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString CursorAnchorInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CursorAnchorInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
