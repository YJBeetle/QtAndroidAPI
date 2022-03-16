#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "./LayoutInflater.hpp"
#include "./View.hpp"
#include "./ViewStub.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	ViewStub::ViewStub(android::content::Context arg0)
		: android::view::View(
			"android.view.ViewStub",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	ViewStub::ViewStub(android::content::Context arg0, JObject arg1)
		: android::view::View(
			"android.view.ViewStub",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	ViewStub::ViewStub(android::content::Context arg0, jint arg1)
		: android::view::View(
			"android.view.ViewStub",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	ViewStub::ViewStub(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::View(
			"android.view.ViewStub",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	ViewStub::ViewStub(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::View(
			"android.view.ViewStub",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void ViewStub::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jint ViewStub::getInflatedId() const
	{
		return callMethod<jint>(
			"getInflatedId",
			"()I"
		);
	}
	android::view::LayoutInflater ViewStub::getLayoutInflater() const
	{
		return callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	jint ViewStub::getLayoutResource() const
	{
		return callMethod<jint>(
			"getLayoutResource",
			"()I"
		);
	}
	android::view::View ViewStub::inflate() const
	{
		return callObjectMethod(
			"inflate",
			"()Landroid/view/View;"
		);
	}
	void ViewStub::setInflatedId(jint arg0) const
	{
		callMethod<void>(
			"setInflatedId",
			"(I)V",
			arg0
		);
	}
	void ViewStub::setLayoutInflater(android::view::LayoutInflater arg0) const
	{
		callMethod<void>(
			"setLayoutInflater",
			"(Landroid/view/LayoutInflater;)V",
			arg0.object()
		);
	}
	void ViewStub::setLayoutResource(jint arg0) const
	{
		callMethod<void>(
			"setLayoutResource",
			"(I)V",
			arg0
		);
	}
	void ViewStub::setOnInflateListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnInflateListener",
			"(Landroid/view/ViewStub$OnInflateListener;)V",
			arg0.object()
		);
	}
	void ViewStub::setVisibility(jint arg0) const
	{
		callMethod<void>(
			"setVisibility",
			"(I)V",
			arg0
		);
	}
} // namespace android::view

