#include "../../JObject.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./Observable.hpp"

namespace android::database
{
	// Fields
	
	// QAndroidJniObject forward
	Observable::Observable(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Observable::Observable()
		: JObject(
			"android.database.Observable",
			"()V"
		) {}
	
	// Methods
	void Observable::registerObserver(JObject arg0)
	{
		callMethod<void>(
			"registerObserver",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void Observable::unregisterAll()
	{
		callMethod<void>(
			"unregisterAll",
			"()V"
		);
	}
	void Observable::unregisterObserver(JObject arg0)
	{
		callMethod<void>(
			"unregisterObserver",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
} // namespace android::database

