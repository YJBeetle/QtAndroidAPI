#include "../view/View.hpp"
#include "./Magnifier.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	Magnifier::Magnifier(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Magnifier::Magnifier(android::view::View arg0)
		: JObject(
			"android.widget.Magnifier",
			"(Landroid/view/View;)V",
			arg0.object()
		) {}
	
	// Methods
	void Magnifier::dismiss() const
	{
		callMethod<void>(
			"dismiss",
			"()V"
		);
	}
	jint Magnifier::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint Magnifier::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jfloat Magnifier::getZoom() const
	{
		return callMethod<jfloat>(
			"getZoom",
			"()F"
		);
	}
	void Magnifier::show(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"show",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Magnifier::update() const
	{
		callMethod<void>(
			"update",
			"()V"
		);
	}
} // namespace android::widget

