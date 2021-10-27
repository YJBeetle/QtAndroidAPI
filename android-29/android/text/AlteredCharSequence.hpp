#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::text
{
	class AlteredCharSequence : public __JniBaseClass
	{
	public:
		// Fields
		
		AlteredCharSequence(QAndroidJniObject obj);
		// Constructors
		AlteredCharSequence() = default;
		
		// Methods
		static QAndroidJniObject make(jstring arg0, jcharArray arg1, jint arg2, jint arg3);
		static QAndroidJniObject make(const QString &arg0, jcharArray arg1, jint arg2, jint arg3);
		jchar charAt(jint arg0);
		void getChars(jint arg0, jint arg1, jcharArray arg2, jint arg3);
		jint length();
		jstring subSequence(jint arg0, jint arg1);
		jstring toString();
	};
} // namespace android::text

