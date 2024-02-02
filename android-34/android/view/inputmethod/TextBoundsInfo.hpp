#pragma once

#include "../../../JIntArray.hpp"
#include "../../graphics/Matrix.def.hpp"
#include "../../graphics/RectF.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../text/SegmentFinder.def.hpp"
#include "./TextBoundsInfo.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline JObject TextBoundsInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.TextBoundsInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint TextBoundsInfo::FLAG_CHARACTER_LINEFEED()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.TextBoundsInfo",
			"FLAG_CHARACTER_LINEFEED"
		);
	}
	inline jint TextBoundsInfo::FLAG_CHARACTER_PUNCTUATION()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.TextBoundsInfo",
			"FLAG_CHARACTER_PUNCTUATION"
		);
	}
	inline jint TextBoundsInfo::FLAG_CHARACTER_WHITESPACE()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.TextBoundsInfo",
			"FLAG_CHARACTER_WHITESPACE"
		);
	}
	inline jint TextBoundsInfo::FLAG_LINE_IS_RTL()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.TextBoundsInfo",
			"FLAG_LINE_IS_RTL"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint TextBoundsInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint TextBoundsInfo::getCharacterBidiLevel(jint arg0) const
	{
		return callMethod<jint>(
			"getCharacterBidiLevel",
			"(I)I",
			arg0
		);
	}
	inline void TextBoundsInfo::getCharacterBounds(jint arg0, android::graphics::RectF arg1) const
	{
		callMethod<void>(
			"getCharacterBounds",
			"(ILandroid/graphics/RectF;)V",
			arg0,
			arg1.object()
		);
	}
	inline jint TextBoundsInfo::getCharacterFlags(jint arg0) const
	{
		return callMethod<jint>(
			"getCharacterFlags",
			"(I)I",
			arg0
		);
	}
	inline jint TextBoundsInfo::getEndIndex() const
	{
		return callMethod<jint>(
			"getEndIndex",
			"()I"
		);
	}
	inline android::text::SegmentFinder TextBoundsInfo::getGraphemeSegmentFinder() const
	{
		return callObjectMethod(
			"getGraphemeSegmentFinder",
			"()Landroid/text/SegmentFinder;"
		);
	}
	inline android::text::SegmentFinder TextBoundsInfo::getLineSegmentFinder() const
	{
		return callObjectMethod(
			"getLineSegmentFinder",
			"()Landroid/text/SegmentFinder;"
		);
	}
	inline void TextBoundsInfo::getMatrix(android::graphics::Matrix arg0) const
	{
		callMethod<void>(
			"getMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	inline jint TextBoundsInfo::getOffsetForPosition(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jint>(
			"getOffsetForPosition",
			"(FF)I",
			arg0,
			arg1
		);
	}
	inline JIntArray TextBoundsInfo::getRangeForRect(android::graphics::RectF arg0, android::text::SegmentFinder arg1, JObject arg2) const
	{
		return callObjectMethod(
			"getRangeForRect",
			"(Landroid/graphics/RectF;Landroid/text/SegmentFinder;Landroid/text/Layout$TextInclusionStrategy;)[I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jint TextBoundsInfo::getStartIndex() const
	{
		return callMethod<jint>(
			"getStartIndex",
			"()I"
		);
	}
	inline android::text::SegmentFinder TextBoundsInfo::getWordSegmentFinder() const
	{
		return callObjectMethod(
			"getWordSegmentFinder",
			"()Landroid/text/SegmentFinder;"
		);
	}
	inline void TextBoundsInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
