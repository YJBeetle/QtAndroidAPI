#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::text
{
	class AlteredCharSequence : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlteredCharSequence(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AlteredCharSequence(QAndroidJniObject obj);
		
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

