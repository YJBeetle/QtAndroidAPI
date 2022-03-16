#pragma once

#include "../../../JObject.hpp"
#include "./BidiClassifier.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	inline BidiClassifier::BidiClassifier(JObject arg0)
		: JObject(
			"android.icu.text.BidiClassifier",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		) {}
	
	// Methods
	inline jint BidiClassifier::classify(jint arg0) const
	{
		return callMethod<jint>(
			"classify",
			"(I)I",
			arg0
		);
	}
	inline JObject BidiClassifier::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Ljava/lang/Object;"
		);
	}
	inline void BidiClassifier::setContext(JObject arg0) const
	{
		callMethod<void>(
			"setContext",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
} // namespace android::icu::text

// Base class headers

