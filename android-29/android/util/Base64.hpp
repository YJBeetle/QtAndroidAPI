#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class Base64 : public __JniBaseClass
	{
	public:
		// Fields
		static jint CRLF();
		static jint DEFAULT();
		static jint NO_CLOSE();
		static jint NO_PADDING();
		static jint NO_WRAP();
		static jint URL_SAFE();
		
		Base64(QAndroidJniObject obj);
		// Constructors
		Base64() = default;
		
		// Methods
		static jbyteArray decode(jbyteArray arg0, jint arg1);
		static jbyteArray decode(jstring arg0, jint arg1);
		static jbyteArray decode(const QString &arg0, jint arg1);
		static jbyteArray decode(jbyteArray arg0, jint arg1, jint arg2, jint arg3);
		static jbyteArray encode(jbyteArray arg0, jint arg1);
		static jbyteArray encode(jbyteArray arg0, jint arg1, jint arg2, jint arg3);
		static jstring encodeToString(jbyteArray arg0, jint arg1);
		static jstring encodeToString(jbyteArray arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace android::util

