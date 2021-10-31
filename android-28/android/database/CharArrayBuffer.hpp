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
		
		// QJniObject forward
		template<typename ...Ts> explicit CharArrayBuffer(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CharArrayBuffer(QJniObject obj);
		
		// Constructors
		CharArrayBuffer(jcharArray arg0);
		CharArrayBuffer(jint arg0);
		
		// Methods
	};
} // namespace android::database

