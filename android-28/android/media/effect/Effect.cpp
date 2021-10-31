#include "./Effect.hpp"

namespace android::media::effect
{
	// Fields
	
	// QJniObject forward
	Effect::Effect(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Effect::Effect()
		: __JniBaseClass(
			"android.media.effect.Effect",
			"()V"
		) {}
	
	// Methods
	void Effect::apply(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
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
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Effect::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void Effect::setParameter(jstring arg0, jobject arg1)
	{
		callMethod<void>(
			"setParameter",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void Effect::setUpdateListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setUpdateListener",
			"(Landroid/media/effect/EffectUpdateListener;)V",
			arg0.object()
		);
	}
} // namespace android::media::effect

