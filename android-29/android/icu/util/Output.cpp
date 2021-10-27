#include "./Output.hpp"

namespace android::icu::util
{
	// Fields
	jobject Output::value()
	{
		return __thiz.getObjectField(
			"value",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	
	Output::Output(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Output::Output()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.Output",
			"()V"
		);
	}
	Output::Output(jobject &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.Output",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	
	// Methods
	jstring Output::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::util

