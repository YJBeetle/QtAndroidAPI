#pragma once

#include "../../content/res/Resources.def.hpp"
#include "../../content/res/Resources_Theme.def.hpp"
#include "./Drawable.def.hpp"
#include "./DrawableContainer_DrawableContainerState.def.hpp"
#include "./AnimationDrawable.def.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// Constructors
	inline AnimationDrawable::AnimationDrawable()
		: android::graphics::drawable::DrawableContainer(
			"android.graphics.drawable.AnimationDrawable",
			"()V"
		) {}
	
	// Methods
	inline void AnimationDrawable::addFrame(android::graphics::drawable::Drawable arg0, jint arg1) const
	{
		callMethod<void>(
			"addFrame",
			"(Landroid/graphics/drawable/Drawable;I)V",
			arg0.object(),
			arg1
		);
	}
	inline jint AnimationDrawable::getDuration(jint arg0) const
	{
		return callMethod<jint>(
			"getDuration",
			"(I)I",
			arg0
		);
	}
	inline android::graphics::drawable::Drawable AnimationDrawable::getFrame(jint arg0) const
	{
		return callObjectMethod(
			"getFrame",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	inline jint AnimationDrawable::getNumberOfFrames() const
	{
		return callMethod<jint>(
			"getNumberOfFrames",
			"()I"
		);
	}
	inline void AnimationDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const
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
	inline jboolean AnimationDrawable::isOneShot() const
	{
		return callMethod<jboolean>(
			"isOneShot",
			"()Z"
		);
	}
	inline jboolean AnimationDrawable::isRunning() const
	{
		return callMethod<jboolean>(
			"isRunning",
			"()Z"
		);
	}
	inline android::graphics::drawable::Drawable AnimationDrawable::mutate() const
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline void AnimationDrawable::run() const
	{
		callMethod<void>(
			"run",
			"()V"
		);
	}
	inline void AnimationDrawable::setOneShot(jboolean arg0) const
	{
		callMethod<void>(
			"setOneShot",
			"(Z)V",
			arg0
		);
	}
	inline jboolean AnimationDrawable::setVisible(jboolean arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	inline void AnimationDrawable::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	inline void AnimationDrawable::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
	inline void AnimationDrawable::unscheduleSelf(JObject arg0) const
	{
		callMethod<void>(
			"unscheduleSelf",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
} // namespace android::graphics::drawable

// Base class headers
#include "./Drawable.hpp"
#include "./DrawableContainer.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::drawable;
#endif
