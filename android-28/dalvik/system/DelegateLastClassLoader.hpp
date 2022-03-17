#pragma once

#include "../../JClass.hpp"
#include "../../java/lang/ClassLoader.def.hpp"
#include "../../JString.hpp"
#include "../../java/net/URL.def.hpp"
#include "./DelegateLastClassLoader.def.hpp"

namespace dalvik::system
{
	// Fields
	
	// Constructors
	inline DelegateLastClassLoader::DelegateLastClassLoader(JString arg0, java::lang::ClassLoader arg1)
		: dalvik::system::PathClassLoader(
			"dalvik.system.DelegateLastClassLoader",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	inline DelegateLastClassLoader::DelegateLastClassLoader(JString arg0, JString arg1, java::lang::ClassLoader arg2)
		: dalvik::system::PathClassLoader(
			"dalvik.system.DelegateLastClassLoader",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	
	// Methods
	inline java::net::URL DelegateLastClassLoader::getResource(JString arg0) const
	{
		return callObjectMethod(
			"getResource",
			"(Ljava/lang/String;)Ljava/net/URL;",
			arg0.object<jstring>()
		);
	}
	inline JObject DelegateLastClassLoader::getResources(JString arg0) const
	{
		return callObjectMethod(
			"getResources",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0.object<jstring>()
		);
	}
} // namespace dalvik::system

// Base class headers
#include "../../java/lang/ClassLoader.hpp"
#include "./BaseDexClassLoader.hpp"
#include "./PathClassLoader.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace dalvik::system;
#endif
