#pragma once

#ifndef ANDROID_APP_NOTIFICATION_WEARABLEEXTENDER
#define ANDROID_APP_NOTIFICATION_WEARABLEEXTENDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class Notification;
}
namespace __jni_impl::android::app
{
	class Notification_Action;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::app
{
	class Notification_Builder;
}

namespace __jni_impl::android::app
{
	class Notification_WearableExtender : public __JniBaseClass
	{
	public:
		// Fields
		static jint SCREEN_TIMEOUT_LONG();
		static jint SCREEN_TIMEOUT_SHORT();
		static jint SIZE_DEFAULT();
		static jint SIZE_FULL_SCREEN();
		static jint SIZE_LARGE();
		static jint SIZE_MEDIUM();
		static jint SIZE_SMALL();
		static jint SIZE_XSMALL();
		static jint UNSET_ACTION_INDEX();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::app::Notification arg0);
		
		// Methods
		QAndroidJniObject clone();
		QAndroidJniObject getActions();
		QAndroidJniObject setGravity(jint arg0);
		jint getGravity();
		QAndroidJniObject addAction(__jni_impl::android::app::Notification_Action arg0);
		QAndroidJniObject setBackground(__jni_impl::android::graphics::Bitmap arg0);
		QAndroidJniObject getBackground();
		QAndroidJniObject addActions(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject clearActions();
		QAndroidJniObject setDisplayIntent(__jni_impl::android::app::PendingIntent arg0);
		QAndroidJniObject getDisplayIntent();
		QAndroidJniObject addPage(__jni_impl::android::app::Notification arg0);
		QAndroidJniObject addPages(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject clearPages();
		QAndroidJniObject getPages();
		QAndroidJniObject setContentIcon(jint arg0);
		jint getContentIcon();
		QAndroidJniObject setContentIconGravity(jint arg0);
		jint getContentIconGravity();
		QAndroidJniObject setContentAction(jint arg0);
		jint getContentAction();
		QAndroidJniObject setCustomSizePreset(jint arg0);
		jint getCustomSizePreset();
		QAndroidJniObject setCustomContentHeight(jint arg0);
		jint getCustomContentHeight();
		QAndroidJniObject setStartScrollBottom(jboolean arg0);
		jboolean getStartScrollBottom();
		QAndroidJniObject setContentIntentAvailableOffline(jboolean arg0);
		jboolean getContentIntentAvailableOffline();
		QAndroidJniObject setHintHideIcon(jboolean arg0);
		jboolean getHintHideIcon();
		QAndroidJniObject setHintShowBackgroundOnly(jboolean arg0);
		jboolean getHintShowBackgroundOnly();
		QAndroidJniObject setHintAvoidBackgroundClipping(jboolean arg0);
		jboolean getHintAvoidBackgroundClipping();
		QAndroidJniObject setHintScreenTimeout(jint arg0);
		jint getHintScreenTimeout();
		QAndroidJniObject setHintAmbientBigPicture(jboolean arg0);
		jboolean getHintAmbientBigPicture();
		QAndroidJniObject setHintContentIntentLaunchesActivity(jboolean arg0);
		jboolean getHintContentIntentLaunchesActivity();
		QAndroidJniObject setDismissalId(jstring arg0);
		jstring getDismissalId();
		QAndroidJniObject setBridgeTag(jstring arg0);
		jstring getBridgeTag();
		QAndroidJniObject extend(__jni_impl::android::app::Notification_Builder arg0);
	};
} // namespace __jni_impl::android::app

#include "Notification.hpp"
#include "Notification_Action.hpp"
#include "../graphics/Bitmap.hpp"
#include "PendingIntent.hpp"
#include "Notification_Builder.hpp"

namespace __jni_impl::android::app
{
	// Fields
	jint Notification_WearableExtender::SCREEN_TIMEOUT_LONG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$WearableExtender",
			"SCREEN_TIMEOUT_LONG"
		);
	}
	jint Notification_WearableExtender::SCREEN_TIMEOUT_SHORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$WearableExtender",
			"SCREEN_TIMEOUT_SHORT"
		);
	}
	jint Notification_WearableExtender::SIZE_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$WearableExtender",
			"SIZE_DEFAULT"
		);
	}
	jint Notification_WearableExtender::SIZE_FULL_SCREEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$WearableExtender",
			"SIZE_FULL_SCREEN"
		);
	}
	jint Notification_WearableExtender::SIZE_LARGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$WearableExtender",
			"SIZE_LARGE"
		);
	}
	jint Notification_WearableExtender::SIZE_MEDIUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$WearableExtender",
			"SIZE_MEDIUM"
		);
	}
	jint Notification_WearableExtender::SIZE_SMALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$WearableExtender",
			"SIZE_SMALL"
		);
	}
	jint Notification_WearableExtender::SIZE_XSMALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$WearableExtender",
			"SIZE_XSMALL"
		);
	}
	jint Notification_WearableExtender::UNSET_ACTION_INDEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$WearableExtender",
			"UNSET_ACTION_INDEX"
		);
	}
	
	// Constructors
	void Notification_WearableExtender::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$WearableExtender",
			"()V");
	}
	void Notification_WearableExtender::__constructor(__jni_impl::android::app::Notification arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$WearableExtender",
			"(Landroid/app/Notification;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject Notification_WearableExtender::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/app/Notification$WearableExtender;"
		);
	}
	QAndroidJniObject Notification_WearableExtender::getActions()
	{
		return __thiz.callObjectMethod(
			"getActions",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Notification_WearableExtender::setGravity(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setGravity",
			"(I)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	jint Notification_WearableExtender::getGravity()
	{
		return __thiz.callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	QAndroidJniObject Notification_WearableExtender::addAction(__jni_impl::android::app::Notification_Action arg0)
	{
		return __thiz.callObjectMethod(
			"addAction",
			"(Landroid/app/Notification$Action;)Landroid/app/Notification$WearableExtender;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_WearableExtender::setBackground(__jni_impl::android::graphics::Bitmap arg0)
	{
		return __thiz.callObjectMethod(
			"setBackground",
			"(Landroid/graphics/Bitmap;)Landroid/app/Notification$WearableExtender;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_WearableExtender::getBackground()
	{
		return __thiz.callObjectMethod(
			"getBackground",
			"()Landroid/graphics/Bitmap;"
		);
	}
	QAndroidJniObject Notification_WearableExtender::addActions(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"addActions",
			"(Ljava/util/List;)Landroid/app/Notification$WearableExtender;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_WearableExtender::clearActions()
	{
		return __thiz.callObjectMethod(
			"clearActions",
			"()Landroid/app/Notification$WearableExtender;"
		);
	}
	QAndroidJniObject Notification_WearableExtender::setDisplayIntent(__jni_impl::android::app::PendingIntent arg0)
	{
		return __thiz.callObjectMethod(
			"setDisplayIntent",
			"(Landroid/app/PendingIntent;)Landroid/app/Notification$WearableExtender;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_WearableExtender::getDisplayIntent()
	{
		return __thiz.callObjectMethod(
			"getDisplayIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	QAndroidJniObject Notification_WearableExtender::addPage(__jni_impl::android::app::Notification arg0)
	{
		return __thiz.callObjectMethod(
			"addPage",
			"(Landroid/app/Notification;)Landroid/app/Notification$WearableExtender;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_WearableExtender::addPages(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"addPages",
			"(Ljava/util/List;)Landroid/app/Notification$WearableExtender;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_WearableExtender::clearPages()
	{
		return __thiz.callObjectMethod(
			"clearPages",
			"()Landroid/app/Notification$WearableExtender;"
		);
	}
	QAndroidJniObject Notification_WearableExtender::getPages()
	{
		return __thiz.callObjectMethod(
			"getPages",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Notification_WearableExtender::setContentIcon(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setContentIcon",
			"(I)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	jint Notification_WearableExtender::getContentIcon()
	{
		return __thiz.callMethod<jint>(
			"getContentIcon",
			"()I"
		);
	}
	QAndroidJniObject Notification_WearableExtender::setContentIconGravity(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setContentIconGravity",
			"(I)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	jint Notification_WearableExtender::getContentIconGravity()
	{
		return __thiz.callMethod<jint>(
			"getContentIconGravity",
			"()I"
		);
	}
	QAndroidJniObject Notification_WearableExtender::setContentAction(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setContentAction",
			"(I)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	jint Notification_WearableExtender::getContentAction()
	{
		return __thiz.callMethod<jint>(
			"getContentAction",
			"()I"
		);
	}
	QAndroidJniObject Notification_WearableExtender::setCustomSizePreset(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setCustomSizePreset",
			"(I)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	jint Notification_WearableExtender::getCustomSizePreset()
	{
		return __thiz.callMethod<jint>(
			"getCustomSizePreset",
			"()I"
		);
	}
	QAndroidJniObject Notification_WearableExtender::setCustomContentHeight(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setCustomContentHeight",
			"(I)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	jint Notification_WearableExtender::getCustomContentHeight()
	{
		return __thiz.callMethod<jint>(
			"getCustomContentHeight",
			"()I"
		);
	}
	QAndroidJniObject Notification_WearableExtender::setStartScrollBottom(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setStartScrollBottom",
			"(Z)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	jboolean Notification_WearableExtender::getStartScrollBottom()
	{
		return __thiz.callMethod<jboolean>(
			"getStartScrollBottom",
			"()Z"
		);
	}
	QAndroidJniObject Notification_WearableExtender::setContentIntentAvailableOffline(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setContentIntentAvailableOffline",
			"(Z)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	jboolean Notification_WearableExtender::getContentIntentAvailableOffline()
	{
		return __thiz.callMethod<jboolean>(
			"getContentIntentAvailableOffline",
			"()Z"
		);
	}
	QAndroidJniObject Notification_WearableExtender::setHintHideIcon(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setHintHideIcon",
			"(Z)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	jboolean Notification_WearableExtender::getHintHideIcon()
	{
		return __thiz.callMethod<jboolean>(
			"getHintHideIcon",
			"()Z"
		);
	}
	QAndroidJniObject Notification_WearableExtender::setHintShowBackgroundOnly(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setHintShowBackgroundOnly",
			"(Z)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	jboolean Notification_WearableExtender::getHintShowBackgroundOnly()
	{
		return __thiz.callMethod<jboolean>(
			"getHintShowBackgroundOnly",
			"()Z"
		);
	}
	QAndroidJniObject Notification_WearableExtender::setHintAvoidBackgroundClipping(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setHintAvoidBackgroundClipping",
			"(Z)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	jboolean Notification_WearableExtender::getHintAvoidBackgroundClipping()
	{
		return __thiz.callMethod<jboolean>(
			"getHintAvoidBackgroundClipping",
			"()Z"
		);
	}
	QAndroidJniObject Notification_WearableExtender::setHintScreenTimeout(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setHintScreenTimeout",
			"(I)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	jint Notification_WearableExtender::getHintScreenTimeout()
	{
		return __thiz.callMethod<jint>(
			"getHintScreenTimeout",
			"()I"
		);
	}
	QAndroidJniObject Notification_WearableExtender::setHintAmbientBigPicture(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setHintAmbientBigPicture",
			"(Z)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	jboolean Notification_WearableExtender::getHintAmbientBigPicture()
	{
		return __thiz.callMethod<jboolean>(
			"getHintAmbientBigPicture",
			"()Z"
		);
	}
	QAndroidJniObject Notification_WearableExtender::setHintContentIntentLaunchesActivity(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setHintContentIntentLaunchesActivity",
			"(Z)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	jboolean Notification_WearableExtender::getHintContentIntentLaunchesActivity()
	{
		return __thiz.callMethod<jboolean>(
			"getHintContentIntentLaunchesActivity",
			"()Z"
		);
	}
	QAndroidJniObject Notification_WearableExtender::setDismissalId(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setDismissalId",
			"(Ljava/lang/String;)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	jstring Notification_WearableExtender::getDismissalId()
	{
		return __thiz.callObjectMethod(
			"getDismissalId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Notification_WearableExtender::setBridgeTag(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setBridgeTag",
			"(Ljava/lang/String;)Landroid/app/Notification$WearableExtender;",
			arg0
		);
	}
	jstring Notification_WearableExtender::getBridgeTag()
	{
		return __thiz.callObjectMethod(
			"getBridgeTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Notification_WearableExtender::extend(__jni_impl::android::app::Notification_Builder arg0)
	{
		return __thiz.callObjectMethod(
			"extend",
			"(Landroid/app/Notification$Builder;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Notification_WearableExtender : public __jni_impl::android::app::Notification_WearableExtender
	{
	public:
		Notification_WearableExtender(QAndroidJniObject obj) { __thiz = obj; }
		Notification_WearableExtender()
		{
			__constructor();
		}
		Notification_WearableExtender(__jni_impl::android::app::Notification arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_NOTIFICATION_WEARABLEEXTENDER

