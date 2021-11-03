#include "../../JString.hpp"
#include "./FileObserver.hpp"

namespace android::os
{
	// Fields
	jint FileObserver::ACCESS()
	{
		return getStaticField<jint>(
			"android.os.FileObserver",
			"ACCESS"
		);
	}
	jint FileObserver::ALL_EVENTS()
	{
		return getStaticField<jint>(
			"android.os.FileObserver",
			"ALL_EVENTS"
		);
	}
	jint FileObserver::ATTRIB()
	{
		return getStaticField<jint>(
			"android.os.FileObserver",
			"ATTRIB"
		);
	}
	jint FileObserver::CLOSE_NOWRITE()
	{
		return getStaticField<jint>(
			"android.os.FileObserver",
			"CLOSE_NOWRITE"
		);
	}
	jint FileObserver::CLOSE_WRITE()
	{
		return getStaticField<jint>(
			"android.os.FileObserver",
			"CLOSE_WRITE"
		);
	}
	jint FileObserver::CREATE()
	{
		return getStaticField<jint>(
			"android.os.FileObserver",
			"CREATE"
		);
	}
	jint FileObserver::DELETE()
	{
		return getStaticField<jint>(
			"android.os.FileObserver",
			"DELETE"
		);
	}
	jint FileObserver::DELETE_SELF()
	{
		return getStaticField<jint>(
			"android.os.FileObserver",
			"DELETE_SELF"
		);
	}
	jint FileObserver::MODIFY()
	{
		return getStaticField<jint>(
			"android.os.FileObserver",
			"MODIFY"
		);
	}
	jint FileObserver::MOVED_FROM()
	{
		return getStaticField<jint>(
			"android.os.FileObserver",
			"MOVED_FROM"
		);
	}
	jint FileObserver::MOVED_TO()
	{
		return getStaticField<jint>(
			"android.os.FileObserver",
			"MOVED_TO"
		);
	}
	jint FileObserver::MOVE_SELF()
	{
		return getStaticField<jint>(
			"android.os.FileObserver",
			"MOVE_SELF"
		);
	}
	jint FileObserver::OPEN()
	{
		return getStaticField<jint>(
			"android.os.FileObserver",
			"OPEN"
		);
	}
	
	// QAndroidJniObject forward
	FileObserver::FileObserver(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	FileObserver::FileObserver(JString arg0)
		: JObject(
			"android.os.FileObserver",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	FileObserver::FileObserver(JString arg0, jint arg1)
		: JObject(
			"android.os.FileObserver",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	void FileObserver::onEvent(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"onEvent",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	void FileObserver::startWatching() const
	{
		callMethod<void>(
			"startWatching",
			"()V"
		);
	}
	void FileObserver::stopWatching() const
	{
		callMethod<void>(
			"stopWatching",
			"()V"
		);
	}
} // namespace android::os

