#include "./Gesture.hpp"
#include "./GestureStore.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./GestureLibrary.hpp"

namespace android::gesture
{
	// Fields
	
	// QJniObject forward
	GestureLibrary::GestureLibrary(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void GestureLibrary::addGesture(jstring arg0, android::gesture::Gesture arg1)
	{
		callMethod<void>(
			"addGesture",
			"(Ljava/lang/String;Landroid/gesture/Gesture;)V",
			arg0,
			arg1.object()
		);
	}
	__JniBaseClass GestureLibrary::getGestureEntries()
	{
		return callObjectMethod(
			"getGestureEntries",
			"()Ljava/util/Set;"
		);
	}
	java::util::ArrayList GestureLibrary::getGestures(jstring arg0)
	{
		return callObjectMethod(
			"getGestures",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
		);
	}
	jint GestureLibrary::getOrientationStyle()
	{
		return callMethod<jint>(
			"getOrientationStyle",
			"()I"
		);
	}
	jint GestureLibrary::getSequenceType()
	{
		return callMethod<jint>(
			"getSequenceType",
			"()I"
		);
	}
	jboolean GestureLibrary::isReadOnly()
	{
		return callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	jboolean GestureLibrary::load()
	{
		return callMethod<jboolean>(
			"load",
			"()Z"
		);
	}
	java::util::ArrayList GestureLibrary::recognize(android::gesture::Gesture arg0)
	{
		return callObjectMethod(
			"recognize",
			"(Landroid/gesture/Gesture;)Ljava/util/ArrayList;",
			arg0.object()
		);
	}
	void GestureLibrary::removeEntry(jstring arg0)
	{
		callMethod<void>(
			"removeEntry",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void GestureLibrary::removeGesture(jstring arg0, android::gesture::Gesture arg1)
	{
		callMethod<void>(
			"removeGesture",
			"(Ljava/lang/String;Landroid/gesture/Gesture;)V",
			arg0,
			arg1.object()
		);
	}
	jboolean GestureLibrary::save()
	{
		return callMethod<jboolean>(
			"save",
			"()Z"
		);
	}
	void GestureLibrary::setOrientationStyle(jint arg0)
	{
		callMethod<void>(
			"setOrientationStyle",
			"(I)V",
			arg0
		);
	}
	void GestureLibrary::setSequenceType(jint arg0)
	{
		callMethod<void>(
			"setSequenceType",
			"(I)V",
			arg0
		);
	}
} // namespace android::gesture

