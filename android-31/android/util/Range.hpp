#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class Range : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Range(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Range(QJniObject obj);
		
		// Constructors
		Range(__JniBaseClass arg0, __JniBaseClass arg1);
		
		// Methods
		static android::util::Range create(__JniBaseClass arg0, __JniBaseClass arg1);
		__JniBaseClass clamp(__JniBaseClass arg0);
		jboolean contains(android::util::Range arg0);
		jboolean contains(__JniBaseClass arg0);
		jboolean equals(jobject arg0);
		android::util::Range extend(android::util::Range arg0);
		android::util::Range extend(__JniBaseClass arg0);
		android::util::Range extend(__JniBaseClass arg0, __JniBaseClass arg1);
		__JniBaseClass getLower();
		__JniBaseClass getUpper();
		jint hashCode();
		android::util::Range intersect(android::util::Range arg0);
		android::util::Range intersect(__JniBaseClass arg0, __JniBaseClass arg1);
		jstring toString();
	};
} // namespace android::util

