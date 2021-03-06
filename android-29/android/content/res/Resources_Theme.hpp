#pragma once

#ifndef ANDROID_CONTENT_RES_RESOURCES_THEME
#define ANDROID_CONTENT_RES_RESOURCES_THEME

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::util
{
	class TypedValue;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::content::res
{
	class TypedArray;
}

namespace __jni_impl::android::content::res
{
	class Resources_Theme : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getResources();
		void applyStyle(jint arg0, jboolean arg1);
		jboolean resolveAttribute(jint arg0, __jni_impl::android::util::TypedValue arg1, jboolean arg2);
		void rebase();
		void dump(jint arg0, jstring arg1, jstring arg2);
		jint getChangingConfigurations();
		QAndroidJniObject getDrawable(jint arg0);
		QAndroidJniObject obtainStyledAttributes(__jni_impl::__JniBaseClass arg0, jintArray arg1, jint arg2, jint arg3);
		QAndroidJniObject obtainStyledAttributes(jintArray arg0);
		QAndroidJniObject obtainStyledAttributes(jint arg0, jintArray arg1);
		jintArray getAttributeResolutionStack(jint arg0, jint arg1, jint arg2);
		jint getExplicitStyle(__jni_impl::__JniBaseClass arg0);
		void setTo(__jni_impl::android::content::res::Resources_Theme arg0);
	};
} // namespace __jni_impl::android::content::res

#include "Resources.hpp"
#include "../../util/TypedValue.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "TypedArray.hpp"

namespace __jni_impl::android::content::res
{
	// Fields
	
	// Constructors
	void Resources_Theme::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.res.Resources$Theme",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Resources_Theme::getResources()
	{
		return __thiz.callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	void Resources_Theme::applyStyle(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"applyStyle",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	jboolean Resources_Theme::resolveAttribute(jint arg0, __jni_impl::android::util::TypedValue arg1, jboolean arg2)
	{
		return __thiz.callMethod<jboolean>(
			"resolveAttribute",
			"(ILandroid/util/TypedValue;Z)Z",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Resources_Theme::rebase()
	{
		__thiz.callMethod<void>(
			"rebase",
			"()V"
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
	QAndroidJniObject Resources_Theme::obtainStyledAttributes(__jni_impl::__JniBaseClass arg0, jintArray arg1, jint arg2, jint arg3)
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
	jint Resources_Theme::getExplicitStyle(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"getExplicitStyle",
			"(Landroid/util/AttributeSet;)I",
			arg0.__jniObject().object()
		);
	}
	void Resources_Theme::setTo(__jni_impl::android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"setTo",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::content::res

namespace android::content::res
{
	class Resources_Theme : public __jni_impl::android::content::res::Resources_Theme
	{
	public:
		Resources_Theme(QAndroidJniObject obj) { __thiz = obj; }
		Resources_Theme()
		{
			__constructor();
		}
	};
} // namespace android::content::res

#endif // ANDROID_CONTENT_RES_RESOURCES_THEME

