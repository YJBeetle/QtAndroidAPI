#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::graphics::drawable
{
	class Icon;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class ViewGroup;
}
namespace __jni_impl::android::widget
{
	class RemoteViews_RemoteResponse;
}

namespace __jni_impl::android::widget
{
	class RemoteViews : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jstring EXTRA_SHARED_ELEMENT_BOUNDS();
		
		// Constructors
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(__jni_impl::android::widget::RemoteViews arg0);
		void __constructor(__jni_impl::android::widget::RemoteViews arg0, __jni_impl::android::widget::RemoteViews arg1);
		void __constructor(jstring arg0, jint arg1);
		void __constructor(const QString &arg0, jint arg1);
		
		// Methods
		void addView(jint arg0, __jni_impl::android::widget::RemoteViews arg1);
		QAndroidJniObject apply(__jni_impl::android::content::Context arg0, __jni_impl::android::view::ViewGroup arg1);
		QAndroidJniObject clone();
		jint describeContents();
		jint getLayoutId();
		jstring getPackage();
		jboolean onLoadClass(jclass arg0);
		void reapply(__jni_impl::android::content::Context arg0, __jni_impl::android::view::View arg1);
		void removeAllViews(jint arg0);
		void setAccessibilityTraversalAfter(jint arg0, jint arg1);
		void setAccessibilityTraversalBefore(jint arg0, jint arg1);
		void setBitmap(jint arg0, jstring arg1, __jni_impl::android::graphics::Bitmap arg2);
		void setBitmap(jint arg0, const QString &arg1, __jni_impl::android::graphics::Bitmap arg2);
		void setBoolean(jint arg0, jstring arg1, jboolean arg2);
		void setBoolean(jint arg0, const QString &arg1, jboolean arg2);
		void setBundle(jint arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		void setBundle(jint arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2);
		void setByte(jint arg0, jstring arg1, jbyte arg2);
		void setByte(jint arg0, const QString &arg1, jbyte arg2);
		void setChar(jint arg0, jstring arg1, jchar arg2);
		void setChar(jint arg0, const QString &arg1, jchar arg2);
		void setCharSequence(jint arg0, jstring arg1, jstring arg2);
		void setCharSequence(jint arg0, const QString &arg1, const QString &arg2);
		void setChronometer(jint arg0, jlong arg1, jstring arg2, jboolean arg3);
		void setChronometer(jint arg0, jlong arg1, const QString &arg2, jboolean arg3);
		void setChronometerCountDown(jint arg0, jboolean arg1);
		void setContentDescription(jint arg0, jstring arg1);
		void setContentDescription(jint arg0, const QString &arg1);
		void setDisplayedChild(jint arg0, jint arg1);
		void setDouble(jint arg0, jstring arg1, jdouble arg2);
		void setDouble(jint arg0, const QString &arg1, jdouble arg2);
		void setEmptyView(jint arg0, jint arg1);
		void setFloat(jint arg0, jstring arg1, jfloat arg2);
		void setFloat(jint arg0, const QString &arg1, jfloat arg2);
		void setIcon(jint arg0, jstring arg1, __jni_impl::android::graphics::drawable::Icon arg2);
		void setIcon(jint arg0, const QString &arg1, __jni_impl::android::graphics::drawable::Icon arg2);
		void setImageViewBitmap(jint arg0, __jni_impl::android::graphics::Bitmap arg1);
		void setImageViewIcon(jint arg0, __jni_impl::android::graphics::drawable::Icon arg1);
		void setImageViewResource(jint arg0, jint arg1);
		void setImageViewUri(jint arg0, __jni_impl::android::net::Uri arg1);
		void setInt(jint arg0, jstring arg1, jint arg2);
		void setInt(jint arg0, const QString &arg1, jint arg2);
		void setIntent(jint arg0, jstring arg1, __jni_impl::android::content::Intent arg2);
		void setIntent(jint arg0, const QString &arg1, __jni_impl::android::content::Intent arg2);
		void setLabelFor(jint arg0, jint arg1);
		void setLightBackgroundLayoutId(jint arg0);
		void setLong(jint arg0, jstring arg1, jlong arg2);
		void setLong(jint arg0, const QString &arg1, jlong arg2);
		void setOnClickFillInIntent(jint arg0, __jni_impl::android::content::Intent arg1);
		void setOnClickPendingIntent(jint arg0, __jni_impl::android::app::PendingIntent arg1);
		void setOnClickResponse(jint arg0, __jni_impl::android::widget::RemoteViews_RemoteResponse arg1);
		void setPendingIntentTemplate(jint arg0, __jni_impl::android::app::PendingIntent arg1);
		void setProgressBar(jint arg0, jint arg1, jint arg2, jboolean arg3);
		void setRelativeScrollPosition(jint arg0, jint arg1);
		void setRemoteAdapter(jint arg0, __jni_impl::android::content::Intent arg1);
		void setRemoteAdapter(jint arg0, jint arg1, __jni_impl::android::content::Intent arg2);
		void setScrollPosition(jint arg0, jint arg1);
		void setShort(jint arg0, jstring arg1, jshort arg2);
		void setShort(jint arg0, const QString &arg1, jshort arg2);
		void setString(jint arg0, jstring arg1, jstring arg2);
		void setString(jint arg0, const QString &arg1, const QString &arg2);
		void setTextColor(jint arg0, jint arg1);
		void setTextViewCompoundDrawables(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void setTextViewCompoundDrawablesRelative(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void setTextViewText(jint arg0, jstring arg1);
		void setTextViewText(jint arg0, const QString &arg1);
		void setTextViewTextSize(jint arg0, jint arg1, jfloat arg2);
		void setUri(jint arg0, jstring arg1, __jni_impl::android::net::Uri arg2);
		void setUri(jint arg0, const QString &arg1, __jni_impl::android::net::Uri arg2);
		void setViewPadding(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void setViewVisibility(jint arg0, jint arg1);
		void showNext(jint arg0);
		void showPrevious(jint arg0);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::widget

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
#include "RemoteViews_RemoteResponse.hpp"

namespace __jni_impl::android::widget
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
	
	// Constructors
	void RemoteViews::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RemoteViews",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void RemoteViews::__constructor(__jni_impl::android::widget::RemoteViews arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RemoteViews",
			"(Landroid/widget/RemoteViews;)V",
			arg0.__jniObject().object()
		);
	}
	void RemoteViews::__constructor(__jni_impl::android::widget::RemoteViews arg0, __jni_impl::android::widget::RemoteViews arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RemoteViews",
			"(Landroid/widget/RemoteViews;Landroid/widget/RemoteViews;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteViews::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RemoteViews",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void RemoteViews::__constructor(const QString &arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RemoteViews",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
	void RemoteViews::addView(jint arg0, __jni_impl::android::widget::RemoteViews arg1)
	{
		__thiz.callMethod<void>(
			"addView",
			"(ILandroid/widget/RemoteViews;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject RemoteViews::apply(__jni_impl::android::content::Context arg0, __jni_impl::android::view::ViewGroup arg1)
	{
		return __thiz.callObjectMethod(
			"apply",
			"(Landroid/content/Context;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject RemoteViews::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/widget/RemoteViews;"
		);
	}
	jint RemoteViews::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint RemoteViews::getLayoutId()
	{
		return __thiz.callMethod<jint>(
			"getLayoutId",
			"()I"
		);
	}
	jstring RemoteViews::getPackage()
	{
		return __thiz.callObjectMethod(
			"getPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean RemoteViews::onLoadClass(jclass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onLoadClass",
			"(Ljava/lang/Class;)Z",
			arg0
		);
	}
	void RemoteViews::reapply(__jni_impl::android::content::Context arg0, __jni_impl::android::view::View arg1)
	{
		__thiz.callMethod<void>(
			"reapply",
			"(Landroid/content/Context;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteViews::removeAllViews(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeAllViews",
			"(I)V",
			arg0
		);
	}
	void RemoteViews::setAccessibilityTraversalAfter(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setAccessibilityTraversalAfter",
			"(II)V",
			arg0,
			arg1
		);
	}
	void RemoteViews::setAccessibilityTraversalBefore(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setAccessibilityTraversalBefore",
			"(II)V",
			arg0,
			arg1
		);
	}
	void RemoteViews::setBitmap(jint arg0, jstring arg1, __jni_impl::android::graphics::Bitmap arg2)
	{
		__thiz.callMethod<void>(
			"setBitmap",
			"(ILjava/lang/String;Landroid/graphics/Bitmap;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void RemoteViews::setBitmap(jint arg0, const QString &arg1, __jni_impl::android::graphics::Bitmap arg2)
	{
		__thiz.callMethod<void>(
			"setBitmap",
			"(ILjava/lang/String;Landroid/graphics/Bitmap;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void RemoteViews::setBoolean(jint arg0, jstring arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"setBoolean",
			"(ILjava/lang/String;Z)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RemoteViews::setBoolean(jint arg0, const QString &arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"setBoolean",
			"(ILjava/lang/String;Z)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	void RemoteViews::setBundle(jint arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"setBundle",
			"(ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void RemoteViews::setBundle(jint arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"setBundle",
			"(ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void RemoteViews::setByte(jint arg0, jstring arg1, jbyte arg2)
	{
		__thiz.callMethod<void>(
			"setByte",
			"(ILjava/lang/String;B)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RemoteViews::setByte(jint arg0, const QString &arg1, jbyte arg2)
	{
		__thiz.callMethod<void>(
			"setByte",
			"(ILjava/lang/String;B)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	void RemoteViews::setChar(jint arg0, jstring arg1, jchar arg2)
	{
		__thiz.callMethod<void>(
			"setChar",
			"(ILjava/lang/String;C)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RemoteViews::setChar(jint arg0, const QString &arg1, jchar arg2)
	{
		__thiz.callMethod<void>(
			"setChar",
			"(ILjava/lang/String;C)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	void RemoteViews::setCharSequence(jint arg0, jstring arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"setCharSequence",
			"(ILjava/lang/String;Ljava/lang/CharSequence;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RemoteViews::setCharSequence(jint arg0, const QString &arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"setCharSequence",
			"(ILjava/lang/String;Ljava/lang/CharSequence;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void RemoteViews::setChronometer(jint arg0, jlong arg1, jstring arg2, jboolean arg3)
	{
		__thiz.callMethod<void>(
			"setChronometer",
			"(IJLjava/lang/String;Z)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void RemoteViews::setChronometer(jint arg0, jlong arg1, const QString &arg2, jboolean arg3)
	{
		__thiz.callMethod<void>(
			"setChronometer",
			"(IJLjava/lang/String;Z)V",
			arg0,
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3
		);
	}
	void RemoteViews::setChronometerCountDown(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setChronometerCountDown",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void RemoteViews::setContentDescription(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setContentDescription",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1
		);
	}
	void RemoteViews::setContentDescription(jint arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"setContentDescription",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void RemoteViews::setDisplayedChild(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setDisplayedChild",
			"(II)V",
			arg0,
			arg1
		);
	}
	void RemoteViews::setDouble(jint arg0, jstring arg1, jdouble arg2)
	{
		__thiz.callMethod<void>(
			"setDouble",
			"(ILjava/lang/String;D)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RemoteViews::setDouble(jint arg0, const QString &arg1, jdouble arg2)
	{
		__thiz.callMethod<void>(
			"setDouble",
			"(ILjava/lang/String;D)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	void RemoteViews::setEmptyView(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setEmptyView",
			"(II)V",
			arg0,
			arg1
		);
	}
	void RemoteViews::setFloat(jint arg0, jstring arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"setFloat",
			"(ILjava/lang/String;F)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RemoteViews::setFloat(jint arg0, const QString &arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"setFloat",
			"(ILjava/lang/String;F)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	void RemoteViews::setIcon(jint arg0, jstring arg1, __jni_impl::android::graphics::drawable::Icon arg2)
	{
		__thiz.callMethod<void>(
			"setIcon",
			"(ILjava/lang/String;Landroid/graphics/drawable/Icon;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void RemoteViews::setIcon(jint arg0, const QString &arg1, __jni_impl::android::graphics::drawable::Icon arg2)
	{
		__thiz.callMethod<void>(
			"setIcon",
			"(ILjava/lang/String;Landroid/graphics/drawable/Icon;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void RemoteViews::setImageViewBitmap(jint arg0, __jni_impl::android::graphics::Bitmap arg1)
	{
		__thiz.callMethod<void>(
			"setImageViewBitmap",
			"(ILandroid/graphics/Bitmap;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void RemoteViews::setImageViewIcon(jint arg0, __jni_impl::android::graphics::drawable::Icon arg1)
	{
		__thiz.callMethod<void>(
			"setImageViewIcon",
			"(ILandroid/graphics/drawable/Icon;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void RemoteViews::setImageViewResource(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setImageViewResource",
			"(II)V",
			arg0,
			arg1
		);
	}
	void RemoteViews::setImageViewUri(jint arg0, __jni_impl::android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"setImageViewUri",
			"(ILandroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void RemoteViews::setInt(jint arg0, jstring arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setInt",
			"(ILjava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RemoteViews::setInt(jint arg0, const QString &arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setInt",
			"(ILjava/lang/String;I)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	void RemoteViews::setIntent(jint arg0, jstring arg1, __jni_impl::android::content::Intent arg2)
	{
		__thiz.callMethod<void>(
			"setIntent",
			"(ILjava/lang/String;Landroid/content/Intent;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void RemoteViews::setIntent(jint arg0, const QString &arg1, __jni_impl::android::content::Intent arg2)
	{
		__thiz.callMethod<void>(
			"setIntent",
			"(ILjava/lang/String;Landroid/content/Intent;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void RemoteViews::setLabelFor(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setLabelFor",
			"(II)V",
			arg0,
			arg1
		);
	}
	void RemoteViews::setLightBackgroundLayoutId(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLightBackgroundLayoutId",
			"(I)V",
			arg0
		);
	}
	void RemoteViews::setLong(jint arg0, jstring arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"setLong",
			"(ILjava/lang/String;J)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RemoteViews::setLong(jint arg0, const QString &arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"setLong",
			"(ILjava/lang/String;J)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	void RemoteViews::setOnClickFillInIntent(jint arg0, __jni_impl::android::content::Intent arg1)
	{
		__thiz.callMethod<void>(
			"setOnClickFillInIntent",
			"(ILandroid/content/Intent;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void RemoteViews::setOnClickPendingIntent(jint arg0, __jni_impl::android::app::PendingIntent arg1)
	{
		__thiz.callMethod<void>(
			"setOnClickPendingIntent",
			"(ILandroid/app/PendingIntent;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void RemoteViews::setOnClickResponse(jint arg0, __jni_impl::android::widget::RemoteViews_RemoteResponse arg1)
	{
		__thiz.callMethod<void>(
			"setOnClickResponse",
			"(ILandroid/widget/RemoteViews$RemoteResponse;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void RemoteViews::setPendingIntentTemplate(jint arg0, __jni_impl::android::app::PendingIntent arg1)
	{
		__thiz.callMethod<void>(
			"setPendingIntentTemplate",
			"(ILandroid/app/PendingIntent;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void RemoteViews::setProgressBar(jint arg0, jint arg1, jint arg2, jboolean arg3)
	{
		__thiz.callMethod<void>(
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
		__thiz.callMethod<void>(
			"setRelativeScrollPosition",
			"(II)V",
			arg0,
			arg1
		);
	}
	void RemoteViews::setRemoteAdapter(jint arg0, __jni_impl::android::content::Intent arg1)
	{
		__thiz.callMethod<void>(
			"setRemoteAdapter",
			"(ILandroid/content/Intent;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void RemoteViews::setRemoteAdapter(jint arg0, jint arg1, __jni_impl::android::content::Intent arg2)
	{
		__thiz.callMethod<void>(
			"setRemoteAdapter",
			"(IILandroid/content/Intent;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void RemoteViews::setScrollPosition(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setScrollPosition",
			"(II)V",
			arg0,
			arg1
		);
	}
	void RemoteViews::setShort(jint arg0, jstring arg1, jshort arg2)
	{
		__thiz.callMethod<void>(
			"setShort",
			"(ILjava/lang/String;S)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RemoteViews::setShort(jint arg0, const QString &arg1, jshort arg2)
	{
		__thiz.callMethod<void>(
			"setShort",
			"(ILjava/lang/String;S)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	void RemoteViews::setString(jint arg0, jstring arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"setString",
			"(ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RemoteViews::setString(jint arg0, const QString &arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"setString",
			"(ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void RemoteViews::setTextColor(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setTextColor",
			"(II)V",
			arg0,
			arg1
		);
	}
	void RemoteViews::setTextViewCompoundDrawables(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz.callMethod<void>(
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
		__thiz.callMethod<void>(
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
		__thiz.callMethod<void>(
			"setTextViewText",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1
		);
	}
	void RemoteViews::setTextViewText(jint arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"setTextViewText",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void RemoteViews::setTextViewTextSize(jint arg0, jint arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"setTextViewTextSize",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RemoteViews::setUri(jint arg0, jstring arg1, __jni_impl::android::net::Uri arg2)
	{
		__thiz.callMethod<void>(
			"setUri",
			"(ILjava/lang/String;Landroid/net/Uri;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void RemoteViews::setUri(jint arg0, const QString &arg1, __jni_impl::android::net::Uri arg2)
	{
		__thiz.callMethod<void>(
			"setUri",
			"(ILjava/lang/String;Landroid/net/Uri;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void RemoteViews::setViewPadding(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz.callMethod<void>(
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
		__thiz.callMethod<void>(
			"setViewVisibility",
			"(II)V",
			arg0,
			arg1
		);
	}
	void RemoteViews::showNext(jint arg0)
	{
		__thiz.callMethod<void>(
			"showNext",
			"(I)V",
			arg0
		);
	}
	void RemoteViews::showPrevious(jint arg0)
	{
		__thiz.callMethod<void>(
			"showPrevious",
			"(I)V",
			arg0
		);
	}
	void RemoteViews::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class RemoteViews : public __jni_impl::android::widget::RemoteViews
	{
	public:
		RemoteViews(QAndroidJniObject obj) { __thiz = obj; }
		RemoteViews(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		RemoteViews(__jni_impl::android::widget::RemoteViews arg0)
		{
			__constructor(
				arg0);
		}
		RemoteViews(__jni_impl::android::widget::RemoteViews arg0, __jni_impl::android::widget::RemoteViews arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		RemoteViews(jstring arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::widget

