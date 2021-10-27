#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::gesture
{
	class GestureStroke;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::graphics
{
	class Path;
}
namespace __jni_impl::android::graphics
{
	class RectF;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}

namespace __jni_impl::android::gesture
{
	class Gesture : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		void addStroke(__jni_impl::android::gesture::GestureStroke arg0);
		jobject clone();
		jint describeContents();
		QAndroidJniObject getBoundingBox();
		jlong getID();
		jfloat getLength();
		QAndroidJniObject getStrokes();
		jint getStrokesCount();
		QAndroidJniObject toBitmap(jint arg0, jint arg1, jint arg2, jint arg3);
		QAndroidJniObject toBitmap(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		QAndroidJniObject toPath();
		QAndroidJniObject toPath(__jni_impl::android::graphics::Path arg0);
		QAndroidJniObject toPath(jint arg0, jint arg1, jint arg2, jint arg3);
		QAndroidJniObject toPath(__jni_impl::android::graphics::Path arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::gesture

#include "GestureStroke.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/Path.hpp"
#include "../graphics/RectF.hpp"
#include "../os/Parcel.hpp"
#include "../../java/util/ArrayList.hpp"

namespace __jni_impl::android::gesture
{
	// Fields
	QAndroidJniObject Gesture::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.gesture.Gesture",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void Gesture::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.gesture.Gesture",
			"()V"
		);
	}
	
	// Methods
	void Gesture::addStroke(__jni_impl::android::gesture::GestureStroke arg0)
	{
		__thiz.callMethod<void>(
			"addStroke",
			"(Landroid/gesture/GestureStroke;)V",
			arg0.__jniObject().object()
		);
	}
	jobject Gesture::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint Gesture::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject Gesture::getBoundingBox()
	{
		return __thiz.callObjectMethod(
			"getBoundingBox",
			"()Landroid/graphics/RectF;"
		);
	}
	jlong Gesture::getID()
	{
		return __thiz.callMethod<jlong>(
			"getID",
			"()J"
		);
	}
	jfloat Gesture::getLength()
	{
		return __thiz.callMethod<jfloat>(
			"getLength",
			"()F"
		);
	}
	QAndroidJniObject Gesture::getStrokes()
	{
		return __thiz.callObjectMethod(
			"getStrokes",
			"()Ljava/util/ArrayList;"
		);
	}
	jint Gesture::getStrokesCount()
	{
		return __thiz.callMethod<jint>(
			"getStrokesCount",
			"()I"
		);
	}
	QAndroidJniObject Gesture::toBitmap(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"toBitmap",
			"(IIII)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject Gesture::toBitmap(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return __thiz.callObjectMethod(
			"toBitmap",
			"(IIIII)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject Gesture::toPath()
	{
		return __thiz.callObjectMethod(
			"toPath",
			"()Landroid/graphics/Path;"
		);
	}
	QAndroidJniObject Gesture::toPath(__jni_impl::android::graphics::Path arg0)
	{
		return __thiz.callObjectMethod(
			"toPath",
			"(Landroid/graphics/Path;)Landroid/graphics/Path;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Gesture::toPath(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"toPath",
			"(IIII)Landroid/graphics/Path;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject Gesture::toPath(__jni_impl::android::graphics::Path arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return __thiz.callObjectMethod(
			"toPath",
			"(Landroid/graphics/Path;IIII)Landroid/graphics/Path;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Gesture::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::gesture

namespace android::gesture
{
	class Gesture : public __jni_impl::android::gesture::Gesture
	{
	public:
		Gesture(QAndroidJniObject obj) { __thiz = obj; }
		Gesture()
		{
			__constructor();
		}
	};
} // namespace android::gesture

