#pragma once

#ifndef ANDROID_GESTURE_GESTURELIBRARY
#define ANDROID_GESTURE_GESTURELIBRARY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::gesture
{
	class Gesture;
}
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
	class GestureLibrary : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void addGesture(jstring arg0, __jni_impl::android::gesture::Gesture arg1);
		void addGesture(const QString &arg0, __jni_impl::android::gesture::Gesture arg1);
		QAndroidJniObject getGestureEntries();
		QAndroidJniObject getGestures(jstring arg0);
		QAndroidJniObject getGestures(const QString &arg0);
		jint getOrientationStyle();
		jint getSequenceType();
		jboolean isReadOnly();
		jboolean load();
		QAndroidJniObject recognize(__jni_impl::android::gesture::Gesture arg0);
		void removeEntry(jstring arg0);
		void removeEntry(const QString &arg0);
		void removeGesture(jstring arg0, __jni_impl::android::gesture::Gesture arg1);
		void removeGesture(const QString &arg0, __jni_impl::android::gesture::Gesture arg1);
		jboolean save();
		void setOrientationStyle(jint arg0);
		void setSequenceType(jint arg0);
	};
} // namespace __jni_impl::android::gesture

#include "Gesture.hpp"
#include "GestureStore.hpp"
#include "../../java/util/ArrayList.hpp"

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
	void GestureLibrary::addGesture(jstring arg0, __jni_impl::android::gesture::Gesture arg1)
	{
		__thiz.callMethod<void>(
			"addGesture",
			"(Ljava/lang/String;Landroid/gesture/Gesture;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void GestureLibrary::addGesture(const QString &arg0, __jni_impl::android::gesture::Gesture arg1)
	{
		__thiz.callMethod<void>(
			"addGesture",
			"(Ljava/lang/String;Landroid/gesture/Gesture;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject GestureLibrary::getGestureEntries()
	{
		return __thiz.callObjectMethod(
			"getGestureEntries",
			"()Ljava/util/Set;"
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
	QAndroidJniObject GestureLibrary::getGestures(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getGestures",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint GestureLibrary::getOrientationStyle()
	{
		return __thiz.callMethod<jint>(
			"getOrientationStyle",
			"()I"
		);
	}
	jint GestureLibrary::getSequenceType()
	{
		return __thiz.callMethod<jint>(
			"getSequenceType",
			"()I"
		);
	}
	jboolean GestureLibrary::isReadOnly()
	{
		return __thiz.callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	jboolean GestureLibrary::load()
	{
		return __thiz.callMethod<jboolean>(
			"load",
			"()Z"
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
	void GestureLibrary::removeEntry(jstring arg0)
	{
		__thiz.callMethod<void>(
			"removeEntry",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void GestureLibrary::removeEntry(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"removeEntry",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	void GestureLibrary::removeGesture(const QString &arg0, __jni_impl::android::gesture::Gesture arg1)
	{
		__thiz.callMethod<void>(
			"removeGesture",
			"(Ljava/lang/String;Landroid/gesture/Gesture;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jboolean GestureLibrary::save()
	{
		return __thiz.callMethod<jboolean>(
			"save",
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
	void GestureLibrary::setSequenceType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSequenceType",
			"(I)V",
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

