#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "./Toast.hpp"

namespace android::widget
{
	// Fields
	jint Toast::LENGTH_LONG()
	{
		return getStaticField<jint>(
			"android.widget.Toast",
			"LENGTH_LONG"
		);
	}
	jint Toast::LENGTH_SHORT()
	{
		return getStaticField<jint>(
			"android.widget.Toast",
			"LENGTH_SHORT"
		);
	}
	
	// QJniObject forward
	Toast::Toast(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Toast::Toast(android::content::Context arg0)
		: __JniBaseClass(
			"android.widget.Toast",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	android::widget::Toast Toast::makeText(android::content::Context arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.widget.Toast",
			"makeText",
			"(Landroid/content/Context;II)Landroid/widget/Toast;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	android::widget::Toast Toast::makeText(android::content::Context arg0, jstring arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.widget.Toast",
			"makeText",
			"(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void Toast::cancel()
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jint Toast::getDuration()
	{
		return callMethod<jint>(
			"getDuration",
			"()I"
		);
	}
	jint Toast::getGravity()
	{
		return callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	jfloat Toast::getHorizontalMargin()
	{
		return callMethod<jfloat>(
			"getHorizontalMargin",
			"()F"
		);
	}
	jfloat Toast::getVerticalMargin()
	{
		return callMethod<jfloat>(
			"getVerticalMargin",
			"()F"
		);
	}
	android::view::View Toast::getView()
	{
		return callObjectMethod(
			"getView",
			"()Landroid/view/View;"
		);
	}
	jint Toast::getXOffset()
	{
		return callMethod<jint>(
			"getXOffset",
			"()I"
		);
	}
	jint Toast::getYOffset()
	{
		return callMethod<jint>(
			"getYOffset",
			"()I"
		);
	}
	void Toast::setDuration(jint arg0)
	{
		callMethod<void>(
			"setDuration",
			"(I)V",
			arg0
		);
	}
	void Toast::setGravity(jint arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"setGravity",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Toast::setMargin(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"setMargin",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Toast::setText(jint arg0)
	{
		callMethod<void>(
			"setText",
			"(I)V",
			arg0
		);
	}
	void Toast::setText(jstring arg0)
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Toast::setView(android::view::View arg0)
	{
		callMethod<void>(
			"setView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void Toast::show()
	{
		callMethod<void>(
			"show",
			"()V"
		);
	}
} // namespace android::widget

