#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::content::res
{
	class ColorStateList;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class BlendMode;
}
namespace android::graphics::drawable
{
	class Icon;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup;
}
namespace android::widget
{
	class RemoteViews_RemoteCollectionItems;
}
namespace android::widget
{
	class RemoteViews_RemoteResponse;
}
class JString;
class JClass;
class JObject;
class JString;

namespace android::widget
{
	class RemoteViews : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString EXTRA_CHECKED();
		static JString EXTRA_SHARED_ELEMENT_BOUNDS();
		static jint MARGIN_BOTTOM();
		static jint MARGIN_END();
		static jint MARGIN_LEFT();
		static jint MARGIN_RIGHT();
		static jint MARGIN_START();
		static jint MARGIN_TOP();
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoteViews(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoteViews(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RemoteViews(android::os::Parcel arg0);
		RemoteViews(android::widget::RemoteViews &arg0);
		RemoteViews(JObject arg0);
		RemoteViews(android::widget::RemoteViews &arg0, android::widget::RemoteViews &arg1);
		RemoteViews(JString arg0, jint arg1);
		RemoteViews(JString arg0, jint arg1, jint arg2);
		
		// Methods
		void addStableView(jint arg0, android::widget::RemoteViews arg1, jint arg2) const;
		void addView(jint arg0, android::widget::RemoteViews arg1) const;
		android::view::View apply(android::content::Context arg0, android::view::ViewGroup arg1) const;
		android::widget::RemoteViews clone() const;
		jint describeContents() const;
		jint getLayoutId() const;
		JString getPackage() const;
		jint getViewId() const;
		jboolean onLoadClass(JClass arg0) const;
		void reapply(android::content::Context arg0, android::view::View arg1) const;
		void removeAllViews(jint arg0) const;
		void setAccessibilityTraversalAfter(jint arg0, jint arg1) const;
		void setAccessibilityTraversalBefore(jint arg0, jint arg1) const;
		void setBitmap(jint arg0, JString arg1, android::graphics::Bitmap arg2) const;
		void setBlendMode(jint arg0, JString arg1, android::graphics::BlendMode arg2) const;
		void setBoolean(jint arg0, JString arg1, jboolean arg2) const;
		void setBundle(jint arg0, JString arg1, android::os::Bundle arg2) const;
		void setByte(jint arg0, JString arg1, jbyte arg2) const;
		void setChar(jint arg0, JString arg1, jchar arg2) const;
		void setCharSequence(jint arg0, JString arg1, jint arg2) const;
		void setCharSequence(jint arg0, JString arg1, JString arg2) const;
		void setCharSequenceAttr(jint arg0, JString arg1, jint arg2) const;
		void setChronometer(jint arg0, jlong arg1, JString arg2, jboolean arg3) const;
		void setChronometerCountDown(jint arg0, jboolean arg1) const;
		void setColor(jint arg0, JString arg1, jint arg2) const;
		void setColorAttr(jint arg0, JString arg1, jint arg2) const;
		void setColorInt(jint arg0, JString arg1, jint arg2, jint arg3) const;
		void setColorStateList(jint arg0, JString arg1, android::content::res::ColorStateList arg2) const;
		void setColorStateList(jint arg0, JString arg1, jint arg2) const;
		void setColorStateList(jint arg0, JString arg1, android::content::res::ColorStateList arg2, android::content::res::ColorStateList arg3) const;
		void setColorStateListAttr(jint arg0, JString arg1, jint arg2) const;
		void setCompoundButtonChecked(jint arg0, jboolean arg1) const;
		void setContentDescription(jint arg0, JString arg1) const;
		void setDisplayedChild(jint arg0, jint arg1) const;
		void setDouble(jint arg0, JString arg1, jdouble arg2) const;
		void setEmptyView(jint arg0, jint arg1) const;
		void setFloat(jint arg0, JString arg1, jfloat arg2) const;
		void setFloatDimen(jint arg0, JString arg1, jint arg2) const;
		void setFloatDimen(jint arg0, JString arg1, jfloat arg2, jint arg3) const;
		void setFloatDimenAttr(jint arg0, JString arg1, jint arg2) const;
		void setIcon(jint arg0, JString arg1, android::graphics::drawable::Icon arg2) const;
		void setIcon(jint arg0, JString arg1, android::graphics::drawable::Icon arg2, android::graphics::drawable::Icon arg3) const;
		void setImageViewBitmap(jint arg0, android::graphics::Bitmap arg1) const;
		void setImageViewIcon(jint arg0, android::graphics::drawable::Icon arg1) const;
		void setImageViewResource(jint arg0, jint arg1) const;
		void setImageViewUri(jint arg0, android::net::Uri arg1) const;
		void setInt(jint arg0, JString arg1, jint arg2) const;
		void setIntDimen(jint arg0, JString arg1, jint arg2) const;
		void setIntDimen(jint arg0, JString arg1, jfloat arg2, jint arg3) const;
		void setIntDimenAttr(jint arg0, JString arg1, jint arg2) const;
		void setIntent(jint arg0, JString arg1, android::content::Intent arg2) const;
		void setLabelFor(jint arg0, jint arg1) const;
		void setLightBackgroundLayoutId(jint arg0) const;
		void setLong(jint arg0, JString arg1, jlong arg2) const;
		void setOnCheckedChangeResponse(jint arg0, android::widget::RemoteViews_RemoteResponse arg1) const;
		void setOnClickFillInIntent(jint arg0, android::content::Intent arg1) const;
		void setOnClickPendingIntent(jint arg0, android::app::PendingIntent arg1) const;
		void setOnClickResponse(jint arg0, android::widget::RemoteViews_RemoteResponse arg1) const;
		void setPendingIntentTemplate(jint arg0, android::app::PendingIntent arg1) const;
		void setProgressBar(jint arg0, jint arg1, jint arg2, jboolean arg3) const;
		void setRadioGroupChecked(jint arg0, jint arg1) const;
		void setRelativeScrollPosition(jint arg0, jint arg1) const;
		void setRemoteAdapter(jint arg0, android::content::Intent arg1) const;
		void setRemoteAdapter(jint arg0, android::widget::RemoteViews_RemoteCollectionItems arg1) const;
		void setRemoteAdapter(jint arg0, jint arg1, android::content::Intent arg2) const;
		void setScrollPosition(jint arg0, jint arg1) const;
		void setShort(jint arg0, JString arg1, jshort arg2) const;
		void setString(jint arg0, JString arg1, JString arg2) const;
		void setTextColor(jint arg0, jint arg1) const;
		void setTextViewCompoundDrawables(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const;
		void setTextViewCompoundDrawablesRelative(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const;
		void setTextViewText(jint arg0, JString arg1) const;
		void setTextViewTextSize(jint arg0, jint arg1, jfloat arg2) const;
		void setUri(jint arg0, JString arg1, android::net::Uri arg2) const;
		void setViewLayoutHeight(jint arg0, jfloat arg1, jint arg2) const;
		void setViewLayoutHeightAttr(jint arg0, jint arg1) const;
		void setViewLayoutHeightDimen(jint arg0, jint arg1) const;
		void setViewLayoutMargin(jint arg0, jint arg1, jfloat arg2, jint arg3) const;
		void setViewLayoutMarginAttr(jint arg0, jint arg1, jint arg2) const;
		void setViewLayoutMarginDimen(jint arg0, jint arg1, jint arg2) const;
		void setViewLayoutWidth(jint arg0, jfloat arg1, jint arg2) const;
		void setViewLayoutWidthAttr(jint arg0, jint arg1) const;
		void setViewLayoutWidthDimen(jint arg0, jint arg1) const;
		void setViewOutlinePreferredRadius(jint arg0, jfloat arg1, jint arg2) const;
		void setViewOutlinePreferredRadiusAttr(jint arg0, jint arg1) const;
		void setViewOutlinePreferredRadiusDimen(jint arg0, jint arg1) const;
		void setViewPadding(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const;
		void setViewVisibility(jint arg0, jint arg1) const;
		void showNext(jint arg0) const;
		void showPrevious(jint arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::widget

