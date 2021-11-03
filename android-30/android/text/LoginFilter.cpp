#include "./LoginFilter.hpp"

namespace android::text
{
	// Fields
	
	// QAndroidJniObject forward
	LoginFilter::LoginFilter(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jstring LoginFilter::filter(jstring arg0, jint arg1, jint arg2, JObject arg3, jint arg4, jint arg5)
	{
		return callObjectMethod(
			"filter",
			"(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4,
			arg5
		).object<jstring>();
	}
	jboolean LoginFilter::isAllowed(jchar arg0)
	{
		return callMethod<jboolean>(
			"isAllowed",
			"(C)Z",
			arg0
		);
	}
	void LoginFilter::onInvalidCharacter(jchar arg0)
	{
		callMethod<void>(
			"onInvalidCharacter",
			"(C)V",
			arg0
		);
	}
	void LoginFilter::onStart()
	{
		callMethod<void>(
			"onStart",
			"()V"
		);
	}
	void LoginFilter::onStop()
	{
		callMethod<void>(
			"onStop",
			"()V"
		);
	}
} // namespace android::text

