#pragma once

#ifndef ANDROID_GESTURE_GESTURE
#define ANDROID_GESTURE_GESTURE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Path;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}
namespace __jni_impl::android::graphics
{
	class RectF;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::gesture
{
	class GestureStroke;
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
		jobject clone();
		jfloat getLength();
		QAndroidJniObject toPath();
		QAndroidJniObject toPath(__jni_impl::android::graphics::Path arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		QAndroidJniObject toPath(__jni_impl::android::graphics::Path arg0);
		QAndroidJniObject toPath(jint arg0, jint arg1, jint arg2, jint arg3);
		jlong getID();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getStrokesCount();
		QAndroidJniObject getStrokes();
		QAndroidJniObject getBoundingBox();
		QAndroidJniObject toBitmap(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		QAndroidJniObject toBitmap(jint arg0, jint arg1, jint arg2, jint arg3);
		void addStroke(__jni_impl::android::gesture::GestureStroke arg0);
	};
} // namespace __jni_impl::android::gesture

#include "../graphics/Path.hpp"
#include "../os/Parcel.hpp"
#include "../../java/util/ArrayList.hpp"
#include "../graphics/RectF.hpp"
#include "../graphics/Bitmap.hpp"
#include "GestureStroke.hpp"

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
			"()V");
	}
	
	// Methods
	jobject Gesture::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jfloat Gesture::getLength()
	{
		return __thiz.callMethod<jfloat>(
			"getLength",
			"()F"
		);
	}
	QAndroidJniObject Gesture::toPath()
	{
		return __thiz.callObjectMethod(
			"toPath",
			"()Landroid/graphics/Path;"
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
	jlong Gesture::getID()
	{
		return __thiz.callMethod<jlong>(
			"getID",
			"()J"
		);
	}
	jint Gesture::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
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
	jint Gesture::getStrokesCount()
	{
		return __thiz.callMethod<jint>(
			"getStrokesCount",
			"()I"
		);
	}
	QAndroidJniObject Gesture::getStrokes()
	{
		return __thiz.callObjectMethod(
			"getStrokes",
			"()Ljava/util/ArrayList;"
		);
	}
	QAndroidJniObject Gesture::getBoundingBox()
	{
		return __thiz.callObjectMethod(
			"getBoundingBox",
			"()Landroid/graphics/RectF;"
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
	void Gesture::addStroke(__jni_impl::android::gesture::GestureStroke arg0)
	{
		__thiz.callMethod<void>(
			"addStroke",
			"(Landroid/gesture/GestureStroke;)V",
			arg0.__jniObject().object()
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

#endif // ANDROID_GESTURE_GESTURE

