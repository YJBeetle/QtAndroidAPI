#pragma once

#include "../io/InputStream.def.hpp"
#include "../io/Reader.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PropertyResourceBundle.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline PropertyResourceBundle::PropertyResourceBundle(java::io::InputStream arg0)
		: java::util::ResourceBundle(
			"java.util.PropertyResourceBundle",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	inline PropertyResourceBundle::PropertyResourceBundle(java::io::Reader arg0)
		: java::util::ResourceBundle(
			"java.util.PropertyResourceBundle",
			"(Ljava/io/Reader;)V",
			arg0.object()
		) {}
	
	// Methods
	inline JObject PropertyResourceBundle::getKeys() const
	{
		return callObjectMethod(
			"getKeys",
			"()Ljava/util/Enumeration;"
		);
	}
	inline JObject PropertyResourceBundle::handleGetObject(JString arg0) const
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
