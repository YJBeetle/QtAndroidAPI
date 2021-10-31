#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::os
{
	class Trace : public __JniBaseClass
	{
	public:
		// Fields
		
		Trace(QAndroidJniObject obj);
		// Constructors
		Trace() = default;
		
		// Methods
		static void beginAsyncSection(jstring arg0, jint arg1);
		static void beginSection(jstring arg0);
		static void endAsyncSection(jstring arg0, jint arg1);
		static void endSection();
		static jboolean isEnabled();
		static void setCounter(jstring arg0, jlong arg1);
	};
} // namespace android::os

