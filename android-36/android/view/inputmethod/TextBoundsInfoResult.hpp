#pragma once

#include "./TextBoundsInfo.def.hpp"
#include "./TextBoundsInfoResult.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline jint TextBoundsInfoResult::CODE_CANCELLED()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.TextBoundsInfoResult",
			"CODE_CANCELLED"
		);
	}
	inline jint TextBoundsInfoResult::CODE_FAILED()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.TextBoundsInfoResult",
			"CODE_FAILED"
		);
	}
	inline jint TextBoundsInfoResult::CODE_SUCCESS()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.TextBoundsInfoResult",
			"CODE_SUCCESS"
		);
	}
	inline jint TextBoundsInfoResult::CODE_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.TextBoundsInfoResult",
			"CODE_UNSUPPORTED"
		);
	}
	
	// Constructors
	inline TextBoundsInfoResult::TextBoundsInfoResult(jint arg0)
		: JObject(
			"android.view.inputmethod.TextBoundsInfoResult",
			"(I)V",
			arg0
		) {}
	inline TextBoundsInfoResult::TextBoundsInfoResult(jint arg0, android::view::inputmethod::TextBoundsInfo arg1)
		: JObject(
			"android.view.inputmethod.TextBoundsInfoResult",
			"(ILandroid/view/inputmethod/TextBoundsInfo;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	inline jint TextBoundsInfoResult::getResultCode() const
	{
		return callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	inline android::view::inputmethod::TextBoundsInfo TextBoundsInfoResult::getTextBoundsInfo() const
	{
		return callObjectMethod(
			"getTextBoundsInfo",
			"()Landroid/view/inputmethod/TextBoundsInfo;"
		);
	}
} // namespace android::view::inputmethod

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
