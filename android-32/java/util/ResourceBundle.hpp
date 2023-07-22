#pragma once

#include "../../JObjectArray.hpp"
#include "../../JArray.hpp"
#include "../../JClass.hpp"
#include "../lang/ClassLoader.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "../lang/ref/ReferenceQueue.def.hpp"
#include "./Locale.def.hpp"
#include "./ResourceBundle_Control.def.hpp"
#include "./ServiceLoader.def.hpp"
#include "./ResourceBundle.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline ResourceBundle::ResourceBundle()
		: JObject(
			"java.util.ResourceBundle",
			"()V"
		) {}
	
	// Methods
	inline void ResourceBundle::clearCache()
	{
		callStaticMethod<void>(
			"java.util.ResourceBundle",
			"clearCache",
			"()V"
		);
	}
	inline void ResourceBundle::clearCache(java::lang::ClassLoader arg0)
	{
		callStaticMethod<void>(
			"java.util.ResourceBundle",
			"clearCache",
			"(Ljava/lang/ClassLoader;)V",
			arg0.object()
		);
	}
	inline java::util::ResourceBundle ResourceBundle::getBundle(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;)Ljava/util/ResourceBundle;",
			arg0.object<jstring>()
		);
	}
	inline java::util::ResourceBundle ResourceBundle::getBundle(JString arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/lang/Module;)Ljava/util/ResourceBundle;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline java::util::ResourceBundle ResourceBundle::getBundle(JString arg0, java::util::Locale arg1)
	{
		return callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/ResourceBundle;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline java::util::ResourceBundle ResourceBundle::getBundle(JString arg0, java::util::ResourceBundle_Control arg1)
	{
		return callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline java::util::ResourceBundle ResourceBundle::getBundle(JString arg0, java::util::Locale arg1, java::lang::ClassLoader arg2)
	{
		return callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/ClassLoader;)Ljava/util/ResourceBundle;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline java::util::ResourceBundle ResourceBundle::getBundle(JString arg0, java::util::Locale arg1, JObject arg2)
	{
		return callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/Module;)Ljava/util/ResourceBundle;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline java::util::ResourceBundle ResourceBundle::getBundle(JString arg0, java::util::Locale arg1, java::util::ResourceBundle_Control arg2)
	{
		return callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/util/Locale;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline java::util::ResourceBundle ResourceBundle::getBundle(JString arg0, java::util::Locale arg1, java::lang::ClassLoader arg2, java::util::ResourceBundle_Control arg3)
	{
		return callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/ClassLoader;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline jboolean ResourceBundle::containsKey(JString arg0) const
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline JString ResourceBundle::getBaseBundleName() const
	{
		return callObjectMethod(
			"getBaseBundleName",
			"()Ljava/lang/String;"
		);
	}
	inline JObject ResourceBundle::getKeys() const
	{
		return callObjectMethod(
			"getKeys",
			"()Ljava/util/Enumeration;"
		);
	}
	inline java::util::Locale ResourceBundle::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	inline JObject ResourceBundle::getObject(JString arg0) const
	{
		return callObjectMethod(
			"getObject",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	inline JString ResourceBundle::getString(JString arg0) const
	{
		return callObjectMethod(
			"getString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JArray ResourceBundle::getStringArray(JString arg0) const
	{
		return callObjectMethod(
			"getStringArray",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JObject ResourceBundle::keySet() const
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
} // namespace java::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
