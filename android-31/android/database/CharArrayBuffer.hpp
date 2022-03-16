#pragma once

#include "../../JObject.hpp"

class JCharArray;

namespace android::database
{
	class CharArrayBuffer : public JObject
	{
	public:
		// Fields
		JCharArray data();
		jint sizeCopied();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CharArrayBuffer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CharArrayBuffer(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		CharArrayBuffer(JCharArray arg0);
		CharArrayBuffer(jint arg0);
		
		// Methods
	};
} // namespace android::database

