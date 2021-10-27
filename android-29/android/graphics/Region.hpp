#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Path;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics
{
	class Region_Op;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::graphics
{
	class Region : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::graphics::Rect arg0);
		void __constructor(__jni_impl::android::graphics::Region arg0);
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3);
		
		// Methods
		jboolean contains(jint arg0, jint arg1);
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getBoundaryPath();
		jboolean getBoundaryPath(__jni_impl::android::graphics::Path arg0);
		QAndroidJniObject getBounds();
		jboolean getBounds(__jni_impl::android::graphics::Rect arg0);
		jboolean isComplex();
		jboolean isEmpty();
		jboolean isRect();
		jboolean op(__jni_impl::android::graphics::Rect arg0, __jni_impl::android::graphics::Region_Op arg1);
		jboolean op(__jni_impl::android::graphics::Region arg0, __jni_impl::android::graphics::Region_Op arg1);
		jboolean op(__jni_impl::android::graphics::Rect arg0, __jni_impl::android::graphics::Region arg1, __jni_impl::android::graphics::Region_Op arg2);
		jboolean op(__jni_impl::android::graphics::Region arg0, __jni_impl::android::graphics::Region arg1, __jni_impl::android::graphics::Region_Op arg2);
		jboolean op(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::graphics::Region_Op arg4);
		jboolean quickContains(__jni_impl::android::graphics::Rect arg0);
		jboolean quickContains(jint arg0, jint arg1, jint arg2, jint arg3);
		jboolean quickReject(__jni_impl::android::graphics::Rect arg0);
		jboolean quickReject(__jni_impl::android::graphics::Region arg0);
		jboolean quickReject(jint arg0, jint arg1, jint arg2, jint arg3);
		jboolean set(__jni_impl::android::graphics::Rect arg0);
		jboolean set(__jni_impl::android::graphics::Region arg0);
		jboolean set(jint arg0, jint arg1, jint arg2, jint arg3);
		void setEmpty();
		jboolean setPath(__jni_impl::android::graphics::Path arg0, __jni_impl::android::graphics::Region arg1);
		jstring toString();
		void translate(jint arg0, jint arg1);
		void translate(jint arg0, jint arg1, __jni_impl::android::graphics::Region arg2);
		jboolean _union(__jni_impl::android::graphics::Rect arg0);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::graphics

#include "./Path.hpp"
#include "./Rect.hpp"
#include "./Region_Op.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	QAndroidJniObject Region::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Region",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void Region::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Region",
			"()V"
		);
	}
	void Region::__constructor(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Region",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void Region::__constructor(__jni_impl::android::graphics::Region arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Region",
			"(Landroid/graphics/Region;)V",
			arg0.__jniObject().object()
		);
	}
	void Region::__constructor(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Region",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	jboolean Region::contains(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jint Region::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Region::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Region::getBoundaryPath()
	{
		return __thiz.callObjectMethod(
			"getBoundaryPath",
			"()Landroid/graphics/Path;"
		);
	}
	jboolean Region::getBoundaryPath(__jni_impl::android::graphics::Path arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getBoundaryPath",
			"(Landroid/graphics/Path;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Region::getBounds()
	{
		return __thiz.callObjectMethod(
			"getBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	jboolean Region::getBounds(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getBounds",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Region::isComplex()
	{
		return __thiz.callMethod<jboolean>(
			"isComplex",
			"()Z"
		);
	}
	jboolean Region::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jboolean Region::isRect()
	{
		return __thiz.callMethod<jboolean>(
			"isRect",
			"()Z"
		);
	}
	jboolean Region::op(__jni_impl::android::graphics::Rect arg0, __jni_impl::android::graphics::Region_Op arg1)
	{
		return __thiz.callMethod<jboolean>(
			"op",
			"(Landroid/graphics/Rect;Landroid/graphics/Region$Op;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Region::op(__jni_impl::android::graphics::Region arg0, __jni_impl::android::graphics::Region_Op arg1)
	{
		return __thiz.callMethod<jboolean>(
			"op",
			"(Landroid/graphics/Region;Landroid/graphics/Region$Op;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Region::op(__jni_impl::android::graphics::Rect arg0, __jni_impl::android::graphics::Region arg1, __jni_impl::android::graphics::Region_Op arg2)
	{
		return __thiz.callMethod<jboolean>(
			"op",
			"(Landroid/graphics/Rect;Landroid/graphics/Region;Landroid/graphics/Region$Op;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean Region::op(__jni_impl::android::graphics::Region arg0, __jni_impl::android::graphics::Region arg1, __jni_impl::android::graphics::Region_Op arg2)
	{
		return __thiz.callMethod<jboolean>(
			"op",
			"(Landroid/graphics/Region;Landroid/graphics/Region;Landroid/graphics/Region$Op;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean Region::op(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::graphics::Region_Op arg4)
	{
		return __thiz.callMethod<jboolean>(
			"op",
			"(IIIILandroid/graphics/Region$Op;)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	jboolean Region::quickContains(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"quickContains",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Region::quickContains(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jboolean>(
			"quickContains",
			"(IIII)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean Region::quickReject(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"quickReject",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Region::quickReject(__jni_impl::android::graphics::Region arg0)
	{
		return __thiz.callMethod<jboolean>(
			"quickReject",
			"(Landroid/graphics/Region;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Region::quickReject(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jboolean>(
			"quickReject",
			"(IIII)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean Region::set(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"set",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Region::set(__jni_impl::android::graphics::Region arg0)
	{
		return __thiz.callMethod<jboolean>(
			"set",
			"(Landroid/graphics/Region;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Region::set(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jboolean>(
			"set",
			"(IIII)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Region::setEmpty()
	{
		__thiz.callMethod<void>(
			"setEmpty",
			"()V"
		);
	}
	jboolean Region::setPath(__jni_impl::android::graphics::Path arg0, __jni_impl::android::graphics::Region arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setPath",
			"(Landroid/graphics/Path;Landroid/graphics/Region;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jstring Region::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Region::translate(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"translate",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Region::translate(jint arg0, jint arg1, __jni_impl::android::graphics::Region arg2)
	{
		__thiz.callMethod<void>(
			"translate",
			"(IILandroid/graphics/Region;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean Region::_union(__jni_impl::android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"union",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object()
		);
	}
	void Region::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class Region : public __jni_impl::android::graphics::Region
	{
	public:
		Region(QAndroidJniObject obj) { __thiz = obj; }
		Region()
		{
			__constructor();
		}
		Region(__jni_impl::android::graphics::Rect arg0)
		{
			__constructor(
				arg0);
		}
		Region(__jni_impl::android::graphics::Region arg0)
		{
			__constructor(
				arg0);
		}
		Region(jint arg0, jint arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::graphics

