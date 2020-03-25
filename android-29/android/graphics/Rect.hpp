#pragma once

#ifndef ANDROID_GRAPHICS_RECT
#define ANDROID_GRAPHICS_RECT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::graphics
{
	class Rect : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		jint bottom();
		jint left();
		jint right();
		jint top();
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::Rect arg0);
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3);
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jboolean isEmpty();
		void offset(jint arg0, jint arg1);
		jboolean contains(jint arg0, jint arg1);
		jboolean contains(__jni_impl::android::graphics::Rect arg0);
		jboolean contains(jint arg0, jint arg1, jint arg2, jint arg3);
		void set(__jni_impl::android::graphics::Rect arg0);
		void set(jint arg0, jint arg1, jint arg2, jint arg3);
		QAndroidJniObject toShortString();
		void sort();
		jint width();
		void _union(jint arg0, jint arg1, jint arg2, jint arg3);
		void _union(jint arg0, jint arg1);
		void _union(__jni_impl::android::graphics::Rect arg0);
		jint height();
		jint centerX();
		jint centerY();
		jfloat exactCenterX();
		jfloat exactCenterY();
		void setEmpty();
		void offsetTo(jint arg0, jint arg1);
		void inset(jint arg0, jint arg1);
		jboolean setIntersect(__jni_impl::android::graphics::Rect arg0, __jni_impl::android::graphics::Rect arg1);
		static jboolean intersects(__jni_impl::android::graphics::Rect arg0, __jni_impl::android::graphics::Rect arg1);
		jboolean intersects(jint arg0, jint arg1, jint arg2, jint arg3);
		jboolean intersect(jint arg0, jint arg1, jint arg2, jint arg3);
		jboolean intersect(__jni_impl::android::graphics::Rect arg0);
		void readFromParcel(__jni_impl::android::os::Parcel arg0);
		QAndroidJniObject flattenToString();
		static QAndroidJniObject unflattenFromString(jstring arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::graphics

#include "../os/Parcel.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	QAndroidJniObject Rect::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Rect",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint Rect::bottom()
	{
		return __thiz.getField<jint>(
			"bottom");
	}
	jint Rect::left()
	{
		return __thiz.getField<jint>(
			"left");
	}
	jint Rect::right()
	{
		return __thiz.getField<jint>(
			"right");
	}
	jint Rect::top()
	{
		return __thiz.getField<jint>(
			"top");
	}
	
	// Constructors
	void Rect::__constructor(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Rect",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object());
	}
	void Rect::__constructor(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Rect",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void Rect::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Rect",
			"()V");
	}
	
	// Methods
	jboolean Rect::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Rect::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint Rect::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jboolean Rect::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z");
	}
	void Rect::offset(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"offset",
			"(II)V",
			arg0,
			arg1);
	}
	jboolean Rect::contains(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(II)Z",
			arg0,
			arg1);
	}
	jboolean Rect::contains(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object());
	}
	jboolean Rect::contains(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(IIII)Z",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void Rect::set(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object());
	}
	void Rect::set(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"set",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject Rect::toShortString()
	{
		return __thiz.callObjectMethod(
			"toShortString",
			"()Ljava/lang/String;");
	}
	void Rect::sort()
	{
		__thiz.callMethod<void>(
			"sort",
			"()V");
	}
	jint Rect::width()
	{
		return __thiz.callMethod<jint>(
			"width",
			"()I");
	}
	void Rect::_union(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"union",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void Rect::_union(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"union",
			"(II)V",
			arg0,
			arg1);
	}
	void Rect::_union(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"union",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object());
	}
	jint Rect::height()
	{
		return __thiz.callMethod<jint>(
			"height",
			"()I");
	}
	jint Rect::centerX()
	{
		return __thiz.callMethod<jint>(
			"centerX",
			"()I");
	}
	jint Rect::centerY()
	{
		return __thiz.callMethod<jint>(
			"centerY",
			"()I");
	}
	jfloat Rect::exactCenterX()
	{
		return __thiz.callMethod<jfloat>(
			"exactCenterX",
			"()F");
	}
	jfloat Rect::exactCenterY()
	{
		return __thiz.callMethod<jfloat>(
			"exactCenterY",
			"()F");
	}
	void Rect::setEmpty()
	{
		__thiz.callMethod<void>(
			"setEmpty",
			"()V");
	}
	void Rect::offsetTo(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"offsetTo",
			"(II)V",
			arg0,
			arg1);
	}
	void Rect::inset(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"inset",
			"(II)V",
			arg0,
			arg1);
	}
	jboolean Rect::setIntersect(__jni_impl::android::graphics::Rect arg0, __jni_impl::android::graphics::Rect arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setIntersect",
			"(Landroid/graphics/Rect;Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	jboolean Rect::intersects(__jni_impl::android::graphics::Rect arg0, __jni_impl::android::graphics::Rect arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.graphics.Rect",
			"intersects",
			"(Landroid/graphics/Rect;Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	jboolean Rect::intersects(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jboolean>(
			"intersects",
			"(IIII)Z",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	jboolean Rect::intersect(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jboolean>(
			"intersect",
			"(IIII)Z",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	jboolean Rect::intersect(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"intersect",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object());
	}
	void Rect::readFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Rect::flattenToString()
	{
		return __thiz.callObjectMethod(
			"flattenToString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Rect::unflattenFromString(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Rect",
			"unflattenFromString",
			"(Ljava/lang/String;)Landroid/graphics/Rect;",
			arg0);
	}
	jint Rect::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void Rect::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Rect : public __jni_impl::android::graphics::Rect
	{
	public:
		Rect(QAndroidJniObject obj) { __thiz = obj; }
		Rect(__jni_impl::android::graphics::Rect arg0)
		{
			__constructor(
				arg0);
		}
		Rect(jint arg0, jint arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		Rect()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_RECT

