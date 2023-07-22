#pragma once

#include "../app/PendingIntent.def.hpp"
#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../content/res/ColorStateList.def.hpp"
#include "../graphics/Bitmap.def.hpp"
#include "../graphics/BlendMode.def.hpp"
#include "../graphics/drawable/Icon.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "./RemoteViews_RemoteCollectionItems.def.hpp"
#include "./RemoteViews_RemoteResponse.def.hpp"
#include "../../JString.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./RemoteViews.def.hpp"

namespace android::widget
{
	// Fields
	inline JObject RemoteViews::CREATOR()
	{
		return getStaticObjectField(
			"android.widget.RemoteViews",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString RemoteViews::EXTRA_CHECKED()
	{
		return getStaticObjectField(
			"android.widget.RemoteViews",
			"EXTRA_CHECKED",
			"Ljava/lang/String;"
		);
	}
	inline JString RemoteViews::EXTRA_SHARED_ELEMENT_BOUNDS()
	{
		return getStaticObjectField(
			"android.widget.RemoteViews",
			"EXTRA_SHARED_ELEMENT_BOUNDS",
			"Ljava/lang/String;"
		);
	}
	inline jint RemoteViews::MARGIN_BOTTOM()
	{
		return getStaticField<jint>(
			"android.widget.RemoteViews",
			"MARGIN_BOTTOM"
		);
	}
	inline jint RemoteViews::MARGIN_END()
	{
		return getStaticField<jint>(
			"android.widget.RemoteViews",
			"MARGIN_END"
		);
	}
	inline jint RemoteViews::MARGIN_LEFT()
	{
		return getStaticField<jint>(
			"android.widget.RemoteViews",
			"MARGIN_LEFT"
		);
	}
	inline jint RemoteViews::MARGIN_RIGHT()
	{
		return getStaticField<jint>(
			"android.widget.RemoteViews",
			"MARGIN_RIGHT"
		);
	}
	inline jint RemoteViews::MARGIN_START()
	{
		return getStaticField<jint>(
			"android.widget.RemoteViews",
			"MARGIN_START"
		);
	}
	inline jint RemoteViews::MARGIN_TOP()
	{
		return getStaticField<jint>(
			"android.widget.RemoteViews",
			"MARGIN_TOP"
		);
	}
	
	// Constructors
	inline RemoteViews::RemoteViews(android::os::Parcel arg0)
		: JObject(
			"android.widget.RemoteViews",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline RemoteViews::RemoteViews(android::widget::RemoteViews &arg0)
		: JObject(
			"android.widget.RemoteViews",
			"(Landroid/widget/RemoteViews;)V",
			arg0.object()
		) {}
	inline RemoteViews::RemoteViews(JObject arg0)
		: JObject(
			"android.widget.RemoteViews",
			"(Ljava/util/Map;)V",
			arg0.object()
		) {}
	inline RemoteViews::RemoteViews(android::widget::RemoteViews &arg0, android::widget::RemoteViews &arg1)
		: JObject(
			"android.widget.RemoteViews",
			"(Landroid/widget/RemoteViews;Landroid/widget/RemoteViews;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline RemoteViews::RemoteViews(JString arg0, jint arg1)
		: JObject(
			"android.widget.RemoteViews",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	inline RemoteViews::RemoteViews(JString arg0, jint arg1, jint arg2)
		: JObject(
			"android.widget.RemoteViews",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		) {}
	
	// Methods
	inline void RemoteViews::addStableView(jint arg0, android::widget::RemoteViews arg1, jint arg2) const
	{
		callMethod<void>(
			"addStableView",
			"(ILandroid/widget/RemoteViews;I)V",
			arg0,
			arg1.object(),
			arg2
		);
	}
	inline void RemoteViews::addView(jint arg0, android::widget::RemoteViews arg1) const
	{
		callMethod<void>(
			"addView",
			"(ILandroid/widget/RemoteViews;)V",
			arg0,
			arg1.object()
		);
	}
	inline android::view::View RemoteViews::apply(android::content::Context arg0, android::view::ViewGroup arg1) const
	{
		return callObjectMethod(
			"apply",
			"(Landroid/content/Context;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::widget::RemoteViews RemoteViews::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/widget/RemoteViews;"
		);
	}
	inline jint RemoteViews::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint RemoteViews::getLayoutId() const
	{
		return callMethod<jint>(
			"getLayoutId",
			"()I"
		);
	}
	inline JString RemoteViews::getPackage() const
	{
		return callObjectMethod(
			"getPackage",
			"()Ljava/lang/String;"
		);
	}
	inline jint RemoteViews::getViewId() const
	{
		return callMethod<jint>(
			"getViewId",
			"()I"
		);
	}
	inline jboolean RemoteViews::onLoadClass(JClass arg0) const
	{
		return callMethod<jboolean>(
			"onLoadClass",
			"(Ljava/lang/Class;)Z",
			arg0.object<jclass>()
		);
	}
	inline void RemoteViews::reapply(android::content::Context arg0, android::view::View arg1) const
	{
		callMethod<void>(
			"reapply",
			"(Landroid/content/Context;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void RemoteViews::removeAllViews(jint arg0) const
	{
		callMethod<void>(
			"removeAllViews",
			"(I)V",
			arg0
		);
	}
	inline void RemoteViews::setAccessibilityTraversalAfter(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setAccessibilityTraversalAfter",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void RemoteViews::setAccessibilityTraversalBefore(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setAccessibilityTraversalBefore",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void RemoteViews::setBitmap(jint arg0, JString arg1, android::graphics::Bitmap arg2) const
	{
		callMethod<void>(
			"setBitmap",
			"(ILjava/lang/String;Landroid/graphics/Bitmap;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void RemoteViews::setBlendMode(jint arg0, JString arg1, android::graphics::BlendMode arg2) const
	{
		callMethod<void>(
			"setBlendMode",
			"(ILjava/lang/String;Landroid/graphics/BlendMode;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void RemoteViews::setBoolean(jint arg0, JString arg1, jboolean arg2) const
	{
		callMethod<void>(
			"setBoolean",
			"(ILjava/lang/String;Z)V",
			arg0,
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void RemoteViews::setBundle(jint arg0, JString arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"setBundle",
			"(ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void RemoteViews::setByte(jint arg0, JString arg1, jbyte arg2) const
	{
		callMethod<void>(
			"setByte",
			"(ILjava/lang/String;B)V",
			arg0,
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void RemoteViews::setChar(jint arg0, JString arg1, jchar arg2) const
	{
		callMethod<void>(
			"setChar",
			"(ILjava/lang/String;C)V",
			arg0,
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void RemoteViews::setCharSequence(jint arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"setCharSequence",
			"(ILjava/lang/String;I)V",
			arg0,
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void RemoteViews::setCharSequence(jint arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"setCharSequence",
			"(ILjava/lang/String;Ljava/lang/CharSequence;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline void RemoteViews::setCharSequenceAttr(jint arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"setCharSequenceAttr",
			"(ILjava/lang/String;I)V",
			arg0,
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void RemoteViews::setChronometer(jint arg0, jlong arg1, JString arg2, jboolean arg3) const
	{
		callMethod<void>(
			"setChronometer",
			"(IJLjava/lang/String;Z)V",
			arg0,
			arg1,
			arg2.object<jstring>(),
			arg3
		);
	}
	inline void RemoteViews::setChronometerCountDown(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setChronometerCountDown",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	inline void RemoteViews::setColor(jint arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"setColor",
			"(ILjava/lang/String;I)V",
			arg0,
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void RemoteViews::setColorAttr(jint arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"setColorAttr",
			"(ILjava/lang/String;I)V",
			arg0,
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void RemoteViews::setColorInt(jint arg0, JString arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"setColorInt",
			"(ILjava/lang/String;II)V",
			arg0,
			arg1.object<jstring>(),
			arg2,
			arg3
		);
	}
	inline void RemoteViews::setColorStateList(jint arg0, JString arg1, android::content::res::ColorStateList arg2) const
	{
		callMethod<void>(
			"setColorStateList",
			"(ILjava/lang/String;Landroid/content/res/ColorStateList;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void RemoteViews::setColorStateList(jint arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"setColorStateList",
			"(ILjava/lang/String;I)V",
			arg0,
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void RemoteViews::setColorStateList(jint arg0, JString arg1, android::content::res::ColorStateList arg2, android::content::res::ColorStateList arg3) const
	{
		callMethod<void>(
			"setColorStateList",
			"(ILjava/lang/String;Landroid/content/res/ColorStateList;Landroid/content/res/ColorStateList;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void RemoteViews::setColorStateListAttr(jint arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"setColorStateListAttr",
			"(ILjava/lang/String;I)V",
			arg0,
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void RemoteViews::setCompoundButtonChecked(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setCompoundButtonChecked",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	inline void RemoteViews::setContentDescription(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"setContentDescription",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void RemoteViews::setDisplayedChild(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setDisplayedChild",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void RemoteViews::setDouble(jint arg0, JString arg1, jdouble arg2) const
	{
		callMethod<void>(
			"setDouble",
			"(ILjava/lang/String;D)V",
			arg0,
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void RemoteViews::setEmptyView(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setEmptyView",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void RemoteViews::setFloat(jint arg0, JString arg1, jfloat arg2) const
	{
		callMethod<void>(
			"setFloat",
			"(ILjava/lang/String;F)V",
			arg0,
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void RemoteViews::setFloatDimen(jint arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"setFloatDimen",
			"(ILjava/lang/String;I)V",
			arg0,
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void RemoteViews::setFloatDimen(jint arg0, JString arg1, jfloat arg2, jint arg3) const
	{
		callMethod<void>(
			"setFloatDimen",
			"(ILjava/lang/String;FI)V",
			arg0,
			arg1.object<jstring>(),
			arg2,
			arg3
		);
	}
	inline void RemoteViews::setFloatDimenAttr(jint arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"setFloatDimenAttr",
			"(ILjava/lang/String;I)V",
			arg0,
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void RemoteViews::setIcon(jint arg0, JString arg1, android::graphics::drawable::Icon arg2) const
	{
		callMethod<void>(
			"setIcon",
			"(ILjava/lang/String;Landroid/graphics/drawable/Icon;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void RemoteViews::setIcon(jint arg0, JString arg1, android::graphics::drawable::Icon arg2, android::graphics::drawable::Icon arg3) const
	{
		callMethod<void>(
			"setIcon",
			"(ILjava/lang/String;Landroid/graphics/drawable/Icon;Landroid/graphics/drawable/Icon;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void RemoteViews::setImageViewBitmap(jint arg0, android::graphics::Bitmap arg1) const
	{
		callMethod<void>(
			"setImageViewBitmap",
			"(ILandroid/graphics/Bitmap;)V",
			arg0,
			arg1.object()
		);
	}
	inline void RemoteViews::setImageViewIcon(jint arg0, android::graphics::drawable::Icon arg1) const
	{
		callMethod<void>(
			"setImageViewIcon",
			"(ILandroid/graphics/drawable/Icon;)V",
			arg0,
			arg1.object()
		);
	}
	inline void RemoteViews::setImageViewResource(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setImageViewResource",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void RemoteViews::setImageViewUri(jint arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"setImageViewUri",
			"(ILandroid/net/Uri;)V",
			arg0,
			arg1.object()
		);
	}
	inline void RemoteViews::setInt(jint arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"setInt",
			"(ILjava/lang/String;I)V",
			arg0,
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void RemoteViews::setIntDimen(jint arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"setIntDimen",
			"(ILjava/lang/String;I)V",
			arg0,
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void RemoteViews::setIntDimen(jint arg0, JString arg1, jfloat arg2, jint arg3) const
	{
		callMethod<void>(
			"setIntDimen",
			"(ILjava/lang/String;FI)V",
			arg0,
			arg1.object<jstring>(),
			arg2,
			arg3
		);
	}
	inline void RemoteViews::setIntDimenAttr(jint arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"setIntDimenAttr",
			"(ILjava/lang/String;I)V",
			arg0,
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void RemoteViews::setIntent(jint arg0, JString arg1, android::content::Intent arg2) const
	{
		callMethod<void>(
			"setIntent",
			"(ILjava/lang/String;Landroid/content/Intent;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void RemoteViews::setLabelFor(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setLabelFor",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void RemoteViews::setLightBackgroundLayoutId(jint arg0) const
	{
		callMethod<void>(
			"setLightBackgroundLayoutId",
			"(I)V",
			arg0
		);
	}
	inline void RemoteViews::setLong(jint arg0, JString arg1, jlong arg2) const
	{
		callMethod<void>(
			"setLong",
			"(ILjava/lang/String;J)V",
			arg0,
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void RemoteViews::setOnCheckedChangeResponse(jint arg0, android::widget::RemoteViews_RemoteResponse arg1) const
	{
		callMethod<void>(
			"setOnCheckedChangeResponse",
			"(ILandroid/widget/RemoteViews$RemoteResponse;)V",
			arg0,
			arg1.object()
		);
	}
	inline void RemoteViews::setOnClickFillInIntent(jint arg0, android::content::Intent arg1) const
	{
		callMethod<void>(
			"setOnClickFillInIntent",
			"(ILandroid/content/Intent;)V",
			arg0,
			arg1.object()
		);
	}
	inline void RemoteViews::setOnClickPendingIntent(jint arg0, android::app::PendingIntent arg1) const
	{
		callMethod<void>(
			"setOnClickPendingIntent",
			"(ILandroid/app/PendingIntent;)V",
			arg0,
			arg1.object()
		);
	}
	inline void RemoteViews::setOnClickResponse(jint arg0, android::widget::RemoteViews_RemoteResponse arg1) const
	{
		callMethod<void>(
			"setOnClickResponse",
			"(ILandroid/widget/RemoteViews$RemoteResponse;)V",
			arg0,
			arg1.object()
		);
	}
	inline void RemoteViews::setPendingIntentTemplate(jint arg0, android::app::PendingIntent arg1) const
	{
		callMethod<void>(
			"setPendingIntentTemplate",
			"(ILandroid/app/PendingIntent;)V",
			arg0,
			arg1.object()
		);
	}
	inline void RemoteViews::setProgressBar(jint arg0, jint arg1, jint arg2, jboolean arg3) const
	{
		callMethod<void>(
			"setProgressBar",
			"(IIIZ)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void RemoteViews::setRadioGroupChecked(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setRadioGroupChecked",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void RemoteViews::setRelativeScrollPosition(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setRelativeScrollPosition",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void RemoteViews::setRemoteAdapter(jint arg0, android::content::Intent arg1) const
	{
		callMethod<void>(
			"setRemoteAdapter",
			"(ILandroid/content/Intent;)V",
			arg0,
			arg1.object()
		);
	}
	inline void RemoteViews::setRemoteAdapter(jint arg0, android::widget::RemoteViews_RemoteCollectionItems arg1) const
	{
		callMethod<void>(
			"setRemoteAdapter",
			"(ILandroid/widget/RemoteViews$RemoteCollectionItems;)V",
			arg0,
			arg1.object()
		);
	}
	inline void RemoteViews::setRemoteAdapter(jint arg0, jint arg1, android::content::Intent arg2) const
	{
		callMethod<void>(
			"setRemoteAdapter",
			"(IILandroid/content/Intent;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void RemoteViews::setScrollPosition(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setScrollPosition",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void RemoteViews::setShort(jint arg0, JString arg1, jshort arg2) const
	{
		callMethod<void>(
			"setShort",
			"(ILjava/lang/String;S)V",
			arg0,
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void RemoteViews::setString(jint arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"setString",
			"(ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline void RemoteViews::setTextColor(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setTextColor",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void RemoteViews::setTextViewCompoundDrawables(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
	{
		callMethod<void>(
			"setTextViewCompoundDrawables",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void RemoteViews::setTextViewCompoundDrawablesRelative(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
	{
		callMethod<void>(
			"setTextViewCompoundDrawablesRelative",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void RemoteViews::setTextViewText(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"setTextViewText",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void RemoteViews::setTextViewTextSize(jint arg0, jint arg1, jfloat arg2) const
	{
		callMethod<void>(
			"setTextViewTextSize",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void RemoteViews::setUri(jint arg0, JString arg1, android::net::Uri arg2) const
	{
		callMethod<void>(
			"setUri",
			"(ILjava/lang/String;Landroid/net/Uri;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void RemoteViews::setViewLayoutHeight(jint arg0, jfloat arg1, jint arg2) const
	{
		callMethod<void>(
			"setViewLayoutHeight",
			"(IFI)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void RemoteViews::setViewLayoutHeightAttr(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setViewLayoutHeightAttr",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void RemoteViews::setViewLayoutHeightDimen(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setViewLayoutHeightDimen",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void RemoteViews::setViewLayoutMargin(jint arg0, jint arg1, jfloat arg2, jint arg3) const
	{
		callMethod<void>(
			"setViewLayoutMargin",
			"(IIFI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void RemoteViews::setViewLayoutMarginAttr(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setViewLayoutMarginAttr",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void RemoteViews::setViewLayoutMarginDimen(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setViewLayoutMarginDimen",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void RemoteViews::setViewLayoutWidth(jint arg0, jfloat arg1, jint arg2) const
	{
		callMethod<void>(
			"setViewLayoutWidth",
			"(IFI)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void RemoteViews::setViewLayoutWidthAttr(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setViewLayoutWidthAttr",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void RemoteViews::setViewLayoutWidthDimen(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setViewLayoutWidthDimen",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void RemoteViews::setViewOutlinePreferredRadius(jint arg0, jfloat arg1, jint arg2) const
	{
		callMethod<void>(
			"setViewOutlinePreferredRadius",
			"(IFI)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void RemoteViews::setViewOutlinePreferredRadiusAttr(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setViewOutlinePreferredRadiusAttr",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void RemoteViews::setViewOutlinePreferredRadiusDimen(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setViewOutlinePreferredRadiusDimen",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void RemoteViews::setViewPadding(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
	{
		callMethod<void>(
			"setViewPadding",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void RemoteViews::setViewVisibility(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setViewVisibility",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void RemoteViews::showNext(jint arg0) const
	{
		callMethod<void>(
			"showNext",
			"(I)V",
			arg0
		);
	}
	inline void RemoteViews::showPrevious(jint arg0) const
	{
		callMethod<void>(
			"showPrevious",
			"(I)V",
			arg0
		);
	}
	inline void RemoteViews::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::widget

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
