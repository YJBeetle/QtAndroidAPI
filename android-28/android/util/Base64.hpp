#pragma once

#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "./Base64.def.hpp"

namespace android::util
{
	// Fields
	inline jint Base64::CRLF()
	{
		return getStaticField<jint>(
			"android.util.Base64",
			"CRLF"
		);
	}
	inline jint Base64::DEFAULT()
	{
		return getStaticField<jint>(
			"android.util.Base64",
			"DEFAULT"
		);
	}
	inline jint Base64::NO_CLOSE()
	{
		return getStaticField<jint>(
			"android.util.Base64",
			"NO_CLOSE"
		);
	}
	inline jint Base64::NO_PADDING()
	{
		return getStaticField<jint>(
			"android.util.Base64",
			"NO_PADDING"
		);
	}
	inline jint Base64::NO_WRAP()
	{
		return getStaticField<jint>(
			"android.util.Base64",
			"NO_WRAP"
		);
	}
	inline jint Base64::URL_SAFE()
	{
		return getStaticField<jint>(
			"android.util.Base64",
			"URL_SAFE"
		);
	}
	
	// Constructors
	
	// Methods
	inline JByteArray Base64::decode(JByteArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.util.Base64",
			"decode",
			"([BI)[B",
			arg0.object<jbyteArray>(),
			arg1
		);
	}
	inline JByteArray Base64::decode(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.util.Base64",
			"decode",
			"(Ljava/lang/String;I)[B",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JByteArray Base64::decode(JByteArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.util.Base64",
			"decode",
			"([BIII)[B",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline JByteArray Base64::encode(JByteArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.util.Base64",
			"encode",
			"([BI)[B",
			arg0.object<jbyteArray>(),
			arg1
		);
	}
	inline JByteArray Base64::encode(JByteArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.util.Base64",
			"encode",
			"([BIII)[B",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline JString Base64::encodeToString(JByteArray arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.util.Base64",
			"encodeToString",
			"([BI)Ljava/lang/String;",
			arg0.object<jbyteArray>(),
			arg1
		);
	}
	inline JString Base64::encodeToString(JByteArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.util.Base64",
			"encodeToString",
			"([BIII)Ljava/lang/String;",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::util;
#endif
