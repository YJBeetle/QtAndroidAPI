#pragma once

#include "../../JObject.hpp"


namespace android::text
{
	class AlteredCharSequence : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AlteredCharSequence(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AlteredCharSequence(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::text::AlteredCharSequence make(jstring arg0, jcharArray arg1, jint arg2, jint arg3);
		jchar charAt(jint arg0);
		void getChars(jint arg0, jint arg1, jcharArray arg2, jint arg3);
		jint length();
		jstring subSequence(jint arg0, jint arg1);
		jstring toString();
	};
} // namespace android::text

