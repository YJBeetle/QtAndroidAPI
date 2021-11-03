#include "../../../JIntArray.hpp"
#include "./Resources.hpp"
#include "./TypedArray.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../util/TypedValue.hpp"
#include "../../../JString.hpp"
#include "./Resources_Theme.hpp"

namespace android::content::res
{
	// Fields
	
	// QAndroidJniObject forward
	Resources_Theme::Resources_Theme(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void Resources_Theme::applyStyle(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"applyStyle",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void Resources_Theme::dump(jint arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"dump",
			"(ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	jint Resources_Theme::getChangingConfigurations() const
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	android::graphics::drawable::Drawable Resources_Theme::getDrawable(jint arg0) const
	{
		return callObjectMethod(
			"getDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	android::content::res::Resources Resources_Theme::getResources() const
	{
		return callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	android::content::res::TypedArray Resources_Theme::obtainStyledAttributes(JIntArray arg0) const
	{
		return callObjectMethod(
			"obtainStyledAttributes",
			"([I)Landroid/content/res/TypedArray;",
			arg0.object<jintArray>()
		);
	}
	android::content::res::TypedArray Resources_Theme::obtainStyledAttributes(jint arg0, JIntArray arg1) const
	{
		return callObjectMethod(
			"obtainStyledAttributes",
			"(I[I)Landroid/content/res/TypedArray;",
			arg0,
			arg1.object<jintArray>()
		);
	}
	android::content::res::TypedArray Resources_Theme::obtainStyledAttributes(JObject arg0, JIntArray arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"obtainStyledAttributes",
			"(Landroid/util/AttributeSet;[III)Landroid/content/res/TypedArray;",
			arg0.object(),
			arg1.object<jintArray>(),
			arg2,
			arg3
		);
	}
	jboolean Resources_Theme::resolveAttribute(jint arg0, android::util::TypedValue arg1, jboolean arg2) const
	{
		return callMethod<jboolean>(
			"resolveAttribute",
			"(ILandroid/util/TypedValue;Z)Z",
			arg0,
			arg1.object(),
			arg2
		);
	}
	void Resources_Theme::setTo(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"setTo",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
} // namespace android::content::res

