#pragma once

#include "../../JClass.hpp"
#include "../lang/ClassLoader.def.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "../lang/Void.def.hpp"
#include "../lang/reflect/Constructor.def.hpp"
#include "../lang/reflect/Method.def.hpp"
#include "../net/URL.def.hpp"
#include "../security/AccessControlContext.def.hpp"
#include "./Optional.def.hpp"
#include "./ServiceLoader.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::util::ServiceLoader ServiceLoader::load(JClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.ServiceLoader",
			"load",
			"(Ljava/lang/Class;)Ljava/util/ServiceLoader;",
			arg0.object<jclass>()
		);
	}
	inline java::util::ServiceLoader ServiceLoader::load(JClass arg0, java::lang::ClassLoader arg1)
	{
		return callStaticObjectMethod(
			"java.util.ServiceLoader",
			"load",
			"(Ljava/lang/Class;Ljava/lang/ClassLoader;)Ljava/util/ServiceLoader;",
			arg0.object<jclass>(),
			arg1.object()
		);
	}
	inline java::util::ServiceLoader ServiceLoader::load(JObject arg0, JClass arg1)
	{
		return callStaticObjectMethod(
			"java.util.ServiceLoader",
			"load",
			"(Ljava/lang/ModuleLayer;Ljava/lang/Class;)Ljava/util/ServiceLoader;",
			arg0.object(),
			arg1.object<jclass>()
		);
	}
	inline java::util::ServiceLoader ServiceLoader::loadInstalled(JClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.ServiceLoader",
			"loadInstalled",
			"(Ljava/lang/Class;)Ljava/util/ServiceLoader;",
			arg0.object<jclass>()
		);
	}
	inline java::util::Optional ServiceLoader::findFirst() const
	{
		return callObjectMethod(
			"findFirst",
			"()Ljava/util/Optional;"
		);
	}
	inline JObject ServiceLoader::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline void ServiceLoader::reload() const
	{
		callMethod<void>(
			"reload",
			"()V"
		);
	}
	inline JObject ServiceLoader::stream() const
	{
		return callObjectMethod(
			"stream",
			"()Ljava/util/stream/Stream;"
		);
	}
	inline JString ServiceLoader::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
