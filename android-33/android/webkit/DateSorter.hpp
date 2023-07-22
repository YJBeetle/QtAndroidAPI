#pragma once

#include "../content/Context.def.hpp"
#include "../../JString.hpp"
#include "./DateSorter.def.hpp"

namespace android::webkit
{
	// Fields
	inline jint DateSorter::DAY_COUNT()
	{
		return getStaticField<jint>(
			"android.webkit.DateSorter",
			"DAY_COUNT"
		);
	}
	
	// Constructors
	inline DateSorter::DateSorter(android::content::Context arg0)
		: JObject(
			"android.webkit.DateSorter",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jlong DateSorter::getBoundary(jint arg0) const
	{
		return callMethod<jlong>(
			"getBoundary",
			"(I)J",
			arg0
		);
	}
	inline jint DateSorter::getIndex(jlong arg0) const
	{
		return callMethod<jint>(
			"getIndex",
			"(J)I",
			arg0
		);
	}
	inline JString DateSorter::getLabel(jint arg0) const
	{
		return callObjectMethod(
			"getLabel",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
} // namespace android::webkit

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::webkit;
#endif
