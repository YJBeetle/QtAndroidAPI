#include "../../graphics/Matrix.hpp"
#include "../../graphics/RectF.hpp"
#include "../../os/Parcel.hpp"
#include "./CursorAnchorInfo.hpp"

namespace android::view::inputmethod
{
	// Fields
	QAndroidJniObject CursorAnchorInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.inputmethod.CursorAnchorInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint CursorAnchorInfo::FLAG_HAS_INVISIBLE_REGION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.CursorAnchorInfo",
			"FLAG_HAS_INVISIBLE_REGION"
		);
	}
	jint CursorAnchorInfo::FLAG_HAS_VISIBLE_REGION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.CursorAnchorInfo",
			"FLAG_HAS_VISIBLE_REGION"
		);
	}
	jint CursorAnchorInfo::FLAG_IS_RTL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.CursorAnchorInfo",
			"FLAG_IS_RTL"
		);
	}
	
	// QAndroidJniObject forward
	CursorAnchorInfo::CursorAnchorInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CursorAnchorInfo::CursorAnchorInfo(android::os::Parcel arg0)
		: __JniBaseClass(
			"android.view.inputmethod.CursorAnchorInfo",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	jint CursorAnchorInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CursorAnchorInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject CursorAnchorInfo::getCharacterBounds(jint arg0)
	{
		return callObjectMethod(
			"getCharacterBounds",
			"(I)Landroid/graphics/RectF;",
			arg0
		);
	}
	jint CursorAnchorInfo::getCharacterBoundsFlags(jint arg0)
	{
		return callMethod<jint>(
			"getCharacterBoundsFlags",
			"(I)I",
			arg0
		);
	}
	jstring CursorAnchorInfo::getComposingText()
	{
		return callObjectMethod(
			"getComposingText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint CursorAnchorInfo::getComposingTextStart()
	{
		return callMethod<jint>(
			"getComposingTextStart",
			"()I"
		);
	}
	jfloat CursorAnchorInfo::getInsertionMarkerBaseline()
	{
		return callMethod<jfloat>(
			"getInsertionMarkerBaseline",
			"()F"
		);
	}
	jfloat CursorAnchorInfo::getInsertionMarkerBottom()
	{
		return callMethod<jfloat>(
			"getInsertionMarkerBottom",
			"()F"
		);
	}
	jint CursorAnchorInfo::getInsertionMarkerFlags()
	{
		return callMethod<jint>(
			"getInsertionMarkerFlags",
			"()I"
		);
	}
	jfloat CursorAnchorInfo::getInsertionMarkerHorizontal()
	{
		return callMethod<jfloat>(
			"getInsertionMarkerHorizontal",
			"()F"
		);
	}
	jfloat CursorAnchorInfo::getInsertionMarkerTop()
	{
		return callMethod<jfloat>(
			"getInsertionMarkerTop",
			"()F"
		);
	}
	QAndroidJniObject CursorAnchorInfo::getMatrix()
	{
		return callObjectMethod(
			"getMatrix",
			"()Landroid/graphics/Matrix;"
		);
	}
	jint CursorAnchorInfo::getSelectionEnd()
	{
		return callMethod<jint>(
			"getSelectionEnd",
			"()I"
		);
	}
	jint CursorAnchorInfo::getSelectionStart()
	{
		return callMethod<jint>(
			"getSelectionStart",
			"()I"
		);
	}
	jint CursorAnchorInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CursorAnchorInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CursorAnchorInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

