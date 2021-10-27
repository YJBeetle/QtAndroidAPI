#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./Toolbar_LayoutParams.hpp"
#include "./Toolbar.hpp"

namespace android::widget
{
	// Fields
	
	Toolbar::Toolbar(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Toolbar::Toolbar(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Toolbar",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	Toolbar::Toolbar(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Toolbar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	Toolbar::Toolbar(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Toolbar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	Toolbar::Toolbar(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Toolbar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void Toolbar::collapseActionView()
	{
		__thiz.callMethod<void>(
			"collapseActionView",
			"()V"
		);
	}
	void Toolbar::dismissPopupMenus()
	{
		__thiz.callMethod<void>(
			"dismissPopupMenus",
			"()V"
		);
	}
	QAndroidJniObject Toolbar::generateLayoutParams(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/Toolbar$LayoutParams;",
			arg0.__jniObject().object()
		);
	}
	jstring Toolbar::getCollapseContentDescription()
	{
		return __thiz.callObjectMethod(
			"getCollapseContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject Toolbar::getCollapseIcon()
	{
		return __thiz.callObjectMethod(
			"getCollapseIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint Toolbar::getContentInsetEnd()
	{
		return __thiz.callMethod<jint>(
			"getContentInsetEnd",
			"()I"
		);
	}
	jint Toolbar::getContentInsetEndWithActions()
	{
		return __thiz.callMethod<jint>(
			"getContentInsetEndWithActions",
			"()I"
		);
	}
	jint Toolbar::getContentInsetLeft()
	{
		return __thiz.callMethod<jint>(
			"getContentInsetLeft",
			"()I"
		);
	}
	jint Toolbar::getContentInsetRight()
	{
		return __thiz.callMethod<jint>(
			"getContentInsetRight",
			"()I"
		);
	}
	jint Toolbar::getContentInsetStart()
	{
		return __thiz.callMethod<jint>(
			"getContentInsetStart",
			"()I"
		);
	}
	jint Toolbar::getContentInsetStartWithNavigation()
	{
		return __thiz.callMethod<jint>(
			"getContentInsetStartWithNavigation",
			"()I"
		);
	}
	jint Toolbar::getCurrentContentInsetEnd()
	{
		return __thiz.callMethod<jint>(
			"getCurrentContentInsetEnd",
			"()I"
		);
	}
	jint Toolbar::getCurrentContentInsetLeft()
	{
		return __thiz.callMethod<jint>(
			"getCurrentContentInsetLeft",
			"()I"
		);
	}
	jint Toolbar::getCurrentContentInsetRight()
	{
		return __thiz.callMethod<jint>(
			"getCurrentContentInsetRight",
			"()I"
		);
	}
	jint Toolbar::getCurrentContentInsetStart()
	{
		return __thiz.callMethod<jint>(
			"getCurrentContentInsetStart",
			"()I"
		);
	}
	QAndroidJniObject Toolbar::getLogo()
	{
		return __thiz.callObjectMethod(
			"getLogo",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jstring Toolbar::getLogoDescription()
	{
		return __thiz.callObjectMethod(
			"getLogoDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject Toolbar::getMenu()
	{
		return __thiz.callObjectMethod(
			"getMenu",
			"()Landroid/view/Menu;"
		);
	}
	jstring Toolbar::getNavigationContentDescription()
	{
		return __thiz.callObjectMethod(
			"getNavigationContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject Toolbar::getNavigationIcon()
	{
		return __thiz.callObjectMethod(
			"getNavigationIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject Toolbar::getOverflowIcon()
	{
		return __thiz.callObjectMethod(
			"getOverflowIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint Toolbar::getPopupTheme()
	{
		return __thiz.callMethod<jint>(
			"getPopupTheme",
			"()I"
		);
	}
	jstring Toolbar::getSubtitle()
	{
		return __thiz.callObjectMethod(
			"getSubtitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring Toolbar::getTitle()
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint Toolbar::getTitleMarginBottom()
	{
		return __thiz.callMethod<jint>(
			"getTitleMarginBottom",
			"()I"
		);
	}
	jint Toolbar::getTitleMarginEnd()
	{
		return __thiz.callMethod<jint>(
			"getTitleMarginEnd",
			"()I"
		);
	}
	jint Toolbar::getTitleMarginStart()
	{
		return __thiz.callMethod<jint>(
			"getTitleMarginStart",
			"()I"
		);
	}
	jint Toolbar::getTitleMarginTop()
	{
		return __thiz.callMethod<jint>(
			"getTitleMarginTop",
			"()I"
		);
	}
	jboolean Toolbar::hasExpandedActionView()
	{
		return __thiz.callMethod<jboolean>(
			"hasExpandedActionView",
			"()Z"
		);
	}
	jboolean Toolbar::hideOverflowMenu()
	{
		return __thiz.callMethod<jboolean>(
			"hideOverflowMenu",
			"()Z"
		);
	}
	void Toolbar::inflateMenu(jint arg0)
	{
		__thiz.callMethod<void>(
			"inflateMenu",
			"(I)V",
			arg0
		);
	}
	jboolean Toolbar::isOverflowMenuShowing()
	{
		return __thiz.callMethod<jboolean>(
			"isOverflowMenuShowing",
			"()Z"
		);
	}
	void Toolbar::onRtlPropertiesChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	jboolean Toolbar::onTouchEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void Toolbar::setCollapseContentDescription(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCollapseContentDescription",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setCollapseContentDescription(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setCollapseContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Toolbar::setCollapseContentDescription(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setCollapseContentDescription",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Toolbar::setCollapseIcon(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setCollapseIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void Toolbar::setCollapseIcon(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCollapseIcon",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setContentInsetEndWithActions(jint arg0)
	{
		__thiz.callMethod<void>(
			"setContentInsetEndWithActions",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setContentInsetStartWithNavigation(jint arg0)
	{
		__thiz.callMethod<void>(
			"setContentInsetStartWithNavigation",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setContentInsetsAbsolute(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setContentInsetsAbsolute",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Toolbar::setContentInsetsRelative(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setContentInsetsRelative",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Toolbar::setLogo(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setLogo",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void Toolbar::setLogo(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLogo",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setLogoDescription(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLogoDescription",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setLogoDescription(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setLogoDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Toolbar::setLogoDescription(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setLogoDescription",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Toolbar::setNavigationContentDescription(jint arg0)
	{
		__thiz.callMethod<void>(
			"setNavigationContentDescription",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setNavigationContentDescription(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setNavigationContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Toolbar::setNavigationContentDescription(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setNavigationContentDescription",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Toolbar::setNavigationIcon(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setNavigationIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void Toolbar::setNavigationIcon(jint arg0)
	{
		__thiz.callMethod<void>(
			"setNavigationIcon",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setNavigationOnClickListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setNavigationOnClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Toolbar::setOnMenuItemClickListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnMenuItemClickListener",
			"(Landroid/widget/Toolbar$OnMenuItemClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Toolbar::setOverflowIcon(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setOverflowIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void Toolbar::setPopupTheme(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPopupTheme",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setSubtitle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSubtitle",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setSubtitle(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Toolbar::setSubtitle(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Toolbar::setSubtitleTextAppearance(android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setSubtitleTextAppearance",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Toolbar::setSubtitleTextColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSubtitleTextColor",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setTitle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setTitle(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Toolbar::setTitle(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Toolbar::setTitleMargin(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setTitleMargin",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Toolbar::setTitleMarginBottom(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTitleMarginBottom",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setTitleMarginEnd(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTitleMarginEnd",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setTitleMarginStart(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTitleMarginStart",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setTitleMarginTop(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTitleMarginTop",
			"(I)V",
			arg0
		);
	}
	void Toolbar::setTitleTextAppearance(android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setTitleTextAppearance",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Toolbar::setTitleTextColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTitleTextColor",
			"(I)V",
			arg0
		);
	}
	jboolean Toolbar::showOverflowMenu()
	{
		return __thiz.callMethod<jboolean>(
			"showOverflowMenu",
			"()Z"
		);
	}
} // namespace android::widget

