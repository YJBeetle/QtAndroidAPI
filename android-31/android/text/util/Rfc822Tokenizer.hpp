#pragma once

#include "../../../JObject.hpp"


namespace android::text::util
{
	class Rfc822Tokenizer : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Rfc822Tokenizer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Rfc822Tokenizer(QJniObject obj);
		
		// Constructors
		Rfc822Tokenizer();
		
		// Methods
		static jarray tokenize(jstring arg0);
		static void tokenize(jstring arg0, JObject arg1);
		jint findTokenEnd(jstring arg0, jint arg1);
		jint findTokenStart(jstring arg0, jint arg1);
		jstring terminateToken(jstring arg0);
	};
} // namespace android::text::util

