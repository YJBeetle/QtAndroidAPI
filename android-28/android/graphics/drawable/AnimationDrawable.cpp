#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "./Drawable.hpp"
#include "./DrawableContainer_DrawableContainerState.hpp"
#include "./AnimationDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// QAndroidJniObject forward
	AnimationDrawable::AnimationDrawable(QAndroidJniObject obj) : android::graphics::drawable::DrawableContainer(obj) {}
	
	// Constructors
	AnimationDrawable::AnimationDrawable()
		: android::graphics::drawable::DrawableContainer(
			"android.graphics.drawable.AnimationDrawable",
			"()V"
		) {}
	
	// Methods
	void AnimationDrawable::addFrame(android::graphics::drawable::Drawable arg0, jint arg1)
	{
		callMethod<void>(
			"addFrame",
			"(Landroid/graphics/drawable/Drawable;I)V",
			arg0.object(),
			arg1
		);
	}
	jint AnimationDrawable::getDuration(jint arg0)
	{
		return callMethod<jint>(
			"getDuration",
			"(I)I",
			arg0
		);
	}
	android::graphics::drawable::Drawable AnimationDrawable::getFrame(jint arg0)
	{
		return callObjectMethod(
			"getFrame",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	jint AnimationDrawable::getNumberOfFrames()
	{
		return callMethod<jint>(
			"getNumberOfFrames",
			"()I"
		);
	}
	void AnimationDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3)
	{
		callMethod<void>(
			"inflate",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;Landroid/content/res/Resources$Theme;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	jboolean AnimationDrawable::isOneShot()
	{
		return callMethod<jboolean>(
			"isOneShot",
			"()Z"
		);
	}
	jboolean AnimationDrawable::isRunning()
	{
		return callMethod<jboolean>(
			"isRunning",
			"()Z"
		);
	}
	android::graphics::drawable::Drawable AnimationDrawable::mutate()
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void AnimationDrawable::run()
	{
		callMethod<void>(
			"run",
			"()V"
		);
	}
	void AnimationDrawable::setOneShot(jboolean arg0)
	{
		callMethod<void>(
			"setOneShot",
			"(Z)V",
			arg0
		);
	}
	jboolean AnimationDrawable::setVisible(jboolean arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	void AnimationDrawable::start()
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	void AnimationDrawable::stop()
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
	void AnimationDrawable::unscheduleSelf(JObject arg0)
	{
		callMethod<void>(
			"unscheduleSelf",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
} // namespace android::graphics::drawable

