#include "../../os/CancellationSignal.hpp"
#include "./TranslationRequest.hpp"
#include "./Translator.hpp"

namespace android::view::translation
{
	// Fields
	
	// QJniObject forward
	Translator::Translator(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void Translator::destroy()
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	jboolean Translator::isDestroyed()
	{
		return callMethod<jboolean>(
			"isDestroyed",
			"()Z"
		);
	}
	void Translator::translate(android::view::translation::TranslationRequest arg0, android::os::CancellationSignal arg1, __JniBaseClass arg2, __JniBaseClass arg3)
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

