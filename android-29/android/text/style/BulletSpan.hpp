#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class Paint;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::text
{
	class Layout;
}

namespace __jni_impl::android::text::style
{
	class BulletSpan : public __JniBaseClass
	{
	public:
		// Fields
		static jint STANDARD_GAP_WIDTH();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(jint arg0);
		void __constructor(jint arg0, jint arg1);
		void __constructor(jint arg0, jint arg1, jint arg2);
		
		// Methods
		jint describeContents();
		void drawLeadingMargin(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jstring arg7, jint arg8, jint arg9, jboolean arg10, __jni_impl::android::text::Layout arg11);
		void drawLeadingMargin(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, const QString &arg7, jint arg8, jint arg9, jboolean arg10, __jni_impl::android::text::Layout arg11);
		jint getBulletRadius();
		jint getColor();
		jint getGapWidth();
		jint getLeadingMargin(jboolean arg0);
		jint getSpanTypeId();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::text::style

#include "../../graphics/Canvas.hpp"
#include "../../graphics/Paint.hpp"
#include "../../os/Parcel.hpp"
#include "../Layout.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	jint BulletSpan::STANDARD_GAP_WIDTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.BulletSpan",
			"STANDARD_GAP_WIDTH"
		);
	}
	
	// Constructors
	void BulletSpan::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.BulletSpan",
			"()V"
		);
	}
	void BulletSpan::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.BulletSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void BulletSpan::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.BulletSpan",
			"(I)V",
			arg0
		);
	}
	void BulletSpan::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.BulletSpan",
			"(II)V",
			arg0,
			arg1
		);
	}
	void BulletSpan::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.BulletSpan",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jint BulletSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void BulletSpan::drawLeadingMargin(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jstring arg7, jint arg8, jint arg9, jboolean arg10, __jni_impl::android::text::Layout arg11)
	{
		__thiz.callMethod<void>(
			"drawLeadingMargin",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;IIIIILjava/lang/CharSequence;IIZLandroid/text/Layout;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg10,
			arg11.__jniObject().object()
		);
	}
	void BulletSpan::drawLeadingMargin(__jni_impl::android::graphics::Canvas arg0, __jni_impl::android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, const QString &arg7, jint arg8, jint arg9, jboolean arg10, __jni_impl::android::text::Layout arg11)
	{
		__thiz.callMethod<void>(
			"drawLeadingMargin",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;IIIIILjava/lang/CharSequence;IIZLandroid/text/Layout;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			QAndroidJniObject::fromString(arg7).object<jstring>(),
			arg8,
			arg9,
			arg10,
			arg11.__jniObject().object()
		);
	}
	jint BulletSpan::getBulletRadius()
	{
		return __thiz.callMethod<jint>(
			"getBulletRadius",
			"()I"
		);
	}
	jint BulletSpan::getColor()
	{
		return __thiz.callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	jint BulletSpan::getGapWidth()
	{
		return __thiz.callMethod<jint>(
			"getGapWidth",
			"()I"
		);
	}
	jint BulletSpan::getLeadingMargin(jboolean arg0)
	{
		return __thiz.callMethod<jint>(
			"getLeadingMargin",
			"(Z)I",
			arg0
		);
	}
	jint BulletSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void BulletSpan::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class BulletSpan : public __jni_impl::android::text::style::BulletSpan
	{
	public:
		BulletSpan(QAndroidJniObject obj) { __thiz = obj; }
		BulletSpan()
		{
			__constructor();
		}
		BulletSpan(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		BulletSpan(jint arg0)
		{
			__constructor(
				arg0);
		}
		BulletSpan(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		BulletSpan(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::text::style

