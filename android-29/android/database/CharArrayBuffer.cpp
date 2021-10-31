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
	
	// QJniObject forward
	CharArrayBuffer::CharArrayBuffer(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CharArrayBuffer::CharArrayBuffer(jcharArray arg0)
		: __JniBaseClass(
			"android.database.CharArrayBuffer",
			"([C)V",
			arg0
		) {}
	CharArrayBuffer::CharArrayBuffer(jint arg0)
		: __JniBaseClass(
			"android.database.CharArrayBuffer",
			"(I)V",
			arg0
		) {}
	
	// Methods
} // namespace android::database

