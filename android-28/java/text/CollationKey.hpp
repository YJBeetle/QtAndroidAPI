#pragma once

#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CollationKey.def.hpp"

namespace java::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint CollationKey::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint CollationKey::compareTo(java::text::CollationKey arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/text/CollationKey;)I",
			arg0.object()
		);
	}
	inline JString CollationKey::getSourceString() const
	{
		return callObjectMethod(
			"getSourceString",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray CollationKey::toByteArray() const
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		);
	}
} // namespace java::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::text;
#endif
