#include "../../java/util/ArrayList.hpp"
#include "./Observable.hpp"

namespace android::database
{
	// Fields
	
	Observable::Observable(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Observable::Observable()
	{
		__thiz = QAndroidJniObject(
			"android.database.Observable",
			"()V"
		);
	}
	
	// Methods
	void Observable::registerObserver(jobject arg0)
	{
		__thiz.callMethod<void>(
			"registerObserver",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void Observable::unregisterAll()
	{
		__thiz.callMethod<void>(
			"unregisterAll",
			"()V"
		);
	}
	void Observable::unregisterObserver(jobject arg0)
	{
		__thiz.callMethod<void>(
			"unregisterObserver",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
} // namespace android::database

