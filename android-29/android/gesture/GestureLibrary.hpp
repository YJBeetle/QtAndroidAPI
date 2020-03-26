#pragma once

#ifndef ANDROID_GESTURE_GESTURELIBRARY
#define ANDROID_GESTURE_GESTURELIBRARY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::gesture
{
	class GestureStore;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}
namespace __jni_impl::android::gesture
{
	class Gesture;
}

namespace __jni_impl::android::gesture
{
	class GestureLibrary : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean load();
		jboolean save();
		jboolean isReadOnly();
		void setOrientationStyle(jint arg0);
		jint getOrientationStyle();
		void setSequenceType(jint arg0);
		jint getSequenceType();
		QAndroidJniObject getGestureEntries();
		QAndroidJniObject recognize(__jni_impl::android::gesture::Gesture arg0);
		void addGesture(jstring arg0, __jni_impl::android::gesture::Gesture arg1);
		void removeGesture(jstring arg0, __jni_impl::android::gesture::Gesture arg1);
		void removeEntry(jstring arg0);
		QAndroidJniObject getGestures(jstring arg0);
	};
} // namespace __jni_impl::android::gesture

#include "GestureStore.hpp"
#include "../../java/util/ArrayList.hpp"
#include "Gesture.hpp"

namespace __jni_impl::android::gesture
{
	// Fields
	
	// Constructors
	void GestureLibrary::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.gesture.GestureLibrary",
			"(V)V");
	}
	
	// Methods
	jboolean GestureLibrary::load()
	{
		return __thiz.callMethod<jboolean>(
			"load",
			"()Z"
		);
	}
	jboolean GestureLibrary::save()
	{
		return __thiz.callMethod<jboolean>(
			"save",
			"()Z"
		);
	}
	jboolean GestureLibrary::isReadOnly()
	{
		return __thiz.callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	void GestureLibrary::setOrientationStyle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOrientationStyle",
			"(I)V",
			arg0
		);
	}
	jint GestureLibrary::getOrientationStyle()
	{
		return __thiz.callMethod<jint>(
			"getOrientationStyle",
			"()I"
		);
	}
	void GestureLibrary::setSequenceType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSequenceType",
			"(I)V",
			arg0
		);
	}
	jint GestureLibrary::getSequenceType()
	{
		return __thiz.callMethod<jint>(
			"getSequenceType",
			"()I"
		);
	}
	QAndroidJniObject GestureLibrary::getGestureEntries()
	{
		return __thiz.callObjectMethod(
			"getGestureEntries",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject GestureLibrary::recognize(__jni_impl::android::gesture::Gesture arg0)
	{
		return __thiz.callObjectMethod(
			"recognize",
			"(Landroid/gesture/Gesture;)Ljava/util/ArrayList;",
			arg0.__jniObject().object()
		);
	}
	void GestureLibrary::addGesture(jstring arg0, __jni_impl::android::gesture::Gesture arg1)
	{
		__thiz.callMethod<void>(
			"addGesture",
			"(Ljava/lang/String;Landroid/gesture/Gesture;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void GestureLibrary::removeGesture(jstring arg0, __jni_impl::android::gesture::Gesture arg1)
	{
		__thiz.callMethod<void>(
			"removeGesture",
			"(Ljava/lang/String;Landroid/gesture/Gesture;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void GestureLibrary::removeEntry(jstring arg0)
	{
		__thiz.callMethod<void>(
			"removeEntry",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	QAndroidJniObject GestureLibrary::getGestures(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getGestures",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
		);
	}
} // namespace __jni_impl::android::gesture

namespace android::gesture
{
	class GestureLibrary : public __jni_impl::android::gesture::GestureLibrary
	{
	public:
		GestureLibrary(QAndroidJniObject obj) { __thiz = obj; }
		GestureLibrary()
		{
			__constructor();
		}
	};
} // namespace android::gesture

#endif // ANDROID_GESTURE_GESTURELIBRARY

