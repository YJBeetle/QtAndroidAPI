#pragma once

#include "../../os/CancellationSignal.def.hpp"
#include "./TranslationRequest.def.hpp"
#include "./Translator.def.hpp"

namespace android::view::translation
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void Translator::destroy() const
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	inline jboolean Translator::isDestroyed() const
	{
		return callMethod<jboolean>(
			"isDestroyed",
			"()Z"
		);
	}
	inline void Translator::translate(android::view::translation::TranslationRequest arg0, android::os::CancellationSignal arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"translate",
			"(Landroid/view/translation/TranslationRequest;Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
} // namespace android::view::translation

// Base class headers

