#pragma once

#include "../../JString.hpp"
#include "./View_MeasureSpec.def.hpp"

namespace android::view
{
	// Fields
	inline jint View_MeasureSpec::AT_MOST()
	{
		return getStaticField<jint>(
			"android.view.View$MeasureSpec",
			"AT_MOST"
		);
	}
	inline jint View_MeasureSpec::EXACTLY()
	{
		return getStaticField<jint>(
			"android.view.View$MeasureSpec",
			"EXACTLY"
		);
	}
	inline jint View_MeasureSpec::UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.view.View$MeasureSpec",
			"UNSPECIFIED"
		);
	}
	
	// Constructors
	inline View_MeasureSpec::View_MeasureSpec()
		: JObject(
			"android.view.View$MeasureSpec",
			"()V"
		) {}
	
	// Methods
	inline jint View_MeasureSpec::getMode(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.view.View$MeasureSpec",
			"getMode",
			"(I)I",
			arg0
		);
	}
	inline jint View_MeasureSpec::getSize(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.view.View$MeasureSpec",
			"getSize",
			"(I)I",
			arg0
		);
	}
	inline jint View_MeasureSpec::makeMeasureSpec(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.view.View$MeasureSpec",
			"makeMeasureSpec",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline JString View_MeasureSpec::toString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.view.View$MeasureSpec",
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
