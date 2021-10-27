#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../view/View.hpp"
#include "./QuickContactBadge.hpp"

namespace android::widget
{
	// Fields
	
	QuickContactBadge::QuickContactBadge(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	QuickContactBadge::QuickContactBadge(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.QuickContactBadge",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	QuickContactBadge::QuickContactBadge(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.QuickContactBadge",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QuickContactBadge::QuickContactBadge(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.QuickContactBadge",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QuickContactBadge::QuickContactBadge(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
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
	void QuickContactBadge::assignContactFromEmail(jstring arg0, jboolean arg1, android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"assignContactFromEmail",
			"(Ljava/lang/String;ZLandroid/os/Bundle;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void QuickContactBadge::assignContactFromEmail(const QString &arg0, jboolean arg1, android::os::Bundle arg2)
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
	void QuickContactBadge::assignContactFromPhone(jstring arg0, jboolean arg1, android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"assignContactFromPhone",
			"(Ljava/lang/String;ZLandroid/os/Bundle;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void QuickContactBadge::assignContactFromPhone(const QString &arg0, jboolean arg1, android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"assignContactFromPhone",
			"(Ljava/lang/String;ZLandroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void QuickContactBadge::assignContactUri(android::net::Uri arg0)
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
	void QuickContactBadge::onClick(android::view::View arg0)
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
	void QuickContactBadge::setOverlay(android::graphics::drawable::Drawable arg0)
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
} // namespace android::widget

