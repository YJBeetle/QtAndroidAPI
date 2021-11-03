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
		RemoteViews(QAndroidJniObject obj);
		
		// Constructors
		RemoteViews(android::os::Parcel arg0);
		RemoteViews(android::widget::RemoteViews &arg0);
		RemoteViews(android::widget::RemoteViews &arg0, android::widget::RemoteViews &arg1);
		RemoteViews(JString arg0, jint arg1);
		
		// Methods
		void addView(jint arg0, android::widget::RemoteViews arg1);
		android::view::View apply(android::content::Context arg0, android::view::ViewGroup arg1);
		android::widget::RemoteViews clone();
		jint describeContents();
		jint getLayoutId();
		JString getPackage();
		jboolean onLoadClass(JClass arg0);
		void reapply(android::content::Context arg0, android::view::View arg1);
		void removeAllViews(jint arg0);
		void setAccessibilityTraversalAfter(jint arg0, jint arg1);
		void setAccessibilityTraversalBefore(jint arg0, jint arg1);
		void setBitmap(jint arg0, JString arg1, android::graphics::Bitmap arg2);
		void setBoolean(jint arg0, JString arg1, jboolean arg2);
		void setBundle(jint arg0, JString arg1, android::os::Bundle arg2);
		void setByte(jint arg0, JString arg1, jbyte arg2);
		void setChar(jint arg0, JString arg1, jchar arg2);
		void setCharSequence(jint arg0, JString arg1, JString arg2);
		void setChronometer(jint arg0, jlong arg1, JString arg2, jboolean arg3);
		void setChronometerCountDown(jint arg0, jboolean arg1);
		void setContentDescription(jint arg0, JString arg1);
		void setDisplayedChild(jint arg0, jint arg1);
		void setDouble(jint arg0, JString arg1, jdouble arg2);
		void setEmptyView(jint arg0, jint arg1);
		void setFloat(jint arg0, JString arg1, jfloat arg2);
		void setIcon(jint arg0, JString arg1, android::graphics::drawable::Icon arg2);
		void setImageViewBitmap(jint arg0, android::graphics::Bitmap arg1);
		void setImageViewIcon(jint arg0, android::graphics::drawable::Icon arg1);
		void setImageViewResource(jint arg0, jint arg1);
		void setImageViewUri(jint arg0, android::net::Uri arg1);
		void setInt(jint arg0, JString arg1, jint arg2);
		void setIntent(jint arg0, JString arg1, android::content::Intent arg2);
		void setLabelFor(jint arg0, jint arg1);
		void setLong(jint arg0, JString arg1, jlong arg2);
		void setOnClickFillInIntent(jint arg0, android::content::Intent arg1);
		void setOnClickPendingIntent(jint arg0, android::app::PendingIntent arg1);
		void setPendingIntentTemplate(jint arg0, android::app::PendingIntent arg1);
		void setProgressBar(jint arg0, jint arg1, jint arg2, jboolean arg3);
		void setRelativeScrollPosition(jint arg0, jint arg1);
		void setRemoteAdapter(jint arg0, android::content::Intent arg1);
		void setRemoteAdapter(jint arg0, jint arg1, android::content::Intent arg2);
		void setScrollPosition(jint arg0, jint arg1);
		void setShort(jint arg0, JString arg1, jshort arg2);
		void setString(jint arg0, JString arg1, JString arg2);
		void setTextColor(jint arg0, jint arg1);
		void setTextViewCompoundDrawables(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void setTextViewCompoundDrawablesRelative(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void setTextViewText(jint arg0, JString arg1);
		void setTextViewTextSize(jint arg0, jint arg1, jfloat arg2);
		void setUri(jint arg0, JString arg1, android::net::Uri arg2);
		void setViewPadding(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void setViewVisibility(jint arg0, jint arg1);
		void showNext(jint arg0);
		void showPrevious(jint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::widget

