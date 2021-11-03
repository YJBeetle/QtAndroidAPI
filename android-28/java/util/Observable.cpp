#include "../../JObject.hpp"
#include "./Vector.hpp"
#include "./Observable.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	Observable::Observable(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Observable::Observable()
		: JObject(
			"java.util.Observable",
			"()V"
		) {}
	
	// Methods
	void Observable::addObserver(JObject arg0) const
	{
		callMethod<void>(
			"addObserver",
			"(Ljava/util/Observer;)V",
			arg0.object()
		);
	}
	jint Observable::countObservers() const
	{
		return callMethod<jint>(
			"countObservers",
			"()I"
		);
	}
	void Observable::deleteObserver(JObject arg0) const
	{
		callMethod<void>(
			"deleteObserver",
			"(Ljava/util/Observer;)V",
			arg0.object()
		);
	}
	void Observable::deleteObservers() const
	{
		callMethod<void>(
			"deleteObservers",
			"()V"
		);
	}
	jboolean Observable::hasChanged() const
	{
		return callMethod<jboolean>(
			"hasChanged",
			"()Z"
		);
	}
	void Observable::notifyObservers() const
	{
		callMethod<void>(
			"notifyObservers",
			"()V"
		);
	}
	void Observable::notifyObservers(JObject arg0) const
	{
		callMethod<void>(
			"notifyObservers",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
} // namespace java::util

