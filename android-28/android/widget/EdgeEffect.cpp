#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "./EdgeEffect.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	EdgeEffect::EdgeEffect(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	EdgeEffect::EdgeEffect(android::content::Context arg0)
		: JObject(
			"android.widget.EdgeEffect",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean EdgeEffect::draw(android::graphics::Canvas arg0) const
	{
		return callMethod<jboolean>(
			"draw",
			"(Landroid/graphics/Canvas;)Z",
			arg0.object()
		);
	}
	void EdgeEffect::finish() const
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	jint EdgeEffect::getColor() const
	{
		return callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	jint EdgeEffect::getMaxHeight() const
	{
		return callMethod<jint>(
			"getMaxHeight",
			"()I"
		);
	}
	jboolean EdgeEffect::isFinished() const
	{
		return callMethod<jboolean>(
			"isFinished",
			"()Z"
		);
	}
	void EdgeEffect::onAbsorb(jint arg0) const
	{
		callMethod<void>(
			"onAbsorb",
			"(I)V",
			arg0
		);
	}
	void EdgeEffect::onPull(jfloat arg0) const
	{
		callMethod<void>(
			"onPull",
			"(F)V",
			arg0
		);
	}
	void EdgeEffect::onPull(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"onPull",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void EdgeEffect::onRelease() const
	{
		callMethod<void>(
			"onRelease",
			"()V"
		);
	}
	void EdgeEffect::setColor(jint arg0) const
	{
		callMethod<void>(
			"setColor",
			"(I)V",
			arg0
		);
	}
	void EdgeEffect::setSize(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setSize",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::widget

