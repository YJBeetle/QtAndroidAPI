#include "./Gesture.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../java/io/OutputStream.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./GestureStore.hpp"

namespace android::gesture
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
	
	GestureStore::GestureStore(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GestureStore::GestureStore()
	{
		__thiz = QAndroidJniObject(
			"android.gesture.GestureStore",
			"()V"
		);
	}
	
	// Methods
	void GestureStore::addGesture(jstring arg0, android::gesture::Gesture arg1)
	{
		__thiz.callMethod<void>(
			"addGesture",
			"(Ljava/lang/String;Landroid/gesture/Gesture;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void GestureStore::addGesture(const QString &arg0, android::gesture::Gesture arg1)
	{
		__thiz.callMethod<void>(
			"addGesture",
			"(Ljava/lang/String;Landroid/gesture/Gesture;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject GestureStore::getGestureEntries()
	{
		return __thiz.callObjectMethod(
			"getGestureEntries",
			"()Ljava/util/Set;"
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
	QAndroidJniObject GestureStore::getGestures(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getGestures",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint GestureStore::getOrientationStyle()
	{
		return __thiz.callMethod<jint>(
			"getOrientationStyle",
			"()I"
		);
	}
	jint GestureStore::getSequenceType()
	{
		return __thiz.callMethod<jint>(
			"getSequenceType",
			"()I"
		);
	}
	jboolean GestureStore::hasChanged()
	{
		return __thiz.callMethod<jboolean>(
			"hasChanged",
			"()Z"
		);
	}
	void GestureStore::load(java::io::InputStream arg0)
	{
		__thiz.callMethod<void>(
			"load",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void GestureStore::load(java::io::InputStream arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"load",
			"(Ljava/io/InputStream;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject GestureStore::recognize(android::gesture::Gesture arg0)
	{
		return __thiz.callObjectMethod(
			"recognize",
			"(Landroid/gesture/Gesture;)Ljava/util/ArrayList;",
			arg0.__jniObject().object()
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
	void GestureStore::removeEntry(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"removeEntry",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void GestureStore::removeGesture(jstring arg0, android::gesture::Gesture arg1)
	{
		__thiz.callMethod<void>(
			"removeGesture",
			"(Ljava/lang/String;Landroid/gesture/Gesture;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void GestureStore::removeGesture(const QString &arg0, android::gesture::Gesture arg1)
	{
		__thiz.callMethod<void>(
			"removeGesture",
			"(Ljava/lang/String;Landroid/gesture/Gesture;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void GestureStore::save(java::io::OutputStream arg0)
	{
		__thiz.callMethod<void>(
			"save",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void GestureStore::save(java::io::OutputStream arg0, jboolean arg1)
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
	void GestureStore::setSequenceType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSequenceType",
			"(I)V",
			arg0
		);
	}
} // namespace android::gesture

