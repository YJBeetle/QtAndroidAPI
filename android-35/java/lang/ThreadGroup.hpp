#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../io/PrintStream.def.hpp"
#include "../../JString.hpp"
#include "./Thread.def.hpp"
#include "../../JThrowable.hpp"
#include "./Void.def.hpp"
#include "./ThreadGroup.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline ThreadGroup::ThreadGroup(JString arg0)
		: JObject(
			"java.lang.ThreadGroup",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline ThreadGroup::ThreadGroup(java::lang::ThreadGroup &arg0, JString arg1)
		: JObject(
			"java.lang.ThreadGroup",
			"(Ljava/lang/ThreadGroup;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline jint ThreadGroup::activeCount() const
	{
		return callMethod<jint>(
			"activeCount",
			"()I"
		);
	}
	inline jint ThreadGroup::activeGroupCount() const
	{
		return callMethod<jint>(
			"activeGroupCount",
			"()I"
		);
	}
	inline jboolean ThreadGroup::allowThreadSuspension(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"allowThreadSuspension",
			"(Z)Z",
			arg0
		);
	}
	inline void ThreadGroup::checkAccess() const
	{
		callMethod<void>(
			"checkAccess",
			"()V"
		);
	}
	inline void ThreadGroup::destroy() const
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	inline jint ThreadGroup::enumerate(JArray arg0) const
	{
		return callMethod<jint>(
			"enumerate",
			"([Ljava/lang/Thread;)I",
			arg0.object<jarray>()
		);
	}
	inline jint ThreadGroup::enumerate(JArray arg0, jboolean arg1) const
	{
		return callMethod<jint>(
			"enumerate",
			"([Ljava/lang/Thread;Z)I",
			arg0.object<jarray>(),
			arg1
		);
	}
	inline jint ThreadGroup::getMaxPriority() const
	{
		return callMethod<jint>(
			"getMaxPriority",
			"()I"
		);
	}
	inline JString ThreadGroup::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline java::lang::ThreadGroup ThreadGroup::getParent() const
	{
		return callObjectMethod(
			"getParent",
			"()Ljava/lang/ThreadGroup;"
		);
	}
	inline void ThreadGroup::interrupt() const
	{
		callMethod<void>(
			"interrupt",
			"()V"
		);
	}
	inline jboolean ThreadGroup::isDaemon() const
	{
		return callMethod<jboolean>(
			"isDaemon",
			"()Z"
		);
	}
	inline jboolean ThreadGroup::isDestroyed() const
	{
		return callMethod<jboolean>(
			"isDestroyed",
			"()Z"
		);
	}
	inline void ThreadGroup::list() const
	{
		callMethod<void>(
			"list",
			"()V"
		);
	}
	inline jboolean ThreadGroup::parentOf(java::lang::ThreadGroup arg0) const
	{
		return callMethod<jboolean>(
			"parentOf",
			"(Ljava/lang/ThreadGroup;)Z",
			arg0.object()
		);
	}
	inline void ThreadGroup::resume() const
	{
		callMethod<void>(
			"resume",
			"()V"
		);
	}
	inline void ThreadGroup::setDaemon(jboolean arg0) const
	{
		callMethod<void>(
			"setDaemon",
			"(Z)V",
			arg0
		);
	}
	inline void ThreadGroup::setMaxPriority(jint arg0) const
	{
		callMethod<void>(
			"setMaxPriority",
			"(I)V",
			arg0
		);
	}
	inline void ThreadGroup::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
	inline void ThreadGroup::suspend() const
	{
		callMethod<void>(
			"suspend",
			"()V"
		);
	}
	inline JString ThreadGroup::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ThreadGroup::uncaughtException(java::lang::Thread arg0, JThrowable arg1) const
	{
		callMethod<void>(
			"uncaughtException",
			"(Ljava/lang/Thread;Ljava/lang/Throwable;)V",
			arg0.object(),
			arg1.object<jthrowable>()
		);
	}
} // namespace java::lang

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
