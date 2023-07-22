#pragma once

#include "../../JObject.hpp"

class JIntArray;
class JString;

namespace android::util
{
	class StateSet : public JObject
	{
	public:
		// Fields
		static JIntArray NOTHING();
		static JIntArray WILD_CARD();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StateSet(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StateSet(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JString dump(JIntArray arg0);
		static jboolean isWildCard(JIntArray arg0);
		static jboolean stateSetMatches(JIntArray arg0, JIntArray arg1);
		static jboolean stateSetMatches(JIntArray arg0, jint arg1);
		static JIntArray trimStateSet(JIntArray arg0, jint arg1);
	};
} // namespace android::util

