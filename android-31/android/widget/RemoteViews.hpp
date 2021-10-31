#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::widget
{
	class RemoteViews : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jstring EXTRA_CHECKED();
		static jstring EXTRA_SHARED_ELEMENT_BOUNDS();
		static jint MARGIN_BOTTOM();
		static jint MARGIN_END();
		static jint MARGIN_LEFT();
		static jint MARGIN_RIGHT();
		static jint MARGIN_START();
		static jint MARGIN_TOP();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RemoteViews(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RemoteViews(QAndroidJniObject obj);
		
		// Constructors
		RemoteViews(android::os::Parcel arg0);
		RemoteViews(android::widget::RemoteViews &arg0);
		RemoteViews(__JniBaseClass arg0);
		RemoteViews(android::widget::RemoteViews &arg0, android::widget::RemoteViews &arg1);
		RemoteViews(jstring arg0, jint arg1);
		RemoteViews(jstring arg0, jint arg1, jint arg2);
		
		// Methods
		void addStableView(jint arg0, android::widget::RemoteViews arg1, jint arg2);
		void addView(jint arg0, android::widget::RemoteViews arg1);
		android::view::View apply(android::content::Context arg0, android::view::ViewGroup arg1);
		android::widget::RemoteViews clone();
		jint describeContents();
		jint getLayoutId();
		jstring getPackage();
		jint getViewId();
		jboolean onLoadClass(jclass arg0);
		void reapply(android::content::Context arg0, android::view::View arg1);
		void removeAllViews(jint arg0);
		void setAccessibilityTraversalAfter(jint arg0, jint arg1);
		void setAccessibilityTraversalBefore(jint arg0, jint arg1);
		void setBitmap(jint arg0, jstring arg1, android::graphics::Bitmap arg2);
		void setBlendMode(jint arg0, jstring arg1, android::graphics::BlendMode arg2);
		void setBoolean(jint arg0, jstring arg1, jboolean arg2);
		void setBundle(jint arg0, jstring arg1, android::os::Bundle arg2);
		void setByte(jint arg0, jstring arg1, jbyte arg2);
		void setChar(jint arg0, jstring arg1, jchar arg2);
		void setCharSequence(jint arg0, jstring arg1, jint arg2);
		void setCharSequence(jint arg0, jstring arg1, jstring arg2);
		void setCharSequenceAttr(jint arg0, jstring arg1, jint arg2);
		void setChronometer(jint arg0, jlong arg1, jstring arg2, jboolean arg3);
		void setChronometerCountDown(jint arg0, jboolean arg1);
		void setColor(jint arg0, jstring arg1, jint arg2);
		void setColorAttr(jint arg0, jstring arg1, jint arg2);
		void setColorInt(jint arg0, jstring arg1, jint arg2, jint arg3);
		void setColorStateList(jint arg0, jstring arg1, android::content::res::ColorStateList arg2);
		void setColorStateList(jint arg0, jstring arg1, jint arg2);
		void setColorStateList(jint arg0, jstring arg1, android::content::res::ColorStateList arg2, android::content::res::ColorStateList arg3);
		void setColorStateListAttr(jint arg0, jstring arg1, jint arg2);
		void setCompoundButtonChecked(jint arg0, jboolean arg1);
		void setContentDescription(jint arg0, jstring arg1);
		void setDisplayedChild(jint arg0, jint arg1);
		void setDouble(jint arg0, jstring arg1, jdouble arg2);
		void setEmptyView(jint arg0, jint arg1);
		void setFloat(jint arg0, jstring arg1, jfloat arg2);
		void setFloatDimen(jint arg0, jstring arg1, jint arg2);
		void setFloatDimen(jint arg0, jstring arg1, jfloat arg2, jint arg3);
		void setFloatDimenAttr(jint arg0, jstring arg1, jint arg2);
		void setIcon(jint arg0, jstring arg1, android::graphics::drawable::Icon arg2);
		void setIcon(jint arg0, jstring arg1, android::graphics::drawable::Icon arg2, android::graphics::drawable::Icon arg3);
		void setImageViewBitmap(jint arg0, android::graphics::Bitmap arg1);
		void setImageViewIcon(jint arg0, android::graphics::drawable::Icon arg1);
		void setImageViewResource(jint arg0, jint arg1);
		void setImageViewUri(jint arg0, android::net::Uri arg1);
		void setInt(jint arg0, jstring arg1, jint arg2);
		void setIntDimen(jint arg0, jstring arg1, jint arg2);
		void setIntDimen(jint arg0, jstring arg1, jfloat arg2, jint arg3);
		void setIntDimenAttr(jint arg0, jstring arg1, jint arg2);
		void setIntent(jint arg0, jstring arg1, android::content::Intent arg2);
		void setLabelFor(jint arg0, jint arg1);
		void setLightBackgroundLayoutId(jint arg0);
		void setLong(jint arg0, jstring arg1, jlong arg2);
		void setOnCheckedChangeResponse(jint arg0, android::widget::RemoteViews_RemoteResponse arg1);
		void setOnClickFillInIntent(jint arg0, android::content::Intent arg1);
		void setOnClickPendingIntent(jint arg0, android::app::PendingIntent arg1);
		void setOnClickResponse(jint arg0, android::widget::RemoteViews_RemoteResponse arg1);
		void setPendingIntentTemplate(jint arg0, android::app::PendingIntent arg1);
		void setProgressBar(jint arg0, jint arg1, jint arg2, jboolean arg3);
		void setRadioGroupChecked(jint arg0, jint arg1);
		void setRelativeScrollPosition(jint arg0, jint arg1);
		void setRemoteAdapter(jint arg0, android::content::Intent arg1);
		void setRemoteAdapter(jint arg0, android::widget::RemoteViews_RemoteCollectionItems arg1);
		void setRemoteAdapter(jint arg0, jint arg1, android::content::Intent arg2);
		void setScrollPosition(jint arg0, jint arg1);
		void setShort(jint arg0, jstring arg1, jshort arg2);
		void setString(jint arg0, jstring arg1, jstring arg2);
		void setTextColor(jint arg0, jint arg1);
		void setTextViewCompoundDrawables(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void setTextViewCompoundDrawablesRelative(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void setTextViewText(jint arg0, jstring arg1);
		void setTextViewTextSize(jint arg0, jint arg1, jfloat arg2);
		void setUri(jint arg0, jstring arg1, android::net::Uri arg2);
		void setViewLayoutHeight(jint arg0, jfloat arg1, jint arg2);
		void setViewLayoutHeightAttr(jint arg0, jint arg1);
		void setViewLayoutHeightDimen(jint arg0, jint arg1);
		void setViewLayoutMargin(jint arg0, jint arg1, jfloat arg2, jint arg3);
		void setViewLayoutMarginAttr(jint arg0, jint arg1, jint arg2);
		void setViewLayoutMarginDimen(jint arg0, jint arg1, jint arg2);
		void setViewLayoutWidth(jint arg0, jfloat arg1, jint arg2);
		void setViewLayoutWidthAttr(jint arg0, jint arg1);
		void setViewLayoutWidthDimen(jint arg0, jint arg1);
		void setViewOutlinePreferredRadius(jint arg0, jfloat arg1, jint arg2);
		void setViewOutlinePreferredRadiusAttr(jint arg0, jint arg1);
		void setViewOutlinePreferredRadiusDimen(jint arg0, jint arg1);
		void setViewPadding(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void setViewVisibility(jint arg0, jint arg1);
		void showNext(jint arg0);
		void showPrevious(jint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::widget

