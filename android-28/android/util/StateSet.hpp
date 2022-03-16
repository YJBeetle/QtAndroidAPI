#pragma once

#include "../../JIntArray.hpp"
#include "../../JString.hpp"
#include "./StateSet.def.hpp"

namespace android::util
{
	// Fields
	inline JIntArray StateSet::NOTHING()
	{
		return getStaticObjectField(
			"android.util.StateSet",
			"NOTHING",
			"[I"
		);
	}
	inline JIntArray StateSet::WILD_CARD()
	{
		return getStaticObjectField(
			"android.util.StateSet",
			"WILD_CARD",
			"[I"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString StateSet::dump(JIntArray arg0)
	{
		return callStaticObjectMethod(
			"android.util.StateSet",
			"dump",
			"([I)Ljava/lang/String;",
			arg0.object<jintArray>()
		);
	}
	inline jboolean StateSet::isWildCard(JIntArray arg0)
	{
		return callStaticMethod<jboolean>(
			"android.util.StateSet",
			"isWildCard",
			"([I)Z",
			arg0.object<jintArray>()
		);
	}
	inline jboolean StateSet::stateSetMatches(JIntArray arg0, JIntArray arg1)
	{
		return callStaticMethod<jboolean>(
			"android.util.StateSet",
			"stateSetMatches",
			"([I[I)Z",
			arg0.object<jintArray>(),
			arg1.object<jintArray>()
		);
	}
	inline jboolean StateSet::stateSetMatches(JIntArray arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"android.util.StateSet",
			"stateSetMatches",
			"([II)Z",
			arg0.object<jintArray>(),
			arg1
		);
	}
	inline JIntArray StateSet::trimStateSet(JIntArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.util.StateSet",
			"trimStateSet",
			"([II)[I",
			arg0.object<jintArray>(),
			arg1
		);
	}
} // namespace android::util

// Base class headers

