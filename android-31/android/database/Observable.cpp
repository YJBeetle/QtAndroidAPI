#include "../../java/util/ArrayList.hpp"
#include "./Observable.hpp"

namespace android::database
{
	// Fields
	
	// QJniObject forward
	Observable::Observable(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Observable::Observable()
		: JObject(
			"android.database.Observable",
			"()V"
		) {}
	
	// Methods
	void Observable::registerObserver(jobject arg0)
	{
		callMethod<void>(
			"registerObserver",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void Observable::unregisterAll()
	{
		callMethod<void>(
			"unregisterAll",
			"()V"
		);
	}
	void Observable::unregisterObserver(jobject arg0)
	{
		callMethod<void>(
			"unregisterObserver",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
} // namespace android::database

