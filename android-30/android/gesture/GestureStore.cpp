#include "./Gesture.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../java/io/OutputStream.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./GestureStore.hpp"

namespace android::gesture
{
	// Fields
	jint GestureStore::ORIENTATION_INVARIANT()
	{
		return getStaticField<jint>(
			"android.gesture.GestureStore",
			"ORIENTATION_INVARIANT"
		);
	}
	jint GestureStore::ORIENTATION_SENSITIVE()
	{
		return getStaticField<jint>(
			"android.gesture.GestureStore",
			"ORIENTATION_SENSITIVE"
		);
	}
	jint GestureStore::SEQUENCE_INVARIANT()
	{
		return getStaticField<jint>(
			"android.gesture.GestureStore",
			"SEQUENCE_INVARIANT"
		);
	}
	jint GestureStore::SEQUENCE_SENSITIVE()
	{
		return getStaticField<jint>(
			"android.gesture.GestureStore",
			"SEQUENCE_SENSITIVE"
		);
	}
	
	// QAndroidJniObject forward
	GestureStore::GestureStore(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	GestureStore::GestureStore()
		: JObject(
			"android.gesture.GestureStore",
			"()V"
		) {}
	
	// Methods
	void GestureStore::addGesture(JString arg0, android::gesture::Gesture arg1)
	{
		callMethod<void>(
			"addGesture",
			"(Ljava/lang/String;Landroid/gesture/Gesture;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JObject GestureStore::getGestureEntries()
	{
		return callObjectMethod(
			"getGestureEntries",
			"()Ljava/util/Set;"
		);
	}
	java::util::ArrayList GestureStore::getGestures(JString arg0)
	{
		return callObjectMethod(
			"getGestures",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0.object<jstring>()
		);
	}
	jint GestureStore::getOrientationStyle()
	{
		return callMethod<jint>(
			"getOrientationStyle",
			"()I"
		);
	}
	jint GestureStore::getSequenceType()
	{
		return callMethod<jint>(
			"getSequenceType",
			"()I"
		);
	}
	jboolean GestureStore::hasChanged()
	{
		return callMethod<jboolean>(
			"hasChanged",
			"()Z"
		);
	}
	void GestureStore::load(java::io::InputStream arg0)
	{
		callMethod<void>(
			"load",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	void GestureStore::load(java::io::InputStream arg0, jboolean arg1)
	{
		callMethod<void>(
			"load",
			"(Ljava/io/InputStream;Z)V",
			arg0.object(),
			arg1
		);
	}
	java::util::ArrayList GestureStore::recognize(android::gesture::Gesture arg0)
	{
		return callObjectMethod(
			"recognize",
			"(Landroid/gesture/Gesture;)Ljava/util/ArrayList;",
			arg0.object()
		);
	}
	void GestureStore::removeEntry(JString arg0)
	{
		callMethod<void>(
			"removeEntry",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void GestureStore::removeGesture(JString arg0, android::gesture::Gesture arg1)
	{
		callMethod<void>(
			"removeGesture",
			"(Ljava/lang/String;Landroid/gesture/Gesture;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void GestureStore::save(java::io::OutputStream arg0)
	{
		callMethod<void>(
			"save",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
	void GestureStore::save(java::io::OutputStream arg0, jboolean arg1)
	{
		callMethod<void>(
			"save",
			"(Ljava/io/OutputStream;Z)V",
			arg0.object(),
			arg1
		);
	}
	void GestureStore::setOrientationStyle(jint arg0)
	{
		callMethod<void>(
			"setOrientationStyle",
			"(I)V",
			arg0
		);
	}
	void GestureStore::setSequenceType(jint arg0)
	{
		callMethod<void>(
			"setSequenceType",
			"(I)V",
			arg0
		);
	}
} // namespace android::gesture

