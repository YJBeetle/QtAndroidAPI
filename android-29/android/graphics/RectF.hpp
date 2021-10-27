#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::graphics
{
	class RectF : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		jfloat bottom();
		jfloat left();
		jfloat right();
		jfloat top();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::graphics::Rect arg0);
		void __constructor(__jni_impl::android::graphics::RectF arg0);
		void __constructor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		
		// Methods
		static jboolean intersects(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::RectF arg1);
		jfloat centerX();
		jfloat centerY();
		jboolean contains(__jni_impl::android::graphics::RectF arg0);
		jboolean contains(jfloat arg0, jfloat arg1);
		jboolean contains(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jfloat height();
		void inset(jfloat arg0, jfloat arg1);
		jboolean intersect(__jni_impl::android::graphics::RectF arg0);
		jboolean intersect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		jboolean intersects(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		jboolean isEmpty();
		void offset(jfloat arg0, jfloat arg1);
		void offsetTo(jfloat arg0, jfloat arg1);
		void readFromParcel(__jni_impl::android::os::Parcel arg0);
		void round(__jni_impl::android::graphics::Rect arg0);
		void roundOut(__jni_impl::android::graphics::Rect arg0);
		void set(__jni_impl::android::graphics::Rect arg0);
		void set(__jni_impl::android::graphics::RectF arg0);
		void set(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void setEmpty();
		jboolean setIntersect(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::RectF arg1);
		void sort();
		jstring toShortString();
		jstring toString();
		void _union(__jni_impl::android::graphics::RectF arg0);
		void _union(jfloat arg0, jfloat arg1);
		void _union(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		jfloat width();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::graphics

#include "Rect.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	QAndroidJniObject RectF::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.RectF",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jfloat RectF::bottom()
	{
		return __thiz.getField<jfloat>(
			"bottom"
		);
	}
	jfloat RectF::left()
	{
		return __thiz.getField<jfloat>(
			"left"
		);
	}
	jfloat RectF::right()
	{
		return __thiz.getField<jfloat>(
			"right"
		);
	}
	jfloat RectF::top()
	{
		return __thiz.getField<jfloat>(
			"top"
		);
	}
	
	// Constructors
	void RectF::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.RectF",
			"()V"
		);
	}
	void RectF::__constructor(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.RectF",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void RectF::__constructor(__jni_impl::android::graphics::RectF arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.RectF",
			"(Landroid/graphics/RectF;)V",
			arg0.__jniObject().object()
		);
	}
	void RectF::__constructor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.RectF",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	jboolean RectF::intersects(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::RectF arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.graphics.RectF",
			"intersects",
			"(Landroid/graphics/RectF;Landroid/graphics/RectF;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jfloat RectF::centerX()
	{
		return __thiz.callMethod<jfloat>(
			"centerX",
			"()F"
		);
	}
	jfloat RectF::centerY()
	{
		return __thiz.callMethod<jfloat>(
			"centerY",
			"()F"
		);
	}
	jboolean RectF::contains(__jni_impl::android::graphics::RectF arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Landroid/graphics/RectF;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean RectF::contains(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jboolean RectF::contains(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(FFFF)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint RectF::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RectF::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint RectF::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jfloat RectF::height()
	{
		return __thiz.callMethod<jfloat>(
			"height",
			"()F"
		);
	}
	void RectF::inset(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"inset",
			"(FF)V",
			arg0,
			arg1
		);
	}
	jboolean RectF::intersect(__jni_impl::android::graphics::RectF arg0)
	{
		return __thiz.callMethod<jboolean>(
			"intersect",
			"(Landroid/graphics/RectF;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean RectF::intersect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return __thiz.callMethod<jboolean>(
			"intersect",
			"(FFFF)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean RectF::intersects(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return __thiz.callMethod<jboolean>(
			"intersects",
			"(FFFF)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean RectF::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	void RectF::offset(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"offset",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void RectF::offsetTo(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"offsetTo",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void RectF::readFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void RectF::round(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"round",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void RectF::roundOut(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"roundOut",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void RectF::set(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void RectF::set(__jni_impl::android::graphics::RectF arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/graphics/RectF;)V",
			arg0.__jniObject().object()
		);
	}
	void RectF::set(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"set",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void RectF::setEmpty()
	{
		__thiz.callMethod<void>(
			"setEmpty",
			"()V"
		);
	}
	jboolean RectF::setIntersect(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::RectF arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setIntersect",
			"(Landroid/graphics/RectF;Landroid/graphics/RectF;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RectF::sort()
	{
		__thiz.callMethod<void>(
			"sort",
			"()V"
		);
	}
	jstring RectF::toShortString()
	{
		return __thiz.callObjectMethod(
			"toShortString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RectF::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void RectF::_union(__jni_impl::android::graphics::RectF arg0)
	{
		__thiz.callMethod<void>(
			"union",
			"(Landroid/graphics/RectF;)V",
			arg0.__jniObject().object()
		);
	}
	void RectF::_union(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"union",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void RectF::_union(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"union",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jfloat RectF::width()
	{
		return __thiz.callMethod<jfloat>(
			"width",
			"()F"
		);
	}
	void RectF::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class RectF : public __jni_impl::android::graphics::RectF
	{
	public:
		RectF(QAndroidJniObject obj) { __thiz = obj; }
		RectF()
		{
			__constructor();
		}
		RectF(__jni_impl::android::graphics::Rect arg0)
		{
			__constructor(
				arg0);
		}
		RectF(__jni_impl::android::graphics::RectF arg0)
		{
			__constructor(
				arg0);
		}
		RectF(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::graphics

