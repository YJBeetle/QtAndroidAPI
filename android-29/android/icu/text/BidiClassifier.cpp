#include "./BidiClassifier.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	BidiClassifier::BidiClassifier(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	BidiClassifier::BidiClassifier(jobject arg0)
		: __JniBaseClass(
			"android.icu.text.BidiClassifier",
			"(Ljava/lang/Object;)V",
			arg0
		) {}
	
	// Methods
	jint BidiClassifier::classify(jint arg0)
	{
		return callMethod<jint>(
			"classify",
			"(I)I",
			arg0
		);
	}
	jobject BidiClassifier::getContext()
	{
		return callObjectMethod(
			"getContext",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void BidiClassifier::setContext(jobject arg0)
	{
		callMethod<void>(
			"setContext",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
} // namespace android::icu::text

