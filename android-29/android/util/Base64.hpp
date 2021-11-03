#pragma once

#include "../../JObject.hpp"


namespace android::util
{
	class Base64 : public JObject
	{
	public:
		// Fields
		static jint CRLF();
		static jint DEFAULT();
		static jint NO_CLOSE();
		static jint NO_PADDING();
		static jint NO_WRAP();
		static jint URL_SAFE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Base64(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Base64(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jbyteArray decode(jbyteArray arg0, jint arg1);
		static jbyteArray decode(jstring arg0, jint arg1);
		static jbyteArray decode(jbyteArray arg0, jint arg1, jint arg2, jint arg3);
		static jbyteArray encode(jbyteArray arg0, jint arg1);
		static jbyteArray encode(jbyteArray arg0, jint arg1, jint arg2, jint arg3);
		static jstring encodeToString(jbyteArray arg0, jint arg1);
		static jstring encodeToString(jbyteArray arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace android::util

