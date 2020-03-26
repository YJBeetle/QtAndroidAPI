#pragma once

#ifndef ANDROID_GESTURE_GESTURESTORE
#define ANDROID_GESTURE_GESTURESTORE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class OutputStream;
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
	class GestureStore : public __JniBaseClass
	{
	public:
		// Fields
		static jint ORIENTATION_INVARIANT();
		static jint ORIENTATION_SENSITIVE();
		static jint SEQUENCE_INVARIANT();
		static jint SEQUENCE_SENSITIVE();
		
		// Constructors
		void __constructor();
		
		// Methods
		void load(__jni_impl::java::io::InputStream arg0);
		void load(__jni_impl::java::io::InputStream arg0, jboolean arg1);
		void save(__jni_impl::java::io::OutputStream arg0);
		void save(__jni_impl::java::io::OutputStream arg0, jboolean arg1);
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
		jboolean hasChanged();
	};
} // namespace __jni_impl::android::gesture

#include "../../java/io/InputStream.hpp"
#include "../../java/io/OutputStream.hpp"
#include "../../java/util/ArrayList.hpp"
#include "Gesture.hpp"

namespace __jni_impl::android::gesture
{
	// Fields
	jint GestureStore::ORIENTATION_INVARIANT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.gesture.GestureStore",
			"ORIENTATION_INVARIANT"
		);
	}
	jint GestureStore::ORIENTATION_SENSITIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.gesture.GestureStore",
			"ORIENTATION_SENSITIVE"
		);
	}
	jint GestureStore::SEQUENCE_INVARIANT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.gesture.GestureStore",
			"SEQUENCE_INVARIANT"
		);
	}
	jint GestureStore::SEQUENCE_SENSITIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.gesture.GestureStore",
			"SEQUENCE_SENSITIVE"
		);
	}
	
	// Constructors
	void GestureStore::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.gesture.GestureStore",
			"()V");
	}
	
	// Methods
	void GestureStore::load(__jni_impl::java::io::InputStream arg0)
	{
		__thiz.callMethod<void>(
			"load",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void GestureStore::load(__jni_impl::java::io::InputStream arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"load",
			"(Ljava/io/InputStream;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void GestureStore::save(__jni_impl::java::io::OutputStream arg0)
	{
		__thiz.callMethod<void>(
			"save",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void GestureStore::save(__jni_impl::java::io::OutputStream arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"save",
			"(Ljava/io/OutputStream;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void GestureStore::setOrientationStyle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOrientationStyle",
			"(I)V",
			arg0
		);
	}
	jint GestureStore::getOrientationStyle()
	{
		return __thiz.callMethod<jint>(
			"getOrientationStyle",
			"()I"
		);
	}
	void GestureStore::setSequenceType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSequenceType",
			"(I)V",
			arg0
		);
	}
	jint GestureStore::getSequenceType()
	{
		return __thiz.callMethod<jint>(
			"getSequenceType",
			"()I"
		);
	}
	QAndroidJniObject GestureStore::getGestureEntries()
	{
		return __thiz.callObjectMethod(
			"getGestureEntries",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject GestureStore::recognize(__jni_impl::android::gesture::Gesture arg0)
	{
		return __thiz.callObjectMethod(
			"recognize",
			"(Landroid/gesture/Gesture;)Ljava/util/ArrayList;",
			arg0.__jniObject().object()
		);
	}
	void GestureStore::addGesture(jstring arg0, __jni_impl::android::gesture::Gesture arg1)
	{
		__thiz.callMethod<void>(
			"addGesture",
			"(Ljava/lang/String;Landroid/gesture/Gesture;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void GestureStore::removeGesture(jstring arg0, __jni_impl::android::gesture::Gesture arg1)
	{
		__thiz.callMethod<void>(
			"removeGesture",
			"(Ljava/lang/String;Landroid/gesture/Gesture;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void GestureStore::removeEntry(jstring arg0)
	{
		__thiz.callMethod<void>(
			"removeEntry",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	QAndroidJniObject GestureStore::getGestures(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getGestures",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
		);
	}
	jboolean GestureStore::hasChanged()
	{
		return __thiz.callMethod<jboolean>(
			"hasChanged",
			"()Z"
		);
	}
} // namespace __jni_impl::android::gesture

namespace android::gesture
{
	class GestureStore : public __jni_impl::android::gesture::GestureStore
	{
	public:
		GestureStore(QAndroidJniObject obj) { __thiz = obj; }
		GestureStore()
		{
			__constructor();
		}
	};
} // namespace android::gesture

#endif // ANDROID_GESTURE_GESTURESTORE

