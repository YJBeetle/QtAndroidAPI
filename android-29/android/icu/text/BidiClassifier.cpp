#include "./BidiClassifier.hpp"

namespace android::icu::text
{
	// Fields
	
	BidiClassifier::BidiClassifier(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BidiClassifier::BidiClassifier(jobject &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.BidiClassifier",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	
	// Methods
	jint BidiClassifier::classify(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"classify",
			"(I)I",
			arg0
		);
	}
	jobject BidiClassifier::getContext()
	{
		return __thiz.callObjectMethod(
			"getContext",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void BidiClassifier::setContext(jobject arg0)
	{
		__thiz.callMethod<void>(
			"setContext",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
} // namespace android::icu::text

