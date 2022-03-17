#pragma once

#include "../content/Context.def.hpp"
#include "../view/View.def.hpp"
#include "../../JString.hpp"
#include "./Toast.def.hpp"

namespace android::widget
{
	// Fields
	inline jint Toast::LENGTH_LONG()
	{
		return getStaticField<jint>(
			"android.widget.Toast",
			"LENGTH_LONG"
		);
	}
	inline jint Toast::LENGTH_SHORT()
	{
		return getStaticField<jint>(
			"android.widget.Toast",
			"LENGTH_SHORT"
		);
	}
	
	// Constructors
	inline Toast::Toast(android::content::Context arg0)
		: JObject(
			"android.widget.Toast",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::widget::Toast Toast::makeText(android::content::Context arg0, jint arg1, jint arg2)
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
	inline android::widget::Toast Toast::makeText(android::content::Context arg0, JString arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.widget.Toast",
			"makeText",
			"(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void Toast::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	inline jint Toast::getDuration() const
	{
		return callMethod<jint>(
			"getDuration",
			"()I"
		);
	}
	inline jint Toast::getGravity() const
	{
		return callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	inline jfloat Toast::getHorizontalMargin() const
	{
		return callMethod<jfloat>(
			"getHorizontalMargin",
			"()F"
		);
	}
	inline jfloat Toast::getVerticalMargin() const
	{
		return callMethod<jfloat>(
			"getVerticalMargin",
			"()F"
		);
	}
	inline android::view::View Toast::getView() const
	{
		return callObjectMethod(
			"getView",
			"()Landroid/view/View;"
		);
	}
	inline jint Toast::getXOffset() const
	{
		return callMethod<jint>(
			"getXOffset",
			"()I"
		);
	}
	inline jint Toast::getYOffset() const
	{
		return callMethod<jint>(
			"getYOffset",
			"()I"
		);
	}
	inline void Toast::setDuration(jint arg0) const
	{
		callMethod<void>(
			"setDuration",
			"(I)V",
			arg0
		);
	}
	inline void Toast::setGravity(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setGravity",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void Toast::setMargin(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setMargin",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void Toast::setText(jint arg0) const
	{
		callMethod<void>(
			"setText",
			"(I)V",
			arg0
		);
	}
	inline void Toast::setText(JString arg0) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void Toast::setView(android::view::View arg0) const
	{
		callMethod<void>(
			"setView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void Toast::show() const
	{
		callMethod<void>(
			"show",
			"()V"
		);
	}
} // namespace android::widget

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
