#include "./Base64.hpp"

namespace android::util
{
	// Fields
	jint Base64::CRLF()
	{
		return getStaticField<jint>(
			"android.util.Base64",
			"CRLF"
		);
	}
	jint Base64::DEFAULT()
	{
		return getStaticField<jint>(
			"android.util.Base64",
			"DEFAULT"
		);
	}
	jint Base64::NO_CLOSE()
	{
		return getStaticField<jint>(
			"android.util.Base64",
			"NO_CLOSE"
		);
	}
	jint Base64::NO_PADDING()
	{
		return getStaticField<jint>(
			"android.util.Base64",
			"NO_PADDING"
		);
	}
	jint Base64::NO_WRAP()
	{
		return getStaticField<jint>(
			"android.util.Base64",
			"NO_WRAP"
		);
	}
	jint Base64::URL_SAFE()
	{
		return getStaticField<jint>(
			"android.util.Base64",
			"URL_SAFE"
		);
	}
	
	// QAndroidJniObject forward
	Base64::Base64(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jbyteArray Base64::decode(jbyteArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.util.Base64",
			"decode",
			"([BI)[B",
			arg0,
			arg1
		).object<jbyteArray>();
	}
	jbyteArray Base64::decode(jstring arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.util.Base64",
			"decode",
			"(Ljava/lang/String;I)[B",
			arg0,
			arg1
		).object<jbyteArray>();
	}
	jbyteArray Base64::decode(jbyteArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.util.Base64",
			"decode",
			"([BIII)[B",
			arg0,
			arg1,
			arg2,
			arg3
		).object<jbyteArray>();
	}
	jbyteArray Base64::encode(jbyteArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.util.Base64",
			"encode",
			"([BI)[B",
			arg0,
			arg1
		).object<jbyteArray>();
	}
	jbyteArray Base64::encode(jbyteArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.util.Base64",
			"encode",
			"([BIII)[B",
			arg0,
			arg1,
			arg2,
			arg3
		).object<jbyteArray>();
	}
	jstring Base64::encodeToString(jbyteArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.util.Base64",
			"encodeToString",
			"([BI)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring Base64::encodeToString(jbyteArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.util.Base64",
			"encodeToString",
			"([BIII)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3
		).object<jstring>();
	}
} // namespace android::util

