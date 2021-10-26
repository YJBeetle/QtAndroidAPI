#pragma once

#ifndef ANDROID_APP_NOTIFICATION_BUBBLEMETADATA_BUILDER
#define ANDROID_APP_NOTIFICATION_BUBBLEMETADATA_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class Notification_BubbleMetadata;
}
namespace __jni_impl::android::graphics::drawable
{
	class Icon;
}
namespace __jni_impl::android::app
{
	class PendingIntent;
}

namespace __jni_impl::android::app
{
	class Notification_BubbleMetadata_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setDesiredHeight(jint arg0);
		QAndroidJniObject setDesiredHeightResId(jint arg0);
		QAndroidJniObject setAutoExpandBubble(jboolean arg0);
		QAndroidJniObject setSuppressNotification(jboolean arg0);
		QAndroidJniObject setIcon(__jni_impl::android::graphics::drawable::Icon arg0);
		QAndroidJniObject setIntent(__jni_impl::android::app::PendingIntent arg0);
		QAndroidJniObject setDeleteIntent(__jni_impl::android::app::PendingIntent arg0);
	};
} // namespace __jni_impl::android::app

#include "Notification_BubbleMetadata.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "PendingIntent.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void Notification_BubbleMetadata_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$BubbleMetadata$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Notification_BubbleMetadata_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/app/Notification$BubbleMetadata;"
		);
	}
	QAndroidJniObject Notification_BubbleMetadata_Builder::setDesiredHeight(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setDesiredHeight",
			"(I)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_BubbleMetadata_Builder::setDesiredHeightResId(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setDesiredHeightResId",
			"(I)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_BubbleMetadata_Builder::setAutoExpandBubble(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setAutoExpandBubble",
			"(Z)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_BubbleMetadata_Builder::setSuppressNotification(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setSuppressNotification",
			"(Z)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_BubbleMetadata_Builder::setIcon(__jni_impl::android::graphics::drawable::Icon arg0)
	{
		return __thiz.callObjectMethod(
			"setIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_BubbleMetadata_Builder::setIntent(__jni_impl::android::app::PendingIntent arg0)
	{
		return __thiz.callObjectMethod(
			"setIntent",
			"(Landroid/app/PendingIntent;)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_BubbleMetadata_Builder::setDeleteIntent(__jni_impl::android::app::PendingIntent arg0)
	{
		return __thiz.callObjectMethod(
			"setDeleteIntent",
			"(Landroid/app/PendingIntent;)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Notification_BubbleMetadata_Builder : public __jni_impl::android::app::Notification_BubbleMetadata_Builder
	{
	public:
		Notification_BubbleMetadata_Builder(QAndroidJniObject obj) { __thiz = obj; }
		Notification_BubbleMetadata_Builder()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_NOTIFICATION_BUBBLEMETADATA_BUILDER

