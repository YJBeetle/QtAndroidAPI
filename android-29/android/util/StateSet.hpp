#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class StateSet : public __JniBaseClass
	{
	public:
		// Fields
		static jintArray NOTHING();
		static jintArray WILD_CARD();
		
		StateSet(QAndroidJniObject obj);
		// Constructors
		StateSet() = default;
		
		// Methods
		static jstring dump(jintArray arg0);
		static jboolean isWildCard(jintArray arg0);
		static jboolean stateSetMatches(jintArray arg0, jintArray arg1);
		static jboolean stateSetMatches(jintArray arg0, jint arg1);
		static jintArray trimStateSet(jintArray arg0, jint arg1);
	};
} // namespace android::util

