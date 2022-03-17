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
namespace android::graphics
{
	class Bitmap;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RemoteViews(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoteViews(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		RemoteViews(android::os::Parcel arg0);
		RemoteViews(android::widget::RemoteViews &arg0);
		RemoteViews(android::widget::RemoteViews &arg0, android::widget::RemoteViews &arg1);
		RemoteViews(JString arg0, jint arg1);
		
		// Methods
		void addView(jint arg0, android::widget::RemoteViews arg1) const;
		android::view::View apply(android::content::Context arg0, android::view::ViewGroup arg1) const;
		android::widget::RemoteViews clone() const;
		jint describeContents() const;
		jint getLayoutId() const;
		JString getPackage() const;
		jboolean onLoadClass(JClass arg0) const;
		void reapply(android::content::Context arg0, android::view::View arg1) const;
		void removeAllViews(jint arg0) const;
		void setAccessibilityTraversalAfter(jint arg0, jint arg1) const;
		void setAccessibilityTraversalBefore(jint arg0, jint arg1) const;
		void setBitmap(jint arg0, JString arg1, android::graphics::Bitmap arg2) const;
		void setBoolean(jint arg0, JString arg1, jboolean arg2) const;
		void setBundle(jint arg0, JString arg1, android::os::Bundle arg2) const;
		void setByte(jint arg0, JString arg1, jbyte arg2) const;
		void setChar(jint arg0, JString arg1, jchar arg2) const;
		void setCharSequence(jint arg0, JString arg1, JString arg2) const;
		void setChronometer(jint arg0, jlong arg1, JString arg2, jboolean arg3) const;
		void setChronometerCountDown(jint arg0, jboolean arg1) const;
		void setContentDescription(jint arg0, JString arg1) const;
		void setDisplayedChild(jint arg0, jint arg1) const;
		void setDouble(jint arg0, JString arg1, jdouble arg2) const;
		void setEmptyView(jint arg0, jint arg1) const;
		void setFloat(jint arg0, JString arg1, jfloat arg2) const;
		void setIcon(jint arg0, JString arg1, android::graphics::drawable::Icon arg2) const;
		void setImageViewBitmap(jint arg0, android::graphics::Bitmap arg1) const;
		void setImageViewIcon(jint arg0, android::graphics::drawable::Icon arg1) const;
		void setImageViewResource(jint arg0, jint arg1) const;
		void setImageViewUri(jint arg0, android::net::Uri arg1) const;
		void setInt(jint arg0, JString arg1, jint arg2) const;
		void setIntent(jint arg0, JString arg1, android::content::Intent arg2) const;
		void setLabelFor(jint arg0, jint arg1) const;
		void setLong(jint arg0, JString arg1, jlong arg2) const;
		void setOnClickFillInIntent(jint arg0, android::content::Intent arg1) const;
		void setOnClickPendingIntent(jint arg0, android::app::PendingIntent arg1) const;
		void setPendingIntentTemplate(jint arg0, android::app::PendingIntent arg1) const;
		void setProgressBar(jint arg0, jint arg1, jint arg2, jboolean arg3) const;
		void setRelativeScrollPosition(jint arg0, jint arg1) const;
		void setRemoteAdapter(jint arg0, android::content::Intent arg1) const;
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
		void setViewPadding(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const;
		void setViewVisibility(jint arg0, jint arg1) const;
		void showNext(jint arg0) const;
		void showPrevious(jint arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::widget

