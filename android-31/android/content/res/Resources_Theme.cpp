#include "./Resources.hpp"
#include "./TypedArray.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../util/TypedValue.hpp"
#include "./Resources_Theme.hpp"

namespace android::content::res
{
	// Fields
	
	// QAndroidJniObject forward
	Resources_Theme::Resources_Theme(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void Resources_Theme::applyStyle(jint arg0, jboolean arg1)
	{
		callMethod<void>(
			"applyStyle",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void Resources_Theme::dump(jint arg0, jstring arg1, jstring arg2)
	{
		callMethod<void>(
			"dump",
			"(ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	jintArray Resources_Theme::getAttributeResolutionStack(jint arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"getAttributeResolutionStack",
			"(III)[I",
			arg0,
			arg1,
			arg2
		).object<jintArray>();
	}
	jint Resources_Theme::getChangingConfigurations()
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	android::graphics::drawable::Drawable Resources_Theme::getDrawable(jint arg0)
	{
		return callObjectMethod(
			"getDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	jint Resources_Theme::getExplicitStyle(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"getExplicitStyle",
			"(Landroid/util/AttributeSet;)I",
			arg0.object()
		);
	}
	android::content::res::Resources Resources_Theme::getResources()
	{
		return callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	android::content::res::TypedArray Resources_Theme::obtainStyledAttributes(jintArray arg0)
	{
		return callObjectMethod(
			"obtainStyledAttributes",
			"([I)Landroid/content/res/TypedArray;",
			arg0
		);
	}
	android::content::res::TypedArray Resources_Theme::obtainStyledAttributes(jint arg0, jintArray arg1)
	{
		return callObjectMethod(
			"obtainStyledAttributes",
			"(I[I)Landroid/content/res/TypedArray;",
			arg0,
			arg1
		);
	}
	android::content::res::TypedArray Resources_Theme::obtainStyledAttributes(__JniBaseClass arg0, jintArray arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"obtainStyledAttributes",
			"(Landroid/util/AttributeSet;[III)Landroid/content/res/TypedArray;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	void Resources_Theme::rebase()
	{
		callMethod<void>(
			"rebase",
			"()V"
		);
	}
	jboolean Resources_Theme::resolveAttribute(jint arg0, android::util::TypedValue arg1, jboolean arg2)
	{
		return callMethod<jboolean>(
			"resolveAttribute",
			"(ILandroid/util/TypedValue;Z)Z",
			arg0,
			arg1.object(),
			arg2
		);
	}
	void Resources_Theme::setTo(android::content::res::Resources_Theme arg0)
	{
		callMethod<void>(
			"setTo",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
} // namespace android::content::res

