#include "./CharArrayBuffer.hpp"

namespace android::database
{
	// Fields
	jcharArray CharArrayBuffer::data()
	{
		return __thiz.getObjectField(
			"data",
			"[C"
		).object<jcharArray>();
	}
	jint CharArrayBuffer::sizeCopied()
	{
		return __thiz.getField<jint>(
			"sizeCopied"
		);
	}
	
	CharArrayBuffer::CharArrayBuffer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CharArrayBuffer::CharArrayBuffer(jcharArray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.CharArrayBuffer",
			"([C)V",
			arg0
		);
	}
	CharArrayBuffer::CharArrayBuffer(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.CharArrayBuffer",
			"(I)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::database

