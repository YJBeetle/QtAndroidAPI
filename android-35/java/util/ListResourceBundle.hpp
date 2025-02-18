#pragma once

#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ListResourceBundle.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline ListResourceBundle::ListResourceBundle()
		: java::util::ResourceBundle(
			"java.util.ListResourceBundle",
			"()V"
		) {}
	
	// Methods
	inline JObject ListResourceBundle::getKeys() const
	{
		return callObjectMethod(
			"getKeys",
			"()Ljava/util/Enumeration;"
		);
	}
	inline JObject ListResourceBundle::handleGetObject(JString arg0) const
	{
		return callObjectMethod(
			"handleGetObject",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
} // namespace java::util

// Base class headers
#include "./ResourceBundle.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
