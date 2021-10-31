#include "./Effect.hpp"

namespace android::media::effect
{
	// Fields
	
	Effect::Effect(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Effect::Effect()
	{
		__thiz = QAndroidJniObject(
			"android.media.effect.Effect",
			"()V"
		);
	}
	
	// Methods
	void Effect::apply(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"apply",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jstring Effect::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Effect::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void Effect::setParameter(jstring arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setParameter",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void Effect::setUpdateListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setUpdateListener",
			"(Landroid/media/effect/EffectUpdateListener;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::media::effect

