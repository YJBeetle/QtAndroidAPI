#include "../../graphics/Matrix.hpp"
#include "../../graphics/RectF.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./CursorAnchorInfo.hpp"

namespace android::view::inputmethod
{
	// Fields
	JObject CursorAnchorInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.CursorAnchorInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint CursorAnchorInfo::FLAG_HAS_INVISIBLE_REGION()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.CursorAnchorInfo",
			"FLAG_HAS_INVISIBLE_REGION"
		);
	}
	jint CursorAnchorInfo::FLAG_HAS_VISIBLE_REGION()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.CursorAnchorInfo",
			"FLAG_HAS_VISIBLE_REGION"
		);
	}
	jint CursorAnchorInfo::FLAG_IS_RTL()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.CursorAnchorInfo",
			"FLAG_IS_RTL"
		);
	}
	
	// QAndroidJniObject forward
	CursorAnchorInfo::CursorAnchorInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	CursorAnchorInfo::CursorAnchorInfo(android::os::Parcel arg0)
		: JObject(
			"android.view.inputmethod.CursorAnchorInfo",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	jint CursorAnchorInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CursorAnchorInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::graphics::RectF CursorAnchorInfo::getCharacterBounds(jint arg0) const
	{
		return callObjectMethod(
			"getCharacterBounds",
			"(I)Landroid/graphics/RectF;",
			arg0
		);
	}
	jint CursorAnchorInfo::getCharacterBoundsFlags(jint arg0) const
	{
		return callMethod<jint>(
			"getCharacterBoundsFlags",
			"(I)I",
			arg0
		);
	}
	JString CursorAnchorInfo::getComposingText() const
	{
		return callObjectMethod(
			"getComposingText",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint CursorAnchorInfo::getComposingTextStart() const
	{
		return callMethod<jint>(
			"getComposingTextStart",
			"()I"
		);
	}
	jfloat CursorAnchorInfo::getInsertionMarkerBaseline() const
	{
		return callMethod<jfloat>(
			"getInsertionMarkerBaseline",
			"()F"
		);
	}
	jfloat CursorAnchorInfo::getInsertionMarkerBottom() const
	{
		return callMethod<jfloat>(
			"getInsertionMarkerBottom",
			"()F"
		);
	}
	jint CursorAnchorInfo::getInsertionMarkerFlags() const
	{
		return callMethod<jint>(
			"getInsertionMarkerFlags",
			"()I"
		);
	}
	jfloat CursorAnchorInfo::getInsertionMarkerHorizontal() const
	{
		return callMethod<jfloat>(
			"getInsertionMarkerHorizontal",
			"()F"
		);
	}
	jfloat CursorAnchorInfo::getInsertionMarkerTop() const
	{
		return callMethod<jfloat>(
			"getInsertionMarkerTop",
			"()F"
		);
	}
	android::graphics::Matrix CursorAnchorInfo::getMatrix() const
	{
		return callObjectMethod(
			"getMatrix",
			"()Landroid/graphics/Matrix;"
		);
	}
	jint CursorAnchorInfo::getSelectionEnd() const
	{
		return callMethod<jint>(
			"getSelectionEnd",
			"()I"
		);
	}
	jint CursorAnchorInfo::getSelectionStart() const
	{
		return callMethod<jint>(
			"getSelectionStart",
			"()I"
		);
	}
	jint CursorAnchorInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CursorAnchorInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CursorAnchorInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

