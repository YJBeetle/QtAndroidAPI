#pragma once

#include "../../JString.hpp"
#include "./FileObserver.def.hpp"

namespace android::os
{
	// Fields
	inline jint FileObserver::ACCESS()
	{
		return getStaticField<jint>(
			"android.os.FileObserver",
			"ACCESS"
		);
	}
	inline jint FileObserver::ALL_EVENTS()
	{
		return getStaticField<jint>(
			"android.os.FileObserver",
			"ALL_EVENTS"
		);
	}
	inline jint FileObserver::ATTRIB()
	{
		return getStaticField<jint>(
			"android.os.FileObserver",
			"ATTRIB"
		);
	}
	inline jint FileObserver::CLOSE_NOWRITE()
	{
		return getStaticField<jint>(
			"android.os.FileObserver",
			"CLOSE_NOWRITE"
		);
	}
	inline jint FileObserver::CLOSE_WRITE()
	{
		return getStaticField<jint>(
			"android.os.FileObserver",
			"CLOSE_WRITE"
		);
	}
	inline jint FileObserver::CREATE()
	{
		return getStaticField<jint>(
			"android.os.FileObserver",
			"CREATE"
		);
	}
	inline jint FileObserver::DELETE()
	{
		return getStaticField<jint>(
			"android.os.FileObserver",
			"DELETE"
		);
	}
	inline jint FileObserver::DELETE_SELF()
	{
		return getStaticField<jint>(
			"android.os.FileObserver",
			"DELETE_SELF"
		);
	}
	inline jint FileObserver::MODIFY()
	{
		return getStaticField<jint>(
			"android.os.FileObserver",
			"MODIFY"
		);
	}
	inline jint FileObserver::MOVED_FROM()
	{
		return getStaticField<jint>(
			"android.os.FileObserver",
			"MOVED_FROM"
		);
	}
	inline jint FileObserver::MOVED_TO()
	{
		return getStaticField<jint>(
			"android.os.FileObserver",
			"MOVED_TO"
		);
	}
	inline jint FileObserver::MOVE_SELF()
	{
		return getStaticField<jint>(
			"android.os.FileObserver",
			"MOVE_SELF"
		);
	}
	inline jint FileObserver::OPEN()
	{
		return getStaticField<jint>(
			"android.os.FileObserver",
			"OPEN"
		);
	}
	
	// Constructors
	inline FileObserver::FileObserver(JString arg0)
		: JObject(
			"android.os.FileObserver",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline FileObserver::FileObserver(JString arg0, jint arg1)
		: JObject(
			"android.os.FileObserver",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	inline void FileObserver::onEvent(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"onEvent",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void FileObserver::startWatching() const
	{
		callMethod<void>(
			"startWatching",
			"()V"
		);
	}
	inline void FileObserver::stopWatching() const
	{
		callMethod<void>(
			"stopWatching",
			"()V"
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
