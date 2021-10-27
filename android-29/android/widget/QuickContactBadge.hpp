#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "./ImageView.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::widget
{
	class QuickContactBadge : public __jni_impl::android::widget::ImageView
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		void assignContactFromEmail(jstring arg0, jboolean arg1);
		void assignContactFromEmail(const QString &arg0, jboolean arg1);
		void assignContactFromEmail(jstring arg0, jboolean arg1, __jni_impl::android::os::Bundle arg2);
		void assignContactFromEmail(const QString &arg0, jboolean arg1, __jni_impl::android::os::Bundle arg2);
		void assignContactFromPhone(jstring arg0, jboolean arg1);
		void assignContactFromPhone(const QString &arg0, jboolean arg1);
		void assignContactFromPhone(jstring arg0, jboolean arg1, __jni_impl::android::os::Bundle arg2);
		void assignContactFromPhone(const QString &arg0, jboolean arg1, __jni_impl::android::os::Bundle arg2);
		void assignContactUri(__jni_impl::android::net::Uri arg0);
		void drawableHotspotChanged(jfloat arg0, jfloat arg1);
		jstring getAccessibilityClassName();
		void onClick(__jni_impl::android::view::View arg0);
		void setExcludeMimes(jarray arg0);
		void setImageToDefault();
		void setMode(jint arg0);
		void setOverlay(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setPrioritizedMimeType(jstring arg0);
		void setPrioritizedMimeType(const QString &arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../view/View.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void QuickContactBadge::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.QuickContactBadge",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void QuickContactBadge::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.QuickContactBadge",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void QuickContactBadge::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.QuickContactBadge",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void QuickContactBadge::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.QuickContactBadge",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void QuickContactBadge::assignContactFromEmail(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"assignContactFromEmail",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void QuickContactBadge::assignContactFromEmail(const QString &arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"assignContactFromEmail",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void QuickContactBadge::assignContactFromEmail(jstring arg0, jboolean arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"assignContactFromEmail",
			"(Ljava/lang/String;ZLandroid/os/Bundle;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void QuickContactBadge::assignContactFromEmail(const QString &arg0, jboolean arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"assignContactFromEmail",
			"(Ljava/lang/String;ZLandroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void QuickContactBadge::assignContactFromPhone(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"assignContactFromPhone",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void QuickContactBadge::assignContactFromPhone(const QString &arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"assignContactFromPhone",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void QuickContactBadge::assignContactFromPhone(jstring arg0, jboolean arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"assignContactFromPhone",
			"(Ljava/lang/String;ZLandroid/os/Bundle;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void QuickContactBadge::assignContactFromPhone(const QString &arg0, jboolean arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"assignContactFromPhone",
			"(Ljava/lang/String;ZLandroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void QuickContactBadge::assignContactUri(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"assignContactUri",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void QuickContactBadge::drawableHotspotChanged(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	jstring QuickContactBadge::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void QuickContactBadge::onClick(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"onClick",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void QuickContactBadge::setExcludeMimes(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setExcludeMimes",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void QuickContactBadge::setImageToDefault()
	{
		__thiz.callMethod<void>(
			"setImageToDefault",
			"()V"
		);
	}
	void QuickContactBadge::setMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMode",
			"(I)V",
			arg0
		);
	}
	void QuickContactBadge::setOverlay(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setOverlay",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void QuickContactBadge::setPrioritizedMimeType(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPrioritizedMimeType",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void QuickContactBadge::setPrioritizedMimeType(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPrioritizedMimeType",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class QuickContactBadge : public __jni_impl::android::widget::QuickContactBadge
	{
	public:
		QuickContactBadge(QAndroidJniObject obj) { __thiz = obj; }
		QuickContactBadge(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		QuickContactBadge(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		QuickContactBadge(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		QuickContactBadge(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::widget

