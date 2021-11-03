#include "./Gesture.hpp"
#include "./GestureStore.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./GestureLibrary.hpp"

namespace android::gesture
{
	// Fields
	
	// QJniObject forward
	GestureLibrary::GestureLibrary(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void GestureLibrary::addGesture(JString arg0, android::gesture::Gesture arg1) const
	{
		callMethod<void>(
			"addGesture",
			"(Ljava/lang/String;Landroid/gesture/Gesture;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JObject GestureLibrary::getGestureEntries() const
	{
		return callObjectMethod(
			"getGestureEntries",
			"()Ljava/util/Set;"
		);
	}
	java::util::ArrayList GestureLibrary::getGestures(JString arg0) const
	{
		return callObjectMethod(
			"getGestures",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0.object<jstring>()
		);
	}
	jint GestureLibrary::getOrientationStyle() const
	{
		return callMethod<jint>(
			"getOrientationStyle",
			"()I"
		);
	}
	jint GestureLibrary::getSequenceType() const
	{
		return callMethod<jint>(
			"getSequenceType",
			"()I"
		);
	}
	jboolean GestureLibrary::isReadOnly() const
	{
		return callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	jboolean GestureLibrary::load() const
	{
		return callMethod<jboolean>(
			"load",
			"()Z"
		);
	}
	java::util::ArrayList GestureLibrary::recognize(android::gesture::Gesture arg0) const
	{
		return callObjectMethod(
			"recognize",
			"(Landroid/gesture/Gesture;)Ljava/util/ArrayList;",
			arg0.object()
		);
	}
	void GestureLibrary::removeEntry(JString arg0) const
	{
		callMethod<void>(
			"removeEntry",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void GestureLibrary::removeGesture(JString arg0, android::gesture::Gesture arg1) const
	{
		callMethod<void>(
			"removeGesture",
			"(Ljava/lang/String;Landroid/gesture/Gesture;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	jboolean GestureLibrary::save() const
	{
		return callMethod<jboolean>(
			"save",
			"()Z"
		);
	}
	void GestureLibrary::setOrientationStyle(jint arg0) const
	{
		callMethod<void>(
			"setOrientationStyle",
			"(I)V",
			arg0
		);
	}
	void GestureLibrary::setSequenceType(jint arg0) const
	{
		callMethod<void>(
			"setSequenceType",
			"(I)V",
			arg0
		);
	}
} // namespace android::gesture

