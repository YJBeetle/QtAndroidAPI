#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./TextUtils_SimpleStringSplitter.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	inline TextUtils_SimpleStringSplitter::TextUtils_SimpleStringSplitter(jchar arg0)
		: JObject(
			"android.text.TextUtils$SimpleStringSplitter",
			"(C)V",
			arg0
		) {}
	
	// Methods
	inline jboolean TextUtils_SimpleStringSplitter::hasNext() const
	{
		return callMethod<jboolean>(
			"hasNext",
			"()Z"
		);
	}
	inline JObject TextUtils_SimpleStringSplitter::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline JString TextUtils_SimpleStringSplitter::next() const
	{
		return callObjectMethod(
			"next",
			"()Ljava/lang/String;"
		);
	}
	inline void TextUtils_SimpleStringSplitter::remove() const
	{
		callMethod<void>(
			"remove",
			"()V"
		);
	}
	inline void TextUtils_SimpleStringSplitter::setString(JString arg0) const
	{
		callMethod<void>(
			"setString",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::text

// Base class headers

