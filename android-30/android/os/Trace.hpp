#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::os
{
	class Trace : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Trace(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Trace(QJniObject obj);
		
		// Constructors
		
		// Methods
		static void beginAsyncSection(jstring arg0, jint arg1);
		static void beginSection(jstring arg0);
		static void endAsyncSection(jstring arg0, jint arg1);
		static void endSection();
		static jboolean isEnabled();
		static void setCounter(jstring arg0, jlong arg1);
	};
} // namespace android::os

