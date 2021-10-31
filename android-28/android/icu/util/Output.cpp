#include "./Output.hpp"

namespace android::icu::util
{
	// Fields
	jobject Output::value()
	{
		return getObjectField(
			"value",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	
	// QJniObject forward
	Output::Output(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Output::Output()
		: __JniBaseClass(
			"android.icu.util.Output",
			"()V"
		) {}
	Output::Output(jobject arg0)
		: __JniBaseClass(
			"android.icu.util.Output",
			"(Ljava/lang/Object;)V",
			arg0
		) {}
	
	// Methods
	jstring Output::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::util

