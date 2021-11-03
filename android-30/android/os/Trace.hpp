#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::os
{
	class Trace : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Trace(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Trace(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static void beginAsyncSection(JString arg0, jint arg1);
		static void beginSection(JString arg0);
		static void endAsyncSection(JString arg0, jint arg1);
		static void endSection();
		static jboolean isEnabled();
		static void setCounter(JString arg0, jlong arg1);
	};
} // namespace android::os

