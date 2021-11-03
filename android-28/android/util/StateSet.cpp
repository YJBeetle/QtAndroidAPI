#include "../../JIntArray.hpp"
#include "../../JString.hpp"
#include "./StateSet.hpp"

namespace android::util
{
	// Fields
	JIntArray StateSet::NOTHING()
	{
		return getStaticObjectField(
			"android.util.StateSet",
			"NOTHING",
			"[I"
		);
	}
	JIntArray StateSet::WILD_CARD()
	{
		return getStaticObjectField(
			"android.util.StateSet",
			"WILD_CARD",
			"[I"
		);
	}
	
	// QAndroidJniObject forward
	StateSet::StateSet(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString StateSet::dump(JIntArray arg0)
	{
		return callStaticObjectMethod(
			"android.util.StateSet",
			"dump",
			"([I)Ljava/lang/String;",
			arg0.object<jintArray>()
		);
	}
	jboolean StateSet::isWildCard(JIntArray arg0)
	{
		return callStaticMethod<jboolean>(
			"android.util.StateSet",
			"isWildCard",
			"([I)Z",
			arg0.object<jintArray>()
		);
	}
	jboolean StateSet::stateSetMatches(JIntArray arg0, JIntArray arg1)
	{
		return callStaticMethod<jboolean>(
			"android.util.StateSet",
			"stateSetMatches",
			"([I[I)Z",
			arg0.object<jintArray>(),
			arg1.object<jintArray>()
		);
	}
	jboolean StateSet::stateSetMatches(JIntArray arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"android.util.StateSet",
			"stateSetMatches",
			"([II)Z",
			arg0.object<jintArray>(),
			arg1
		);
	}
	JIntArray StateSet::trimStateSet(JIntArray arg0, jint arg1)
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

