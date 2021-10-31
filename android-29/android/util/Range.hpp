#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class Range : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Range(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Range(QAndroidJniObject obj);
		
		// Constructors
		Range(__JniBaseClass arg0, __JniBaseClass arg1);
		
		// Methods
		static QAndroidJniObject create(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject clamp(__JniBaseClass arg0);
		jboolean contains(android::util::Range arg0);
		jboolean contains(__JniBaseClass arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject extend(android::util::Range arg0);
		QAndroidJniObject extend(__JniBaseClass arg0);
		QAndroidJniObject extend(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject getLower();
		QAndroidJniObject getUpper();
		jint hashCode();
		QAndroidJniObject intersect(android::util::Range arg0);
		QAndroidJniObject intersect(__JniBaseClass arg0, __JniBaseClass arg1);
		jstring toString();
	};
} // namespace android::util

