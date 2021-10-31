#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::database
{
	class CharArrayBuffer : public __JniBaseClass
	{
	public:
		// Fields
		jcharArray data();
		jint sizeCopied();
		
		CharArrayBuffer(QAndroidJniObject obj);
		// Constructors
		CharArrayBuffer(jcharArray arg0);
		CharArrayBuffer(jint arg0);
		CharArrayBuffer() = default;
		
		// Methods
	};
} // namespace android::database

