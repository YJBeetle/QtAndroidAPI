#include "./Resources.hpp"
#include "./TypedArray.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../util/TypedValue.hpp"
#include "./Resources_Theme.hpp"

namespace android::content::res
{
	// Fields
	
	Resources_Theme::Resources_Theme(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void Resources_Theme::applyStyle(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"applyStyle",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void Resources_Theme::dump(jint arg0, jstring arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"dump",
			"(ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Resources_Theme::dump(jint arg0, const QString &arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"dump",
			"(ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	jintArray Resources_Theme::getAttributeResolutionStack(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"getAttributeResolutionStack",
			"(III)[I",
			arg0,
			arg1,
			arg2
		).object<jintArray>();
	}
	jint Resources_Theme::getChangingConfigurations()
	{
		return __thiz.callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	QAndroidJniObject Resources_Theme::getDrawable(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	jint Resources_Theme::getExplicitStyle(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"getExplicitStyle",
			"(Landroid/util/AttributeSet;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Resources_Theme::getResources()
	{
		return __thiz.callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	QAndroidJniObject Resources_Theme::obtainStyledAttributes(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"obtainStyledAttributes",
			"([I)Landroid/content/res/TypedArray;",
			arg0
		);
	}
	QAndroidJniObject Resources_Theme::obtainStyledAttributes(jint arg0, jintArray arg1)
	{
		return __thiz.callObjectMethod(
			"obtainStyledAttributes",
			"(I[I)Landroid/content/res/TypedArray;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Resources_Theme::obtainStyledAttributes(__JniBaseClass arg0, jintArray arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"obtainStyledAttributes",
			"(Landroid/util/AttributeSet;[III)Landroid/content/res/TypedArray;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void Resources_Theme::rebase()
	{
		__thiz.callMethod<void>(
			"rebase",
			"()V"
		);
	}
	jboolean Resources_Theme::resolveAttribute(jint arg0, android::util::TypedValue arg1, jboolean arg2)
	{
		return __thiz.callMethod<jboolean>(
			"resolveAttribute",
			"(ILandroid/util/TypedValue;Z)Z",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Resources_Theme::setTo(android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"setTo",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::content::res

