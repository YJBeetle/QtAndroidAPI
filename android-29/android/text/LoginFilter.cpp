#include "./LoginFilter.hpp"

namespace android::text
{
	// Fields
	
	LoginFilter::LoginFilter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring LoginFilter::filter(jstring arg0, jint arg1, jint arg2, __JniBaseClass arg3, jint arg4, jint arg5)
	{
		return __thiz.callObjectMethod(
			"filter",
			"(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5
		).object<jstring>();
	}
	jboolean LoginFilter::isAllowed(jchar arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isAllowed",
			"(C)Z",
			arg0
		);
	}
	void LoginFilter::onInvalidCharacter(jchar arg0)
	{
		__thiz.callMethod<void>(
			"onInvalidCharacter",
			"(C)V",
			arg0
		);
	}
	void LoginFilter::onStart()
	{
		__thiz.callMethod<void>(
			"onStart",
			"()V"
		);
	}
	void LoginFilter::onStop()
	{
		__thiz.callMethod<void>(
			"onStop",
			"()V"
		);
	}
} // namespace android::text

