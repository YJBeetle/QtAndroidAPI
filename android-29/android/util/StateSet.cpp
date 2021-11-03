#include "./StateSet.hpp"

namespace android::util
{
	// Fields
	jintArray StateSet::NOTHING()
	{
		return getStaticObjectField(
			"android.util.StateSet",
			"NOTHING",
			"[I"
		).object<jintArray>();
	}
	jintArray StateSet::WILD_CARD()
	{
		return getStaticObjectField(
			"android.util.StateSet",
			"WILD_CARD",
			"[I"
		).object<jintArray>();
	}
	
	// QJniObject forward
	StateSet::StateSet(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jstring StateSet::dump(jintArray arg0)
	{
		return callStaticObjectMethod(
			"android.util.StateSet",
			"dump",
			"([I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jboolean StateSet::isWildCard(jintArray arg0)
	{
		return callStaticMethod<jboolean>(
			"android.util.StateSet",
			"isWildCard",
			"([I)Z",
			arg0
		);
	}
	jboolean StateSet::stateSetMatches(jintArray arg0, jintArray arg1)
	{
		return callStaticMethod<jboolean>(
			"android.util.StateSet",
			"stateSetMatches",
			"([I[I)Z",
			arg0,
			arg1
		);
	}
	jboolean StateSet::stateSetMatches(jintArray arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"android.util.StateSet",
			"stateSetMatches",
			"([II)Z",
			arg0,
			arg1
		);
	}
	jintArray StateSet::trimStateSet(jintArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.util.StateSet",
			"trimStateSet",
			"([II)[I",
			arg0,
			arg1
		).object<jintArray>();
	}
} // namespace android::util

