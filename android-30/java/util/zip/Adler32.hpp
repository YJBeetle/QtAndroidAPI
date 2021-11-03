#pragma once

#include "../../../JObject.hpp"

namespace java::nio
{
	class ByteBuffer;
}

namespace java::util::zip
{
	class Adler32 : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Adler32(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Adler32(QAndroidJniObject obj);
		
		// Constructors
		Adler32();
		
		// Methods
		jlong getValue();
		void reset();
		void update(jint arg0);
		void update(java::nio::ByteBuffer arg0);
		void update(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::util::zip

