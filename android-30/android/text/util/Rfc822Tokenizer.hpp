#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::text::util
{
	class Rfc822Tokenizer : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Rfc822Tokenizer(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Rfc822Tokenizer(QAndroidJniObject obj);
		
		// Constructors
		Rfc822Tokenizer();
		
		// Methods
		static jarray tokenize(jstring arg0);
		static void tokenize(jstring arg0, __JniBaseClass arg1);
		jint findTokenEnd(jstring arg0, jint arg1);
		jint findTokenStart(jstring arg0, jint arg1);
		jstring terminateToken(jstring arg0);
	};
} // namespace android::text::util

