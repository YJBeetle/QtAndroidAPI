#include "../../JCharArray.hpp"
#include "./CharArrayBuffer.hpp"

namespace android::database
{
	// Fields
	JCharArray CharArrayBuffer::data()
	{
		return getObjectField(
			"data",
			"[C"
		);
	}
	jint CharArrayBuffer::sizeCopied()
	{
		return getField<jint>(
			"sizeCopied"
		);
	}
	
	// Constructors
	CharArrayBuffer::CharArrayBuffer(JCharArray arg0)
		: JObject(
			"android.database.CharArrayBuffer",
			"([C)V",
			arg0.object<jcharArray>()
		) {}
	CharArrayBuffer::CharArrayBuffer(jint arg0)
		: JObject(
			"android.database.CharArrayBuffer",
			"(I)V",
			arg0
		) {}
	
	// Methods
} // namespace android::database

