#include "../app/PendingIntent.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./RemoteViews_RemoteResponse.hpp"
#include "./RemoteViews.hpp"

namespace android::widget
{
	// Fields
	QAndroidJniObject RemoteViews::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.RemoteViews",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring RemoteViews::EXTRA_SHARED_ELEMENT_BOUNDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.RemoteViews",
			"EXTRA_SHARED_ELEMENT_BOUNDS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	RemoteViews::RemoteViews(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	RemoteViews::RemoteViews(android::os::Parcel arg0)
		: __JniBaseClass(
			"android.widget.RemoteViews",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	RemoteViews::RemoteViews(android::widget::RemoteViews &arg0)
		: __JniBaseClass(
			"android.widget.RemoteViews",
			"(Landroid/widget/RemoteViews;)V",
			arg0.object()
		) {}
	RemoteViews::RemoteViews(android::widget::RemoteViews &arg0, android::widget::RemoteViews &arg1)
		: __JniBaseClass(
			"android.widget.RemoteViews",
			"(Landroid/widget/RemoteViews;Landroid/widget/RemoteViews;)V",
			arg0.object(),
			arg1.object()
		) {}
	RemoteViews::RemoteViews(jstring arg0, jint arg1)
		: __JniBaseClass(
			"android.widget.RemoteViews",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		) {}
	
	// Methods
	void RemoteViews::addView(jint arg0, android::widget::RemoteViews arg1)
	{
		callMethod<void>(
			"addView",
			"(ILandroid/widget/RemoteViews;)V",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject RemoteViews::apply(android::content::Context arg0, android::view::ViewGroup arg1)
	{
		return callObjectMethod(
			"apply",
			"(Landroid/content/Context;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject RemoteViews::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/widget/RemoteViews;"
		);
	}
	jint RemoteViews::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint RemoteViews::getLayoutId()
	{
		return callMethod<jint>(
			"getLayoutId",
			"()I"
		);
	}
	jstring RemoteViews::getPackage()
	{
		return callObjectMethod(
			"getPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean RemoteViews::onLoadClass(jclass arg0)
	{
		return callMethod<jboolean>(
			"onLoadClass",
			"(Ljava/lang/Class;)Z",
			arg0
		);
	}
	void RemoteViews::reapply(android::content::Context arg0, android::view::View arg1)
	{
		callMethod<void>(
			"reapply",
			"(Landroid/content/Context;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void RemoteViews::removeAllViews(jint arg0)
	{
		callMethod<void>(
			"removeAllViews",
			"(I)V",
			arg0
		);
	}
	void RemoteViews::setAccessibilityTraversalAfter(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setAccessibilityTraversalAfter",
			"(II)V",
			arg0,
			arg1
		);
	}
	void RemoteViews::setAccessibilityTraversalBefore(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setAccessibilityTraversalBefore",
			"(II)V",
			arg0,
			arg1
		);
	}
	void RemoteViews::setBitmap(jint arg0, jstring arg1, android::graphics::Bitmap arg2)
	{
		callMethod<void>(
			"setBitmap",
			"(ILjava/lang/String;Landroid/graphics/Bitmap;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void RemoteViews::setBoolean(jint arg0, jstring arg1, jboolean arg2)
	{
		callMethod<void>(
			"setBoolean",
			"(ILjava/lang/String;Z)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RemoteViews::setBundle(jint arg0, jstring arg1, android::os::Bundle arg2)
	{
		callMethod<void>(
			"setBundle",
			"(ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void RemoteViews::setByte(jint arg0, jstring arg1, jbyte arg2)
	{
		callMethod<void>(
			"setByte",
			"(ILjava/lang/String;B)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RemoteViews::setChar(jint arg0, jstring arg1, jchar arg2)
	{
		callMethod<void>(
			"setChar",
			"(ILjava/lang/String;C)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RemoteViews::setCharSequence(jint arg0, jstring arg1, jstring arg2)
	{
		callMethod<void>(
			"setCharSequence",
			"(ILjava/lang/String;Ljava/lang/CharSequence;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RemoteViews::setChronometer(jint arg0, jlong arg1, jstring arg2, jboolean arg3)
	{
		callMethod<void>(
			"setChronometer",
			"(IJLjava/lang/String;Z)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void RemoteViews::setChronometerCountDown(jint arg0, jboolean arg1)
	{
		callMethod<void>(
			"setChronometerCountDown",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void RemoteViews::setContentDescription(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"setContentDescription",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1
		);
	}
	void RemoteViews::setDisplayedChild(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setDisplayedChild",
			"(II)V",
			arg0,
			arg1
		);
	}
	void RemoteViews::setDouble(jint arg0, jstring arg1, jdouble arg2)
	{
		callMethod<void>(
			"setDouble",
			"(ILjava/lang/String;D)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RemoteViews::setEmptyView(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setEmptyView",
			"(II)V",
			arg0,
			arg1
		);
	}
	void RemoteViews::setFloat(jint arg0, jstring arg1, jfloat arg2)
	{
		callMethod<void>(
			"setFloat",
			"(ILjava/lang/String;F)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RemoteViews::setIcon(jint arg0, jstring arg1, android::graphics::drawable::Icon arg2)
	{
		callMethod<void>(
			"setIcon",
			"(ILjava/lang/String;Landroid/graphics/drawable/Icon;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void RemoteViews::setImageViewBitmap(jint arg0, android::graphics::Bitmap arg1)
	{
		callMethod<void>(
			"setImageViewBitmap",
			"(ILandroid/graphics/Bitmap;)V",
			arg0,
			arg1.object()
		);
	}
	void RemoteViews::setImageViewIcon(jint arg0, android::graphics::drawable::Icon arg1)
	{
		callMethod<void>(
			"setImageViewIcon",
			"(ILandroid/graphics/drawable/Icon;)V",
			arg0,
			arg1.object()
		);
	}
	void RemoteViews::setImageViewResource(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setImageViewResource",
			"(II)V",
			arg0,
			arg1
		);
	}
	void RemoteViews::setImageViewUri(jint arg0, android::net::Uri arg1)
	{
		callMethod<void>(
			"setImageViewUri",
			"(ILandroid/net/Uri;)V",
			arg0,
			arg1.object()
		);
	}
	void RemoteViews::setInt(jint arg0, jstring arg1, jint arg2)
	{
		callMethod<void>(
			"setInt",
			"(ILjava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RemoteViews::setIntent(jint arg0, jstring arg1, android::content::Intent arg2)
	{
		callMethod<void>(
			"setIntent",
			"(ILjava/lang/String;Landroid/content/Intent;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void RemoteViews::setLabelFor(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setLabelFor",
			"(II)V",
			arg0,
			arg1
		);
	}
	void RemoteViews::setLightBackgroundLayoutId(jint arg0)
	{
		callMethod<void>(
			"setLightBackgroundLayoutId",
			"(I)V",
			arg0
		);
	}
	void RemoteViews::setLong(jint arg0, jstring arg1, jlong arg2)
	{
		callMethod<void>(
			"setLong",
			"(ILjava/lang/String;J)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RemoteViews::setOnClickFillInIntent(jint arg0, android::content::Intent arg1)
	{
		callMethod<void>(
			"setOnClickFillInIntent",
			"(ILandroid/content/Intent;)V",
			arg0,
			arg1.object()
		);
	}
	void RemoteViews::setOnClickPendingIntent(jint arg0, android::app::PendingIntent arg1)
	{
		callMethod<void>(
			"setOnClickPendingIntent",
			"(ILandroid/app/PendingIntent;)V",
			arg0,
			arg1.object()
		);
	}
	void RemoteViews::setOnClickResponse(jint arg0, android::widget::RemoteViews_RemoteResponse arg1)
	{
		callMethod<void>(
			"setOnClickResponse",
			"(ILandroid/widget/RemoteViews$RemoteResponse;)V",
			arg0,
			arg1.object()
		);
	}
	void RemoteViews::setPendingIntentTemplate(jint arg0, android::app::PendingIntent arg1)
	{
		callMethod<void>(
			"setPendingIntentTemplate",
			"(ILandroid/app/PendingIntent;)V",
			arg0,
			arg1.object()
		);
	}
	void RemoteViews::setProgressBar(jint arg0, jint arg1, jint arg2, jboolean arg3)
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
	void RemoteViews::setRelativeScrollPosition(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setRelativeScrollPosition",
			"(II)V",
			arg0,
			arg1
		);
	}
	void RemoteViews::setRemoteAdapter(jint arg0, android::content::Intent arg1)
	{
		callMethod<void>(
			"setRemoteAdapter",
			"(ILandroid/content/Intent;)V",
			arg0,
			arg1.object()
		);
	}
	void RemoteViews::setRemoteAdapter(jint arg0, jint arg1, android::content::Intent arg2)
	{
		callMethod<void>(
			"setRemoteAdapter",
			"(IILandroid/content/Intent;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void RemoteViews::setScrollPosition(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setScrollPosition",
			"(II)V",
			arg0,
			arg1
		);
	}
	void RemoteViews::setShort(jint arg0, jstring arg1, jshort arg2)
	{
		callMethod<void>(
			"setShort",
			"(ILjava/lang/String;S)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RemoteViews::setString(jint arg0, jstring arg1, jstring arg2)
	{
		callMethod<void>(
			"setString",
			"(ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RemoteViews::setTextColor(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setTextColor",
			"(II)V",
			arg0,
			arg1
		);
	}
	void RemoteViews::setTextViewCompoundDrawables(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
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
	void RemoteViews::setTextViewCompoundDrawablesRelative(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
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
	void RemoteViews::setTextViewText(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"setTextViewText",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1
		);
	}
	void RemoteViews::setTextViewTextSize(jint arg0, jint arg1, jfloat arg2)
	{
		callMethod<void>(
			"setTextViewTextSize",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RemoteViews::setUri(jint arg0, jstring arg1, android::net::Uri arg2)
	{
		callMethod<void>(
			"setUri",
			"(ILjava/lang/String;Landroid/net/Uri;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void RemoteViews::setViewPadding(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
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
	void RemoteViews::setViewVisibility(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setViewVisibility",
			"(II)V",
			arg0,
			arg1
		);
	}
	void RemoteViews::showNext(jint arg0)
	{
		callMethod<void>(
			"showNext",
			"(I)V",
			arg0
		);
	}
	void RemoteViews::showPrevious(jint arg0)
	{
		callMethod<void>(
			"showPrevious",
			"(I)V",
			arg0
		);
	}
	void RemoteViews::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::widget
