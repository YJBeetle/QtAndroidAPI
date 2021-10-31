#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::text::util
{
	class Rfc822Token : public __JniBaseClass
	{
	public:
		// Fields
		
		Rfc822Token(QAndroidJniObject obj);
		// Constructors
		Rfc822Token(jstring arg0, jstring arg1, jstring arg2);
		Rfc822Token() = default;
		
		// Methods
		static jstring quoteComment(jstring arg0);
		static jstring quoteName(jstring arg0);
		static jstring quoteNameIfNecessary(jstring arg0);
		jboolean equals(jobject arg0);
		jstring getAddress();
		jstring getComment();
		jstring getName();
		jint hashCode();
		void setAddress(jstring arg0);
		void setComment(jstring arg0);
		void setName(jstring arg0);
		jstring toString();
	};
} // namespace android::text::util

