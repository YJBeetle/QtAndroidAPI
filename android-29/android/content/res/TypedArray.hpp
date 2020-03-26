#pragma once

#ifndef ANDROID_CONTENT_RES_TYPEDARRAY
#define ANDROID_CONTENT_RES_TYPEDARRAY

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
	class ColorStateList;
}
namespace __jni_impl::android::graphics
{
	class Typeface;
}

namespace __jni_impl::android::content::res
{
	class TypedArray : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint length();
		jstring toString();
		jboolean getBoolean(jint arg0, jboolean arg1);
		jint getInt(jint arg0, jint arg1);
		jfloat getFloat(jint arg0, jfloat arg1);
		jboolean getValue(jint arg0, __jni_impl::android::util::TypedValue arg1);
		QAndroidJniObject getResources();
		jint getType(jint arg0);
		jint getIndex(jint arg0);
		jint getInteger(jint arg0, jint arg1);
		jboolean hasValue(jint arg0);
		jstring getString(jint arg0);
		jstring getText(jint arg0);
		jint getChangingConfigurations();
		jint getColor(jint arg0, jint arg1);
		QAndroidJniObject getDrawable(jint arg0);
		QAndroidJniObject getColorStateList(jint arg0);
		jint getIndexCount();
		jstring getNonResourceString(jint arg0);
		jint getLayoutDimension(jint arg0, jstring arg1);
		jint getLayoutDimension(jint arg0, jint arg1);
		jint getResourceId(jint arg0, jint arg1);
		jint getSourceResourceId(jint arg0, jint arg1);
		jboolean hasValueOrEmpty(jint arg0);
		QAndroidJniObject peekValue(jint arg0);
		jstring getPositionDescription();
		void recycle();
		QAndroidJniObject getFont(jint arg0);
		jarray getTextArray(jint arg0);
		jfloat getDimension(jint arg0, jfloat arg1);
		jint getDimensionPixelOffset(jint arg0, jint arg1);
		jint getDimensionPixelSize(jint arg0, jint arg1);
		jfloat getFraction(jint arg0, jint arg1, jint arg2, jfloat arg3);
	};
} // namespace __jni_impl::android::content::res

#include "Resources.hpp"
#include "../../util/TypedValue.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "ColorStateList.hpp"
#include "../../graphics/Typeface.hpp"

namespace __jni_impl::android::content::res
{
	// Fields
	
	// Constructors
	void TypedArray::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.res.TypedArray",
			"(V)V");
	}
	
	// Methods
	jint TypedArray::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	jstring TypedArray::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean TypedArray::getBoolean(jint arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"getBoolean",
			"(IZ)Z",
			arg0,
			arg1
		);
	}
	jint TypedArray::getInt(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"(II)I",
			arg0,
			arg1
		);
	}
	jfloat TypedArray::getFloat(jint arg0, jfloat arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"(IF)F",
			arg0,
			arg1
		);
	}
	jboolean TypedArray::getValue(jint arg0, __jni_impl::android::util::TypedValue arg1)
	{
		return __thiz.callMethod<jboolean>(
			"getValue",
			"(ILandroid/util/TypedValue;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject TypedArray::getResources()
	{
		return __thiz.callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	jint TypedArray::getType(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getType",
			"(I)I",
			arg0
		);
	}
	jint TypedArray::getIndex(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"(I)I",
			arg0
		);
	}
	jint TypedArray::getInteger(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getInteger",
			"(II)I",
			arg0,
			arg1
		);
	}
	jboolean TypedArray::hasValue(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasValue",
			"(I)Z",
			arg0
		);
	}
	jstring TypedArray::getString(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring TypedArray::getText(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getText",
			"(I)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jint TypedArray::getChangingConfigurations()
	{
		return __thiz.callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	jint TypedArray::getColor(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getColor",
			"(II)I",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TypedArray::getDrawable(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	QAndroidJniObject TypedArray::getColorStateList(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getColorStateList",
			"(I)Landroid/content/res/ColorStateList;",
			arg0
		);
	}
	jint TypedArray::getIndexCount()
	{
		return __thiz.callMethod<jint>(
			"getIndexCount",
			"()I"
		);
	}
	jstring TypedArray::getNonResourceString(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getNonResourceString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint TypedArray::getLayoutDimension(jint arg0, jstring arg1)
	{
		return __thiz.callMethod<jint>(
			"getLayoutDimension",
			"(ILjava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint TypedArray::getLayoutDimension(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getLayoutDimension",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint TypedArray::getResourceId(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getResourceId",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint TypedArray::getSourceResourceId(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getSourceResourceId",
			"(II)I",
			arg0,
			arg1
		);
	}
	jboolean TypedArray::hasValueOrEmpty(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasValueOrEmpty",
			"(I)Z",
			arg0
		);
	}
	QAndroidJniObject TypedArray::peekValue(jint arg0)
	{
		return __thiz.callObjectMethod(
			"peekValue",
			"(I)Landroid/util/TypedValue;",
			arg0
		);
	}
	jstring TypedArray::getPositionDescription()
	{
		return __thiz.callObjectMethod(
			"getPositionDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void TypedArray::recycle()
	{
		__thiz.callMethod<void>(
			"recycle",
			"()V"
		);
	}
	QAndroidJniObject TypedArray::getFont(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getFont",
			"(I)Landroid/graphics/Typeface;",
			arg0
		);
	}
	jarray TypedArray::getTextArray(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getTextArray",
			"(I)[Ljava/lang/CharSequence;",
			arg0
		).object<jarray>();
	}
	jfloat TypedArray::getDimension(jint arg0, jfloat arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getDimension",
			"(IF)F",
			arg0,
			arg1
		);
	}
	jint TypedArray::getDimensionPixelOffset(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getDimensionPixelOffset",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint TypedArray::getDimensionPixelSize(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getDimensionPixelSize",
			"(II)I",
			arg0,
			arg1
		);
	}
	jfloat TypedArray::getFraction(jint arg0, jint arg1, jint arg2, jfloat arg3)
	{
		return __thiz.callMethod<jfloat>(
			"getFraction",
			"(IIIF)F",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace __jni_impl::android::content::res

namespace android::content::res
{
	class TypedArray : public __jni_impl::android::content::res::TypedArray
	{
	public:
		TypedArray(QAndroidJniObject obj) { __thiz = obj; }
		TypedArray()
		{
			__constructor();
		}
	};
} // namespace android::content::res

#endif // ANDROID_CONTENT_RES_TYPEDARRAY

