#pragma once

#include "../../JCharArray.hpp"
#include "./CharArrayBuffer.def.hpp"

namespace android::database
{
	// Fields
	inline JCharArray CharArrayBuffer::data()
	{
		return getObjectField(
			"data",
			"[C"
		);
	}
	inline jint CharArrayBuffer::sizeCopied()
	{
		return getField<jint>(
			"sizeCopied"
		);
	}
	
	// Constructors
	inline CharArrayBuffer::CharArrayBuffer(JCharArray arg0)
		: JObject(
			"android.database.CharArrayBuffer",
			"([C)V",
			arg0.object<jcharArray>()
		) {}
	inline CharArrayBuffer::CharArrayBuffer(jint arg0)
		: JObject(
			"android.database.CharArrayBuffer",
			"(I)V",
			arg0
		) {}
	
	// Methods
} // namespace android::database

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::database;
#endif
