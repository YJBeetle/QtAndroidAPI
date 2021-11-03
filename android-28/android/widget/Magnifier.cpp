#include "../view/View.hpp"
#include "./Magnifier.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	Magnifier::Magnifier(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Magnifier::Magnifier(android::view::View arg0)
		: JObject(
			"android.widget.Magnifier",
			"(Landroid/view/View;)V",
			arg0.object()
		) {}
	
	// Methods
	void Magnifier::dismiss()
	{
		callMethod<void>(
			"dismiss",
			"()V"
		);
	}
	jint Magnifier::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint Magnifier::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jfloat Magnifier::getZoom()
	{
		return callMethod<jfloat>(
			"getZoom",
			"()F"
		);
	}
	void Magnifier::show(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"show",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Magnifier::update()
	{
		callMethod<void>(
			"update",
			"()V"
		);
	}
} // namespace android::widget

