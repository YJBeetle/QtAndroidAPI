#include "./Gesture.hpp"
#include "./GestureStore.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./GestureLibrary.hpp"

namespace android::gesture
{
	// Fields
	
	GestureLibrary::GestureLibrary(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void GestureLibrary::addGesture(jstring arg0, android::gesture::Gesture arg1)
	{
		__thiz.callMethod<void>(
			"addGesture",
			"(Ljava/lang/String;Landroid/gesture/Gesture;)V",
			arg0,
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
	QAndroidJniObject GestureLibrary::recognize(android::gesture::Gesture arg0)
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
	void GestureLibrary::removeGesture(jstring arg0, android::gesture::Gesture arg1)
	{
		__thiz.callMethod<void>(
			"removeGesture",
			"(Ljava/lang/String;Landroid/gesture/Gesture;)V",
			arg0,
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
} // namespace android::gesture

