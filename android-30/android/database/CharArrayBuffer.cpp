#include "./CharArrayBuffer.hpp"

namespace android::database
{
	// Fields
	jcharArray CharArrayBuffer::data()
	{
		return getObjectField(
			"data",
			"[C"
		).object<jcharArray>();
	}
	jint CharArrayBuffer::sizeCopied()
	{
		return getField<jint>(
			"sizeCopied"
		);
	}
	
	// QAndroidJniObject forward
	CharArrayBuffer::CharArrayBuffer(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	CharArrayBuffer::CharArrayBuffer(jcharArray arg0)
		: JObject(
			"android.database.CharArrayBuffer",
			"([C)V",
			arg0
		) {}
	CharArrayBuffer::CharArrayBuffer(jint arg0)
		: JObject(
			"android.database.CharArrayBuffer",
			"(I)V",
			arg0
		) {}
	
	// Methods
} // namespace android::database

